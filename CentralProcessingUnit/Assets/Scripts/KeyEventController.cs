using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KeyEventController : MonoBehaviour {

    private string[] keys;    

	void Start () {
        keys = new string[] { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "a", "b", "c", "d", "e", "f" };
    }

	void Update () {
        if (Input.GetMouseButtonUp(0))
        {
            StartButtonController.instance.OnClick();
            HaltButtonController.instance.OnClick();
        }

        if (Input.GetKeyDown("p"))
        {
            HelpController.instance.isOpen = !HelpController.instance.isOpen;
            HelpController.instance.gameObject.SetActive(HelpController.instance.isOpen);
        }
        else if (Input.GetKeyDown("right"))
        {
            GameController.instance.OnNavigation("right");
        }
        else if (Input.GetKeyDown("left"))
        {
            GameController.instance.OnNavigation("left");
        }
        else if (Input.GetKeyDown("up"))
        {
            GameController.instance.OnModifyValue(1);
        }
        else if (Input.GetKeyDown("down"))
        {
            GameController.instance.OnModifyValue(-1);
        }
        else if (Input.GetKeyDown("return"))
        {
            if (!GameController.instance.isRunning)
            {
                GameController.instance.isRunning = true;
                GameController.instance.ClearHoverAndSelection();
                StartCoroutine(GameController.instance.RunSingleCommand());
            }
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
