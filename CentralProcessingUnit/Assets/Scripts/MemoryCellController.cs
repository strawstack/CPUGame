using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MemoryCellController : MonoBehaviour {

    public GameObject left;
    public GameObject right;

    private bool selected = false;
    private List<ICellListener> listeners;

    private void Awake()
    {
        listeners = new List<ICellListener>();
    }

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

    public void SetValue(int value)
    {
        GetComponent<MemoryCellTextController>().SetValue(value);
    }

    public void AddListener(ICellListener listener)
    {
        listeners.Add(listener);
    }

    public void OnChange()
    {
        foreach (ICellListener listener in listeners)
        {
            listener.OnChange();
        }
    }

    void Update()
    {

    }
}
