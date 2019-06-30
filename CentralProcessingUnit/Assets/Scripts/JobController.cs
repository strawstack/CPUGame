using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum ColorTypes
{
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

    public Material orange;

    // public Animation orangePulse;

    void Start () {
        instance = this;        
    }

    public void MakeColor(int row, int col, ColorTypes type)
    {
        int addr = row * 8 + col;
        MemoryCellController cell = GridController.instance.GetCells(addr, 1)[0];
        
        switch(type)
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

	void Update () {
		
	}
}
