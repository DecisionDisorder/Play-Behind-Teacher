using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GooglePlayGames;
using UnityEngine.SocialPlatforms;
using UnityEngine.UI;

/// <summary>
/// Google Play 리더보드 관리 클래스
/// </summary>
public class LeaderboardMgr : MonoBehaviour {

    /// <summary>
    /// TV 게임 리더보드 ID
    /// </summary>
    public static string tvLeaderboardID = "CgkIzvPsr_sXEAIQBw";
    /// <summary>
    /// 카톡 게임 리더보드 ID
    /// </summary>
    public static string katalkLeaderboardID = "CgkIzvPsr_sXEAIQCA";
    /// <summary>
    /// 간식 게임 리더보드 ID
    /// </summary>
    public static string snackLeaderboardID = "CgkIzvPsr_sXEAIQCQ";

    /// <summary>
    /// 메시지 오브젝트
    /// </summary>
    public GameObject Messages;
    /// <summary>
    /// 메시지 내용 텍스트
    /// </summary>
    public Text Message_text;

    /// <summary>
    /// 리더보드 메뉴
    /// </summary>
    public GameObject Leaderboard_menu;
    /// <summary>
    /// 리더보드 메뉴 활성화 애니메이션 효과
    /// </summary>
    public Animation Leaderboard_MenuAni;
    /// <summary>
    /// 리더보드 확인 추천 메뉴
    /// </summary>
    public GameObject LeaderboardRecommend_Menu;

    public InGameMgr inGameMgr;
    public MainSceneMgr mainSceneMgr;

    private void Start()
    {
        closemessage = CloseMessage(1.5f);
    }

    /// <summary>
    /// 최고점수를 리더보드에 등록한다.
    /// </summary>
    /// <param name="score">점수</param>
    /// <param name="ID">리더보드 ID</param>
    /// <param name="failed">전송 실패했는지 여부</param>
    public void SendBoardScore(long score, string ID, ref bool failed)
    {
        bool failed_inside = false;
        // 로그인 확인
        if (Social.localUser.authenticated)
        {
            // 최고 점수 올리기
            Social.ReportScore(score, ID, (bool success) =>
            {
                // 성공했을 때 확인 추천 메뉴 활성화
                if (success)
                {
                    LeaderboardRecommend_Menu.SetActive(true);
                    failed_inside = false;
                }
                // 실패했을 때 관련 메시지 출력
                else
                {
                    WriteMessages("리더보드 데이터 전송에 실패하였습니다.");
                    LeaderboardRecommend_Menu.SetActive(false);
                    failed_inside = true;
                }
            });
            failed = failed_inside;
        }
        // 로그인되지 않음 
        else
        {
            WriteMessages("로그인에 실패하였습니다.");
            LeaderboardRecommend_Menu.SetActive(false);
            failed = true;
        }
    }

    /// <summary>
    /// 리더보드 열기
    /// </summary>
    /// <param name="ID"></param>
    public void OpenLeaderboard(string ID)
    {
        // 로그인 확인 후 활성화
        if (Social.localUser.authenticated)
            PlayGamesPlatform.Instance.ShowLeaderboardUI(ID);
        else
        {
            WriteMessages("로그인에 실패하였습니다.");
        }
    }

    IEnumerator closemessage;
    /// <summary>
    /// 메시지 노출
    /// </summary>
    /// <param name="text">메시지 내용</param>
    /// <param name="closetime">지속 시간</param>
    void WriteMessages(string text, float closetime = 1.5f)
    {
        StopCoroutine(closemessage);

        Messages.SetActive(true);

        Message_text.text = text;

        closemessage = CloseMessage(closetime);
        StartCoroutine(closemessage);
    }

    /// <summary>
    /// 메시지 종료 대기 코루틴
    /// </summary>
    /// <param name="closetime">대기 시간</param>
    IEnumerator CloseMessage(float closetime)
    {
        yield return new WaitForSeconds(closetime);

        Messages.SetActive(false);
    }

    /// <summary>
    /// 리더보드 관련 버튼 이벤트 관리
    /// </summary>
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
