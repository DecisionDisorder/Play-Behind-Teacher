using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

/// <summary>
/// (Unused) 미션 시스템 관리 클래스
/// </summary>
public class MissionMgr : MonoBehaviour {

    public TeacherMgr teacherMgr;

    /// <summary>
    /// 타이머 슬라이더
    /// </summary>
    Slider timer_slider;
    /// <summary>
    /// 시간 세는 코루틴
    /// </summary>
    IEnumerator timer;

    /// <summary>
    /// 타이머 시작
    /// </summary>
    /// <param name="time">지속 시간</param>
    /// <param name="target_slider">타겟 슬라이더</param>
    public void StartTimer(float time, Slider target_slider)
    {
        // 슬라이더 설정
        timer_slider = target_slider;
        timer_slider.maxValue = time;
        // 코루틴 시작
        timer = Timer(time);
        StartCoroutine(timer);
    }
    /// <summary>
    /// 타이머 코루틴 종료
    /// </summary>
    /// <param name="rewardBonus">리워드 보너스 배율</param>
    public void StopTimer(ref float rewardBonus)
    {
        // 타이머 중단
        StopCoroutine(timer);
        // 흐른 시간이 주어진 시간보다 50% 이상 남았을 떄 보상 1.5배 지급
        if(timer_slider.value / timer_slider.maxValue > 0.5f)
        {
            rewardBonus = 1.5f;
        }
        else
        {
            rewardBonus = 1;
        }
    }

    /// <summary>
    /// 미션 타이머 코루틴
    /// </summary>
    /// <param name="time">남은 시간</param>
    IEnumerator Timer(float time)
    {
        yield return new WaitForSeconds(0.1f);

        // 선생님이 칠판보고 있을 때 차감 및 슬라이더에 반영
        if (!teacherMgr.isTeacherFront)
        {
            time -= 0.1f;
            timer_slider.value = time;
        }

        if (time > 0)
        {
            timer = Timer(time);
            StartCoroutine(timer);
        }
        else
        {
            //미션 실패
        }
    }
	
}
