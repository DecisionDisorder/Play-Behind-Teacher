using UnityEngine;
using System.Collections;

public class KatalkDifficulty : MonoBehaviour
{
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
    //int[] PlayTimeStd = new int[20] { 0, 10, 20, 30, 35, 40, 45, 50, 55, 60, 65, 70, 75, 80, 85, 90, 95, 100, 105, 110 };
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
        CheckStep(Playtime);

        if (inGameMgr.IsPlayingGame)
            StartCoroutine(TimePlus());
    }
    void CheckStep(int Time)
    {
        if (RandomTime <= 0)
        {
            RandomTime = Random.Range(4, 10);
            Step = Random.Range(0, 5);
        }
        else
            RandomTime--;
    }*/
}
