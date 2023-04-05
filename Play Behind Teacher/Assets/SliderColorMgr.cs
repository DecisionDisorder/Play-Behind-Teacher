using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class SliderColorMgr : MonoBehaviour {

    public Image EnduranceBar_img;

    public Color[] BarColors = new Color[4];
    public GameObject SleepyEffect;

    //public Color[] notice_BarColors = new Color[3];
    //public Image noticeBar_img;

    public void SetColor(int percentage)
    {
        if(percentage >= 75)
        {
            EnduranceBar_img.color = BarColors[0];
        }
        else if(percentage >= 55)
        {
            EnduranceBar_img.color = BarColors[1];
        }
        else if(percentage >= 30)
        {
            EnduranceBar_img.color = BarColors[2];
            SleepyEffect.SetActive(false);
        }
        else
        {
            EnduranceBar_img.color = BarColors[3];
            SleepyEffect.SetActive(true);
        }
    }
    /*
    public void SetColor_notice(int percentage)
    {
        if(percentage >= 70)
        {
            noticeBar_img.color = notice_BarColors[0];
        }
        else if(percentage >= 40)
        {
            noticeBar_img.color = notice_BarColors[1];
        }
        else
        {
            noticeBar_img.color = notice_BarColors[2];
        }
    }*/
}
