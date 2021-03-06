﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum StartState
{
    FreePlay,
    Starting,
    Started,
    Ending
}

public class GameController : MonoBehaviour {

    public static GameController instance;
    public float moveSpeed;
    public float readSpeed;
	public bool haltFlag  = false;
	public bool isRunning = false;    

    private GameObject currentSelection; // The currently selected component
    private GameObject currentHover;     // The component that is being hovered
    private Dictionary<int, Instruction> instructionLookup;
    private delegate IEnumerator Instruction(int arg);
    private StartState startState = StartState.FreePlay;

    public StartState GetStartState()
    {
        return startState;
    }

    public bool IsStarted()
    {
        return startState == StartState.Started;
    }

    void Awake () {
        instance = this;
        instructionLookup = new Dictionary<int, Instruction>();
        instructionLookup.Add(0x000, Add);
        instructionLookup.Add(0x100, Sub);
        instructionLookup.Add(0x200, Mult);

        instructionLookup.Add(0x300, Beq);
        instructionLookup.Add(0x400, Blt);
        instructionLookup.Add(0x500, Bgt);

        instructionLookup.Add(0x600, Noop);
        instructionLookup.Add(0x700, Noop);

        instructionLookup.Add(0x800, Add_direct);
        instructionLookup.Add(0x900, Sub_direct);
        instructionLookup.Add(0xa00, Mult_direct);

        instructionLookup.Add(0xb00, Beq_direct);

        instructionLookup.Add(0xc00, StoreA);
        instructionLookup.Add(0xd00, LoadA);
        instructionLookup.Add(0xe00, LoadB);        

        instructionLookup.Add(0xf00, Halt);
    }

    private IEnumerator Add(int not_used)
    {
        Debug.Log("Nav to A");
        yield return StartCoroutine(RegisterRetriever.instance.NavToRegister(Register.A));

        Debug.Log("Read value from A");
        yield return StartCoroutine(RegisterRetriever.instance.ReadRegister(Register.A));
        int a = RegisterController.instance.GetRegisterValue(Register.A);

        Debug.Log("Nav to B");
        yield return StartCoroutine(RegisterRetriever.instance.NavToRegister(Register.B));

        Debug.Log("Read value from B");
        yield return StartCoroutine(RegisterRetriever.instance.ReadRegister(Register.B));
        int b = RegisterController.instance.GetRegisterValue(Register.B);

        // operation
        int ans = a + b;

        Debug.Log("Nav to A");
        yield return StartCoroutine(RegisterRetriever.instance.NavToRegister(Register.A));

        // Load value into A
        Debug.Log("Load value into A");
        yield return StartCoroutine(RegisterController.instance.SetRegisterValue(Register.A, ans));
    }

    private IEnumerator Sub(int not_used)
    {
        Debug.Log("Nav to A");
        yield return StartCoroutine(RegisterRetriever.instance.NavToRegister(Register.A));

        Debug.Log("Read value from A");
        yield return StartCoroutine(RegisterRetriever.instance.ReadRegister(Register.A));
        int a = RegisterController.instance.GetRegisterValue(Register.A);

        Debug.Log("Nav to B");
        yield return StartCoroutine(RegisterRetriever.instance.NavToRegister(Register.B));

        Debug.Log("Read value from B");
        yield return StartCoroutine(RegisterRetriever.instance.ReadRegister(Register.B));
        int b = RegisterController.instance.GetRegisterValue(Register.B);

        // operation
        int ans = a - b;

        Debug.Log("Nav to A");
        yield return StartCoroutine(RegisterRetriever.instance.NavToRegister(Register.A));

        // Load value into A
        Debug.Log("Load value into A");
        yield return StartCoroutine(RegisterController.instance.SetRegisterValue(Register.A, ans));
    }

    private IEnumerator Mult(int not_used)
    {
        Debug.Log("Nav to A");
        yield return StartCoroutine(RegisterRetriever.instance.NavToRegister(Register.A));

        Debug.Log("Read value from A");
        yield return StartCoroutine(RegisterRetriever.instance.ReadRegister(Register.A));
        int a = RegisterController.instance.GetRegisterValue(Register.A);

        Debug.Log("Nav to B");
        yield return StartCoroutine(RegisterRetriever.instance.NavToRegister(Register.B));

        Debug.Log("Read value from B");
        yield return StartCoroutine(RegisterRetriever.instance.ReadRegister(Register.B));
        int b = RegisterController.instance.GetRegisterValue(Register.B);

        // operation
        int ans = a * b;

        Debug.Log("Nav to A");
        yield return StartCoroutine(RegisterRetriever.instance.NavToRegister(Register.A));

        // Load value into A
        Debug.Log("Load value into A");
        yield return StartCoroutine(RegisterController.instance.SetRegisterValue(Register.A, ans));
    }

    private IEnumerator Beq(int addr)
    {
        // overflow address
        addr %= 80;

        Debug.Log("Nav to A");
        yield return StartCoroutine(RegisterRetriever.instance.NavToRegister(Register.A));

        Debug.Log("Read value from A");
        yield return StartCoroutine(RegisterRetriever.instance.ReadRegister(Register.A));
        int a = RegisterController.instance.GetRegisterValue(Register.A);

        if (a == 0)
        {
            Debug.Log("Nav to PC");
            yield return StartCoroutine(RegisterRetriever.instance.NavToRegister(Register.PC));

            // Load value into PC
            Debug.Log("Load value into PC");
            yield return StartCoroutine(RegisterController.instance.SetRegisterValue(Register.PC, addr));
        }
    }

    private IEnumerator Blt(int addr)
    {
        // overflow address
        addr %= 80;

        Debug.Log("Nav to A");
        yield return StartCoroutine(RegisterRetriever.instance.NavToRegister(Register.A));

        Debug.Log("Read value from A");
        yield return StartCoroutine(RegisterRetriever.instance.ReadRegister(Register.A));
        int a = RegisterController.instance.GetRegisterValue(Register.A);

        if (a < 0)
        {
            Debug.Log("Nav to PC");
            yield return StartCoroutine(RegisterRetriever.instance.NavToRegister(Register.PC));

            // Load value into PC
            Debug.Log("Load value into PC");
            yield return StartCoroutine(RegisterController.instance.SetRegisterValue(Register.PC, addr));
        }
    }

    private IEnumerator Bgt(int addr)
    {
        // overflow address
        addr %= 80;

        Debug.Log("Nav to A");
        yield return StartCoroutine(RegisterRetriever.instance.NavToRegister(Register.A));

        Debug.Log("Read value from A");
        yield return StartCoroutine(RegisterRetriever.instance.ReadRegister(Register.A));
        int a = RegisterController.instance.GetRegisterValue(Register.A);

        if (a > 0)
        {
            Debug.Log("Nav to PC");
            yield return StartCoroutine(RegisterRetriever.instance.NavToRegister(Register.PC));

            // Load value into PC
            Debug.Log("Load value into PC");
            yield return StartCoroutine(RegisterController.instance.SetRegisterValue(Register.PC, addr));
        }
    }

    private IEnumerator Noop(int not_used)
    {        
        Debug.Log("Noop");
        yield return new WaitForSeconds(GameController.instance.moveSpeed);
    }

    private IEnumerator Add_direct(int value)
    {
        Debug.Log("Nav to A");
        yield return StartCoroutine(RegisterRetriever.instance.NavToRegister(Register.A));

        Debug.Log("Read value from A");
        yield return StartCoroutine(RegisterRetriever.instance.ReadRegister(Register.A));
        int a = RegisterController.instance.GetRegisterValue(Register.A);

        // operation
        int ans = a + value;

        Debug.Log("Nav to A");
        yield return StartCoroutine(RegisterRetriever.instance.NavToRegister(Register.A));

        // Load value into A
        Debug.Log("Load value into A");
        yield return StartCoroutine(RegisterController.instance.SetRegisterValue(Register.A, ans));
    }

    private IEnumerator Sub_direct(int value)
    {
        Debug.Log("Nav to A");
        yield return StartCoroutine(RegisterRetriever.instance.NavToRegister(Register.A));

        Debug.Log("Read value from A");
        yield return StartCoroutine(RegisterRetriever.instance.ReadRegister(Register.A));
        int a = RegisterController.instance.GetRegisterValue(Register.A);

        // operation
        int ans = a - value;

        Debug.Log("Nav to A");
        yield return StartCoroutine(RegisterRetriever.instance.NavToRegister(Register.A));

        // Load value into A
        Debug.Log("Load value into A");
        yield return StartCoroutine(RegisterController.instance.SetRegisterValue(Register.A, ans));
    }

    private IEnumerator Mult_direct(int value)
    {
        Debug.Log("Nav to A");
        yield return StartCoroutine(RegisterRetriever.instance.NavToRegister(Register.A));

        Debug.Log("Read value from A");
        yield return StartCoroutine(RegisterRetriever.instance.ReadRegister(Register.A));
        int a = RegisterController.instance.GetRegisterValue(Register.A);

        // operation
        int ans = a * value;

        Debug.Log("Nav to A");
        yield return StartCoroutine(RegisterRetriever.instance.NavToRegister(Register.A));

        // Load value into A
        Debug.Log("Load value into A");
        yield return StartCoroutine(RegisterController.instance.SetRegisterValue(Register.A, ans));
    }

    private IEnumerator Beq_direct(int addr)
    {
        // overflow address
        addr %= 80;

        Debug.Log("Nav to memory address");
        yield return StartCoroutine(MemoryRetriever.instance.NavToCell(GridController.instance.GetCells(addr, 1)[0]));

        Debug.Log("Read Memory address");
        yield return StartCoroutine(MemoryRetriever.instance.ReadRegister(GridController.instance.GetCells(addr, 2)));
        int addressValue = GridController.instance.GetValue(addr, 2);

        if (addressValue == 0)
        {
            Debug.Log("Nav to A");
            yield return StartCoroutine(RegisterRetriever.instance.NavToRegister(Register.A));

            Debug.Log("Read value from A");
            yield return StartCoroutine(RegisterRetriever.instance.ReadRegister(Register.A));
            int a = RegisterController.instance.GetRegisterValue(Register.A);

            if (a >= 0)
            {
                Debug.Log("Nav to PC");
                yield return StartCoroutine(RegisterRetriever.instance.NavToRegister(Register.PC));

                // Load value into PC
                Debug.Log("Load value into PC");
                yield return StartCoroutine(RegisterController.instance.SetRegisterValue(Register.PC, a));
            }
            else
            {
                Debug.Log("Can't branch to negative address");
            }
        }
    }

    private IEnumerator StoreA(int addr)
    {
        // overflow address
        addr %= 80;

        Debug.Log("Nav to A");
        yield return StartCoroutine(RegisterRetriever.instance.NavToRegister(Register.A));

        Debug.Log("Read value from A");
        yield return StartCoroutine(RegisterRetriever.instance.ReadRegister(Register.A));
        int a = RegisterController.instance.GetRegisterValue(Register.A);

        Debug.Log("Nav to memory address");
        yield return StartCoroutine(MemoryRetriever.instance.NavToCell(GridController.instance.GetCells(addr, 1)[0]));

        Debug.Log("Write to memory address");
        yield return StartCoroutine(MemoryRetriever.instance.WriteRegister(GridController.instance.GetCells(addr, 2), a));
    }

    private IEnumerator LoadA(int addr)
    {
        // overflow address
        addr %= 80;

        Debug.Log("Nav to memory address");
        yield return StartCoroutine(MemoryRetriever.instance.NavToCell(GridController.instance.GetCells(addr, 1)[0]));

        Debug.Log("Read Memory address");
        yield return StartCoroutine(MemoryRetriever.instance.ReadRegister(GridController.instance.GetCells(addr, 2)));
        int addressValue = GridController.instance.GetValue(addr, 2);

        Debug.Log("Nav to A");
        yield return StartCoroutine(RegisterRetriever.instance.NavToRegister(Register.A));

        // Load value into instc
        Debug.Log("Load value into A");
        yield return StartCoroutine(RegisterController.instance.SetRegisterValue(Register.A, addressValue));
    }

    private IEnumerator LoadB(int addr)
    {
        // overflow address
        addr %= 80;

        Debug.Log("Nav to memory address");
        yield return StartCoroutine(MemoryRetriever.instance.NavToCell(GridController.instance.GetCells(addr, 1)[0]));

        yield return StartCoroutine(MemoryRetriever.instance.ReadRegister(GridController.instance.GetCells(addr, 2)));
        int addressValue = GridController.instance.GetValue(addr, 2);

        Debug.Log("Nav to B");
        yield return StartCoroutine(RegisterRetriever.instance.NavToRegister(Register.B));

        // Load value into instc
        Debug.Log("Load value into B");
        yield return StartCoroutine(RegisterController.instance.SetRegisterValue(Register.B, addressValue));
    }

	private IEnumerator Halt(int not_used)
	{
        // flag checked in event loop (RunSingleCommand)
		haltFlag = true;
		yield return null;
	}

	public void OnSelectionChange(GameObject selection)
    {
        if (currentSelection != null) currentSelection.GetComponent<ISelectable>().OnUnSelect();
        currentSelection = selection;
    }

    public void OnHoverChange(GameObject hover)
    {
        currentHover = hover;
        if (currentHover != null)
            HoverController.instance.SetValue(currentHover.GetComponent<MemoryCellController>().gridNumber);
    }

    public void ClearHoverAndSelection()
    {
        if (currentHover != null)
            currentHover.GetComponent<ISelectable>().OnHoverOut();
        currentHover = null;
        
        if (currentSelection != null)
            currentSelection.GetComponent<ISelectable>().OnUnSelect();
        currentSelection = null;

        HoverController.instance.SetValue(0);
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
                // move right until unlocked cell found
                GameObject cur = currentSelection;
                cur = currentSelection.GetComponent<MemoryCellController>().right;
                while (cur.GetComponent<MemoryCellController>().IsLocked())
                    cur = cur.GetComponent<MemoryCellController>().right;
                cur.GetComponent<MemoryCellController>().GetComponent<ISelectable>().OnSelect();
            }
            else // value == "left"
            {
                // move left until unlocked cell found
                GameObject cur = currentSelection;
                cur = currentSelection.GetComponent<MemoryCellController>().left;
                while (cur.GetComponent<MemoryCellController>().IsLocked())
                    cur = cur.GetComponent<MemoryCellController>().left;
                cur.GetComponent<MemoryCellController>().GetComponent<ISelectable>().OnSelect();
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
        HaltButtonController.instance.gameObject.SetActive(true);
        StartButtonController.instance.gameObject.SetActive(false);
        RandomButtonController.instance.gameObject.SetActive(false);
        ClearButtonController.instance.gameObject.SetActive(false);

        // Register input
        Debug.Log("Wait");
        yield return new WaitForSeconds(GameController.instance.moveSpeed);

        Debug.Log("Nav to PC");
        yield return StartCoroutine(RegisterRetriever.instance.NavToRegister(Register.PC));

        // Read value from PC
        Debug.Log("Read value from PC");
        int pc = RegisterController.instance.GetRegisterValue(Register.PC);        
        yield return StartCoroutine(RegisterRetriever.instance.WriteRegister(Register.PC, (pc + 3) % 80));
        Debug.Log("PC: " + pc);

        // wait
        Debug.Log("Wait");
        yield return new WaitForSeconds(GameController.instance.moveSpeed);

        // Nav to memory address
        Debug.Log("Nav to memory address");
        yield return StartCoroutine(MemoryRetriever.instance.NavToCell(GridController.instance.GetCells(pc, 1)[0]));

        Debug.Log("Read memory address");
        yield return StartCoroutine(MemoryRetriever.instance.ReadRegister(GridController.instance.GetCells(pc, 3)));
        int addressValue = GridController.instance.GetValue(pc, 3);
        Debug.Log("addressValue: " + addressValue);

        // wait
        Debug.Log("Wait");
        yield return new WaitForSeconds(GameController.instance.moveSpeed);

        Debug.Log("Nav to INSTC");
        yield return StartCoroutine(RegisterRetriever.instance.NavToRegister(Register.INSTC));

        // Load value into instc
        Debug.Log("Load value into instc");
        yield return StartCoroutine(RegisterController.instance.SetRegisterValue(Register.INSTC, addressValue));

        // wait
        Debug.Log("Wait");
        yield return new WaitForSeconds(GameController.instance.moveSpeed);

        // Fire correct instruction
        Debug.Log("Fire correct instruction");
        int instruction = 0xF00 & addressValue;
        int arg = 0x0FF & addressValue;
        Debug.Log("Instruction: " + instruction);
        Debug.Log("Arg: " + arg);
        yield return StartCoroutine(instructionLookup[instruction](arg));

        // wait
        Debug.Log("Wait");
        yield return new WaitForSeconds(GameController.instance.moveSpeed);

        // Run the next command unless halt
        int HALT = 0xF00;
        if (haltFlag || instruction == HALT)
        {
            haltFlag  = false;
            isRunning = false;
            HaltButtonController.instance.gameObject.SetActive(false); // hide the halt button
            JobController.instance.CheckColoredCellStatus();
            if (startState == StartState.Started)
                JobController.instance.PlaceColors(); // place new colors
            StartButtonController.instance.gameObject.SetActive(true);
            if (startState == StartState.FreePlay)
            {
                RandomButtonController.instance.gameObject.SetActive(true);
                ClearButtonController.instance.gameObject.SetActive(true);
            }            
        }
        else
        {
            yield return StartCoroutine(RunSingleCommand());
        }
    }

    public int CellsToInteger(MemoryCellController[] cells)
    {
        int size = cells.Length;
        int total = 0;
        for (int i = 0; i < size; i++)
        {
            total += cells[i].GetValue() * (int)Mathf.Pow(2, size - i - 1);
        }
        return total;
    }

    public void ZeroizeGrid()
    {
        RegisterController.instance.Zeroize();
        GridController.instance.Zeroize();
    }

    private void PlaceColors()
    {
        JobController.instance.PlaceColors();
    }

    private void EraseColors()
    {
        JobController.instance.EraseColors();
    }

    public void OnRandomButtonPress()
    {
        MemoryCellController[] grid = GridController.instance.GetGrid();
        foreach(MemoryCellController cell in grid)
        {
            int value = Random.Range(0, 14);           
            cell.SetValue(value);
        }
        grid[grid.Length - 3].SetValue(15);
        grid[grid.Length - 2].SetValue(0);
        grid[grid.Length - 1].SetValue(0);
    }

    public void OnStartButtonPress()
    {
        switch(startState)
        {
            case StartState.FreePlay:
                startState = StartState.Starting;
                ZeroizeGrid();
                PlaceColors();
                startState = StartState.Started;
                StartButtonController.instance.OnStart();
                RandomButtonController.instance.gameObject.SetActive(false);
                ClearButtonController.instance.gameObject.SetActive(false);
                MoneyController.instance.gameObject.SetActive(true);
                HaltButtonController.instance.ShowPrice(true);
                break;           
            case StartState.Started:
                startState = StartState.Ending;
                ZeroizeGrid();
                EraseColors();                
                MoneyController.instance.gameObject.SetActive(false);                
                StartButtonController.instance.OnEnd();

                // Show the score for some time
                // and switch state when done
                StartCoroutine(ScoreController.instance.ShowScore(() =>
                {
                    startState = StartState.FreePlay;
                    MoneyController.instance.ResetMoney();
                    RandomButtonController.instance.gameObject.SetActive(true);
                    ClearButtonController.instance.gameObject.SetActive(true);
                    HaltButtonController.instance.ShowPrice(false);
                }));
                break;
            case StartState.Starting:
            case StartState.Ending:
                break;
        }
    }

    void Update () {
		
	}
}
