using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public delegate void OnArrivalCallBack();

public class ProcessController : MonoBehaviour {
    // Generate processes on a given timestep when there's a free spot
    // when a process arrives at a CPU a hand-off takes place
    // between the CPU and the process controller
    public static ProcessController instance;

    public GameObject ArrivalTop;
    public GameObject ArrivalMid;
    public GameObject ArrivalBot;

    private GameController gc = GameController.instance;
    private float timestep;
    private float timeInterval;

    // Track the next CPU that should be visited
    private int nextCPU = 0;

    // Process that are travelling to an arrival box
    private bool[] traveling; // top, mid, and bot

    void Start () 
    {
        timestep = gc.GetTimeStep();
        timeInterval = timestep;
        traveling = new bool[] { false, false, false };
        instance = this;
    }
	
    private void Create()
    {   
        for (int i = 0; i < traveling.Length; i++)
        {
            int lane = (nextCPU + i) % traveling.Length;
            if (!traveling[lane] && ArrivalController.instance.GetAvailability(lane))
            {
                GameObject p = ProcessFactory.instance.MakeProcess();

                // Set lane to active
                traveling[lane] = true;

                Vector3 dest = ArrivalController.instance.GetLocation(lane);

                // Set process start position
                p.transform.position = new Vector3(
                    transform.position.x,
                    dest.y,
                    transform.position.z);

                // Begin process movement and register callbacks on completion
                p.GetComponent<ProcessObject>().SetDestination(
                    p.transform.position,
                    dest,
                    () =>
                    {
                        // Arrival box is occupied
                        ArrivalController.instance.ArrivalNotification(p, lane);

                        // Lane is free for travel
                        traveling[lane] = false; 
                    }
                    );
            }
        }

        nextCPU = (nextCPU + 1) % traveling.Length;
    }

	void Update () 
    {
		if (timeInterval <= 0f)
        {
            Create();
            timeInterval = gc.GetTimeStep();
        }
        timeInterval -= Time.deltaTime;
    }
}
