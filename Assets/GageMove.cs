using UnityEngine;
using System.Collections;
using UnityEngine.UI;

/// <summary>
/// 인내심 게이지 움직임 효과 관리 클래스
/// </summary>
public class GageMove : MonoBehaviour {

    /// <summary>
    /// 게이지 값
    /// </summary>
    public int UI_GageValue;
    /// <summary>
    /// 게이지 슬라이더
    /// </summary>
    public Slider Gage_slider;
    /// <summary>
    /// 게이지가 움직이는 코루틴 인스턴스
    /// </summary>
    IEnumerator gagemoving;
    
    /// <summary>
    /// 게이지 움직이기 시작
    /// </summary>
    /// <param name="startValue">시작 값</param>
    /// <param name="endValue">종료 값</param>
    /// <param name="down">감소 여부</param>
    public void StartGageMove(int startValue,int endValue, bool down)
    {
        // 코루틴 생성 및 시간
        gagemoving = GageMoving(startValue, endValue, down);
        StopCoroutine(gagemoving);
        // 게이지 값 초기화
        UI_GageValue = startValue * 10;
        StartCoroutine(gagemoving);
    }

    /// <summary>
    /// 게이지 움직임 효과 제어 코루틴
    /// </summary>
    /// <param name="startValue">시작 값</param>
    /// <param name="endValue">끝 값</param>
    /// <param name="down">감소 여부</param>
	IEnumerator GageMoving(int startValue, int endValue, bool down)
    {
        yield return new WaitForEndOfFrame();

        // 감소일 때
        if(down)
        {
            // 게이지 값 정해진 비율에 따라 감소
            UI_GageValue -= (startValue - endValue) / 6 * 10;
            Gage_slider.value = UI_GageValue;

            // 종료 값에 들 때까지 반복
            if (endValue * 10 < UI_GageValue)
                StartCoroutine(GageMoving(startValue, endValue, down));
        }
        // 게이지 증가 처리
        else
        { 
            UI_GageValue += (endValue - startValue) / 6 * 10;
            Gage_slider.value = UI_GageValue;

            if (endValue * 10 > UI_GageValue)
                StartCoroutine(GageMoving(startValue, endValue, down));
        }
    }
}
