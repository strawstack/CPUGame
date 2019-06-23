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
        int value = CellsToInteger(registerLookup[r]);

        if (r == Register.A || r == Register.B) // Flip from 2's Compliment
        {
            if (value > 0x7F)
            {
                value ^= 0xFF; // flip the eight bits
                value += 1;    // add one
                value *= -1;   // add negative sign
            }
        }

        return value;
    }

    public IEnumerator SetRegisterValue(Register r, int value)
    {

        if (r == Register.A || r == Register.B) // Place in 2's Compliment
        {
            if (value < 0)
            {
                value &= 0xFF; // cut value to 8 bits
                value ^= 0xFF; // flip the 8 bits
                value += 1;    // add one
                value *= -1;   // remove negative sign
            }
        }

        yield return StartCoroutine(RegisterRetriever.instance.WriteRegister(r, value));
    }

    public MemoryCellController[] GetMemoryCells(Register r)
    {
        return registerLookup[r];
    }

    void Update () {
		
	}
}
