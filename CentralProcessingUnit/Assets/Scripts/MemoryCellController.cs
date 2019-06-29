using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MemoryCellController : MonoBehaviour {

    public GameObject left;
    public GameObject right;

    private bool selected = false;
    private List<ICellListener> listeners;
    private Animation clip;

    private void Awake()
    {
        listeners = new List<ICellListener>();
        clip = GetComponent<Animation>();               
    }

    void Start()
    {
        
    }

    private void Flash(string animationName)
    {        
        if (clip == null) return;

        if (clip.isPlaying)
        {
            clip.Stop();
        }
        clip.Play(animationName);

        if (animationName == "RedFlash")
        {
            MoneyController.instance.OnChangeRequest(TransactionType.READ, 1);
        }
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
        Flash("RedFlash");        
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
