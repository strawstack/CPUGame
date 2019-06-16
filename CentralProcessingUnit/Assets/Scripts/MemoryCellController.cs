using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MemoryCellController : MonoBehaviour {

    public GameObject left;
    public GameObject right;

    private bool selected = false;

    void Start()
    {

    }

    public bool GetSelected()
    {
        return selected;
    }

    public void SetSelected(bool value)
    {
        selected = value;
    }

    public int GetValue()
    {
        return GetComponent<MemoryCellTextController>().GetValue();
    }

    void Update()
    {

    }
}
