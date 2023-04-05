using UnityEngine;
using System.Collections;

public class TVGameDifficulty : MonoBehaviour {
    /*
    public int Playtime = 0;
    public float[] Green_Min = new float[5];
    public float[] Green_Max = new float[5];
    public float[] Red_Min = new float[5];
    public float[] Red_Max = new float[5];
    public float[] Orange_Min = new float[5];
    public float[] Orange_Max = new float[5];
    public float[] DecreaseEndur = new float[5];
    public float Period = 0.3f;
    public int Step = 0;

    int RandomTime = 0;

    public InGameMgr inGameMgr;
    
    public void StartTimePlus()
    {
        StartCoroutine(TimePlus());
    }

    IEnumerator TimePlus()
    {
        yield return new WaitForSeconds(1.0f);

        Playtime++;

        if (RandomTime <= 0)
        {
            RandomTime = Random.Range(4, 10);
            Step = Random.Range(0, 5);
        }
        else
            RandomTime--;

        if (inGameMgr.IsPlayingGame)
            StartCoroutine(TimePlus());
    }*/
}