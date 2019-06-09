using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameController : MonoBehaviour {
    public static GameController instance;

    private void Awake()
    {
        instance = this;
    }

    void Start ()
    {

    }

    public float GetTimeStep()
    {
        return 3f;
    }

    public float GetProcessTravelTime()
    {
        return 2f;
    }

    void Update () 
    {
		
	}
}
