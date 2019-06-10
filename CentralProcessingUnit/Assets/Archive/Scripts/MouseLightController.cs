using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MouseLightController : MonoBehaviour {
	
	void Start () {
		
	}
		
	void Update () {

        // This light will follow the mouse position
        Vector3 mouse = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        mouse.z = transform.position.z;
        transform.position = mouse;

    }
}
