using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MouseColliderController : MonoBehaviour {

    private CircleCollider2D col;
    	
	void Start () {
        col = GetComponent<CircleCollider2D>();
	}

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.tag == "MemoryCell")
        {
            collision.gameObject.GetComponent<ISelectable>().OnHoverOver();
        }
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.tag == "MemoryCell")
        {
            collision.gameObject.GetComponent<ISelectable>().OnHoverOut();
        }
    }

    void Update () {
        Vector3 m = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        m.z = 0;
        transform.position = m;
	}
}
