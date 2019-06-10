using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MouseLight : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
        Vector3 m = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        m.z = transform.position.z;
        transform.position = m;
    }
}
