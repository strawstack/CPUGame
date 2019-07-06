using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HelpController : MonoBehaviour {

    public static HelpController instance;

    public bool isOpen = false;

    void Start () {
        instance = this;
        gameObject.SetActive(false);
    }
		
	void Update () {
		
	}
}
