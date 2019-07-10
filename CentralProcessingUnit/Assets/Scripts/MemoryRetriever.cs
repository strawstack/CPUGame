using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MemoryRetriever : MonoBehaviour
{

    public static MemoryRetriever instance;

    public LineRenderer hLine;
    public LineRenderer vLine;
    public GameObject whiteFlash;

    void Start()
    {
        instance = this;
    }

    private IEnumerator NavToLocation(Vector3 loc, float duration)
    {

        float threshold = 0.05f;

        float hs = hLine.GetPosition(0).y;
        float vs = vLine.GetPosition(0).x;

        float elapsed = 0f;

        // check for completion

        bool hDone = false;
        bool vDone = false;
        while (!hDone || !vDone)
        {
            elapsed += Time.deltaTime;

            // increment values
            if (!hDone)
            {
                Vector3 current = Vector3.Lerp(
                    new Vector3(0f, hs, 0f),
                    new Vector3(0f, loc.y, 0f),
                    elapsed / duration);

                Vector3 left = hLine.GetPosition(0);
                hLine.SetPosition(0, new Vector3(
                    left.x,
                    current.y,
                    left.z));

                Vector3 right = hLine.GetPosition(1);
                hLine.SetPosition(1, new Vector3(
                                    right.x,
                                    current.y,
                                    right.z));
            }

            if (!vDone)
            {
                Vector3 current = Vector3.Lerp(
                    new Vector3(vs, 0f, 0f),
                    new Vector3(loc.x, 0f, 0f),
                    elapsed / duration);

                Vector3 top = vLine.GetPosition(0);
                vLine.SetPosition(0, new Vector3(
                    current.x,
                    top.y,
                    top.z));

                Vector3 bot = vLine.GetPosition(1);
                vLine.SetPosition(1, new Vector3(
                                    current.x,
                                    bot.y,
                                    bot.z));
            }

            hDone = Mathf.Abs(hLine.GetPosition(0).y - loc.y) <= threshold;
            vDone = Mathf.Abs(vLine.GetPosition(0).x - loc.x) <= threshold;
            yield return null;
        }
        yield return null;
    }

    public IEnumerator ReadRegister(MemoryCellController[] cells)
    {
        foreach (MemoryCellController cell in cells)
        {
            yield return StartCoroutine(NavToLocation(cell.gameObject.transform.position, GameController.instance.readSpeed));
            Instantiate(whiteFlash, cell.transform.position, Quaternion.identity);
            yield return new WaitForSeconds(GameController.instance.readSpeed);
        }
    }

    public IEnumerator WriteRegister(MemoryCellController[] cells, int value)
    {
        // write value to cells in packets of 4 bits at a time

        int packets = cells.Length;
        int mask = 0xF << (4 * (packets - 1));

        for (int p = 0; p < packets; p++)
        {
            // value of this packet
            int v = (mask & value) >> (4 * (packets - p - 1));
            mask >>= 4;

            // first cell in this packet of 4
            MemoryCellController cell = cells[p];
            yield return StartCoroutine(NavToLocation(cell.gameObject.transform.position, GameController.instance.readSpeed));

            // place value in cell
            Instantiate(whiteFlash, cell.transform.position, Quaternion.identity);
            cell.SetValue(v);            
            yield return new WaitForSeconds(GameController.instance.readSpeed);
        }
    }

    public IEnumerator NavToCell(MemoryCellController cell)
    {
        yield return StartCoroutine(NavToLocation(cell.gameObject.transform.position, GameController.instance.moveSpeed));
        yield return new WaitForSeconds(GameController.instance.readSpeed);
    }

    void Update()
    {

    }
}
