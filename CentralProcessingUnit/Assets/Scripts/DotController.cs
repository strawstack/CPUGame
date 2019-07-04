using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DotController : MonoBehaviour, ICellListener {

    public GameObject dot;
    public MemoryCellController[] cells;

    private float offset = 0.25f;

    void Start()
    {
        foreach (MemoryCellController cell in cells)
        {
            cell.AddListener(this);
        }        
    }

    public void OnChange()
    {        
        int addr = GameController.instance.CellsToInteger(cells);
        if (addr < 80)
        {
            MemoryCellController cell = GridController.instance.GetCells(addr, 1)[0];
            Vector3 p = cell.gameObject.transform.position;
            dot.transform.position = new Vector3(
                p.x - offset,
                p.y - offset,
                p.z);
        }
    }

    void Update () {
		
	}
}
