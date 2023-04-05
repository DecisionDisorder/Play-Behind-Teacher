using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SinematicController : MonoBehaviour {

    public Animation[] SinematicAnimations;

    public TeacherMgr teacherMgr;

    public GameObject normal_teacher;
    public GameObject angry_teacher;

    

    public int Step = 0;

	void Start () {
	}

    private void Update()
    {
        if(Input.GetKey(KeyCode.Q))
        {
            teacherMgr.WritingSound_AS.Stop();
            teacherMgr.Teacher_condition[2].SetActive(false);
            teacherMgr.Teacher_condition[1].SetActive(true);
        }
        if(Input.GetKey(KeyCode.W))
        {
            teacherMgr.SetRed();
        }
        if(Input.GetKey(KeyCode.E))
        {
            normal_teacher.SetActive(false);
            angry_teacher.SetActive(true);
        }
        if (Input.GetKey(KeyCode.R))
        {
            SinematicAnimations[0].Play();
            StartCoroutine(WaitforAnimationMiddle("0_CameraMove", 1.5f));
        }
    }

    IEnumerator WaitforAnimationEnd(Animation waitAni)
    {
        while(waitAni.isPlaying)
        {
            yield return new WaitForEndOfFrame();
        }
        Step++;
        SinematicAnimations[Step].Play();

    }
    IEnumerator WaitforAnimationMiddle(string aniName, float time)
    {
        while(SinematicAnimations[Step][aniName].time < time)
        {
            yield return new WaitForEndOfFrame();
        }
        Step++;
        SinematicAnimations[Step].Play();
    }
}
