using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum ColorTypes
{
    NORMAL,
    ORANGE,
    PURPLE,
    PINK,
    YELLOW,
    LIGHT_BLUE,
    DARK_BLUE,
    BROWN
}

public class JobController : MonoBehaviour {

    public static JobController instance;

    public Material normal;
    public Material orange;

    private Dictionary<ColorTypes, List<MemoryCellController>> coloredCells;
    private ColorTypes[] colorTypesIter;

    void Start () {
        instance = this;
        colorTypesIter = new ColorTypes[] { ColorTypes.ORANGE, ColorTypes.PURPLE, ColorTypes.PINK, ColorTypes.YELLOW, ColorTypes.LIGHT_BLUE, ColorTypes.DARK_BLUE, ColorTypes.BROWN };
        coloredCells = new Dictionary<ColorTypes, List<MemoryCellController>>();
        foreach(ColorTypes type in colorTypesIter)
            coloredCells.Add(type, new List<MemoryCellController>());
    }

    public void MakeColor(int row, int col, ColorTypes type)
    {
        int addr = row * 8 + col;
        MemoryCellController cell = GridController.instance.GetCells(addr, 1)[0];

        // track colored cell
        coloredCells[type].Add(cell);

        switch (type)
		{
            case ColorTypes.ORANGE:
                cell.transform.Find("Normal").GetComponent<SpriteRenderer>().material = orange;
				break;            
		}        
    }

    public void SetValuePreview(int row, int col, int value)
    {
        if (value < 0 || value > 15 )
            throw new System.ArgumentException("Value must be between 0 and 15", "value");

        int addr = row * 8 + col;
        MemoryCellController cell = GridController.instance.GetCells(addr, 1)[0];

        cell.SetPreviewNumber(value);
        cell.SetPreviewNumberActivation(true);
    }

    private void JobFails(ColorTypes type)
    {
        foreach(MemoryCellController cell in coloredCells[type])
        {
            cell.SetValue(0);
            cell.Flash("RedFlash");
        }
        MoneyController.instance.OnChangeRequest(TransactionType.FAIL, coloredCells[type].Count);
    }

    private void JobSuccess(ColorTypes type)
    {
        foreach (MemoryCellController cell in coloredCells[type])
        {
            cell.transform.Find("Normal").GetComponent<SpriteRenderer>().material = normal;
            cell.Flash("GreenFlash");            
        }
        MoneyController.instance.OnChangeRequest(TransactionType.COMPLETE, coloredCells[type].Count);
        coloredCells[type].Clear();
    }

    public void CheckColoredCellStatus()
    {
        // Erase and return success if completed
        // Leave and deduct if failed
        foreach (ColorTypes type in colorTypesIter)
        {
            int total = coloredCells[type].Count; // number of cells in job
            if (total == 0) continue;
            int touched  = 0; // number of non zero cells
            int complete = 0; // number of completed cells
            foreach (MemoryCellController cell in coloredCells[type])
            {
                if (cell.GetValue() != 0)
                    touched += 1;

                if (cell.GetPreviewNumber() == cell.GetValue())
                    complete += 1;
            }

            // touched and complete = 0 then leave it
            // touched != 0 and complete < total = fail and leave
            // complete = total then success and remove
            if (touched != 0 && complete < total)
            {
                JobFails(type);
            }
            else if (complete == total)
            {
                JobSuccess(type);
            }
        }
    }

    void Update () {
		
	}
}
