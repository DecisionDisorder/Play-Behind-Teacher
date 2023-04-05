using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SnackDifficulty : MonoBehaviour {

    public int Playtime = 0;
    public float[] Green_Min = new float[5] { 2.5f, 2, 1.5f, 1, 1 };
    public float[] Green_Max = new float[5] { 4, 3, 3, 2.5f, 2 };
    public float[] Red_Min = new float[5] { 1.5f, 2, 2.5f, 2.5f, 3 };
    public float[] Red_Max = new float[5] { 2.5f, 3, 3, 3.5f, 4 };
    public float[] Orange_Min = new float[5] { 0.5f, 0.4f, 0.3f, 0.2f, 0.1f };
    public float[] Orange_Max = new float[5] { 0.75f, 0.55f, 0.45f, 0.3f, 0.25f };
    public float[] DecreaseEndur = new float[5] { 3, 3.5f, 4, 4.5f, 5 };
    public float Period = 0.3f;
    public int Step = 0;
    public int[] NoticeDrcrease = new int[10];

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
    }
}
