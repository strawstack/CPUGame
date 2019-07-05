using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MemoryCellController : MonoBehaviour {

    public GameObject left;
    public GameObject right;
    public bool isColored = false;    

    private bool selected = false;
    private List<ICellListener> listeners;
    private Animation clip;
	private int previewNumber;
    private string[] keys;

    private void Awake()
    {
        listeners = new List<ICellListener>();
        clip = GetComponent<Animation>();               
    }

    void Start()
    {
        keys = new string[] { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "a", "b", "c", "d", "e", "f" };
    }

    public bool IsLocked()
    {
        return isColored;
    }

    public void Flash(string animationName)
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
        if (GameController.instance.isRunning && GameController.instance.IsStarted())
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

    public void SetPreviewNumberActivation(bool value)
    {
        gameObject.transform.Find("Preview").gameObject.SetActive(value);
    }

    public void SetPreviewNumber(int number)
	{
        previewNumber = number;
        gameObject.transform.Find("Preview").GetComponent<TextMesh>().text = keys[previewNumber].ToUpper();
	}

	public int GetPreviewNumber()
	{
        return previewNumber;
    }

	void Update()
    {

    }
}
