using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MemoryCellTextController : MonoBehaviour {

    public TextMesh text;

    private int numberValue = 0;
    private Dictionary<string, int> lookup;
    private string[] keys;
    private int[] values;

    void Start () {
        lookup = new Dictionary<string, int>();
        keys = new string[] { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "a", "b", "c", "d", "e", "f" };
        values = new int[] { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
        for (int i = 0; i < keys.Length; i++)
        {
            lookup[keys[i]] = values[i];
        }
    }

    public void SetText(string value)
    {
        text.text = value.ToUpper();
        numberValue = lookup[value];
    }

    public string GetText()
    {
        return text.text.ToLower();
    }

	void Update () {
		
	}
}
