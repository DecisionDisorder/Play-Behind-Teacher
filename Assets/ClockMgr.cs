using UnityEngine;
using System.Collections;

/// <summary>
/// 배경 속 시계의 시침과 분침을 관리하는 클래스
/// </summary>
public class ClockMgr : MonoBehaviour {

    /// <summary>
    /// 시침의 중앙 점을 가리키는 오브젝트
    /// </summary>
    public GameObject ShortStick_center;
    /// <summary>
    /// 분침의 중앙 점을 가리키는 오브젝트
    /// </summary>
    public GameObject LongStick_center;

    void Start()
    {
        StartCoroutine(CheckingTime(0.0f));
    }
    /// <summary>
    /// 시계의 시간 정보 업데이트
    /// </summary>
    /// <param name="waitTime">업데이트 간격</param>
    IEnumerator CheckingTime(float waitTime)
    {
        yield return new WaitForSecondsRealtime(waitTime);
        
        // 시간 정보 얻어오기
        int h = System.DateTime.Now.Hour;
        h %= 12;
        int m = System.DateTime.Now.Minute;

        // 시침, 분침 회전 적용
        RotateShort(h,m);
        RotateLong(m);

        // 10초 뒤에 다시 확인
        StartCoroutine(CheckingTime(10f));
    }
    /// <summary>
    /// 시침 회전 각도 업데이트
    /// </summary>
    /// <param name="h">시간</param>
    /// <param name="m">분</param>
    public void RotateShort(int h, int m)
    {
        ShortStick_center.transform.rotation = Quaternion.Euler(0, 0, -(h * 30 + m / 2));
    }

    /// <summary>
    /// 분침 회전 각도 업데이트
    /// </summary>
    /// <param name="m">분</param>
    public void RotateLong(int m)
    {
        LongStick_center.transform.rotation = Quaternion.Euler(0, 0, -(m * 6));
    }
}
