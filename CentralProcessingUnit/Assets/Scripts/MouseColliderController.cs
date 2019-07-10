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
            if (!GameController.instance.isRunning && !collision.gameObject.GetComponent<MemoryCellController>().IsLocked())
            {
                collision.gameObject.GetComponent<ISelectable>().OnHoverOver();
                GameController.instance.OnHoverChange(collision.gameObject);
            }
            else if(collision.gameObject.GetComponent<MemoryCellController>().IsLocked())
            {
                HoverController.instance.SetValue(collision.gameObject.GetComponent<MemoryCellController>().gridNumber);
            }
        }
        if (collision.tag == "Button")
        {
            collision.gameObject.transform.parent.gameObject.GetComponent<IButton>().SetBackgroundActive(true);            
        }
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.tag == "MemoryCell" || collision.tag == "GridMemoryCell")
        {
            if (!GameController.instance.isRunning && !collision.gameObject.GetComponent<MemoryCellController>().IsLocked())
            {
                collision.gameObject.GetComponent<ISelectable>().OnHoverOut();
                GameController.instance.OnHoverChange(null);
            }            
        }
        if (collision.tag == "Button")
        {
            collision.gameObject.transform.parent.gameObject.GetComponent<IButton>().SetBackgroundActive(false);
        }
    }

    void Update () {
        Vector3 m = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        m.z = 0;
        transform.position = m;
	}
}
