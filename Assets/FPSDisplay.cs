using UnityEngine;
using System.Collections;

/// <summary>
/// 게임의 실시간 FPS를 보여주는 클래스
/// </summary>
public class FPSDisplay : MonoBehaviour {

    public InGameMgr inGameMgr;

    /// <summary>
    /// 프레임 간격 시간
    /// </summary>
    float deltaTime = 0.0f;
    /// <summary>
    /// 실시간 초당 프레임(Frame Per Second)
    /// </summary>
    public static float FPS;
    /// <summary>
    /// FPS 표시 색상
    /// </summary>
    public Color FpsColor;

    void Update()
    {
        // 프레임 간격 시간 계산
        deltaTime += (Time.deltaTime - deltaTime) * 0.1f;
    }

    void OnGUI()
    {
        // 일시정지가 아닐 때에만 업데이트
        if (!inGameMgr.isPause)
        {
            // OnGUI 상에서 Label로 텍스트 표시
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
