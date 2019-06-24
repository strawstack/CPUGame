using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoneyController : MonoBehaviour {

    public static MoneyController instance;

    public TextMesh text;
    public ParticleSystem goodParticleSystem;
    public ParticleSystem badParticleSystem;

    private float currentMoney = 0f;

	void Start () {
        instance = this;
    }

    private void SetMoney(float money)
    {
        if (money < 0)
        {            
            text.color = new Vector4(0xB7 / 255f, 0x38 / 255f, 0x2F / 255f, 1f);
            text.text = "($" + (-1f * Mathf.Round(money * 100) / 100f).ToString() + ")";
        }
        else
        {           
            text.color = new Vector4(0x2F/255f, 0xB7/255f, 0x50/255f, 1f);
            text.text = "$" + (Mathf.Round(money * 100) / 100f).ToString();
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
