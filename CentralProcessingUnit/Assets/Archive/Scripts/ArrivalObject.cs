using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ArrivalObject : MonoBehaviour, IWireTarget {

    public int Index;

    void Start()
    {

    }

    public GameObject GetGameObject()
    {
        return this.gameObject;
    }

    public GameType GetGameType()
    {
        return GameType.ARRIVAL;
    }

    public bool WireAddedEvent(WireObject wire)
    {
        return true;
    }

    public void WireRemovedEvent(WireObject wire)
    {

    }
}
