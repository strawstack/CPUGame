using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MouseColliderController : MonoBehaviour {
	
	void Start () 
    {

	}

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.tag == "MemoryCell")
        {
            collision.gameObject.GetComponent<ISelectable>().OnHoverOver();
            GameController.instance.OnHoverChange(collision.gameObject);
        }
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.tag == "MemoryCell")
        {
            collision.gameObject.GetComponent<ISelectable>().OnHoverOut();
            GameController.instance.OnHoverChange(null);
        }
    }

    void Update () {
        Vector3 m = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        m.z = 0;
        transform.position = m;
	}
}
