using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WireObject : MonoBehaviour {

    public GameObject start;
    public GameObject dest;
    public WireType wireType;

    void Start () {
		
	}

    public void SetWire(IWireTarget _start, IWireTarget _dest)
    {
        if (_start.GetGameType() == GameType.ARRIVAL && _dest.GetGameType() == GameType.CPU)
        {
            wireType = WireType.Arrival_CPU;
            start = _start.GetGameObject();
            dest = _dest.GetGameObject();
        }
        else if (_start.GetGameType() == GameType.CPU && _dest.GetGameType() == GameType.ARRIVAL)
        {
            wireType = WireType.Arrival_CPU;

            // Swap start and dest
            IWireTarget temp = _start;
            _start = _dest;
            _dest  = temp;

            start  = _start.GetGameObject();
            dest   = _dest.GetGameObject();
        }
    }
}
