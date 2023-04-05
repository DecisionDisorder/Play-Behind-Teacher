using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class DataManager : MonoBehaviour {

    public TvGameMgr tvgameMgr;
    public KatalkGameMgr katalkGameMgr;
    public SnackGameMgr snackGameMgr;
    public InGameMgr inGameMgr;
    public Option option;
    public CoinMgr coinMgr;
    public ItemMgr itemMgr;
    public PhoneStore phoneStore;
    public SnackStore snackStore;
    public TutorialMgr tutorialMgr;
    public AdManager adManager;
    public EventMgr eventMgr;
    public MainSceneMgr mainSceneMgr;
    public DailyGiftMgr dailyGiftMgr;
    public TicketMgr ticketMgr;
    public AchievementMgr achievementMgr;
    public LevelMgr levelMgr;

    public BackUpDataMgr backUpDataMgr;

    public bool isAfterCloudLoad = false;
    

    void Awake()
    {
        EncryptedPlayerPrefs.keys = new string[5];
        EncryptedPlayerPrefs.keys[0] = "G@5cxXC3";
        EncryptedPlayerPrefs.keys[1] = "D@#2CXvF";
        EncryptedPlayerPrefs.keys[2] = "$214#ckr";
        EncryptedPlayerPrefs.keys[3] = "J#9vnBNE";
        EncryptedPlayerPrefs.keys[4] = "JK#8cn@u";

        LoadData();
    }
    
    public void SaveData()
    {
        if (tvgameMgr != null)
        {
            Save_TVGameMgr();
        }
        if (katalkGameMgr != null)
        {
            Save_KatalkGameMgr();
            Save_PhoneStore();
        }
        if (snackGameMgr != null)
        {
            Save_SnackGameMgr();
            Save_SnackStore();
        }
        Save_Option();
        Save_InGameMgr();
        Save_CoinMgr();
        Save_ItemMgr();
        Save_TutorialMgr();
        Save_Admanager();
        Save_LevelMgr();

        if (SceneManager.GetActiveScene().buildIndex.Equals(0))
        {
            Save_EventMgr();
            Save_DailyGiftMgr();
            Save_TicketMgr();
            Save_AchievementMgr();
            Save_CompensationMgr();
        }

        if (isAfterCloudLoad)
        {
            if (SceneManager.GetActiveScene().buildIndex.Equals(0))
            {
                isAfterCloudLoad = false;
                BackkeyMgr.numOfOpenedMenus = 0;
                SceneManager.LoadScene(SceneManager.GetActiveScene().name);
                //mainSceneMgr.ReloadGame();
                //DataLoss_RecoveryMenu.SetActive(false);
            }
        }
        //Debug.Log("Save Completed");
    }
    public void reload()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }
    public void LoadData()
    {
        if (tvgameMgr != null)
        {
            Load_TVGameMgr();
        }
        if (katalkGameMgr != null)
        {
            Load_KatalkGameMgr();
            Load_PhoneStore();
        }
        if (snackGameMgr != null)
        {
            Load_SnackGameMgr();
            Load_SnackStore();
        }
        Load_Option();
        Load_InGameMgr();
        Load_CoinMgr();
        Load_ItemMgr();
        Load_TutorialMgr();
        Load_AdManager();
        Load_LevelMgr();

        if (SceneManager.GetActiveScene().buildIndex.Equals(0))
        {
            Load_EventMgr();
            Load_DailyGiftMgr();
            Load_TicketMgr();
            Load_AchievementMgr();
            Load_CompensationMgr();
        }
    }
    public void Save_TVGameMgr()
    {
        string bestscore = "" + tvgameMgr.BestScore;
        EncryptedPlayerPrefs.SetString("TvGameMgr_BestScore", bestscore);
        EncryptedPlayerPrefs.SetInt("TvGameMgr_numOfMissionClear", tvgameMgr.numOfMissionClear);
        EncryptedPlayerPrefs.SetString("TvGameMgr_FailedLeaderboard","" + tvgameMgr.FailedLeaderboard);
    }
    public void Save_KatalkGameMgr()
    {
        EncryptedPlayerPrefs.SetString("KatalkGameMgr_BestScore", "" + katalkGameMgr.BestScore);
        EncryptedPlayerPrefs.SetInt("KatalkGameMgr_numOfMissionClear", katalkGameMgr.numOfMissionClear);
        EncryptedPlayerPrefs.SetString("KatalkGameMgr_isFirstKatalk", "" + katalkGameMgr.isFirstKatalk);
        EncryptedPlayerPrefs.SetString("KatalkGameMgr_FailedLeaderboard", "" + katalkGameMgr.FailedLeaderboard);
    }
    public void Save_SnackGameMgr()
    {
        EncryptedPlayerPrefs.SetString("SnackGameMgr_BestScore", "" + snackGameMgr.BestScore);
        EncryptedPlayerPrefs.SetInt("SnackGameMgr_numOfMissionClear",snackGameMgr.numOfMissionClear);
        EncryptedPlayerPrefs.SetString("SnackGameMgr_FailedLeaderboard", "" + snackGameMgr.FailedLeaderboard);
    }
    public void Save_Option()
    {
        string isHudOn = "" + option.IsHudOn;
        string isVibrateOn = "" + option.IsVibrateOn;
        string smoothGage = "" + option.smoothGage;
        string showFPS = "" + option.showFPS;
        EncryptedPlayerPrefs.SetFloat("Option_gameSoundVolume", option.gameSoundVolume);
        EncryptedPlayerPrefs.SetFloat("Option_BackgroundVolume",option.BackgroundVolume);
        EncryptedPlayerPrefs.SetString("Option_IsHudOn", isHudOn);
        EncryptedPlayerPrefs.SetString("Option_IsVibrateOn", isVibrateOn);
        EncryptedPlayerPrefs.SetString("Option_smoothGage", smoothGage);
        EncryptedPlayerPrefs.SetString("Option_showFPS", showFPS);
        EncryptedPlayerPrefs.SetString("Option_googleLogin", ""+option.googleLogin);
        EncryptedPlayerPrefs.SetString("Option_autoCloud",""+option.autoCloud);
        EncryptedPlayerPrefs.SetInt("Option_frameKind", option.frameKind);
    }
    public void Save_InGameMgr()
    {
        for (int i = 0; i < inGameMgr.PlayTime.Length; i++)
        {
            string playtime = "" + inGameMgr.PlayTime[i];
            EncryptedPlayerPrefs.SetString("InGameMgr_PlayTime_" + i, playtime);
            EncryptedPlayerPrefs.SetInt("InGameMgr_numOfPlay_" + i, inGameMgr.numOfPlay[i]);
        }
        EncryptedPlayerPrefs.SetInt("InGameMgr_numOfFinish", inGameMgr.numOfFinish);
        EncryptedPlayerPrefs.SetString("InGameMgr_didReviewed",""+inGameMgr.didReviewed);
        //EncryptedPlayerPrefs.SetString("InGameMgr_isFirstBeta", ""+inGameMgr.isFirstBeta);
    }
    public void Save_CoinMgr()
    {
        string coin = "" + CoinMgr.Coin;
        string Acdcoin = "" + CoinMgr.accumulatedCoins;
        EncryptedPlayerPrefs.SetString("CoinMgr_Coin", coin);
        EncryptedPlayerPrefs.SetString("CoinMgr_accumulatedCoin", Acdcoin);
    }
    public void Save_ItemMgr()
    {
        for (int i = 0; i < itemMgr.sleepingGun.Length; i++)
        {
            if (i < itemMgr.ItemKind.Length)
            {
                EncryptedPlayerPrefs.SetInt("ItemMgr_ItemKind_" + i, itemMgr.ItemKind[i]);
                EncryptedPlayerPrefs.SetInt("ItemMgr_ItemDetail_" + i, itemMgr.ItemDetail[i]);
            }
            EncryptedPlayerPrefs.SetInt("SleepingGunNum_" + i, itemMgr.sleepingGun[i].numOfItem);
            EncryptedPlayerPrefs.SetInt("SnackNum_" + i, itemMgr.snack[i].numOfItem);

            EncryptedPlayerPrefs.SetInt("SleepingGunPrice_"+i,itemMgr.sleepingGun[i].price);
            EncryptedPlayerPrefs.SetInt("SnackPrice_" + i, itemMgr.snack[i].price);

            EncryptedPlayerPrefs.SetInt("GlassesNum_" + i, itemMgr.glasses[i].numOfItem);
            EncryptedPlayerPrefs.SetInt("GlassesPrice_" + i, itemMgr.glasses[i].price);
        }
        EncryptedPlayerPrefs.SetInt("ItemMgr_ResetTime", itemMgr.ResetTime);
        EncryptedPlayerPrefs.SetString("ItemMgr_isFirstItem", "" + itemMgr.isFirstItem);
    }
    public void Save_PhoneStore()
    {
        EncryptedPlayerPrefs.SetInt("PhoneStore_SelectedPhoneCode",phoneStore.SelectedPhoneCode);
        for(int i = 1; i < phoneStore.Phones.Length; i++)
        {
            EncryptedPlayerPrefs.SetString("PhoneStore_Phones"+i,phoneStore.Phones[i].hasThisPhone.ToString());
        }
    }
    public void Save_SnackStore()
    {
        for (int i = 1; i < snackStore.Buscuits.Length; i++)
        {
            EncryptedPlayerPrefs.SetInt("SnackStore_numofbuscuit" + i, snackStore.Buscuits[i].numOfbuscuit);
            EncryptedPlayerPrefs.SetInt("SnackStore_snackLeft" + i, snackStore.Buscuits[i].snackLeft);
            EncryptedPlayerPrefs.SetInt("SnackStore_snackCapacity" + i, snackStore.Buscuits[i].snackCapacity);
        }
        EncryptedPlayerPrefs.SetInt("SnackStore_selectedBuscuit",snackStore.selectedBuscuit);
    }
    public void Save_TutorialMgr()
    {
        for (int i = 0; i < tutorialMgr.didTutorialComplete.Length; i++)
            EncryptedPlayerPrefs.SetString("didTutorialComplete" + i, "" + tutorialMgr.didTutorialComplete[i]);
    }
    public void Save_Admanager()
    {
        EncryptedPlayerPrefs.SetInt("AdManager_numOfAdView", adManager.numOfAdView);
    }
    public void Save_EventMgr()
    {
        EncryptedPlayerPrefs.SetString("EventMgr_didFixedEventRewarded0", eventMgr.didFixedEventRewarded[0].ToString());
        EncryptedPlayerPrefs.SetString("EventMgr_didFixedEventRewarded1", eventMgr.didFixedEventRewarded[1].ToString());

        EncryptedPlayerPrefs.SetString("MainSceneMgr_isMiddleUIOn", mainSceneMgr.isMiddleUIOn.ToString());
    }
    public void Save_DailyGiftMgr()
    {
        EncryptedPlayerPrefs.SetInt("DailyGiftMgr_dayOfyear", dailyGiftMgr.dayOfyear);
        EncryptedPlayerPrefs.SetInt("DailyGiftMgr_year", dailyGiftMgr.year);
        //EncryptedPlayerPrefs.SetString("DailyGiftMgr_todayGet", dailyGiftMgr.todayGet.ToString());
        EncryptedPlayerPrefs.SetInt("DailyGiftMgr_numOfAttend",dailyGiftMgr.numOfAttend);
    }
    public void Save_TicketMgr()
    {
        EncryptedPlayerPrefs.SetInt("TicketMgr_RandomItemTicket_amount",ticketMgr.RandomItemTicket_amount);
        EncryptedPlayerPrefs.SetInt("TicketMgr_NormalItemTicket_amount", ticketMgr.NormalItemTicket_amount);
        EncryptedPlayerPrefs.SetInt("TicketMgr_HighRankItemTicket_amount", ticketMgr.HighRankItemTicket_amount);
    }
    public void Save_AchievementMgr()
    {
        for (int i = 0; i < achievementMgr.achievements.Length; i++)
            EncryptedPlayerPrefs.SetInt("AchievementMgr_step" + i, achievementMgr.achievements[i].step);
    }
    public void Save_CompensationMgr()
    {
        EncryptedPlayerPrefs.SetString("CompensationMgr_offered",CompensationMgr.offered+"");
    }
    public void Save_LevelMgr()
    {
        EncryptedPlayerPrefs.SetInt("LevelMgr_Level", levelMgr.Level);
        EncryptedPlayerPrefs.SetInt("LevelMgr_Exp", levelMgr.Exp);
        EncryptedPlayerPrefs.SetInt("LevelMgr_AccumulatedExp", levelMgr.AccumulatedExp);
        EncryptedPlayerPrefs.SetInt("LevelMgr_availableStat", levelMgr.availableStat);
        for (int i = 0; i < levelMgr.StatArr.Length; i++)
        {
            EncryptedPlayerPrefs.SetInt("LevelMgr_statLevel" + i, levelMgr.StatArr[i].statLevel);
        }
    }
    //==============================Load=================================
    public void Load_TVGameMgr()
    {
        tvgameMgr.BestScore = ulong.Parse(EncryptedPlayerPrefs.GetString("TvGameMgr_BestScore", "0"));
        tvgameMgr.numOfMissionClear = EncryptedPlayerPrefs.GetInt("TvGameMgr_numOfMissionClear", 0);
        tvgameMgr.FailedLeaderboard = bool.Parse(EncryptedPlayerPrefs.GetString("TvGameMgr_FailedLeaderboard", "true"));
    }
    public void Load_KatalkGameMgr()
    {
        katalkGameMgr.BestScore = ulong.Parse(EncryptedPlayerPrefs.GetString("KatalkGameMgr_BestScore", "0"));
        katalkGameMgr.numOfMissionClear = EncryptedPlayerPrefs.GetInt("KatalkGameMgr_numOfMissionClear", 0);
        katalkGameMgr.isFirstKatalk = bool.Parse(EncryptedPlayerPrefs.GetString("KatalkGameMgr_isFirstKatalk", "true"));
        katalkGameMgr.FailedLeaderboard = bool.Parse(EncryptedPlayerPrefs.GetString("KatalkGameMgr_FailedLeaderboard", "true"));
    }
    public void Load_SnackGameMgr()
    {
        snackGameMgr.BestScore = ulong.Parse(EncryptedPlayerPrefs.GetString("SnackGameMgr_BestScore", "0"));
        snackGameMgr.numOfMissionClear = EncryptedPlayerPrefs.GetInt("SnackGameMgr_numOfMissionClear", 0);
        snackGameMgr.FailedLeaderboard = bool.Parse(EncryptedPlayerPrefs.GetString("SnackGameMgr_FailedLeaderboard", "true"));
    }
    public void Load_Option()
    {
        option.gameSoundVolume = EncryptedPlayerPrefs.GetFloat("Option_gameSoundVolume", 1.0f);
        option.BackgroundVolume = EncryptedPlayerPrefs.GetFloat("Option_BackgroundVolume",1.0f);
        option.IsHudOn = bool.Parse(EncryptedPlayerPrefs.GetString("Option_IsHudOn", "true"));
        option.IsVibrateOn = bool.Parse(EncryptedPlayerPrefs.GetString("Option_IsVibrateOn", "false"));
        option.smoothGage = bool.Parse(EncryptedPlayerPrefs.GetString("Option_smoothGage", "true"));
        option.showFPS = bool.Parse(EncryptedPlayerPrefs.GetString("Option_showFPS", "true"));
        option.googleLogin = bool.Parse(EncryptedPlayerPrefs.GetString("Option_googleLogin","true"));
        option.autoCloud = bool.Parse(EncryptedPlayerPrefs.GetString("Option_autoCloud", "true"));
        option.frameKind = EncryptedPlayerPrefs.GetInt("Option_frameKind", 2);
    }
    public void Load_InGameMgr()
    {
        for (int i = 0; i < inGameMgr.PlayTime.Length; i++)
        {
            inGameMgr.PlayTime[i] = ulong.Parse(EncryptedPlayerPrefs.GetString("InGameMgr_PlayTime_" + i, "0"));
            inGameMgr.numOfPlay[i] = EncryptedPlayerPrefs.GetInt("InGameMgr_numOfPlay_" + i, 0);
        }
        inGameMgr.numOfFinish = EncryptedPlayerPrefs.GetInt("InGameMgr_numOfFinish", 0);
        inGameMgr.didReviewed = bool.Parse(EncryptedPlayerPrefs.GetString("InGameMgr_didReviewed","false"));
        //inGameMgr.isFirstBeta = bool.Parse(EncryptedPlayerPrefs.GetString("InGameMgr_isFirstBeta","true"));
    }
    public void Load_CoinMgr()
    {
        CoinMgr.Coin = ulong.Parse(EncryptedPlayerPrefs.GetString("CoinMgr_Coin", "0"));
        CoinMgr.accumulatedCoins = ulong.Parse(EncryptedPlayerPrefs.GetString("CoinMgr_accumulatedCoin", "0"));
    }
    public void Load_ItemMgr()
    {
        for (int i = 0; i < itemMgr.sleepingGun.Length; i++)
        {
            if (i < itemMgr.ItemKind.Length)
            {
                itemMgr.ItemKind[i] = EncryptedPlayerPrefs.GetInt("ItemMgr_ItemKind_" + i, 0);
                itemMgr.ItemDetail[i] = EncryptedPlayerPrefs.GetInt("ItemMgr_ItemDetail_" + i, 0);
            }
            itemMgr.sleepingGun[i].numOfItem = EncryptedPlayerPrefs.GetInt("SleepingGunNum_" + i, 0);
            itemMgr.snack[i].numOfItem = EncryptedPlayerPrefs.GetInt("SnackNum_" + i, 0);
            itemMgr.glasses[i].numOfItem = EncryptedPlayerPrefs.GetInt("GlassesNum_" + i, 0);
            itemMgr.sleepingGun[i].OriginalPrice = itemMgr.sleepingGun[i].price;
            itemMgr.snack[i].OriginalPrice = itemMgr.snack[i].price;
            itemMgr.glasses[i].OriginalPrice = itemMgr.glasses[i].price;
            itemMgr.sleepingGun[i].price = EncryptedPlayerPrefs.GetInt("SleepingGunPrice_" + i, itemMgr.sleepingGun[i].price);
            itemMgr.snack[i].price = EncryptedPlayerPrefs.GetInt("SnackPrice_"+i, itemMgr.snack[i].price);
            itemMgr.glasses[i].price = EncryptedPlayerPrefs.GetInt("GlassesPrice_"+i,itemMgr.glasses[i].price);
        }
        itemMgr.ResetTime = EncryptedPlayerPrefs.GetInt("ItemMgr_ResetTime", itemMgr.ResetTime);
        itemMgr.isFirstItem = bool.Parse(EncryptedPlayerPrefs.GetString("ItemMgr_isFirstItem", "true"));
    }
    public void Load_PhoneStore()
    {
        phoneStore.SelectedPhoneCode = EncryptedPlayerPrefs.GetInt("PhoneStore_SelectedPhoneCode",0);
        for(int i = 1; i < phoneStore.Phones.Length; i++)
        {
            phoneStore.Phones[i].hasThisPhone = bool.Parse(EncryptedPlayerPrefs.GetString("PhoneStore_Phones" + i,"false"));
        }
    }
    public void Load_SnackStore()
    {
        for (int i = 0; i < snackStore.Buscuits.Length; i++)
        {
            snackStore.Buscuits[i].numOfbuscuit = EncryptedPlayerPrefs.GetInt("SnackStore_numofbuscuit" + i, 0);
            snackStore.Buscuits[i].snackLeft = EncryptedPlayerPrefs.GetInt("SnackStore_snackLeft" + i, 10);
            snackStore.Buscuits[i].snackCapacity = EncryptedPlayerPrefs.GetInt("SnackStore_snackCapacity" + i, 75);
        }
        snackStore.selectedBuscuit = EncryptedPlayerPrefs.GetInt("SnackStore_selectedBuscuit",0);
    }
    public void Load_TutorialMgr()
    {
        for (int i = 0; i < tutorialMgr.didTutorialComplete.Length; i++)
            tutorialMgr.didTutorialComplete[i] = bool.Parse(EncryptedPlayerPrefs.GetString("didTutorialComplete" + i, "false"));
    }
    public void Load_AdManager()
    {
        adManager.numOfAdView = EncryptedPlayerPrefs.GetInt("AdManager_numOfAdView", 0);
    }
    public void Load_EventMgr()
    {
        eventMgr.didFixedEventRewarded[0] = bool.Parse(EncryptedPlayerPrefs.GetString("EventMgr_didFixedEventRewarded0", "false"));
        eventMgr.didFixedEventRewarded[1] = bool.Parse(EncryptedPlayerPrefs.GetString("EventMgr_didFixedEventRewarded1", "false"));

        mainSceneMgr.isMiddleUIOn = bool.Parse(EncryptedPlayerPrefs.GetString("MainSceneMgr_isMiddleUIOn", "true"));
    }
    public void Load_DailyGiftMgr()
    {
        dailyGiftMgr.dayOfyear = EncryptedPlayerPrefs.GetInt("DailyGiftMgr_dayOfyear",0);
        dailyGiftMgr.year = EncryptedPlayerPrefs.GetInt("DailyGiftMgr_year",2018);
        //dailyGiftMgr.todayGet = bool.Parse(EncryptedPlayerPrefs.GetString("DailyGiftMgr_todayGet","false"));
        dailyGiftMgr.numOfAttend = EncryptedPlayerPrefs.GetInt("DailyGiftMgr_numOfAttend",0);
    }
    public void Load_TicketMgr()
    {
        ticketMgr.RandomItemTicket_amount = EncryptedPlayerPrefs.GetInt("TicketMgr_RandomItemTicket_amount", 0);
        ticketMgr.NormalItemTicket_amount = EncryptedPlayerPrefs.GetInt("TicketMgr_NormalItemTicket_amount", 0);
        ticketMgr.HighRankItemTicket_amount = EncryptedPlayerPrefs.GetInt("TicketMgr_HighRankItemTicket_amount", 0);
    }
    public void Load_AchievementMgr()
    {
        for (int i = 0; i < achievementMgr.achievements.Length; i++)
            achievementMgr.achievements[i].step = EncryptedPlayerPrefs.GetInt("AchievementMgr_step" + i, 0);
    }
    public void Load_CompensationMgr()
    {
        CompensationMgr.offered = bool.Parse(EncryptedPlayerPrefs.GetString("CompensationMgr_offered","false"));
    }
    public void Load_LevelMgr()
    {
        levelMgr.Level = EncryptedPlayerPrefs.GetInt("LevelMgr_Level", 1);
        levelMgr.Exp = EncryptedPlayerPrefs.GetInt("LevelMgr_Exp", 0);
        levelMgr.AccumulatedExp = EncryptedPlayerPrefs.GetInt("LevelMgr_AccumulatedExp", 0);
        levelMgr.availableStat = EncryptedPlayerPrefs.GetInt("LevelMgr_availableStat", 1);
        for(int i = 0; i < levelMgr.StatArr.Length; i++)
        {
            levelMgr.StatArr[i].statLevel = EncryptedPlayerPrefs.GetInt("LevelMgr_statLevel" + i);
        }
    }
}
