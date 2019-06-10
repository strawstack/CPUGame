using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CPUObject : MonoBehaviour, IWireTarget, ITickEvent {

    private GameObject process;
    private Dictionary<WireType, WireObject> wires;

    void Start () {
        wires = new Dictionary<WireType, WireObject>();
    }

    public bool WireAddedEvent(WireObject wire)
    {
        if (wires.ContainsKey(wire.wireType))
        {
            return false;
        }
        else
        {
            wires.Add(wire.wireType, wire);
            return true;
        }
    }

    public void RemoveAllWiresEvent()
    {
        // The only way to remove a wire is to remove all wires
        wires.Clear();
    }

    public GameType GetGameType()
    {
        return GameType.CPU;
    }

    private bool IsArrivalCPUWire(WireObject wire)
    {
        return false;
    }

    void Update () {
		
	}

    public GameObject GetGameObject()
    {
        return this.gameObject;
    }

    public void Tick()
    {
        // CPU is empty and Arrival has process


    }

    public void WireRemovedEvent(WireObject wire)
    {
        wires.Remove(wire.wireType);
    }
}
