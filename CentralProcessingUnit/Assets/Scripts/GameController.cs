using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameController : MonoBehaviour {

    public static GameController instance;

    private GameObject currentSelection; // The currently selected component
    private GameObject currentHover;     // The component that is being hovered

    void Awake () {
        instance = this;
	}

    public void OnSelectionChange(GameObject selection)
    {
        if (currentSelection != null) currentSelection.GetComponent<ISelectable>().OnUnSelect();
        currentSelection = selection;
    }

    public void OnHoverChange(GameObject hover)
    {
        currentHover = hover;
    }

    public void OnClick()
    {
        // There is a current hover
        if (currentHover != null)
        {
            // The current hover is not already selected
            if (!currentHover.GetComponent<MemoryCellController>().GetSelected())
            {
                currentHover.GetComponent<ISelectable>().OnSelect();
            }
        }
    }

    public void OnNavigation(string value)
    {
        if (currentSelection != null)
        {
            if (value == "right")
            {
                currentSelection.GetComponent<MemoryCellController>().right.GetComponent<ISelectable>().OnSelect();
            }
            else // value == "left"
            {
                currentSelection.GetComponent<MemoryCellController>().left.GetComponent<ISelectable>().OnSelect();
            }
        }
    }

    public void OnKeyPress(string value)
    {
        if (currentSelection != null)
        {
            currentSelection.GetComponent<MemoryCellTextController>().SetText(value); 
        }
    }

    public void OnModifyValue(int value)
    {
        if (currentSelection != null)
        {
            currentSelection.GetComponent<MemoryCellTextController>().OnIncrementValue(value);
        }
    }

    public IEnumerator RunSingleCommand()
    {   
        // Register input
        Debug.Log("Wait");
        yield return new WaitForSeconds(1f);

        Debug.Log("Nav to PC");
        yield return StartCoroutine(RegisterRetriever.instance.NavToRegister(Register.PC));

        // Read value from PC
        Debug.Log("Read value from PC");
        int pc = RegisterController.instance.GetRegisterValue(Register.PC);
        yield return StartCoroutine(RegisterRetriever.instance.WriteRegister(Register.PC, pc + 3));
        Debug.Log("PC: " + pc);

        // wait
        Debug.Log("Wait");
        yield return new WaitForSeconds(1f);

        // Nav to memory address
        Debug.Log("Nav to memory address");
        yield return StartCoroutine(MemoryRetriever.instance.ReadRegister(GridController.instance.GetCells(pc, 3)));
        int addressValue = GridController.instance.GetValue(pc, 3);
        Debug.Log("addressValue: " + addressValue);

        // wait
        Debug.Log("Wait");
        yield return new WaitForSeconds(1f);

        Debug.Log("Nav to INSTC");
        yield return StartCoroutine(RegisterRetriever.instance.NavToRegister(Register.INSTC));

        // Load value into instc
        Debug.Log("Load value into instc");
        yield return StartCoroutine(RegisterController.instance.SetRegisterValue(Register.INSTC, addressValue));

        // wait
        Debug.Log("Wait");
        yield return new WaitForSeconds(1f);

        // Fire correct instruction
        Debug.Log("Fire correct instruction");
        yield return new WaitForSeconds(1.5f);

        // wait
        Debug.Log("Wait");
        yield return new WaitForSeconds(1f);

        int instruction = RegisterController.instance.GetRegisterValue(Register.INSTC);
        Debug.Log("instruction: " + instruction);
    }

    void Update () {
		
	}
}
