using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SelectController : MonoBehaviour, ISelectable {

    public GameObject normal;
    public GameObject hover;
    public GameObject selected;

    private MemoryCellController ctrl;

    public void OnHoverOut()
    {
        if (!ctrl.GetSelected())
        {
            Clear();
            normal.SetActive(true);
        }
    }

    public void OnHoverOver()
    {
        if (!ctrl.GetSelected())
        {
            Clear();
            hover.SetActive(true);
        }
    }

    public void OnSelect()
    {
        ctrl.SetSelected(true);
        Clear();
        selected.SetActive(true);
        GameController.instance.OnSelectionChange(gameObject);
    }

    public void OnUnSelect()
    {
        ctrl.SetSelected(false);
        Clear();
        normal.SetActive(true);
    }

    private void Clear()
    {
        normal.SetActive(false);
        selected.SetActive(false);
        hover.SetActive(false);
    }

    void Start()
    {
        ctrl = gameObject.GetComponent<MemoryCellController>();
    }

    void Update()
    {

    }
}
