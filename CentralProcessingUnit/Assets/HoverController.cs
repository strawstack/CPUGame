using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HoverController : MonoBehaviour {

    public static HoverController instance;

    private TextMesh text;
    private string[] hex;
 
    void Start () {
        instance = this;
        hex = new string[] { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "a", "b", "c", "d", "e", "f" };
        text = GetComponent<TextMesh>();
    }

    public void SetValue(int value)
    {
        string first  = hex[(0xF0 & value) >> 4].ToUpper();
        string second = hex[(0x0F & value)].ToUpper();
        text.text = "hover: 0x" + first + second;
    }

	void Update () {
		
	}
}
