using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MemoryCellController : MonoBehaviour, ISelectable {

    public GameObject normal;
    public GameObject hover;
    public GameObject selected;

    private bool isSelected = false;

    public void OnHoverOut()
    {
        if (!isSelected)
        {
            Clear();
            normal.SetActive(true);
        }
    }

    public void OnHoverOver()
    {
        if (!isSelected)
        {
            Clear();
            hover.SetActive(true);
        }
    }

    public void OnSelect()
    {
        isSelected = true;
        Clear();
        selected.SetActive(true);
    }

    public void OnUnSelect()
    {
        isSelected = false;
        Clear();
        hover.SetActive(true);
    }

    private void Clear()
    {
        normal.SetActive(false);
        selected.SetActive(false);
        hover.SetActive(false);
    }

    void Start () {
		
	}
		
	void Update () {
		
	}
}
