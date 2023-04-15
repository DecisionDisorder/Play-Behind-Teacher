using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// 이벤트 시스템 관리 클래스
/// </summary>
public class EventMgr : MonoBehaviour {
    /// <summary>
    /// 이벤트 메뉴
    /// </summary>
    public GameObject Event_menu;
    /// <summary>
    /// 이벤트 메뉴 애니메이션
    /// </summary>
    public Animation Event_MenuAni;

    public CoinMgr coinMgr;
    public MainSceneMgr mainSceneMgr;
    public DataManager dataManager;
    public InGameMgr inGameMgr;

    /// <summary>
    /// 고정 이벤트의 보상을 수령했는지 여부
    /// </summary>
    public bool[] didFixedEventRewarded;
    
    /// <summary>
    /// 이벤트 메뉴 제어 이벤트 리스너
    /// </summary>
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
                inGameMgr.CloseMenu(Event_MenuAni,Event_menu);
                BackkeyMgr.numOfOpenedMenus--;
                break;
        }
    }
    
    /// <summary>
    /// 이벤트 메뉴 내에서의 버튼 리스너
    /// </summary>
    public void EventButton(int num)
    {
        switch(num)
        {
            // 페이스북 좋아요 이벤트
            case 0:
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
            // 트위터 팔로우 이벤트
            case 1:
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
            // 구글 플레이 리뷰 링크
            case 2:
                Application.OpenURL("https://play.google.com/store/apps/details?id=com.decisiondisorder.behindteacher");
                mainSceneMgr.WriteMessage("소중한 리뷰 감사합니다!");
                break;
        }
    }
	
}
