using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GridController : MonoBehaviour {

    public static GridController instance;

    private MemoryCellController[] grid;

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
	 
    public MemoryCellController GetCell(int address)
    {
        return grid[address];
    }

    public int GetValue(int address)
    {
        return grid[address].GetValue();
    }

	void Update () {
		
	}
}
