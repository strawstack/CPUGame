using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum Register
{
    INSTC,
    PC,
    A,
    B
}

public class RegisterController : MonoBehaviour {

    public static RegisterController instance;

    public MemoryCellController[] instcCells;
    public MemoryCellController[] pcCells;
    public MemoryCellController[] aCells;
    public MemoryCellController[] bCells;

    private Dictionary<Register, MemoryCellController[]> registerLookup;

	void Start () {
        instance = this;
        registerLookup = new Dictionary<Register, MemoryCellController[]>();
        registerLookup.Add(Register.INSTC, instcCells);
        registerLookup.Add(Register.PC, pcCells);
        registerLookup.Add(Register.A, aCells);
        registerLookup.Add(Register.B, bCells);
    }
	
    private int CellsToInteger(MemoryCellController[] cells)
    {
        int size = cells.Length;
        int total = 0;
        for (int i = 0; i < size; i++)
        {
            total += cells[i].GetValue() * (int)Mathf.Pow(2, size - i - 1);
        }
        return total;
    }

    public int GetRegisterValue(Register r)
    {
        return CellsToInteger(registerLookup[r]);
    }

    public IEnumerator SetRegisterValue(Register r, int value)
    {
        yield return StartCoroutine(RegisterRetriever.instance.WriteRegister(r, value));
    }

    public MemoryCellController[] GetMemoryCells(Register r)
    {
        return registerLookup[r];
    }

    void Update () {
		
	}
}
