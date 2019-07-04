using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MouseColliderController : MonoBehaviour {
	
	void Start () 
    {

	}

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.tag == "MemoryCell" || collision.tag == "GridMemoryCell")
        {
            collision.gameObject.GetComponent<ISelectable>().OnHoverOver();
            GameController.instance.OnHoverChange(collision.gameObject);
        }
        if (collision.tag == "Button")
        {
            StartButtonController.instance.SetBackgroundActive(true);
        }
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.tag == "MemoryCell" || collision.tag == "GridMemoryCell")
        {
            collision.gameObject.GetComponent<ISelectable>().OnHoverOut();
            GameController.instance.OnHoverChange(null);
        }
        if (collision.tag == "Button")
        {
            StartButtonController.instance.SetBackgroundActive(false);
        }
    }

    void Update () {
        Vector3 m = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        m.z = 0;
        transform.position = m;
	}
}
