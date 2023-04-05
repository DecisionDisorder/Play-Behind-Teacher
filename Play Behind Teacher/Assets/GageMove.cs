using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class GageMove : MonoBehaviour {

    public int UI_GageValue;
    public Slider Gage_slider;
    IEnumerator gagemoving;
    
    public void StartGageMove(int startValue,int endValue, bool down)//value: 
    {
        gagemoving = GageMoving(startValue, endValue, down);
        StopCoroutine(gagemoving);
        UI_GageValue = startValue * 10;
        StartCoroutine(gagemoving);
    }

	IEnumerator GageMoving(int startValue, int endValue, bool down)
    {
        yield return new WaitForEndOfFrame();

        if(down)
        {
            UI_GageValue -= (startValue - endValue) / 6 * 10;
            Gage_slider.value = UI_GageValue;

            if (endValue * 10 < UI_GageValue)
                StartCoroutine(GageMoving(startValue, endValue, down));
        }
        else
        {
            UI_GageValue += (endValue - startValue) / 6 * 10;
            Gage_slider.value = UI_GageValue;

            if (endValue * 10 > UI_GageValue)
                StartCoroutine(GageMoving(startValue, endValue, down));
        }
    }
}
