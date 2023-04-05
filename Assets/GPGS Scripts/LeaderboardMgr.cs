using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GooglePlayGames;
using UnityEngine.SocialPlatforms;
using UnityEngine.UI;

public class LeaderboardMgr : MonoBehaviour {

    public static string tvLeaderboardID = "CgkIzvPsr_sXEAIQBw";
    public static string katalkLeaderboardID = "CgkIzvPsr_sXEAIQCA";
    public static string snackLeaderboardID = "CgkIzvPsr_sXEAIQCQ";

    public GameObject Messages;
    public Text Message_text;

    public GameObject Leaderboard_menu;
    public Animation Leaderboard_MenuAni;
    public GameObject LeaderboardRecommend_Menu;

    public InGameMgr inGameMgr;
    public MainSceneMgr mainSceneMgr;

    private void Start()
    {
        closemessage = CloseMessage(1.5f);
    }

    public void SendBoardScore(long score, string ID, ref bool failed)
    {
        bool failed_inside = false;
        if (Social.localUser.authenticated)
        {
            Social.ReportScore(score, ID, (bool success) =>
            {
                if (success)
                {
                    LeaderboardRecommend_Menu.SetActive(true);
                    failed_inside = false;
                }
                else
                {
                    //Debug.Log("Leaderboard Failed");
                    WriteMessages("리더보드 데이터 전송에 실패하였습니다.");
                    LeaderboardRecommend_Menu.SetActive(false);
                    failed_inside = true;
                }
            });
            failed = failed_inside;
        }
        else
        {
            //Debug.Log("Login Failed");
            WriteMessages("로그인에 실패하였습니다.");
            LeaderboardRecommend_Menu.SetActive(false);
            failed = true;
        }
    }

    public void OpenLeaderboard(string ID)
    {
        if (Social.localUser.authenticated)
            PlayGamesPlatform.Instance.ShowLeaderboardUI(ID);
        else
        {
            //Debug.Log("Failed");
            WriteMessages("로그인에 실패하였습니다.");
        }
    }

    IEnumerator closemessage;
    void WriteMessages(string text, float closetime = 1.5f)
    {
        StopCoroutine(closemessage);

        Messages.SetActive(true);

        Message_text.text = text;

        closemessage = CloseMessage(closetime);
        StartCoroutine(closemessage);
    }

    IEnumerator CloseMessage(float closetime)
    {
        yield return new WaitForSeconds(closetime);

        Messages.SetActive(false);
    }

    public void MenuControl(int key)
    {
        switch(key)
        {
            case 0://리더보드 ON
                if (BackkeyMgr.numOfOpenedMenus < 1)
                {
                    Leaderboard_menu.SetActive(true);
                    Leaderboard_MenuAni.Play();
                    BackkeyMgr.numOfOpenedMenus++;
                }
                else
                {
                    mainSceneMgr.WriteMessage("동시에 다른 두개의 메뉴를 띄을 수 없습니다.");
                }
                break;
            case 1://리더보드 OFF
                //Leaderboard_menu.SetActive(false);
                inGameMgr.CloseMenu(Leaderboard_MenuAni,Leaderboard_menu);
                BackkeyMgr.numOfOpenedMenus--;
                break;
            case 2://TV조회
                OpenLeaderboard(tvLeaderboardID);
                break;
            case 3://KT 조회
                OpenLeaderboard(katalkLeaderboardID);
                break;
            case 4://SN 조회
                OpenLeaderboard(snackLeaderboardID);
                break;
        }
    }
}
