using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProcessController : MonoBehaviour {

    public GameObject ArrivalTop;
    public GameObject ArrivalMid;
    public GameObject ArrivalBot;

    private GameController gc = GameController.instance;
    private float timestep;
    private float timeInterval;

    void Start () 
    {
        timestep = gc.GetTimeStep();
        timeInterval = timestep;

    }
		
	void Update () 
    {
		
	}
}
