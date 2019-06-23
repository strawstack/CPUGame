using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InstructionPreview : MonoBehaviour, ICellListener {

    public MemoryCellController[] cells;

    private TextMesh text;
    private Dictionary<int, string> instcLookup;

    void Start () {

        text = GetComponent<TextMesh>();

        foreach (MemoryCellController cell in cells)
        {
            cell.AddListener(this);
        }

        instcLookup = new Dictionary<int, string>();
        instcLookup.Add(0, "Add");
        instcLookup.Add(1, "Sub");
        instcLookup.Add(2, "Mult");

        instcLookup.Add(3, "Beq");
        instcLookup.Add(4, "Blt");
        instcLookup.Add(5, "Bgt");

        instcLookup.Add(6, "NDef");
        instcLookup.Add(7, "NDef");

        instcLookup.Add(8, "dAdd");
        instcLookup.Add(9, "dSub");
        instcLookup.Add(10, "dMult");

        instcLookup.Add(11, "dBeq");

        instcLookup.Add(12, "StaA");
        instcLookup.Add(13, "LoadA");
        instcLookup.Add(14, "LoadB");

        instcLookup.Add(15, "Halt");
    }

    public void OnChange()
    {
        int value = GameController.instance.CellsToInteger(cells);
        text.text = instcLookup[value];
    }

    void Update () {
		
	}
}
