using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum AudioType
{
    CASH_POS,
    CASH_NEG,
    HALT,
    END,
    TOCK,
    START
}

public class MyAudioController : MonoBehaviour {

    public static MyAudioController instance;

    public AudioClip Cash_Positive;
    public AudioClip Cash_Negative;
    public AudioClip Halt;
    public AudioClip End;
    public AudioClip Tock;
    public AudioClip Start_Game;

    private Dictionary<AudioType, AudioClip> lookup;
    private AudioSource source;

    void Start () {
        instance = this;

        source = GetComponent<AudioSource>();

        lookup = new Dictionary<AudioType, AudioClip>();
        lookup.Add(AudioType.CASH_POS, Cash_Positive);
        lookup.Add(AudioType.CASH_NEG, Cash_Negative);
        lookup.Add(AudioType.HALT, Halt);
        lookup.Add(AudioType.END, End);
        lookup.Add(AudioType.TOCK, Tock);
        lookup.Add(AudioType.START, Start_Game);
    }
	
	public void PlayAudio(AudioType type)
    {
        if (!source.isPlaying)
        {
            source.clip = lookup[type];
            source.Play();
        }
    }
}
