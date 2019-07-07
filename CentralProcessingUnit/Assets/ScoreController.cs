using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScoreController : MonoBehaviour {

    public static ScoreController instance;

    public ParticleSystem ps1;
    public ParticleSystem ps2;
    public TextMesh text;

    public delegate void Promise();

    void Start () {
        instance = this;
        gameObject.SetActive(false);
    }

    public IEnumerator ShowScore(Promise callback)
    {
        gameObject.SetActive(true);

        string m = System.String.Format("{0:0.00}", Mathf.Round(MoneyController.instance.GetValue() * 100) / 100f);
        text.text = "Score: " + m;

        if (!ps1.isPlaying) 
            ps1.Play();
        if (!ps2.isPlaying)
            ps2.Play();
        yield return new WaitForSeconds(5f);
        gameObject.SetActive(false);
        ps1.Stop();
        ps2.Stop();
        callback();
    }

	void Update () {
		
	}
}
