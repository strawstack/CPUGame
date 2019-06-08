using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProcessFactory : MonoBehaviour {
    public static ProcessFactory instance;

    public GameObject ALUProcess;
    public GameObject DiskProcess;
    public GameObject DoneProcess;

    // Each out of ten, must sum to ten
    private float AluChance  = 4f;
    private float DiskChance = 4f;
    private float DoneChance = 2f;

    void Start () {
        float upper_bound = AluChance;
        DiskChance += upper_bound;
        DoneChance += upper_bound;
        instance = this;
    }
		
    public GameObject MakeProcess()
    {
        GameObject p;

        float number = Random.Range(0f, 10f);
        if (number <= AluChance)
        {
            p = (GameObject)Instantiate(ALUProcess);
        }
        else if (number <= DiskChance)
        {
            p = (GameObject)Instantiate(DiskProcess);
        }
        else // number <= DoneChance
        {
            p = (GameObject)Instantiate(DoneProcess);
        }
        return p;
    }

    public void ChangeProcess(GameObject p)
    {
        // TODO
        // Take ref to existing process and change its type
    }

	void Update () {
		
	}
}
