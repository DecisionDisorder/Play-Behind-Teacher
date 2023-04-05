using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AchievementMgr : MonoBehaviour {

    public CoinMgr coinMgr;
    public TvGameMgr tvGameMgr;
    public KatalkGameMgr katalkGameMgr;
    public SnackGameMgr snackGameMgr;
    public InGameMgr inGameMgr;
    public DataManager dataManager;
    public MainSceneMgr mainSceneMgr;

    public Achv_Item[] achievements;
    public GameObject Achievement_Menu;
    public Animation Achievement_MenuAni;
    public AudioSource CoinGet_AS;
    public GameObject Badge;
    public int numOfAchieve = 0;

    private void Start()
    {
        CheckAll();
    }

    public void AchvMenuControl(int key)
    {
        switch(key)
        {
            case 0:
                if (BackkeyMgr.numOfOpenedMenus < 1)
                {
                    Achievement_Menu.SetActive(true);
                    BackkeyMgr.numOfOpenedMenus++;
                    Achievement_MenuAni.Play();
                    SetNameLevelText(-1);
                    CheckAll();
                }
                else
                {
                    mainSceneMgr.WriteMessage("동시에 다른 두개의 메뉴를 띄을 수 없습니다.");
                }
                break;
            case 1:
                BackkeyMgr.numOfOpenedMenus--;
                inGameMgr.CloseMenu(Achievement_MenuAni, Achievement_Menu);
                break;
        }
    }

    public void CheckAll()
    {
        numOfAchieve = 0;
        CheckBestscore();
        CheckCoin();
        CheckAcuCoin();
        CheckFinish();
        CheckTvMission();
        CheckKtMission();
        CheckSnackMission();
        CheckAllMission();
        CheckBadge();
    }
	public void CheckBestscore()//최고점수 달성
    {
        int code = 0;

        ulong bs1 = tvGameMgr.BestScore, bs2 = katalkGameMgr.BestScore, bs3 = snackGameMgr.BestScore;

        if(bs1 > bs2 && bs1 > bs3)
        {
            CheckingAchv(bs1,code);
        }
        else if(bs2 > bs1 && bs2 > bs3)
        {
            CheckingAchv(bs2, code);
        }
        else
        {

            CheckingAchv(bs3, code);
        }
    }
    public void CheckCoin()//보유 코인 달성
    {
        int code = 1;
        CheckingAchv(CoinMgr.Coin, code);
    }
    public void CheckAcuCoin()//누적 코인 달성
    {
        int code = 2;
        CheckingAchv(CoinMgr.accumulatedCoins, code);
    }
    public void CheckFinish()//걸린 횟수 달성
    {
        int code = 3;
        CheckingAchv((ulong)inGameMgr.numOfFinish, code);
    }
    public void CheckTvMission()//TV미션 성공횟수
    {
        int code = 4;
        CheckingAchv((ulong)tvGameMgr.numOfMissionClear, code);
    }
    public void CheckKtMission()//까톡미션 성공횟수
    {
        int code = 5;
        CheckingAchv((ulong)katalkGameMgr.numOfMissionClear, code);
    }
    public void CheckSnackMission()//과자미션 성공 횟수
    {
        int code = 6;
        CheckingAchv((ulong)snackGameMgr.numOfMissionClear, code);
    }
    public void CheckAllMission()
    {
        int code = 7;
        CheckingAchv((ulong)(tvGameMgr.numOfMissionClear + katalkGameMgr.numOfMissionClear + snackGameMgr.numOfMissionClear), code);
    }
    public void CheckingAchv(ulong target, int code)
    {
        if (achievements[code].step < achievements[code].rewards.Length)
        {
            achievements[code].State_slider.maxValue = achievements[code].StepConditions[achievements[code].step];

            string t = string.Format("{0:#,###}", target);
            if (t.Equals("")) { t = "0"; }
            string c = string.Format("{0:#,###}", achievements[code].StepConditions[achievements[code].step]);

            achievements[code].State_Text.text = t + "/" + c;
            achievements[code].State_slider.value = target;
            achievements[code].Reward_text.text = "+" + achievements[code].rewards[achievements[code].step];

            if (target >= (ulong)achievements[code].StepConditions[achievements[code].step])
            {
                achievements[code].State_img.color = Color.green;
                achievements[code].Reward_text.color = Color.green;
                numOfAchieve++;
            }
            else
            {
                achievements[code].State_img.color = Color.yellow;
                achievements[code].Reward_text.color = Color.yellow;
            }
        }
        else
        {
            achievements[code].State_slider.value = achievements[code].State_slider.maxValue;
            achievements[code].State_img.color = Color.green;
            achievements[code].State_Text.text = "도전과제 달성 완료";
            achievements[code].State_Text.color = Color.red;
            achievements[code].Reward_text.text = "완료";
            achievements[code].Reward_text.color = Color.red;
        }
    }
    public void OfferReward(int code)
    {
        if (achievements[code].step < achievements[code].rewards.Length)
        {
            if (achievements[code].State_img.color.Equals(Color.green))
            {
                CoinMgr.Coin += (ulong)achievements[code].rewards[achievements[code].step];
                CoinMgr.accumulatedCoins += (ulong)achievements[code].rewards[achievements[code].step];
                coinMgr.setCoinText();
                achievements[code].step++;
                SetNameLevelText(code);
                CoinGet_AS.Play();
                numOfAchieve--;
                CheckBadge();
                CheckCoin();
                CheckAcuCoin();

                switch (code)
                {
                    case 0:
                        CheckBestscore();
                        break;
                    case 1:
                        CheckCoin();
                        break;
                    case 2:
                        CheckAcuCoin();
                        break;
                    case 3:
                        CheckFinish();
                        break;
                    case 4:
                        CheckTvMission();
                        break;
                    case 5:
                        CheckKtMission();
                        break;
                    case 6:
                        CheckSnackMission();
                        break;
                    case 7:
                        CheckAllMission();
                        break;
                }
                dataManager.SaveData();
            }
        }
        else
        {
            mainSceneMgr.WriteMessage("이미 모두 완료한 도전과제 입니다!");
        }
    }
    void CheckBadge()
    {
        if (numOfAchieve > 0)
            Badge.SetActive(true);
        else
            Badge.SetActive(false);
    }
    void SetNameLevelText(int num)
    {
        if (num.Equals(-1))
        {
            for (int i = 0; i < achievements.Length; i++)
                SetNameLevelText(i);
        }
        else
        {
            if(achievements[num].step < achievements[num].rewards.Length)
                achievements[num].name_text.text = achievements[num].name + " (" + (achievements[num].step + 1) + ")";
            else
                achievements[num].name_text.text = achievements[num].name + " (Max)";
        }
    }
}
[System.Serializable]
public class Achv_Item
{
    public string name;
    public int step;
    public int[] StepConditions;//단계별 조건
    public int[] rewards;//단계별 보상
    public Text Reward_text;
    public Text State_Text;
    public Text name_text;
    public Slider State_slider;
    public Image State_img;
}