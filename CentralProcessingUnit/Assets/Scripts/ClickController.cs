using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ClickController : MonoBehaviour {
	
	void Start () 
    {
		
	}
		
	void Update () 
    {		
        if (Input.GetMouseButtonDown(0))
        {
            GameController.instance.OnClick();
        }
	}
}
