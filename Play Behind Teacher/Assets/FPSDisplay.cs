using UnityEngine;
using System.Collections;

public class FPSDisplay : MonoBehaviour {

    public InGameMgr inGameMgr;

    float deltaTime = 0.0f;
    public static float FPS;
    public Color FpsColor;
    void Update()
    {
        deltaTime += (Time.deltaTime - deltaTime) * 0.1f;
    }

    void OnGUI()
    {
        if (!inGameMgr.isPause)
        {
            int w = Screen.width, h = Screen.height;

            GUIStyle style = new GUIStyle();

            Rect rect = new Rect(0, 0, w, h * 2 / 100);
            style.alignment = TextAnchor.UpperRight;
            style.fontSize = h * 2 / 100;
            style.normal.textColor = FpsColor;
            float msec = deltaTime * 1000.0f;
            FPS = 1.0f / deltaTime;
            string text = string.Format("{0:0.0} ms ({1:0.} fps)", msec, FPS);
            GUI.Label(rect, text, style);
        }
    }
}
