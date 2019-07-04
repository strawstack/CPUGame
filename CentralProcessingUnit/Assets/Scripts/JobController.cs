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
    DARK_BLUE
}

public class JobController : MonoBehaviour {

    public static JobController instance;

    public Material normal;
    public Material orange;     // multiple cells single value
    public Material purple;     // scattered multiple values
    public Material pink;       // scattered single value
    public Material yellow;     // multiple cells incrementing value
	public Material light_blue; // vertical list
	public Material dark_blue;  // single value

	private delegate bool Condition(MemoryCellController cell);
    private Dictionary<ColorTypes, List<MemoryCellController>> coloredCells;
    private Dictionary<ColorTypes, Material> materialLookup;
    private ColorTypes[] colorTypesIter;

    void Start () {
        instance = this;
        colorTypesIter = new ColorTypes[] { ColorTypes.ORANGE, ColorTypes.PURPLE, ColorTypes.PINK, ColorTypes.YELLOW, ColorTypes.LIGHT_BLUE, ColorTypes.DARK_BLUE };
        coloredCells = new Dictionary<ColorTypes, List<MemoryCellController>>();
        foreach(ColorTypes type in colorTypesIter)
            coloredCells.Add(type, new List<MemoryCellController>());

        materialLookup = new Dictionary<ColorTypes, Material>();
        materialLookup.Add(ColorTypes.ORANGE, orange);
        materialLookup.Add(ColorTypes.PURPLE, purple);
        materialLookup.Add(ColorTypes.PINK, pink);
        materialLookup.Add(ColorTypes.YELLOW, yellow);
        materialLookup.Add(ColorTypes.LIGHT_BLUE, light_blue);
        materialLookup.Add(ColorTypes.DARK_BLUE, dark_blue);
    }

    public void MakeColor(int row, int col, ColorTypes type)
    {
        int addr = row * 8 + col;
        MemoryCellController cell = GridController.instance.GetCells(addr, 1)[0];
        MakeColor(cell, type);
	}

    private void MakeColor(MemoryCellController cell, ColorTypes type)
    {
        // track colored cell
        coloredCells[type].Add(cell);
        cell.transform.Find("Normal").GetComponent<SpriteRenderer>().material = materialLookup[type];
        cell.isColored = true;
    }

    public void SetValuePreview(int row, int col, int value)
    {
        if (value < 0 || value > 15 )
            throw new System.ArgumentException("Value must be between 0 and 15", "value");

        int addr = row * 8 + col;
        MemoryCellController cell = GridController.instance.GetCells(addr, 1)[0];

        SetValuePreview(cell, value);
    }

    private void SetValuePreview(MemoryCellController cell, int value)
    {
        if (value < 0 || value > 15)
            throw new System.ArgumentException("Value must be between 0 and 15", "value");

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

    private void JobSuccess(ColorTypes type, int multiplier)
    {
        foreach (MemoryCellController cell in coloredCells[type])
        {
            cell.transform.Find("Normal").GetComponent<SpriteRenderer>().material = normal;
			cell.isColored = false;
			cell.Flash("GreenFlash");            
        }
        MoneyController.instance.OnChangeRequest(TransactionType.COMPLETE, coloredCells[type].Count * multiplier);
        coloredCells[type].Clear();
    }

    private bool All(MemoryCellController[] grid, int start, int end, Condition condition)
	{
		// return true if all conditions are true, otherwise false
		for (int i = start; i < end; i++)
		{
            if (!condition(grid[i]))
			{
				return false;
			}
		}
		return true;
	}

    private MemoryCellController[] SubList(MemoryCellController[] grid, int start, int end)
	{
		int size = end - start;
		MemoryCellController[] ans = new MemoryCellController[size];
        for (int i = 0; i < size; i++)
		{
			ans[i] = grid[start + i];
		}
		return ans;
	}

    private List<MemoryCellController[]> OrangeGetPossible()
	{
		MemoryCellController[] grid = GridController.instance.GetGrid();

		List<MemoryCellController[]> ans = new List<MemoryCellController[]>();
        for (int i = 3 * 8; i < grid.Length - 5; i++)
		{
            for (int j = 2; j <= 5; j++)
			{
				bool value = All(grid, i, i + j + 1, (cell) => !cell.isColored);
				if (value)
					ans.Add(SubList(grid, i, i + j));
			}
		}
		return ans;
	}

    private void PlaceScattered(bool singleValue)
    {
        MemoryCellController[] grid = GridController.instance.GetGrid();

        int preValue = Random.Range(0, 15);
        int number   = Random.Range(1, 3);
        for (int i = 0; i < number; i++)
        {
            MemoryCellController cell = grid[Random.Range(16, grid.Length - 1)];
            if (!cell.isColored)
            {
                MakeColor(cell, singleValue ? ColorTypes.PURPLE : ColorTypes.PINK);
                SetValuePreview(cell, preValue);

                if (!singleValue)
                    preValue = Random.Range(0, 15);
            }
        }
    }

    public void PlaceColors()
    {
		foreach (KeyValuePair<ColorTypes, List<MemoryCellController>> pair in coloredCells)
		{
			ColorTypes type = pair.Key;
			List<MemoryCellController> lst = pair.Value;
            if (lst.Count == 0)
			{
                switch(type)
				{
					case ColorTypes.ORANGE:
						List<MemoryCellController[]> possible = OrangeGetPossible();
                        int choice = Random.Range(0, possible.Count - 1);
                        MemoryCellController[] group = possible[choice];

                        int value = Random.Range(0, 15);
                        foreach(MemoryCellController cell in group)
                        {
                            MakeColor(cell, ColorTypes.ORANGE);
                            SetValuePreview(cell, value);
                        }
                        break;
					case ColorTypes.PURPLE:
                        PlaceScattered(true);
						break;
					case ColorTypes.PINK:
                        PlaceScattered(false);
                        break;
					case ColorTypes.YELLOW:
						break;
					case ColorTypes.LIGHT_BLUE:
						break;
				}
			}
		}

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
            int multiplier = 1;
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
                JobSuccess(type, multiplier);
                multiplier += 1;
            }
        }
    }

    public void EraseColors()
    {
        foreach (ColorTypes type in colorTypesIter)
        {
            foreach (MemoryCellController cell in coloredCells[type])
            {
                cell.transform.Find("Normal").GetComponent<SpriteRenderer>().material = normal;
                cell.isColored = false;
                cell.SetPreviewNumberActivation(false);
            }
            coloredCells[type].Clear();
        }                  
    }

    void Update () {
		
	}
}
