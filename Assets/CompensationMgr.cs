using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CompensationMgr : MonoBehaviour {

    public CoinMgr coinMgr;
    public DataManager dataManager;
    public InGameMgr inGameMgr;

    public static bool offered = false;

    public GameObject Compensation_Menu;

    void Start () {
        if (!offered)
        {
            if (inGameMgr.numOfFinish > 0)
            {
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
	public void CloseCompensationMenu()
    {
        Compensation_Menu.SetActive(false);
    }
}
