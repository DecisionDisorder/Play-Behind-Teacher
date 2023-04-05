using UnityEngine;
using System.Collections;

public class ClockMgr : MonoBehaviour {

    public GameObject ShortStick_center;
    public GameObject LongStick_center;

    void Start()
    {
        StartCoroutine(CheckingTime(0.0f));
    }
    IEnumerator CheckingTime(float waitTime)
    {
        yield return new WaitForSecondsRealtime(waitTime);

        int h = System.DateTime.Now.Hour;
        h %= 12;
        int m = System.DateTime.Now.Minute;

        RotateShort(h,m);
        RotateLong(m);

        StartCoroutine(CheckingTime(10f));
    }
    public void RotateShort(int h, int m)
    {
        ShortStick_center.transform.rotation = Quaternion.Euler(0, 0, -(h * 30 + m / 2));
    }

    public void RotateLong(int m)
    {
        LongStick_center.transform.rotation = Quaternion.Euler(0, 0, -(m * 6));
    }
}
