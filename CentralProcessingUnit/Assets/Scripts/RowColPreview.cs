using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RowColPreview : MonoBehaviour, ICellListener {

    public MemoryCellController[] cells;
    public MemoryCellController[] row;
    public MemoryCellController[] col;
    
    private TextMesh text;
    private string[] hex;

    void Start()
    {
        hex = new string[] { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "a", "b", "c", "d", "e", "f" };
        text = GetComponent<TextMesh>();

        foreach (MemoryCellController cell in cells)
        {
            cell.AddListener(this);
        }

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

        int value = GameController.instance.CellsToInteger(cells);

        string first = hex[(0xF0 & value) >> 4].ToUpper();
        string second = hex[(0x0F & value)].ToUpper();

        text.text = "0x" + first + second + " (" + r + ", " + c + ")";
    }
    
	void Update () {
		
	}
}
