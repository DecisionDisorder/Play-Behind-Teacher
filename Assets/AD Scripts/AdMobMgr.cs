using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using GoogleMobileAds.Api;
using UnityEngine.UI;

public class AdMobMgr : MonoBehaviour {
    
    public AdManager adManager;
    public MainSceneMgr mainSceneMgr;
    
    public bool TestMode = false;

    void Start()
    {
        if (SceneManager.GetActiveScene().buildIndex.Equals(0))
        {
            RequestBanner();

            rewardBasedVideo = RewardBasedVideoAd.Instance;

            rewardBasedVideo.OnAdRewarded += HandleRewardBasedVideoRewarded;

            RequestRewardedVideo();
        }
        else
        {
            RequestInterstitial();
        }
    }

    //======================================#배너 광고#============================================

    public BannerView bannerView = null;
    void RequestBanner()
    {
        string adUnitId = "ca-app-pub-8836637760997342/2304943762";
        string testUnitId = "ca-app-pub-3940256099942544/6300978111";

        if(!TestMode)
            bannerView = new BannerView(adUnitId, AdSize.Banner, AdPosition.Bottom);
        else
            bannerView = new BannerView(testUnitId, AdSize.Banner, AdPosition.Bottom);

        // Create an empty ad request.        

        // Load the banner with the request.
        if (SceneManager.GetActiveScene().buildIndex.Equals(0))
        {
            AdRequest request = new AdRequest.Builder().AddTestDevice("34F007EB09E1BA63").Build();

            bannerView.LoadAd(request);
            bannerView.Show();
        }
    }
    public void DisableAd()
    {
        bannerView.Hide();
        
    }
    //======================================#전면광고#================================================

    InterstitialAd interstitial = null;
    void RequestInterstitial()
    {
        string adUnitId = "ca-app-pub-8836637760997342/5438852492";
        string testUnitId = "ca-app-pub-3940256099942544/1033173712";

        if(!TestMode)
            interstitial = new InterstitialAd(adUnitId);
        else
            interstitial = new InterstitialAd(testUnitId);

        AdRequest request = new AdRequest.Builder().AddTestDevice("34F007EB09E1BA63").Build();

        interstitial.LoadAd(request);
    }
    public void GameOverAd()
    {
        if (interstitial.IsLoaded())
            interstitial.Show();
    }
    //==========================================#동영상광고#==================================================
    RewardBasedVideoAd rewardBasedVideo;

    void RequestRewardedVideo()
    {
        string adUnitId = "ca-app-pub-8836637760997342/3551055752";
        string testUnitId = "ca-app-pub-3940256099942544/5224354917";

        AdRequest request = new AdRequest.Builder().AddTestDevice("34F007EB09E1BA63").Build();

        if (!TestMode)
            this.rewardBasedVideo.LoadAd(request, adUnitId);
        else
            this.rewardBasedVideo.LoadAd(request, testUnitId);
    }

    public void HandleRewardBasedVideoRewarded(object sender, Reward args)
    {
        string type = args.Type;
        double amount = args.Amount;
        MonoBehaviour.print("HandleRewardBasedVideoRewarded event received for "
                        + amount.ToString() + " " + type);

        adManager.Coin_Reward();
    }

    public void ShowRewardVideo_Admob()
    {
        if(rewardBasedVideo.IsLoaded())
        {
            adManager.isReduceTimeAD = false;
            rewardBasedVideo.Show();
        }
        else
        {
            mainSceneMgr.WriteMessage("광고가 준비되지 않았습니다.");
        }
    }
}
