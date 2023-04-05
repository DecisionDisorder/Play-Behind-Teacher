using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AfterPatchMgr : MonoBehaviour {

    public GameObject PatchNote_Menu;
    public Animation PatchNote_MenuAni;

    public InGameMgr inGameMgr;
    public MainSceneMgr mainSceneMgr;

    public int PriorVersionCode = 14;
    public int RecentVersionCode;
	 
	void Start () {
        LoadVersionCode();
		if(PriorVersionCode < RecentVersionCode)
        {
            PatchNote_Menu.SetActive(true);
            PriorVersionCode = RecentVersionCode;
            SaveVersionCode();
        }
	}
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
            //PatchNote_Menu.SetActive(false);
            BackkeyMgr.numOfOpenedMenus--;
            inGameMgr.CloseMenu(PatchNote_MenuAni,PatchNote_Menu);
        }
    }
    public void OpenBlog()
    {
        Application.OpenURL("https://blog.naver.com/guswhd990507/221340216170");
    }
	void SaveVersionCode()
    {
        EncryptedPlayerPrefs.SetInt("AfterPatchMgr_PriorVersionCode", PriorVersionCode);
    }
    void LoadVersionCode()
    {
        PriorVersionCode = EncryptedPlayerPrefs.GetInt("AfterPatchMgr_PriorVersionCode", 13);
    }
}
