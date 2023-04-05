using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Difficulty Data", menuName = "Scriptable Object/Difficulty Data", order = int.MaxValue)]
public class DifficultyData : ScriptableObject
{
    [SerializeField]
    private float[] stageTimeMin;
    public float[] StageTimeMin { get { return stageTimeMin; } }

    [SerializeField]
    private float[] stageTimeMax;
    public float[] StageTimeMax { get { return stageTimeMax; } }

    [SerializeField]
    private float[] safeMin;
    public float[] SafeMin { get { return safeMin; } }

    [SerializeField]
    private float[] safeMax;
    public float[] SafeMax { get { return safeMax; } }


    [SerializeField]
    private float[] dangerMin;
    public float[] DangerMin { get { return dangerMin; } }

    [SerializeField]
    private float[] dangerMax;
    public float[] DangerMax { get { return dangerMax; } }


    [SerializeField]
    private float[] middleMin;
    public float[] MiddleMin { get { return middleMin; } }

    [SerializeField]
    private float[] middleMax;
    public float[] MiddleMax { get { return middleMax; } }

    [SerializeField]
    private float[] decreasePortion;
    public float[] DecreasePortion { get { return decreasePortion; } }

    [SerializeField]
    private float period;
    public float Period { get { return period; } }

    [SerializeField]
    private int[] noticeDecrease;
    public int[] NoticeDecrease { get { return noticeDecrease; } }
}
