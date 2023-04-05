using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AdManager : MonoBehaviour
{

    public GameObject Reward_Menu;
    public GameObject resetTime_RewardMenu;

    public AdMobMgr admobMgr;
    public UnityAdsMgr unityAdsMgr;
    public DataManager dataManager;
    public ItemMgr itemMgr;
    public CoinMgr coinMgr;

    public int ReduceTime = 2400;

    public int numOfAdView;

    public static int numOfPlay_forad;

    int randomAdNum;

    public bool isReduceTimeAD;


    private void Start()
    {
        randomAdNum = Random.Range(3, 6);
    }

    public void RewardMenu_Confirm()
    {
        Reward_Menu.SetActive(false);
        dataManager.SaveData();
    }

    public void SetInstritial()
    {
        numOfPlay_forad++;
        if (numOfPlay_forad.Equals(randomAdNum))
        {
            admobMgr.GameOverAd();
            numOfPlay_forad = 0;
            randomAdNum = Random.Range(3, 6);
        }
    }

    public void ReduceResetTime_AD()
    {
        if (!itemMgr.isFirstItem)
        {
            isReduceTimeAD = true;

            unityAdsMgr.ShowRewardedVideo();
        }
        else
        {
            unityAdsMgr.mainSceneMgr.WriteMessage("더이상 줄일 시간이 없습니다.");
        }
    }
    public void ReduceTimeAD_Reward()
    {
        itemMgr.ResetTime -= ReduceTime;
        CoinMgr.Coin += 300;
        CoinMgr.accumulatedCoins += 300;
        coinMgr.setCoinText();
        if (itemMgr.ResetTime < 0)
        {
            itemMgr.ResetTime = 0;
        }
        numOfAdView++;
        itemMgr.ResetTime_text.text = "가격 초기화까지 남은 시간:\n" + itemMgr.ResetTime / 60 + "분 " + itemMgr.ResetTime % 60 + "초";
        resetTime_RewardMenu.SetActive(true);
    }
    public void ReduceTimeAD_RewardMenu()
    {
        resetTime_RewardMenu.SetActive(false);
        dataManager.SaveData();
    }
    public void Coin_Reward()
    {
        CoinMgr.Coin += 1000;
        CoinMgr.accumulatedCoins += 1000;
        coinMgr.setCoinText();
        numOfAdView++;
        Reward_Menu.SetActive(true);
        dataManager.SaveData();
    }
}
