using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Advertisements;
using UnityEngine.UI;

public class UnityAdsMgr : MonoBehaviour {
    
    public AdManager adManager;
    public MainSceneMgr mainSceneMgr;

    public void ShowRewardAD_Coin()
    {
        adManager.isReduceTimeAD = false;
        ShowRewardedVideo();
    }

    public void ShowRewardedVideo()
    {
        ShowOptions options = new ShowOptions();
        options.resultCallback = HandleShowResult;

        Advertisement.Show("rewardedVideo", options);
    }

    void HandleShowResult(ShowResult result)
    {
        if (result == ShowResult.Finished)
        {
            //Debug.Log("Video completed - Offer a reward to the player");
            if (!adManager.isReduceTimeAD)
            {
                adManager.Coin_Reward();
            }
            else
            {
                adManager.ReduceTimeAD_Reward();
            }
        }
        else if (result == ShowResult.Skipped)
        {
            //Debug.LogWarning("Video was skipped - Do NOT reward the player");

        }
        else if (result == ShowResult.Failed)
        {
            //Debug.LogError("Video failed to show");
            mainSceneMgr.WriteMessage("광고가 준비되지 않았습니다.");
        }
    }

}
