using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ArrivalController : MonoBehaviour {

    public static ArrivalController instance;
    public GameObject top;
    public GameObject mid;
    public GameObject bot;

    private GameObject[] boxes;
    private bool[] isFree;

    void Start () {
        isFree = new bool[] { true, true, true };
        instance = this;
        boxes = new GameObject[] { null, null, null };
    }
	
    public bool GetAvailability(int index)
    {
        if (index >= isFree.Length) return false;
        return isFree[index];
    }

    public Vector3 GetLocation(int index)
    {
        if (index == 0)
        {
            return top.transform.position;
        } 
        else if (index == 1)
        {
            return mid.transform.position;
        }
        else // index == 2
        {
            return bot.transform.position;
        }
    }
	
    public void ArrivalNotification(GameObject p, int index)
    {
        isFree[index] = false;
        boxes[index] = p;
    }

    void Update () {

    }
}
