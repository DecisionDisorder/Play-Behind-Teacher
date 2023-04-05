using UnityEngine;
using System.Collections;
using GooglePlayGames;
using GooglePlayGames.BasicApi.SavedGame;
using System;
using GooglePlayGames.BasicApi;

public class GPGSMng : MonoBehaviour
{
    //public GameObject LogoutMessage;
    public Option option;
    public static bool isFirstLoginAccess = true;

    void Start()
    {
        if (option.googleLogin && isFirstLoginAccess)
        {
            InitializeGPGS();
            LoginGPGS();
            //Debug.Log("Login Tried");
            isFirstLoginAccess = false;
        }

    }
    /// 

    /// 현재 로그인 중인지 체크

    /// 

    public void PressKey_OffGame()
    {
        LogoutGPGS();
        //LogoutMessage.SetActive(true);

        StartCoroutine(WaitLogoutGoogle());
    }
    IEnumerator WaitLogoutGoogle()
    {
        yield return new WaitForEndOfFrame();

        if (!Social.localUser.authenticated)
            Application.Quit();

        StartCoroutine(WaitLogoutGoogle());
    }
    
    public bool bLogin
    {
        get;
        set;
    }
    
    /// 

    /// GPGS를 초기화 합니다.

    /// 

    public void InitializeGPGS()
    {
        bLogin = false;

        Cloud_Manager.Init();
        PlayGamesPlatform.Activate();
    }
    /// GPGS를 로그인 합니다.

    public void LoginGPGS()
    {
        // 로그인이 안되어 있으면

        if (!Social.localUser.authenticated)
            Social.localUser.Authenticate(LoginCallBackGPGS);

    }

    /// GPGS Login Callback


    /// 


    ///  결과 


    public void LoginCallBackGPGS(bool result)
    {
        bLogin = result;
    }

    /// 


    /// GPGS를 로그아웃 합니다.

    public void LogoutGPGS()
    {
        // 로그인이 되어 있으면
        if (Social.localUser.authenticated)
        {
            ((PlayGamesPlatform)Social.Active).SignOut();
            bLogin = false;
        }
    }
}