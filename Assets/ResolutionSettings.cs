using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class ResolutionSettings : MonoBehaviour {

    public CanvasScaler canvas;
    public FloatingObjects[] floatingObjects;
    public FloatingTexts[] floatingTexts;

    int s_width,s_height;
    public static bool is18vs9 = false;
    
    void Awake()
    {
        s_width = Screen.width;
        s_height = Screen.height;

        if(s_height/s_width >= 2)
        {
            SetBezelLessDisplay();
            is18vs9 = true;
            Screen.SetResolution(s_width, s_width * 2, false);
        }
        else
        {
            is18vs9 = false;
            Screen.SetResolution(s_width, s_width / 9 * 16, false);
        }
    }

    void SetBezelLessDisplay()
    {
        canvas.referenceResolution = new Vector2(720,1440);
        for(int i = 0; i < floatingObjects.Length;i++)
        {
            floatingObjects[i].floatingObject.transform.localPosition = new Vector3(floatingObjects[i].posX,floatingObjects[i].posY);
            floatingObjects[i].Object_rect.sizeDelta = new Vector2(floatingObjects[i].width, floatingObjects[i].height);
        }
        SetBezelLessFontSize();
    }
    void SetBezelLessFontSize()
    {
        for(int i = 0; i < floatingTexts.Length; i++)
        {
            floatingTexts[i].floatingText.fontSize = floatingTexts[i].fontSize;
        }
    }
}
[System.Serializable]
public class FloatingObjects
{
    public GameObject floatingObject;
    public RectTransform Object_rect;
    public float posX;
    public float posY;
    public float width;
    public float height;
}
[System.Serializable]
public class FloatingTexts
{
    public Text floatingText;
    public int fontSize;
}