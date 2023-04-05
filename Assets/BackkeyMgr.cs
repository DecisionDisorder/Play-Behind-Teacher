using UnityEngine;
using System.Collections;

public class BackkeyMgr : MonoBehaviour {

    public static int numOfOpenedMenus;
    public static bool backEnabled = true;

    public Menus[] menus;
    public BackUpDataMgr backUpDataMgr;

    public GPGSMng gpgsMng;
    public GameObject GPGSlogout_Message;

    bool isQuitting = false;


    /*private void Awake()
    {
        backUpDataMgr.DataLoss_RecoveryMenu.SetActive(true);
    }*/

    void Start()
    {
        StartCoroutine(BackKeyInput());
    }

    IEnumerator BackKeyInput()
    {
        yield return new WaitForEndOfFrame();
        if (!isQuitting)
        {
            if (backEnabled)
            {
                if (!BackUpDataMgr.isCloudProcessing)
                {
                    if (Input.GetKey(KeyCode.Escape))
                    {
                        CheckingMenus();
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
    IEnumerator WaitUpdate()
    {
        yield return new WaitForSeconds(0.3f);

        StartCoroutine(BackKeyInput());
    }
    public void CheckingMenus()
    {
        if (numOfOpenedMenus > 0)
        {
            for (int i = 0; i < menus[numOfOpenedMenus - 1].OtherMenus.Length; i++)
            {
                if (menus[numOfOpenedMenus - 1].OtherMenus[i].activeInHierarchy)
                {
                    menus[numOfOpenedMenus - 1].OtherMenus[i].SetActive(false);
                }
            }
            numOfOpenedMenus--;
        }
        else
        {
            menus[0].OtherMenus[menus[0].OtherMenus.Length - 1].SetActive(true);
            numOfOpenedMenus++;
        }
    }
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
[System.Serializable]
public class Menus
{
    public GameObject[] OtherMenus;
}
