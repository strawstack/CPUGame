using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BuildController : MonoBehaviour {

    public GameObject memoryCell;
    public GameObject previewText;
    public MemoryCellController firstCell;

    private float columnGap = 1.2f;
    private float rowGap    = -1.2f;
    private List<List<GameObject>> grid;

    private float xPreviewOffset = 0.29f;
    private float yPreviewOffset = 0.251f;
    private GameObject[] memoryCells;

    void Start () {        

    }

    void Update()
    {
        if (Input.GetKeyDown("m"))
        {            
            NumberGridCells();
        }    
    }

    private void NumberGridCells()
    {
        int number = 80;
        int gridNumber = 0;

        MemoryCellController cur = firstCell;

        while (number > 0)
        {
            cur.gridNumber = gridNumber;
            number -= 1;
            gridNumber += 1;
            cur = cur.right.GetComponent<MemoryCellController>();
        }
    }

    private void PlacePreviewText()
    {
        memoryCells = GameObject.FindGameObjectsWithTag("GridMemoryCell");

        foreach(GameObject obj in memoryCells)
        {
            GameObject t = obj.transform.Find("Preview").gameObject;
            t.tag = "CellValuePreview";
            t.SetActive(false);
            /* GameObject temp = Instantiate(previewText);
            temp.transform.parent = obj.transform;
            temp.transform.position = obj.transform.position;

            temp.transform.position = new Vector3(
                temp.transform.position.x + xPreviewOffset,
                temp.transform.position.y + yPreviewOffset,
                obj.transform.position.z);

            temp.name = "Preview";
            temp.SetActive(false);
            temp.tag = "CellValuePreview";
            */
        }
    }

    private void MakeMemoryGrid()
    {
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
