using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DailyGiftMgr : MonoBehaviour
{
    public CoinMgr coinMgr;
    public TicketMgr ticketMgr;
    public InGameMgr inGameMgr;
    public TutorialMgr tutorialMgr;
    public DataManager dataManager;
    public MainSceneMgr mainSceneMgr;

    public int dayOfyear;
    public int year;
    public bool todayGet;
    public int numOfAttend;
    public int[] CoinReward;

    public GameObject DailyGift_Menu;
    public Animation DailyGift_MenuAni;
    public GameObject[] DailyGiftCheck_imgs;
    public Animation[] DailyGiftCheck_ani;

    public GameObject DailyReward_Menu;
    public Animation DailyReward_MenuAni;
    public Image DailyRewardIcon_img;
    public Text DailyRewardAmount_text;

    public Sprite[] RewardKinds_sprite;//0: Coin / 1: RandomTicket / 2: Normal Ticket / 3: High Rank Ticket
    public AudioSource CoinGet_AS;

    void Start()
    {
        if(!tutorialMgr.isTutorialOn)
            CheckingDailyGift();
    }
    public void CheckingDailyGift()
    {
        if (numOfAttend < CoinReward.Length)
        {
            if (dayOfyear < System.DateTime.Now.DayOfYear)//다음날 이후로 넘어가는 경우
            {
                dayOfyear = System.DateTime.Now.DayOfYear;
                DailyGiftMenu_con(0);
                GiveDailyGift();
            }
            else if (year < System.DateTime.Now.Year)//다음해로 넘어가는 경우
            {
                year = System.DateTime.Now.Year;
                dayOfyear = System.DateTime.Now.DayOfYear;
                DailyGiftMenu_con(0);
                GiveDailyGift();
            }
            //else if (!todayget)
            //{
            //    dailygiftmenu_con(0);
            //    givedailygift();
            //}
        }
    }

    void GiveDailyGift()
    {
        DailyReward_Menu.SetActive(true);
        DailyReward_MenuAni.Play();
        BackkeyMgr.numOfOpenedMenus++;

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
        todayGet = true;
        numOfAttend++;
        SettingCheck();
        dataManager.SaveData();
    }

    void SettingCheck()
    {
        for(int i = 0; i < numOfAttend; i++)
        {
            DailyGiftCheck_imgs[i].SetActive(true);
        }
    }

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

    public void DailyRewardOff()
    {
        inGameMgr.CloseMenu(DailyReward_MenuAni, DailyReward_Menu);
        BackkeyMgr.numOfOpenedMenus--;
    }
}
