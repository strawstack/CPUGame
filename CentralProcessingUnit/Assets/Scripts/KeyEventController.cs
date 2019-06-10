﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KeyEventController : MonoBehaviour {

    private string[] keys;

	void Start () {
        keys = new string[] { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "a", "b", "c", "d", "e", "f" };
    }

	void Update () {
        if (Input.GetKeyDown("right"))
        {
            GameController.instance.OnNavigation("right");
        }
        else if (Input.GetKeyDown("left"))
        {
            GameController.instance.OnNavigation("left");
        }
        else
        {
            foreach (string key in keys)
            {
                if (Input.GetKeyDown(key))
                {
                    GameController.instance.OnKeyPress(key);
                    break;
                }
            }
        }
    }
}
