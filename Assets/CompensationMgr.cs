using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// 보상 시스템 관리 클래스
/// </summary>
public class CompensationMgr : MonoBehaviour {

    public CoinMgr coinMgr;
    public DataManager dataManager;
    public InGameMgr inGameMgr;

    /// <summary>
    /// 보상이 지급되었는지 여부
    /// </summary>
    public static bool offered = false;

    /// <summary>
    /// 보상 메뉴
    /// </summary>
    public GameObject Compensation_Menu;

    void Start () {
        // 보상이 지급되지 않았으면
        if (!offered)
        {
            // 기존 유저임을 확인
            if (inGameMgr.numOfFinish > 0)
            {
                //코인 보상 지급
                CoinMgr.Coin += 2500;
                CoinMgr.accumulatedCoins += 2500;
                coinMgr.setCoinText();
                Compensation_Menu.SetActive(true);
                offered = true;
                dataManager.SaveData();
            }
        }
        offered = true;
    }
    /// <summary>
    /// 보상 메뉴 닫기
    /// </summary>
	public void CloseCompensationMenu()
    {
        Compensation_Menu.SetActive(false);
    }
}
