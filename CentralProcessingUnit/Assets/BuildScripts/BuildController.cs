using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BuildController : MonoBehaviour {

    public GameObject memoryCell;

    private float columnGap = 1.2f;
    private float rowGap    = -1.2f;
    private List<List<GameObject>> grid;

	void Start () {

        GameObject prev = null;
        grid = new List<List<GameObject>>();

        for (int i = 0; i < 4; i++)
        {
            List<GameObject> row = new List<GameObject>();
            for (int j = 0; j < 8; j++)
            {
                GameObject cell = Instantiate(memoryCell);
                cell.transform.parent = transform;

                cell.transform.position = new Vector3(
                    columnGap * j,
                    rowGap * i,
                    transform.position.z);

                // Link
                if (prev != null)
                {
                    cell.GetComponent<MemoryCellController>().left = prev;
                }

                prev = cell;

                row.Add(cell);
            }
            grid.Add(row);
        }

        GameObject last = prev;

        GameObject cur = prev;
        while (cur.GetComponent<MemoryCellController>().left != null)
        {
            cur.GetComponent<MemoryCellController>().left.GetComponent<MemoryCellController>().right = cur;
            cur = cur.GetComponent<MemoryCellController>().left;
        }

        cur.GetComponent<MemoryCellController>().left = last;
        last.GetComponent<MemoryCellController>().right = cur;
    }
}
