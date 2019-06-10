using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum GameType
{
    ARRIVAL,
    CPU,
    ALU_ENTER,
    ALU_EXIT,
    Disk_ENTER,
    Disk_EXIT,
    ALU,
    DISK,
    DONE
};

public enum WireType
{
    Arrival_CPU
};

public class GameController : MonoBehaviour {
    public static GameController instance;

    private List<ITickEvent> listeners;
    //private float timestep;
    private float timeInterval;

    private void Awake()
    {
        instance = this;
        listeners = new List<ITickEvent>();
    }

    void Start ()
    {

    }

    public void ListenForTick(GameObject obj)
    {
        listeners.Add(obj.GetComponent<ITickEvent>());
    }

    public float GetTimeStep()
    {
        return 3f;
    }

    public float GetProcessTravelTime()
    {
        return 2f;
    }

    public void Broadcast()
    {
        foreach (ITickEvent listener in listeners)
        {
            listener.Tick(); 
        }
    }

    void Update () 
    {
        if (timeInterval <= 0f)
        {
            timeInterval = GetTimeStep();
            Broadcast();
        }
        timeInterval -= Time.deltaTime;
    }
}
