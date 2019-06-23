using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NumericalPreview : MonoBehaviour, ICellListener
{

    public MemoryCellController[] cells;

    private TextMesh text;

    private string[] hex;

    void Start () {
        text = GetComponent<TextMesh>();
        hex = new string[] { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "a", "b", "c", "d", "e", "f" };

        foreach (MemoryCellController cell in cells)
        {
            cell.AddListener(this);
        }
	}

    public void OnChange()
    {       
        int value = GameController.instance.CellsToInteger(cells);

        string first  = hex[(0xF0 & value) >> 4].ToUpper();
        string second = hex[(0x0F & value)].ToUpper();

        if (value > 0x7F) // flip from 2's Compliment
        {
            value ^= 0xFF; // flip the eight bits
            value += 1;    // add one
            value *= -1;   // add negative sign
        }

        text.text = "0x" + first + second + " (" + value.ToString() + ")";           
    }

    void Update () {
		
	}
}
