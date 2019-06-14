using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MemoryCellTextController : MonoBehaviour {

    public TextMesh text;
    public int range = 16; // [0, 16) exclusive

    private int numberValue = 0;
    private Dictionary<string, int> lookup;
    private Dictionary<int, string> rlookup;
    private string[] keys;
    private int[] values;

    void Start () {
        lookup = new Dictionary<string, int>();
        rlookup = new Dictionary<int, string>();
        keys   = new string[] { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "a", "b", "c", "d", "e", "f" };
        values = new int[] { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
        for (int i = 0; i < keys.Length; i++)
        {
            lookup[keys[i]] = values[i];
            rlookup[values[i]] = keys[i];
        }
    }

    public void OnIncrementValue(int value)
    {
        int mod = (numberValue + value) % range;
        if (mod < 0)
            mod += range;
        SetValue(mod);
    }

    public void SetText(string value)
    {
        text.text = value.ToUpper();
        numberValue = lookup[value];
    }

    private void SetValue(int number)
    {
        numberValue = number;
        text.text = rlookup[numberValue].ToUpper();
    }

    public string GetText()
    {
        return text.text.ToLower();
    }

	void Update () {
		
	}
}
