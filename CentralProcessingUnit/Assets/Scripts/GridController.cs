using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GridController : MonoBehaviour {

    public static GridController instance;

    private MemoryCellController[] grid;

    void Awake()
	{
		instance = this;
	}

	void Start () {
        instance = this;

        GameObject[] objects = GameObject.FindGameObjectsWithTag("GridMemoryCell");
        Array.Sort<GameObject>(objects, (GameObject a, GameObject b) =>
        {
            if (a.transform.position.y > b.transform.position.y)
            {
                return -1;
            }
            else if (a.transform.position.y < b.transform.position.y)
            {
                return 1;
            }
            else
            { 
                if (a.transform.position.x < b.transform.position.x)
                {
                    return -1;
                } 
                else
                {
                    return 1;
                }
            }
        });

        grid = new MemoryCellController[80];
        for (int i = 0; i < objects.Length; i++)
        {
            grid[i] = objects[i].GetComponent<MemoryCellController>();
        }
    }
	 
    public MemoryCellController[] GetCells(int address, int number)
    {
        MemoryCellController[] lst = new MemoryCellController[number];
        MemoryCellController cell = grid[address];
        for (int i = 0; i < number; i++)
        {
            lst[i] = cell;
            cell = cell.right.GetComponent<MemoryCellController>();
        }
        return lst;
    }

    public int GetValue(int address, int number)
    {
        int[] values = new int[number];
        MemoryCellController cell = grid[address];

        for (int i = 0; i < number; i++) {
            values[i] = cell.GetValue();
            cell = cell.right.GetComponent<MemoryCellController>();
        }

        int total = 0;
        int power = (int)Mathf.Pow(16, number - 1);

        for (int i = 0; i < number; i++)
        {
            total += values[i] * power;
            power >>= 4;
        }
        return total;
    }

    public void Zeroize()
    {            
        foreach (MemoryCellController cell in grid)
        {
            cell.SetValue(0);
        }
    }

    void Update () {
		
	}
}
