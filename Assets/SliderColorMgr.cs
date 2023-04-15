using UnityEngine;
using System.Collections;
using UnityEngine.UI;

/// <summary>
/// 인내심 슬라이더 색상 설정 관리 클래스
/// </summary>
public class SliderColorMgr : MonoBehaviour {
    /// <summary>
    /// 인내심 슬라이더의 fill 이미지
    /// </summary>
    public Image EnduranceBar_img;

    /// <summary>
    /// 인내심 비율 별 색상
    /// </summary>
    public Color[] BarColors = new Color[4];
    /// <summary>
    /// 졸림 효과
    /// </summary>
    public GameObject SleepyEffect;

    public void SetColor(int percentage)
    {
        // 75% 이상일 때는 0번 색상
        if(percentage >= 75)
        {
            EnduranceBar_img.color = BarColors[0];
        }
        // 55% 이상일 때는 1번 색상
        else if(percentage >= 55)
        {
            EnduranceBar_img.color = BarColors[1];
        }
        // 30% 이상일 때는 2번 색상 (졸림 효과 비활성화)
        else if(percentage >= 30)
        {
            EnduranceBar_img.color = BarColors[2];
            SleepyEffect.SetActive(false);
        }
        // 그 미만일 때는 3번 색상 (졸림 효과 활성화)
        else
        {
            EnduranceBar_img.color = BarColors[3];
            SleepyEffect.SetActive(true);
        }
    }
}
