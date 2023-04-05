using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Advertisements;
using UnityEngine.UI;

/// <summary>
/// Unity Ads 광고 시스템 관리 클래스
/// </summary>
public class UnityAdsMgr : MonoBehaviour, IUnityAdsListener {
    
    public AdManager adManager;
    public MainSceneMgr mainSceneMgr;
    /// <summary>
    /// 유니티 상에서의 게임 ID
    /// </summary>
    string gameID = "1703681";
    /// <summary>
    /// 보상형 광고 ID
    /// </summary>
    string myPlacementId = "rewardedVideo";
    /// <summary>
    /// 테스트 광고 표시 여부
    /// </summary>
    bool testMode = false;

    private void Start()
    {
        // 콜백 리스너 등록 및 광고 초기화
        Advertisement.AddListener(this);
        Advertisement.Initialize(gameID, testMode);
    }

    void OnDisable()
    {
        Advertisement.RemoveListener(this);
    }

    /// <summary>
    /// 일반 보상형 동영상 광고 재생
    /// </summary>
    public void ShowRewardAD_Coin()
    {
        adManager.isReduceTimeAD = false;
        ShowRewardedVideo();
    }

    /// <summary>
    /// 광고 준비가 되었을 때 동영상 재생
    /// </summary>
    /// <returns></returns>
    IEnumerator ShowAdWhenReady()
    {
        while(!Advertisement.IsReady(myPlacementId))
        {
            yield return null;
        }
        Advertisement.Show(myPlacementId);
    }
    
    /// <summary>
    /// 보상형 동영상 광고 재생
    /// </summary>
    public void ShowRewardedVideo()
    {
        StartCoroutine(ShowAdWhenReady());
    }

    #region UnityAdListener 인터페이스 함수 
    /// <summary>
    /// 광고 영상 종료 이벤트 콜백
    /// </summary>
    /// <param name="placementId">광고ID</param>
    /// <param name="showResult">결과</param>
    public void OnUnityAdsDidFinish(string placementId, ShowResult showResult)
    {
        // 동영상 시청을 완료했을 때 보상 지급
        if(showResult == ShowResult.Finished)
        {
            if (!adManager.isReduceTimeAD)
            {
                adManager.Coin_Reward();
            }
            else
            {
                adManager.ReduceTimeAD_Reward();
            }
        }
        // 영상 재생 실패 시, 로드되지 않음을 알림
        else if(showResult == ShowResult.Failed)
        {
            mainSceneMgr.WriteMessage("광고가 준비되지 않았습니다.");
        }
    }

    /// <summary>
    /// 동영상 광고 준비 완료 콜백
    /// </summary>
    /// <param name="placementId">광고ID</param>
    public void OnUnityAdsReady(string placementId)
    { }
    /// <summary>
    /// UnityAds 관련 오류 로깅
    /// </summary>
    /// <param name="message"></param>
    public void OnUnityAdsDidError(string message)
    {
        Debug.LogError("OnUnityAdsDiderror : " + message);
    }
    
    /// <summary>
    /// 유니티 광고 재생 시작 콜백
    /// </summary>
    /// <param name="placementId">광고 ID</param>
    public void OnUnityAdsDidStart(string placementId)
    { }
    #endregion
}