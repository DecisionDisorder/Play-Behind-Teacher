using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// ������ ���̵� ������ ScriptableObject
/// </summary>
[CreateAssetMenu(fileName = "Difficulty Data", menuName = "Scriptable Object/Difficulty Data", order = int.MaxValue)]
public class DifficultyData : ScriptableObject
{
    [SerializeField]
    private float[] stageTimeMin;
    /// <summary>
    /// ������ ���̵� �ܰ� ���ӽð� �ּڰ�
    /// </summary>
    public float[] StageTimeMin { get { return stageTimeMin; } }

    [SerializeField]
    private float[] stageTimeMax;
    /// <summary>
    /// ������ ���̵� �ܰ� ���ӽð� �ִ�
    /// </summary>
    public float[] StageTimeMax { get { return stageTimeMax; } }

    [SerializeField]
    private float[] safeMin;
    /// <summary>
    /// �������� ���ƺ��� �ʴ� �ð��� �ܰ躰 �ּڰ�
    /// </summary>
    public float[] SafeMin { get { return safeMin; } }

    [SerializeField]
    private float[] safeMax;
    /// <summary>
    /// �������� ���ƺ��� �ʴ� �ð��� �ܰ躰 �ִ�
    /// </summary>
    public float[] SafeMax { get { return safeMax; } }


    [SerializeField]
    private float[] dangerMin;
    /// <summary>
    /// �������� ���ƺ��� �ִ� �ð��� �ܰ躰 �ּڰ�
    /// </summary>
    public float[] DangerMin { get { return dangerMin; } }

    [SerializeField]
    private float[] dangerMax;
    /// <summary>
    /// �������� ���ƺ��� �ִ� �ð��� �ܰ躰 �ִ�
    /// </summary>
    public float[] DangerMax { get { return dangerMax; } }


    [SerializeField]
    private float[] middleMin;
    /// <summary>
    /// ���ƺ��� �߰� ������ ���� �ð��� �ܰ躰 �ּڰ�
    /// </summary>
    public float[] MiddleMin { get { return middleMin; } }

    [SerializeField]
    private float[] middleMax;
    /// <summary>
    /// ���ƺ��� �߰� ������ ���� �ð��� �ܰ躰 �ִ�
    /// </summary>
    public float[] MiddleMax { get { return middleMax; } }

    [SerializeField]
    private float[] decreasePortion;
    /// <summary>
    /// �ܰ躰 �γ��� ���� ����
    /// </summary>
    public float[] DecreasePortion { get { return decreasePortion; } }

    [SerializeField]
    private float period;
    /// <summary>
    /// �γ��� ���� �ð� ����
    /// </summary>
    public float Period { get { return period; } }

    [SerializeField]
    private int[] noticeDecrease;
    /// <summary>
    /// �������� �˾���������� �ɸ��� �ܰ躰 ���� �ð�
    /// </summary>
    public int[] NoticeDecrease { get { return noticeDecrease; } }
}
