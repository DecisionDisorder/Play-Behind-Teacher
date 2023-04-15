using UnityEngine;
using System.Collections;

/// <summary>
/// 인게임 데이터 모음 클래스
/// </summary>
[System.Serializable]
public class DataGrouping {

    public ulong TvGameMgr_BestScore;
    public ulong KatalkGameMgr_BestScore;
    public ulong SnackGameMgr_BestScore;

    public bool Option_IsHudOn;
    public bool Option_IsVibrateOn;
    public float Option_gameSoundVolume;
    public float Option_BackgroundVolume;
    public bool Option_showFPS = false;
    public bool Option_smoothGage;
    public bool Option_googleLogin;
    public bool Option_autoCloud;

    public ulong InGameMgr_PlayTime_0;
    public ulong InGameMgr_PlayTime_1;
    public int InGameMgr_numOfPlay_0;
    public int InGameMgr_numOfPlay_1;

    public ulong CoinMgr_Coin;

    public int ItemMgr_ItemKind_0;
    public int ItemMgr_ItemKind_1;
    public int ItemMgr_ItemDetail_0;
    public int ItemMgr_ItemDetail_1;

    public bool[] PhoneStore_Phones_hasThisPhone = new bool[5];
    public int PhoneStore_SelectedPhoneCode;

    public int[] SnackStore_numOfbuscuit = new int[5];

    public int[] SleepingGunNum = new int[4];

    public int[] SnackNum = new int[4];

    public int[] GlassesNum = new int[4];
    
    //도전과제 변수
    public ulong CoinMgr_AcdCoin;
    public int InGameMgr_numOfFinish;
    public int TvGameMgr_numOfMissionClear;
    public int KatalkGameMgr_numOfMissionClear;
    public int SnackGameMgr_numOfMissionClear;

    public bool[] TutorialMgr_didTutorialComplete = new bool[3];

    public int AdManager_numOfAdView;

    public bool EventMgr_didFixedEventRewarded0;
    public bool EventMgr_didFixedEventRewarded1;
    public bool EventMgr_RetwitEvent;

    public int DailyGiftMgr_numOfAttend;
    public int DailyGiftMgr_year;
    public int DailyGiftMgr_dayOfyear;
    public bool DailyGiftMgr_todayGet;

    public int TicketMgr_RandomItemTicket_amount;
    public int TicketMgr_NormalItemTicket_amount;
    public int TicketMgr_HighRankItemTicket_amount;

    public int[] AchievementMgr_steps = new int[8];

    public bool CompensationMgr_offered;

    public int LevelMgr_Level;
    public int LevelMgr_Exp;
    public int LevelMgr_AccumulatedExp;
    public int LevelMgr_availableStat;
    public int[] LevelMgr_StatArr_statLevel = new int[5];
}
