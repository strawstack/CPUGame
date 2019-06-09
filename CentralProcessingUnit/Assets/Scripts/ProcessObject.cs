using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProcessObject : MonoBehaviour {

    private float travelTime;
    private bool moving = false;

    private float startTime;
    private Vector3 start;
    private Vector3 dest;
    private OnArrivalCallBack callback;

    private float proximity = 0.05f;

    void Start () 
    {
        travelTime = GameController.instance.GetProcessTravelTime();
    }
	
	public void SetDestination(Vector3 start, Vector3 dest, OnArrivalCallBack callback)
    {
        startTime = Time.time;
        this.start = start;
        this.dest = dest;
        this.callback = callback;
        moving = true;
    }

    private Vector3 Flat(Vector3 v)
    {
        return new Vector3(v.x, v.y, 0f);
    }

    private bool MoveComplete()
    {
        return (Flat(transform.position) - Flat(dest)).magnitude <= proximity;
    }

    void Update () {
		if (moving)
        {
            if (MoveComplete())
            {
                callback();
                moving = false;
            }
            float t = (Time.time - startTime) / travelTime;
            transform.position = Vector3.Lerp(start, dest, t);
        }
	}
}
