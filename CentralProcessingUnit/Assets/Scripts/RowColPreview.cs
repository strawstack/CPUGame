using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RowColPreview : MonoBehaviour, ICellListener {

    public MemoryCellController[] row;
    public MemoryCellController[] col;

    private TextMesh text;

    void Start()
    {
        text = GetComponent<TextMesh>();

        foreach (MemoryCellController cell in row)
        {
            cell.AddListener(this);
        }

        foreach (MemoryCellController cell in col)
        {
            cell.AddListener(this);
        }
    }

    public void OnChange()
    {
        string r = GameController.instance.CellsToInteger(row).ToString();
        string c = GameController.instance.CellsToInteger(col).ToString();
        text.text = "(" + r + ", " + c + ")";
    }
    
	void Update () {
		
	}
}
