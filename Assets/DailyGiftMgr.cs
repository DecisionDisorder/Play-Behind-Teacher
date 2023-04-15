using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

/// <summary>
/// 출석 보상 시스템 관리 클래스
/// </summary>
public class DailyGiftMgr : MonoBehaviour
{
    public CoinMgr coinMgr;
    public TicketMgr ticketMgr;
    public InGameMgr inGameMgr;
    public TutorialMgr tutorialMgr;
    public DataManager dataManager;
    public MainSceneMgr mainSceneMgr;

    /// <summary>
    /// 1년 중의 day 
    /// </summary>
    public int dayOfyear;
    /// <summary>
    /// 연도
    /// </summary>
    public int year;
    /// <summary>
    /// 오늘 보상을 획득했는지
    /// </summary>
    public bool todayGet;
    /// <summary>
    /// 출석 횟수
    /// </summary>
    public int numOfAttend;
    /// <summary>
    /// 날짜별 코인 보상
    /// </summary>
    public int[] CoinReward;

    /// <summary>
    /// 출석 보상 메뉴
    /// </summary>
    public GameObject DailyGift_Menu;
    /// <summary>
    /// 출석 보상 메뉴 활성화 애니메이션
    /// </summary>
    public Animation DailyGift_MenuAni;
    /// <summary>
    /// 출석 보상 수령 확인 이미지
    /// </summary>
    public GameObject[] DailyGiftCheck_imgs;
    /// <summary>
    /// 출석 보상 수령 확인 애니메이션
    /// </summary>
    public Animation[] DailyGiftCheck_ani;

    /// <summary>
    /// 오늘의 출석 보상 메뉴
    /// </summary>
    public GameObject DailyReward_Menu;
    /// <summary>
    /// 오늘의 출석 보상 메뉴 활성화 애니메이션
    /// </summary>
    public Animation DailyReward_MenuAni;
    /// <summary>
    /// 오늘의 출석 보상 아이콘 이미지
    /// </summary>
    public Image DailyRewardIcon_img;
    /// <summary>
    /// 오늘의 출석 보상 내용 텍스트
    /// </summary>
    public Text DailyRewardAmount_text;

    /// <summary>
    /// 리워드 종류 별 이미지 스프라이트 배열 (0: Coin / 1: RandomTicket / 2: Normal Ticket / 3: High Rank Ticket)
    /// </summary>
    public Sprite[] RewardKinds_sprite;
    /// <summary>
    /// 코인 획득 효과음 오디오 소스 
    /// </summary>
    public AudioSource CoinGet_AS;

    void Start()
    {
        if(!tutorialMgr.isTutorialOn)
            CheckingDailyGift();
    }

    /// <summary>
    /// 출석 보상 지급 화인
    /// </summary>
    public void CheckingDailyGift()
    {
        // 출석 보상을 모두 지급받지 않았는지 확인
        if (numOfAttend < CoinReward.Length)
        {
            // 출석 보상을 지급받은지 하루가 넘었는지 확인하여 출석 보상 지급
            if (dayOfyear < System.DateTime.Now.DayOfYear)
            {
                dayOfyear = System.DateTime.Now.DayOfYear;
                DailyGiftMenu_con(0);
                GiveDailyGift();
            }
            // 출석 보상을 받은 후로 연도가 바뀌었는지 확인하여 출석 보상 지급
            else if (year < System.DateTime.Now.Year)
            {
                year = System.DateTime.Now.Year;
                dayOfyear = System.DateTime.Now.DayOfYear;
                DailyGiftMenu_con(0);
                GiveDailyGift();
            }
        }
    }

    /// <summary>
    /// 출석 보상 지급
    /// </summary>
    void GiveDailyGift()
    {
        // 오늘의 출석 보상 메뉴 열기
        DailyReward_Menu.SetActive(true);
        DailyReward_MenuAni.Play();
        BackkeyMgr.numOfOpenedMenus++;

        // 보상이 코인일 때의 코인 보상 지급
        if (CoinReward[numOfAttend] != 0)
        {
            CoinMgr.Coin += (ulong)CoinReward[numOfAttend];
            CoinMgr.accumulatedCoins += (ulong)CoinReward[numOfAttend];
            coinMgr.setCoinText();
            CoinGet_AS.Play();
            DailyRewardIcon_img.sprite = RewardKinds_sprite[0];
            DailyRewardAmount_text.text = "x" + CoinReward[numOfAttend];
        }
        else
        {
            // 보상이 아이템일 때의 종류별 아이템 지급
            switch(numOfAttend + 1)
            {
                case 2:
                    //print("랜덤 티켓 x3");
                    ticketMgr.RandomItemTicket_amount += 3;
                    DailyRewardIcon_img.sprite = RewardKinds_sprite[1];
                    DailyRewardAmount_text.text = "x3";
                    break;
                case 5:
                    //Debug.Log("일반 아이템 교환권X3");
                    ticketMgr.NormalItemTicket_amount += 3;
                    DailyRewardIcon_img.sprite = RewardKinds_sprite[2];
                    DailyRewardAmount_text.text = "x3";
                    break;
                case 7:
                    //print("랜덤 티켓 x5");
                    ticketMgr.RandomItemTicket_amount += 5;
                    DailyRewardIcon_img.sprite = RewardKinds_sprite[1];
                    DailyRewardAmount_text.text = "x5";
                    break;
                case 10:
                    //Debug.Log("고급 아이템 교환권X3");
                    ticketMgr.HighRankItemTicket_amount += 3;
                    DailyRewardIcon_img.sprite = RewardKinds_sprite[3];
                    DailyRewardAmount_text.text = "x3";
                    break;
                case 12:
                    //print("랜덤 티켓 x10");
                    ticketMgr.RandomItemTicket_amount += 10;
                    DailyRewardIcon_img.sprite = RewardKinds_sprite[1];
                    DailyRewardAmount_text.text = "x10";
                    break;
                case 15:
                    //Debug.Log("고급 아이템 교환권X5");
                    ticketMgr.HighRankItemTicket_amount += 5;
                    DailyRewardIcon_img.sprite = RewardKinds_sprite[3];
                    DailyRewardAmount_text.text = "x5";
                    break;
            }
        }
        // 오늘 보상 받음 체크 및 출석 횟수 증가 처리
        todayGet = true;
        numOfAttend++;
        SettingCheck();
        dataManager.SaveData();
    }

    /// <summary>
    /// 출석 보상 수령 확인 UI 업데이트
    /// </summary>
    void SettingCheck()
    {
        for(int i = 0; i < numOfAttend; i++)
        {
            DailyGiftCheck_imgs[i].SetActive(true);
        }
    }
    /// <summary>
    /// 출석 보상 메뉴 관리 이벤트 리스너
    /// </summary>
    public void DailyGiftMenu_con(int key)
    {
        if(key.Equals(0))
        {
            if (BackkeyMgr.numOfOpenedMenus < 1)
            {
                SettingCheck();
                DailyGift_Menu.SetActive(true);
                DailyGift_MenuAni.Play();
                BackkeyMgr.numOfOpenedMenus++;
            }
            else
            {
                mainSceneMgr.WriteMessage("동시에 다른 두개의 메뉴를 띄을 수 없습니다.");
            }
        }
        else if(key.Equals(1))
        {
            inGameMgr.CloseMenu(DailyGift_MenuAni, DailyGift_Menu);
            BackkeyMgr.numOfOpenedMenus--;
        }
    }

    /// <summary>
    /// 출석 보상 메뉴 닫기
    /// </summary>
    public void DailyRewardOff()
    {
        inGameMgr.CloseMenu(DailyReward_MenuAni, DailyReward_Menu);
        BackkeyMgr.numOfOpenedMenus--;
    }
}
