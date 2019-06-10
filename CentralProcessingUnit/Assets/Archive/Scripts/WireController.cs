using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WireController : MonoBehaviour {

    public GameObject wire;

    private LineRenderer activeWire;
    private bool mouseDown = false;
    private GameObject start;
    private float wireHeight = 1f;

    void Start () {
        activeWire = GetComponent<LineRenderer>();

    }
	
    private void PlaceWire(LineRenderer w, Vector3 dest)
    {
        w.SetPosition(0, new Vector3(
            start.transform.position.x,
            start.transform.position.y,
            wireHeight));
        w.SetPosition(1, dest);
    }

    private void ClearActiveWire()
    {
        activeWire.SetPosition(0, Vector3.zero);
        activeWire.SetPosition(1, Vector3.zero);
    }

	void Update () {

        Vector3 mouse = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        mouse.z = wireHeight;

        // If mouse currently down and there is a start location,
        // draw wire to current location
        if (mouseDown && Input.GetMouseButton(0) && start != null)
        {
            PlaceWire(activeWire, mouse);
        }
        // If mouse is currently up and was down last frame,
        // check for wire dest and place wire if possible
        else if (!Input.GetMouseButton(0) && mouseDown)
        {
            mouseDown = false;

            // Cast a ray straight down
            RaycastHit2D hit = Physics2D.Raycast(mouse, -Vector2.up);

            // If it hits something...
            if (hit.collider != null)
            {
                if (hit.collider.tag == "Target")
                {
                    GameObject dest = hit.collider.gameObject;
                    if (dest != start)
                    {
                        // Create wire
                        GameObject w = Instantiate(wire);

                        // Assign parent
                        w.transform.parent = transform;

                        // Get wire object
                        WireObject wobj = w.GetComponent<WireObject>();

                        // Set up wire object with type info, start, and dest
                        IWireTarget startWire = start.GetComponent<IWireTarget>();
                        IWireTarget destWire = dest.GetComponent<IWireTarget>();
                        wobj.SetWire(startWire, destWire);

                        // Notifiy recetving object that the wire is in place
                        bool res1 = startWire.WireAddedEvent(wobj);
                        bool res2 = destWire.WireAddedEvent(wobj);

                        // Render wire visually in game
                        LineRenderer wline = w.GetComponent<LineRenderer>();
                        PlaceWire(wline, new Vector3(
                            dest.transform.position.x,
                            dest.transform.position.y,
                            wireHeight));                            
                    }
                }
            }
            start = null;
            ClearActiveWire();
        }
        // If mouse down but was up last frame, check for start location
        else if (Input.GetMouseButton(0) && !mouseDown)
        {
            mouseDown = true;

            // Cast a ray straight down
            RaycastHit2D hit = Physics2D.Raycast(mouse, -Vector2.up);

            // If it hits something...
            if (hit.collider != null)
            {           
                if (hit.collider.tag == "Target")
                {
                    start = hit.collider.gameObject;
                }
            }
        }
    }
}
