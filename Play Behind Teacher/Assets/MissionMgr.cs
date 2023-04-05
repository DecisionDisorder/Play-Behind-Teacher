using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MissionMgr : MonoBehaviour {

    public TeacherMgr teacherMgr;
    Slider timer_slider;
    IEnumerator timer;

    public void StartTimer(float time, Slider target_slider)
    {
        timer_slider = target_slider;
        timer_slider.maxValue = time;
        timer = Timer(time);
        StartCoroutine(timer);
    }
    public void StopTimer(ref float rewardBonus)
    {
        StopCoroutine(timer);
        if(timer_slider.value / timer_slider.maxValue > 0.5f)
        {
            rewardBonus = 1.5f;
        }
        else
        {
            rewardBonus = 1;
        }
    }

    IEnumerator Timer(float time)
    {
        yield return new WaitForSeconds(0.1f);

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
