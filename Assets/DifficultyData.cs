using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// 게임의 난이도 데이터 ScriptableObject
/// </summary>
[CreateAssetMenu(fileName = "Difficulty Data", menuName = "Scriptable Object/Difficulty Data", order = int.MaxValue)]
public class DifficultyData : ScriptableObject
{
    [SerializeField]
    private float[] stageTimeMin;
    /// <summary>
    /// 게임의 난이도 단계 지속시간 최솟값
    /// </summary>
    public float[] StageTimeMin { get { return stageTimeMin; } }

    [SerializeField]
    private float[] stageTimeMax;
    /// <summary>
    /// 게임의 난이도 단계 지속시간 최댓값
    /// </summary>
    public float[] StageTimeMax { get { return stageTimeMax; } }

    [SerializeField]
    private float[] safeMin;
    /// <summary>
    /// 선생님이 돌아보지 않는 시간의 단계별 최솟값
    /// </summary>
    public float[] SafeMin { get { return safeMin; } }

    [SerializeField]
    private float[] safeMax;
    /// <summary>
    /// 선생님이 돌아보지 않는 시간의 단계별 최댓값
    /// </summary>
    public float[] SafeMax { get { return safeMax; } }


    [SerializeField]
    private float[] dangerMin;
    /// <summary>
    /// 선생님이 돌아보고 있는 시간의 단계별 최솟값
    /// </summary>
    public float[] DangerMin { get { return dangerMin; } }

    [SerializeField]
    private float[] dangerMax;
    /// <summary>
    /// 선생님이 돌아보고 있는 시간의 단계별 최댓값
    /// </summary>
    public float[] DangerMax { get { return dangerMax; } }


    [SerializeField]
    private float[] middleMin;
    /// <summary>
    /// 돌아보는 중간 과정의 지속 시간의 단계별 최솟값
    /// </summary>
    public float[] MiddleMin { get { return middleMin; } }

    [SerializeField]
    private float[] middleMax;
    /// <summary>
    /// 돌아보는 중간 과정의 지속 시간의 단계별 최댓값
    /// </summary>
    public float[] MiddleMax { get { return middleMax; } }

    [SerializeField]
    private float[] decreasePortion;
    /// <summary>
    /// 단계별 인내심 감소 비율
    /// </summary>
    public float[] DecreasePortion { get { return decreasePortion; } }

    [SerializeField]
    private float period;
    /// <summary>
    /// 인내심 감소 시간 간격
    /// </summary>
    public float Period { get { return period; } }

    [SerializeField]
    private int[] noticeDecrease;
    /// <summary>
    /// 선생님이 알아차리기까지 걸리는 단계별 유예 시간
    /// </summary>
    public int[] NoticeDecrease { get { return noticeDecrease; } }
}
