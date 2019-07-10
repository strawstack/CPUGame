using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FlashController : MonoBehaviour {
	void Start () {
        Destroy(this.gameObject, 0.3f);
	}
}
