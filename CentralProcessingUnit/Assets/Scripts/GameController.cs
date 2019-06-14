using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameController : MonoBehaviour {

    public static GameController instance;

    private GameObject currentSelection; // The currently selected component
    private GameObject currentHover;     // The component that is being hovered

    void Awake () {
        instance = this;
	}

    public void OnSelectionChange(GameObject selection)
    {
        if (currentSelection != null) currentSelection.GetComponent<ISelectable>().OnUnSelect();
        currentSelection = selection;
    }

    public void OnHoverChange(GameObject hover)
    {
        currentHover = hover;
    }

    public void OnClick()
    {
        // There is a current hover
        if (currentHover != null)
        {
            // The current hover is not already selected
            if (!currentHover.GetComponent<MemoryCellController>().GetSelected())
            {
                currentHover.GetComponent<ISelectable>().OnSelect();
            }
        }
    }

    public void OnNavigation(string value)
    {
        if (currentSelection != null)
        {
            if (value == "right")
            {
                currentSelection.GetComponent<MemoryCellController>().right.GetComponent<ISelectable>().OnSelect();
            }
            else // value == "left"
            {
                currentSelection.GetComponent<MemoryCellController>().left.GetComponent<ISelectable>().OnSelect();
            }
        }
    }

    public void OnKeyPress(string value)
    {
        if (currentSelection != null)
        {
            currentSelection.GetComponent<MemoryCellTextController>().SetText(value); 
        }
    }

    public void OnModifyValue(int value)
    {
        if (currentSelection != null)
        {
            currentSelection.GetComponent<MemoryCellTextController>().OnIncrementValue(value);
        }
    }

    void Update () {
		
	}
}
