using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

/// <summary>
/// 광고 시스템 관리 클래스
/// </summary>
public class AdManager : MonoBehaviour
{
    /// <summary>
    /// 광고 보상 메뉴 오브젝트
    /// </summary>
    public GameObject Reward_Menu;
    
    /// <summary>
    /// 아이템 가격 초기화 시간 단축 보상 메뉴 오브젝트
    /// </summary>
    public GameObject resetTime_RewardMenu;

    public AdMobMgr admobMgr;
    public UnityAdsMgr unityAdsMgr;
    public DataManager dataManager;
    public ItemMgr itemMgr;
    public CoinMgr coinMgr;

    /// <summary>
    /// 아이템 가격 초기화 대기 단축 시간
    /// </summary>
    public int ReduceTime = 2400;

    /// <summary>
    /// 누적 광고 시청 횟수
    /// </summary>
    public int numOfAdView;

    /// <summary>
    /// 게임 오버 후 광고 표기를 위한 플레이 횟수 카운트
    /// </summary>
    public static int numOfPlay_forad;

    /// <summary>
    /// 게임 오버 후 광고 표기 기준 랜덤 숫자
    /// </summary>
    private int randomAdNum;

    /// <summary>
    /// 아이템 가격 초기화 단축 광고인지 여부
    /// </summary>
    public bool isReduceTimeAD;


    private void Start()
    {
        // 광고 표기 기준치 랜덤 설정
        randomAdNum = Random.Range(3, 6);
    }

    /// <summary>
    /// 광고 보상 안내 메뉴 닫기
    /// </summary>
    public void RewardMenu_Confirm()
    {
        Reward_Menu.SetActive(false);
        dataManager.SaveData();
    }

    /// <summary>
    /// 광교 표기 기준치 확인 후 전면 광고 표기
    /// </summary>
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

    /// <summary>
    /// 가격을 초기화 할 아이템이 있을 때 시간 단축형 보상형 광고 재생
    /// </summary>
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
    /// <summary>
    /// 시간 단축형 광고 보상 지급
    /// </summary>
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
    /// <summary>
    /// 시간 단축형 보상 메뉴 닫기
    /// </summary>
    public void ReduceTimeAD_RewardMenu()
    {
        resetTime_RewardMenu.SetActive(false);
        dataManager.SaveData();
    }
    /// <summary>
    /// 일반 보상형 광고 코인 보상 지급
    /// </summary>
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
