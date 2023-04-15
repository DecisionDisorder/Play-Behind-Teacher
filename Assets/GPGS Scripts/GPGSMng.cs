using UnityEngine;
using System.Collections;
using GooglePlayGames;
using GooglePlayGames.BasicApi.SavedGame;
using System;
using GooglePlayGames.BasicApi;

/// <summary>
/// Google Play Game Service 시스템 관리 클래스
/// </summary>
public class GPGSMng : MonoBehaviour
{
    public Option option;

    /// <summary>
    /// 첫 로그인 시도인지 여부
    /// </summary>
    public static bool isFirstLoginAccess = true;

    void Start()
    {
        // 설정에서 구글 로그인을 허용하고, 처음 로그인 시도일 때 GPGS를 초기화하고 로그인 시도한다.
        if (option.googleLogin && isFirstLoginAccess)
        {
            InitializeGPGS();
            LoginGPGS();
            isFirstLoginAccess = false;
        }

    }
    
    /// <summary>
    /// 게임 종료 전 GPGS 로그아웃
    /// </summary>
    public void PressKey_OffGame()
    {
        LogoutGPGS();

        StartCoroutine(WaitLogoutGoogle());
    }
    // GPGS가 로그아웃 되었으면 앱 종료
    IEnumerator WaitLogoutGoogle()
    {
        yield return new WaitForEndOfFrame();

        if (!Social.localUser.authenticated)
            Application.Quit();

        StartCoroutine(WaitLogoutGoogle());
    }
    
    /// <summary>
    /// 로그인 되었는지 여부
    /// </summary>
    public bool bLogin
    {
        get;
        set;
    }
    
    /// <summary>
    /// GPGS 초기화
    /// </summary>
    public void InitializeGPGS()
    {
        bLogin = false;

        Cloud_Manager.Init();
        PlayGamesPlatform.Activate();
    }
    
    /// <summary>
    /// GPGS 로그인
    /// </summary>
    public void LoginGPGS()
    {
        // 로그인이 안되어 있으면 로그인 시도
        if (!Social.localUser.authenticated)
            Social.localUser.Authenticate(LoginCallBackGPGS);

    }

    /// <summary>
    /// GPGS 로그인 결과 반영
    /// </summary>
    /// <param name="result">결과</param>
    public void LoginCallBackGPGS(bool result)
    {
        bLogin = result;
    }

    /// <summary>
    /// GPGS 로그아웃
    /// </summary>
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