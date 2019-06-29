﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum TransactionType
{
    READ,
    COMPLETE
}

public class MoneyController : MonoBehaviour {
    public static MoneyController instance;

    public TextMesh text;
    public ParticleSystem goodParticleSystem;
    public ParticleSystem badParticleSystem;

    private float currentMoney  = 100f;
    private float readAmount    = 5.20f;
    private float successAmount = 36.15f;
    private float factor = 1.2f; // 20% increase for consecutive completions

    void Start () {
        instance = this;
    }

    private void SetMoney(float money)
    {
        if (money < 0)
        {            
            text.color = new Vector4(0xB7 / 255f, 0x38 / 255f, 0x2F / 255f, 1f);
            string value = System.String.Format("{0:0.00}", -1f * Mathf.Round(money * 100) / 100f);
            text.text = "($" + value + ")";
        }
        else
        {           
            text.color = new Vector4(0x2F/255f, 0xB7/255f, 0x50/255f, 1f);
            string value = System.String.Format("{0:0.00}", Mathf.Round(money * 100) / 100f);
            text.text = "$" + value;
        }
    }

    private float GetValue()
    {
        return currentMoney;
    }

    private void NegativeChange()
    {
        badParticleSystem.Stop();
        badParticleSystem.Play();      
    }

    private void PositiveChange()
    {
        goodParticleSystem.Stop();
        goodParticleSystem.Play();
    }

    public void OnChangeRequest(TransactionType type, int numberCells)
    {
        if (type == TransactionType.READ)
        {
            ChangeMoney(-1 * numberCells * readAmount);
        }
        else if (type == TransactionType.COMPLETE)
        {
            ChangeMoney(numberCells * successAmount * Mathf.Pow(factor, numberCells - 1));
        }
    }

    public void ChangeMoney(float value)
    {
        if (value < 0)
        {
            NegativeChange();
        }
        else
        {
            PositiveChange();
        }

        currentMoney += value;
        SetMoney(currentMoney);
    }

	void Update () {
		
	}
}