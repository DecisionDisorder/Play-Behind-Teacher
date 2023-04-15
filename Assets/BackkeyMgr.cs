using UnityEngine;
using System.Collections;

/// <summary>
/// 메뉴/앱 종료를 위한 'back key' 이벤트 관리 클래스
/// </summary>
public class BackkeyMgr : MonoBehaviour {
    /// <summary>
    /// 열려있는 메뉴 개수
    /// </summary>
    public static int numOfOpenedMenus;
    /// <summary>
    /// back 이벤트를 허용할지 여부
    /// </summary>
    public static bool backEnabled = true;

    /// <summary>
    /// 비슷한 성격의 메뉴끼리 모아놓은 오브젝트 배열
    /// </summary>
    public Menus[] menus;

    public BackUpDataMgr backUpDataMgr;
    public GPGSMng gpgsMng;

    /// <summary>
    /// Google Play Game Service 로그아웃 메시지 오브젝트
    /// </summary>
    public GameObject GPGSlogout_Message;

    /// <summary>
    /// 게임 종료중인지 여부
    /// </summary>
    private bool isQuitting = false;

    void Start()
    {
        StartCoroutine(BackKeyInput());
    }

    /// <summary>
    /// Back key Input이 있는지 검사
    /// </summary>
    IEnumerator BackKeyInput()
    {
        yield return new WaitForEndOfFrame();
        // 게임이 이미 종료 대기중이 아닌지 확인
        if (!isQuitting)
        {
            // 뒤로가기 키 입력이 가능한지 확인
            if (backEnabled)
            {
                // 클라우드 저장/불러오기 과정중이 아닌지 확인
                if (!BackUpDataMgr.isCloudProcessing)
                {
                    // back key가 입력되면 
                    if (Input.GetKey(KeyCode.Escape))
                    {
                        // 열려있는 메뉴 확인 및 종료 UI 활성화
                        CheckingMenus();
                        // 연속 입력을 방지하기 위한 딜레이 코루틴 시작
                        StartCoroutine(WaitUpdate());
                    }
                    else
                        StartCoroutine(BackKeyInput());
                }
                else
                    StartCoroutine(BackKeyInput());
            }
            else
                StartCoroutine(BackKeyInput());
        }
    }
    /// <summary>
    /// Back key 연속 입력 방지 코루틴
    /// </summary>
    IEnumerator WaitUpdate()
    {
        yield return new WaitForSeconds(0.3f);

        StartCoroutine(BackKeyInput());
    }
    /// <summary>
    /// 열려있는 메뉴가 있으면 메뉴를 종료하고, 없으면 종료 UI 활성화
    /// </summary>
    public void CheckingMenus()
    {
        // 열려있는 메뉴가 있으면
        if (numOfOpenedMenus > 0)
        {
            // 열려있는 메뉴를 닫는다.
            for (int i = 0; i < menus[numOfOpenedMenus - 1].OtherMenus.Length; i++)
            {
                if (menus[numOfOpenedMenus - 1].OtherMenus[i].activeInHierarchy)
                {
                    menus[numOfOpenedMenus - 1].OtherMenus[i].SetActive(false);
                }
            }
            numOfOpenedMenus--;
        }
        // 열려있는 메뉴가 없으면 게임 종료 UI를 띄운다.
        else
        {
            menus[0].OtherMenus[menus[0].OtherMenus.Length - 1].SetActive(true);
            numOfOpenedMenus++;
        }
    }
    /// <summary>
    /// 게임 종료 버튼 이벤트 리스너
    /// </summary>
    public void Button_ExitMenu(int key)
    {
        switch(key)
        {
            case 0://Exit
                if (Application.platform.Equals(RuntimePlatform.Android))
                {
                    isQuitting = true;
                    GPGSlogout_Message.SetActive(true);
                    gpgsMng.PressKey_OffGame();
                }
                else
                    Debug.Log("게임 종료");
                break;
            case 1:
                menus[0].OtherMenus[menus[0].OtherMenus.Length-1].SetActive(false);
                numOfOpenedMenus--;
                break;
        }
    }
}
/// <summary>
/// 성격이 비슷한 메뉴끼리 모아놓은 클래스
/// </summary>
[System.Serializable]
public class Menus
{
    /// <summary>
    /// 메뉴 오브젝트 배열
    /// </summary>
    public GameObject[] OtherMenus;
}
