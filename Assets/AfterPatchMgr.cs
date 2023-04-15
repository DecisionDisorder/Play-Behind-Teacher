using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// 업데이트 알림 시스템 관리 클래스
/// </summary>
public class AfterPatchMgr : MonoBehaviour {
    /// <summary>
    /// 패치노트 안내 메뉴 오브젝트
    /// </summary>
    public GameObject PatchNote_Menu;
    /// <summary>
    /// 패치노트 안내 메뉴 활성화 애니메이션
    /// </summary>
    public Animation PatchNote_MenuAni;

    public InGameMgr inGameMgr;
    public MainSceneMgr mainSceneMgr;

    /// <summary>
    /// 열람한 패치노트의 버전 코드
    /// </summary>
    public int PriorVersionCode = 14;
    /// <summary>
    /// 최근 업데이트된 패치노트의 버전 코드
    /// </summary>
    public int RecentVersionCode;
	 
	void Start () {
        // 버전코드를 불러오고, 버전 코드에 따라서 패치노트 알림 UI 활성화
        LoadVersionCode();
		if(PriorVersionCode < RecentVersionCode)
        {
            PatchNote_Menu.SetActive(true);
            PriorVersionCode = RecentVersionCode;
            SaveVersionCode();
        }
	}
    /// <summary>
    /// 패치노트 메뉴 on/off
    /// </summary>
    public void OnOffPatchNotes(int key)
    {
        if (key.Equals(0))
        {
            if (BackkeyMgr.numOfOpenedMenus < 1)
            {
                PatchNote_Menu.SetActive(true);
                PatchNote_MenuAni.Play();
                BackkeyMgr.numOfOpenedMenus++;
            }
            else
            {
                mainSceneMgr.WriteMessage("동시에 다른 두개의 메뉴를 띄을 수 없습니다.");
            }
        }
        else
        {
            BackkeyMgr.numOfOpenedMenus--;
            inGameMgr.CloseMenu(PatchNote_MenuAni,PatchNote_Menu);
        }
    }
    /// <summary>
    /// 패치노트 블로그 열기
    /// </summary>
    public void OpenBlog()
    {
        Application.OpenURL("https://blog.naver.com/guswhd990507/222471412378");
    }
    /// <summary>
    /// 열람한 버전코드 저장
    /// </summary>
	void SaveVersionCode()
    {
        EncryptedPlayerPrefs.SetInt("AfterPatchMgr_PriorVersionCode", PriorVersionCode);
    }
    /// <summary>
    /// 열람한 버전코드 불러오기
    /// </summary>
    void LoadVersionCode()
    {
        PriorVersionCode = EncryptedPlayerPrefs.GetInt("AfterPatchMgr_PriorVersionCode", 13);
    }
}
