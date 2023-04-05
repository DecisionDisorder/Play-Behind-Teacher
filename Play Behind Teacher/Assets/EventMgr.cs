﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EventMgr : MonoBehaviour {

    public GameObject Event_menu;
    public Animation Event_MenuAni;
    public CoinMgr coinMgr;
    public MainSceneMgr mainSceneMgr;
    public DataManager dataManager;
    public InGameMgr inGameMgr;

    public bool[] didFixedEventRewarded;
    
    public void EventMenuControl(int key)
    {
        switch(key)
        {
            case 0:
                if (BackkeyMgr.numOfOpenedMenus < 1)
                {
                    Event_menu.SetActive(true);
                    Event_MenuAni.Play();
                    if (BackkeyMgr.numOfOpenedMenus.Equals(0))
                        BackkeyMgr.numOfOpenedMenus++;
                }
                else
                {
                    mainSceneMgr.WriteMessage("동시에 다른 두개의 메뉴를 띄을 수 없습니다.");
                }
                break;
            case 1:
                //dataManager.SaveData();
                //Event_menu.SetActive(false);
                inGameMgr.CloseMenu(Event_MenuAni,Event_menu);
                BackkeyMgr.numOfOpenedMenus--;
                break;
        }
    }
    
    public void EventButton(int num)
    {
        switch(num)
        {
            case 0://Facebook
                if (!didFixedEventRewarded[0])
                {
                    Application.OpenURL("https://www.facebook.com/DecisionDisorderGame/");
                    CoinMgr.Coin += 250;
                    CoinMgr.accumulatedCoins += 250;
                    coinMgr.setCoinText();
                    mainSceneMgr.WriteMessage("250Coin이 지급되었습니다.\n팔로우 감사합니다!");
                    didFixedEventRewarded[0] = true;
                    dataManager.SaveData();
                }
                else
                {
                    Application.OpenURL("https://www.facebook.com/DecisionDisorderGame/");
                    mainSceneMgr.WriteMessage("이미 보상이 지급되었으므로, 보상이 지급되지 않았습니다.");
                }
                break;
            case 1://Twitter follow
                if (!didFixedEventRewarded[1])
                {
                    Application.OpenURL("https://twitter.com/decdisorder");
                    CoinMgr.Coin += 250;
                    CoinMgr.accumulatedCoins += 250;
                    coinMgr.setCoinText();
                    didFixedEventRewarded[1] = true;
                    mainSceneMgr.WriteMessage("250Coin이 지급되었습니다.\n팔로우 감사합니다!");
                    dataManager.SaveData();
                }
                else
                {
                    Application.OpenURL("https://twitter.com/decdisorder");
                    mainSceneMgr.WriteMessage("이미 보상이 지급되었으므로, 보상이 지급되지 않았습니다.");
                }
                break;
            case 2://Review
                Application.OpenURL("https://play.google.com/store/apps/details?id=com.decisiondisorder.behindteacher");
                mainSceneMgr.WriteMessage("소중한 리뷰 감사합니다!");
                break;
        }
    }
	
}
