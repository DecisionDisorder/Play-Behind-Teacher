using System;
using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;
using GoogleMobileAds.Api;

/// <summary>
/// Google AdMob 광고 시스템
/// </summary>
public class AdMobMgr : MonoBehaviour {
    
    public AdManager adManager;
    public MainSceneMgr mainSceneMgr;

    /// <summary>
    /// 테스트 광고 표시 여부
    /// </summary>
    public bool TestMode = false;

    void Start()
    {
        // 입장 씬일 때 보상형 광고와 베너 광고만 로드
        if (SceneManager.GetActiveScene().buildIndex.Equals(0))
        {
            RequestRewardedVideo();

            RequestBanner();
        }
        // 게임 씬일 때 전면 광고 로드
        else
        {
            RequestInterstitial();
        }
    }

    #region 베너광고
    /// <summary>
    /// 베너 광고 인스턴스
    /// </summary>
    public BannerView bannerView = null;
    /// <summary>
    /// 베너 광고 요청
    /// </summary>
    void RequestBanner()
    {
        string adUnitId = "ca-app-pub-8836637760997342/2304943762";
        string testUnitId = "ca-app-pub-3940256099942544/6300978111";

        // 베너 광고 ID, 크기, 위치 지정하며 초기화
        if(!TestMode)
            bannerView = new BannerView(adUnitId, AdSize.Banner, AdPosition.Bottom);
        else
            bannerView = new BannerView(testUnitId, AdSize.Banner, AdPosition.Bottom);

        // 입장 씬일 때 광고를 요청하며 노출 시작
        if (SceneManager.GetActiveScene().buildIndex.Equals(0))
        {
            AdRequest request = new AdRequest.Builder().Build();

            bannerView.LoadAd(request);
            bannerView.Show();
        }
    }
    /// <summary>
    /// 베너 광고 비활성화
    /// </summary>
    public void DisableAd()
    {
        bannerView.Hide();
        
    }
    #endregion

    #region 전면광고
    /// <summary>
    /// 전면 광고 인스턴스
    /// </summary>
    InterstitialAd interstitial = null;
    /// <summary>
    /// 전면 광고 요청
    /// </summary>
    void RequestInterstitial()
    {
        string adUnitId = "ca-app-pub-8836637760997342/5438852492";
        string testUnitId = "ca-app-pub-3940256099942544/1033173712";

        // 광고 ID와 함꼐 전면 광고 인스턴스 초기화
        if(!TestMode)
            interstitial = new InterstitialAd(adUnitId);
        else
            interstitial = new InterstitialAd(testUnitId);

        // 전면 광고 불러오기
        AdRequest request = new AdRequest.Builder().Build();
        interstitial.LoadAd(request);
    }
    /// <summary>
    /// 전면 광고 표기
    /// </summary>
    public void GameOverAd()
    {
        if (interstitial.IsLoaded())
            interstitial.Show();
    }
    #endregion

    #region 보상형 동영상 광고
    /// <summary>
    /// 보상형 동영상 광고 인스턴스
    /// </summary>
    private RewardedAd rewardedAd;

    /// <summary>
    /// 보상형 동영상 광고 요청
    /// </summary>
    void RequestRewardedVideo()
    {
        string adUnitId = "ca-app-pub-8836637760997342/2665707818";
        string testUnitId = "ca-app-pub-3940256099942544/5224354917";

        // 광고 ID와 함께 보상형 동영상 광고 인스턴스 초기화
        if (!TestMode)
            rewardedAd = new RewardedAd(adUnitId);
        else
            rewardedAd = new RewardedAd(testUnitId);

        // 광고 이벤트 콜백 함수 등록
        rewardedAd.OnUserEarnedReward += HandleUserEarnedReward;
        rewardedAd.OnAdClosed += HandleRewardedAdClosed;

        // 광고 요청
        AdRequest request = new AdRequest.Builder().Build();
        rewardedAd.LoadAd(request);

    }

    /// <summary>
    /// 광고를 닫았을 때의 이벤트 처리
    /// </summary>
    public void HandleRewardedAdClosed(object sender, EventArgs args)
    {
        // 다시 광고 로드
        RequestRewardedVideo();
    }

    /// <summary>
    /// 동영상 광고 보상 지급 이벤트 콜백
    /// </summary>
    public void HandleUserEarnedReward(object sender, Reward args)
    {
        // 코인 보상 지급
        adManager.Coin_Reward();
    }

    /// <summary>
    /// 보상형 동영상 광고 재생
    /// </summary>
    public void ShowRewardVideo_Admob()
    {
        if(rewardedAd.IsLoaded())
        {
            adManager.isReduceTimeAD = false;
            rewardedAd.Show();
        }
        else
        {
            mainSceneMgr.WriteMessage("광고가 준비되지 않았습니다.");
        }
    }
    #endregion
}
