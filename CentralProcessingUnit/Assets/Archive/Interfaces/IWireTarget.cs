using UnityEngine;
using System.Collections;

public interface IWireTarget
{
    GameType GetGameType();
    bool WireAddedEvent(WireObject wire);
    void WireRemovedEvent(WireObject wire);
    GameObject GetGameObject();
}