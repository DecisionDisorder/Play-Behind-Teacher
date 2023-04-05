using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class BackUpDataMgr : MonoBehaviour {

    public DataGrouping dgdata = new DataGrouping();

    public TvGameMgr tvGameMgr;
    public KatalkGameMgr katalkGameMgr;
    public SnackGameMgr snackGameMgr;
    public Option option;
    public InGameMgr inGameMgr;
    public ItemMgr itemMgr;
    public PhoneStore phoneStore;
    public SnackStore snackStore;
    public TutorialMgr tutorialMgr;
    public AdManager adManager;
    public CoinMgr coinMgr;
    public EventMgr eventMgr;
    public DailyGiftMgr dailyGiftMgr;
    public TicketMgr ticketMgr;
    public AchievementMgr achievementMgr;
    public LevelMgr levelMgr;

    public DataManager dataManager;
    public MainSceneMgr mainSceneMgr;

    public GameObject Recovery_Menu;
    public Text BackupDate_text;
    public string SavedDate;
    //public GameObject DataLoss_RecoveryMenu;

    public Text[] Log_text = new Text[2];
    public static string condition_log = "";
    
    public static bool Logining = true;
    public static bool LoginSuccess;

    public GameObject[] Confirm_Menus;
    public GameObject[] ReConfirm_Menus = new GameObject[2];//0:Load 1:Save
    public GameObject[] AfterConfirm_Menus = new GameObject[2];
    public GameObject[] CloseButtons = new GameObject[2];


    public static bool isCloudProcessing = false;
    //public GameObject LoginFirst;
    
    IEnumerator LogRenew()
    {
        yield return new WaitForEndOfFrame();

        if (AfterConfirm_Menus[1].activeInHierarchy)
        {
            Log_text[1].text = "<진행 상황>\n" + condition_log;
            if(isCloudProcessing)
                StartCoroutine(LogRenew());
            else
            {
                CloseButtons[1].SetActive(true);
            }
        }
        else if (AfterConfirm_Menus[0].activeInHierarchy)
        {
            Log_text[0].text = "<진행 상황>\n" + condition_log;
            if (isCloudProcessing)
                StartCoroutine(LogRenew());
            else
            {
                if (Cloud_Manager.GameData != null)
                {
                    DeseralizeData();
                }
                CloseButtons[0].SetActive(true);
            }

        }    
    }
    public void MenusOnOff(int key)
    {
        switch (key) {
            case 0://Load Menu on
                Confirm_Menus[0].SetActive(true);
                ReConfirm_Menus[0].SetActive(true);
                AfterConfirm_Menus[0].SetActive(false);
                CloseButtons[0].SetActive(false);
                BackkeyMgr.numOfOpenedMenus++;
                break;
            case 1://Save Menu On
                Confirm_Menus[1].SetActive(true);
                ReConfirm_Menus[1].SetActive(true);
                AfterConfirm_Menus[1].SetActive(false);
                CloseButtons[1].SetActive(false);
                BackkeyMgr.numOfOpenedMenus++;
                break;
            case 2://Load Menu Off
                Confirm_Menus[0].SetActive(false);
                BackkeyMgr.numOfOpenedMenus--;
                break;
            case 3:
                Confirm_Menus[1].SetActive(false);
                BackkeyMgr.numOfOpenedMenus--;
                break;
        }
    }
    public void SaveData_Serialization()
    {
        isCloudProcessing = true;
        SetDataToClass();

        string serialized = SerializationData.SetSerialization(dgdata);
        Cloud_Manager.GameData = SerializationData.StringToByte(serialized);

        SavedDate = DateStringSet();
        if (BackupDate_text != null)
        {
            BackupDate_text.text = "백업 시기: " + SavedDate;
        }

        condition_log = "";
        condition_log += "저장 시작 하는 중\n";
        ReConfirm_Menus[1].SetActive(false);
        AfterConfirm_Menus[1].SetActive(true);
        StartCoroutine(LogRenew());

        Cloud_Manager.SaveToCloud();
    }

    public void LoadData_Serialization()
    {
        isCloudProcessing = true;
        condition_log = "";
        condition_log += "불러오기 시작 하는 중\n";
        ReConfirm_Menus[0].SetActive(false);
        AfterConfirm_Menus[0].SetActive(true);

        StartCoroutine(LogRenew());
        
        Cloud_Manager.LoadFromCloud();


        /*dataManager.isDataLoss = JudgeDataloss(serialized);
        if (dataManager.isDataLoss)
        {
            Debug.Log("데이터 상태: 손실 감지");
        }
        else
        {
            Debug.Log("데이터 상태: 이상 없음");
            if (DataLoss_RecoveryMenu != null)
                DataLoss_RecoveryMenu.SetActive(false);
        }*/


        //dataManager.isDataLoss = false;
    }
    public void DeseralizeData()
    {
        string serialized = SerializationData.ByteToString(Cloud_Manager.GameData);
        dgdata = (DataGrouping)SerializationData.GetDeSerialization(serialized);
        SetClassToVar();

    }
    public void RecoveryMenuOnOff(int key)
    {
        switch(key)
        {
            case 0://On
                if (BackkeyMgr.numOfOpenedMenus < 2)
                {
                    BackkeyMgr.numOfOpenedMenus++;
                    Recovery_Menu.SetActive(true);
                }
                break;
            case 1://Off
                BackkeyMgr.numOfOpenedMenus--;
                Recovery_Menu.SetActive(false);
                break;
                /*
            case 2://EmergencyMenu cancel
                DataLoss_RecoveryMenu.SetActive(false);
                break;*/
        }
    }
    /*
    public void SerializedDataRecovery()
    {
        LoadAll();
        if(Recovery_Menu.activeInHierarchy)
            Recovery_Menu.SetActive(false);
        if (DataLoss_RecoveryMenu.activeInHierarchy)
            DataLoss_RecoveryMenu.SetActive(false);
    }*/
    public string DateStringSet()
    {
        string year,month,day,hour,minute,second,AMPM;
        year = System.DateTime.Now.ToString("yyyy");
        month = System.DateTime.Now.ToString("MM");
        day = System.DateTime.Now.ToString("dd");
        AMPM = System.DateTime.Now.ToString("tt");
        hour = System.DateTime.Now.ToString("hh");
        minute = System.DateTime.Now.ToString("mm");
        second = System.DateTime.Now.ToString("ss");
        return year + "년 " + month + "월 " + day + "일\n" + AMPM + " " + hour + "시 " + minute + "분 " + second + "초";
    }
    //==============================Save=================================

    public void SetDataToClass()
    {
        /*if (!SceneManager.GetActiveScene().name.Equals("MainScene"))
        {
            if (InGameMgr.GameMode.Equals(0))
            {
            }
            else if (InGameMgr.GameMode.Equals(1))
            {
            }
        }*/
        if (tvGameMgr != null)
        {
            dgdata.TvGameMgr_BestScore = tvGameMgr.BestScore;
            dgdata.TvGameMgr_numOfMissionClear = tvGameMgr.numOfMissionClear;

            dgdata.InGameMgr_numOfPlay_0 = inGameMgr.numOfPlay[0];
            dgdata.InGameMgr_PlayTime_0 = inGameMgr.PlayTime[0];
        }
        if (katalkGameMgr != null)
        {
            dgdata.KatalkGameMgr_BestScore = katalkGameMgr.BestScore;
            dgdata.KatalkGameMgr_numOfMissionClear = katalkGameMgr.numOfMissionClear;

            dgdata.InGameMgr_numOfPlay_1 = inGameMgr.numOfPlay[1];
            dgdata.InGameMgr_PlayTime_1 = inGameMgr.PlayTime[1];
        }
        if(snackGameMgr != null)
        {
            dgdata.SnackGameMgr_BestScore = snackGameMgr.BestScore;
            dgdata.SnackGameMgr_numOfMissionClear = snackGameMgr.numOfMissionClear;
            
        }
        dgdata.InGameMgr_numOfFinish = inGameMgr.numOfFinish;
        dgdata.Option_IsHudOn = option.IsHudOn;
        dgdata.Option_IsVibrateOn = option.IsVibrateOn;
        dgdata.Option_gameSoundVolume = option.gameSoundVolume;
        dgdata.Option_BackgroundVolume = option.BackgroundVolume;
        dgdata.Option_smoothGage = option.smoothGage;
        dgdata.Option_showFPS = option.showFPS;
        dgdata.Option_googleLogin = option.googleLogin;

        dgdata.CoinMgr_AcdCoin = CoinMgr.accumulatedCoins;
        dgdata.CoinMgr_Coin = CoinMgr.Coin;

        dgdata.ItemMgr_ItemKind_0 = itemMgr.ItemKind[0];
        dgdata.ItemMgr_ItemKind_1 = itemMgr.ItemKind[1];
        dgdata.ItemMgr_ItemDetail_0 = itemMgr.ItemDetail[0];
        dgdata.ItemMgr_ItemDetail_1 = itemMgr.ItemDetail[1];

        dgdata.PhoneStore_SelectedPhoneCode = phoneStore.SelectedPhoneCode;

        
        dgdata.PhoneStore_Phones_hasThisPhone = new bool[5];
        for(int i = 1; i < phoneStore.Phones.Length; i++)
        {
            dgdata.PhoneStore_Phones_hasThisPhone[i] = phoneStore.Phones[i].hasThisPhone;

        }

        
        dgdata.SnackStore_numOfbuscuit = new int[5];
        for (int i = 1; i < snackStore.Buscuits.Length; i++)
        {
            print(dgdata.SnackStore_numOfbuscuit.Length);
            dgdata.SnackStore_numOfbuscuit[i] = snackStore.Buscuits[i].numOfbuscuit;
        }

        
        dgdata.GlassesNum = new int[4];
        for (int i = 0; i < itemMgr.sleepingGun.Length; i++)
        {
            dgdata.SleepingGunNum[i] = itemMgr.sleepingGun[i].numOfItem;
            dgdata.SnackNum[i] = itemMgr.snack[i].numOfItem;
            dgdata.GlassesNum[i] = itemMgr.glasses[i].numOfItem;
        }
        dgdata.TutorialMgr_didTutorialComplete = tutorialMgr.didTutorialComplete;

        dgdata.AdManager_numOfAdView = adManager.numOfAdView;

        if(eventMgr != null)
        {
            dgdata.EventMgr_didFixedEventRewarded0 = eventMgr.didFixedEventRewarded[0];
            dgdata.EventMgr_didFixedEventRewarded1 = eventMgr.didFixedEventRewarded[1];
        }

        dgdata.DailyGiftMgr_dayOfyear = dailyGiftMgr.dayOfyear;
        dgdata.DailyGiftMgr_numOfAttend = dailyGiftMgr.numOfAttend;
        dgdata.DailyGiftMgr_todayGet = dailyGiftMgr.todayGet;
        dgdata.DailyGiftMgr_year = dailyGiftMgr.year;

        dgdata.TicketMgr_RandomItemTicket_amount = ticketMgr.RandomItemTicket_amount;
        dgdata.TicketMgr_NormalItemTicket_amount = ticketMgr.NormalItemTicket_amount;
        dgdata.TicketMgr_HighRankItemTicket_amount = ticketMgr.HighRankItemTicket_amount;

        dgdata.CompensationMgr_offered = CompensationMgr.offered;

        dgdata.LevelMgr_Level = levelMgr.Level;
        dgdata.LevelMgr_Exp = levelMgr.Exp;
        dgdata.LevelMgr_AccumulatedExp = levelMgr.AccumulatedExp;
        dgdata.LevelMgr_availableStat = levelMgr.availableStat;

       
        dgdata.LevelMgr_StatArr_statLevel = new int[5];
        for(int i = 0; i < levelMgr.StatArr.Length; i++)
        {
            dgdata.LevelMgr_StatArr_statLevel[i] = levelMgr.StatArr[i].statLevel;
        }

        dgdata.AchievementMgr_steps = new int[8];
        for(int i = 0; i < achievementMgr.achievements.Length; i++)
        {
            dgdata.AchievementMgr_steps[i] = achievementMgr.achievements[i].step;
        }
    }
    public void SetClassToVar()
    {
        /*if (!SceneManager.GetActiveScene().name.Equals("MainScene"))
        {
            if (InGameMgr.GameMode.Equals(0))
            {
            }
            else if (InGameMgr.GameMode.Equals(1))
            {
            }
        }*/
        if (tvGameMgr != null)
        {
            tvGameMgr.BestScore = dgdata.TvGameMgr_BestScore;
            tvGameMgr.numOfMissionClear = dgdata.TvGameMgr_numOfMissionClear;
        }
        if (katalkGameMgr != null)
        {
            katalkGameMgr.BestScore = dgdata.KatalkGameMgr_BestScore;
            katalkGameMgr.numOfMissionClear = dgdata.KatalkGameMgr_numOfMissionClear;
        }
        if(snackGameMgr != null)
        {
            snackGameMgr.BestScore = dgdata.SnackGameMgr_BestScore;
            snackGameMgr.numOfMissionClear = dgdata.SnackGameMgr_numOfMissionClear;
        }
        option.IsHudOn = dgdata.Option_IsHudOn;
        option.IsVibrateOn = dgdata.Option_IsVibrateOn;
        option.gameSoundVolume = dgdata.Option_gameSoundVolume;
        option.BackgroundVolume = dgdata.Option_BackgroundVolume;
        option.smoothGage = dgdata.Option_smoothGage;
        option.showFPS = dgdata.Option_showFPS;
        option.googleLogin = dgdata.Option_googleLogin;

        inGameMgr.numOfPlay[0] = dgdata.InGameMgr_numOfPlay_0;
        inGameMgr.numOfPlay[1] = dgdata.InGameMgr_numOfPlay_1;
        inGameMgr.PlayTime[0] = dgdata.InGameMgr_PlayTime_0;
        inGameMgr.PlayTime[1] = dgdata.InGameMgr_PlayTime_1;
        inGameMgr.numOfFinish = dgdata.InGameMgr_numOfFinish;

        CoinMgr.Coin = dgdata.CoinMgr_Coin;
        CoinMgr.accumulatedCoins = dgdata.CoinMgr_AcdCoin;
        coinMgr.setCoinText();

        itemMgr.ItemKind[0] = dgdata.ItemMgr_ItemKind_0;
        itemMgr.ItemKind[1] = dgdata.ItemMgr_ItemKind_1;
        itemMgr.ItemDetail[0] = dgdata.ItemMgr_ItemDetail_0;
        itemMgr.ItemDetail[1] = dgdata.ItemMgr_ItemDetail_1;

        if(dgdata.PhoneStore_Phones_hasThisPhone == null)
        {
            dgdata.PhoneStore_Phones_hasThisPhone = new bool[5];
        }
        for(int i = 1; i < phoneStore.Phones.Length; i++)
        {
            phoneStore.Phones[i].hasThisPhone = dgdata.PhoneStore_Phones_hasThisPhone[i];
        }
        phoneStore.SelectedPhoneCode = dgdata.PhoneStore_SelectedPhoneCode;

        if(dgdata.SnackStore_numOfbuscuit == null)
        {
            dgdata.SnackStore_numOfbuscuit = new int[5];
        }
        for(int i = 1; i < snackStore.Buscuits.Length; i++)
            snackStore.Buscuits[i].numOfbuscuit = dgdata.SnackStore_numOfbuscuit[i];

        if (dgdata.SleepingGunNum == null)
        {
            dgdata.SleepingGunNum = new int[4];
            dgdata.SnackNum = new int[4];
        }
        if(dgdata.GlassesNum == null)//추가됨
            dgdata.GlassesNum = new int[4];

        for (int i = 0; i < itemMgr.sleepingGun.Length; i++)
        {
            itemMgr.sleepingGun[i].numOfItem = dgdata.SleepingGunNum[i];
            itemMgr.snack[i].numOfItem = dgdata.SnackNum[i];
            itemMgr.glasses[i].numOfItem = dgdata.GlassesNum[i];
        }

        if (dgdata.TutorialMgr_didTutorialComplete == null)
            dgdata.TutorialMgr_didTutorialComplete = new bool[3];

        tutorialMgr.didTutorialComplete = dgdata.TutorialMgr_didTutorialComplete;

        adManager.numOfAdView = dgdata.AdManager_numOfAdView;

        if(eventMgr != null)
        {
            eventMgr.didFixedEventRewarded[0] = dgdata.EventMgr_didFixedEventRewarded0;
            eventMgr.didFixedEventRewarded[1] = dgdata.EventMgr_didFixedEventRewarded1;
        }
        dailyGiftMgr.year = dgdata.DailyGiftMgr_year;
        dailyGiftMgr.todayGet = dgdata.DailyGiftMgr_todayGet;
        dailyGiftMgr.numOfAttend = dgdata.DailyGiftMgr_numOfAttend;
        dailyGiftMgr.dayOfyear = dgdata.DailyGiftMgr_dayOfyear;

        ticketMgr.RandomItemTicket_amount = dgdata.TicketMgr_RandomItemTicket_amount;
        ticketMgr.NormalItemTicket_amount = dgdata.TicketMgr_NormalItemTicket_amount;
        ticketMgr.HighRankItemTicket_amount = dgdata.TicketMgr_HighRankItemTicket_amount;

        CompensationMgr.offered = dgdata.CompensationMgr_offered;

        levelMgr.Level = dgdata.LevelMgr_Level;
        levelMgr.Exp = dgdata.LevelMgr_Exp;
        levelMgr.AccumulatedExp = dgdata.LevelMgr_AccumulatedExp;
        levelMgr.availableStat = dgdata.LevelMgr_availableStat;
        if (dgdata.LevelMgr_StatArr_statLevel == null)
            dgdata.LevelMgr_StatArr_statLevel = new int[5];
        for(int i = 0; i < levelMgr.StatArr.Length; i++)
        {
            levelMgr.StatArr[i].statLevel = dgdata.LevelMgr_StatArr_statLevel[i];
        }

        if (dgdata.AchievementMgr_steps == null)
            dgdata.AchievementMgr_steps = new int[8];
        for (int i = 0; i < achievementMgr.achievements.Length; i++)
        {
            achievementMgr.achievements[i].step = dgdata.AchievementMgr_steps[i];
        }


        adManager.admobMgr.DisableAd();

        dataManager.isAfterCloudLoad = true;

        dataManager.SaveData();
    }
    /*
    public bool JudgeDataloss(string data)
    {
        if (!data.Equals("") && inGameMgr.numOfFinish.Equals(0))
        {
            return true;
        }
        else
            return false;
    }*/
}
