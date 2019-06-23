using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RegisterRetriever : MonoBehaviour {

    public static RegisterRetriever instance;

    public LineRenderer hLine;
    public LineRenderer vLine;

    void Start () {
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

    public IEnumerator ReadRegister(Register r)
    {
        MemoryCellController[] cells = RegisterController.instance.GetMemoryCells(r);
        foreach (MemoryCellController cell in cells)
        {
            yield return StartCoroutine(NavToLocation(cell.gameObject.transform.position, GameController.instance.readSpeed));
            yield return new WaitForSeconds(GameController.instance.readSpeed);
        }
    }

    public IEnumerator WriteRegister(Register r, int value)
    {    
        MemoryCellController[] cells = RegisterController.instance.GetMemoryCells(r);

        int power = (int)Mathf.Pow(2, cells.Length - 1);

        foreach (MemoryCellController cell in cells)
        {
            yield return StartCoroutine(NavToLocation(cell.gameObject.transform.position, GameController.instance.readSpeed));
            cell.SetValue( ((power & value) > 0)? 1 : 0 );
            power >>= 1;
            yield return new WaitForSeconds(GameController.instance.readSpeed);
        }
    }

    public IEnumerator NavToRegister(Register r)
    {
        MemoryCellController cell = RegisterController.instance.GetMemoryCells(r)[0];
        yield return StartCoroutine(NavToLocation(cell.gameObject.transform.position, GameController.instance.moveSpeed));
        yield return new WaitForSeconds(GameController.instance.readSpeed);
    }

    void Update () {
		
	}
}
