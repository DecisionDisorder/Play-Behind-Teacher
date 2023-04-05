using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MainSceneMgr : MonoBehaviour {
    
    public GameObject[] GameButtons;

    public Animation RotatingMenu_ani;
    public Animation Playbutton_ani;
    public GameObject[] GameMenus;
    public Text[] GameName_Texts;
    public Image[] GameImage_img;
    public int[] GameNum;
    
    bool ChangeEnalbled = true;

    public DataManager dataManager;
    public BackUpDataMgr backUpDataMgr;
    //DataGrouping dgdata = new DataGrouping();
    ulong[] BestScores = new ulong[3];
    public Text BestScore_text;
    public Color[] ScoreColors;

    public Text AveragePlayTime_Text;

    public GameObject StoreMenu;
    public GameObject OptionMenu;
    public GameObject store_subMenu;
    public GameObject Ad_Menu;
    public Animation Store_MenuAni;
    public Animation Option_MenuAni;
    public Animation Ad_MenuAni;

    public InGameMgr inGameMgr;
    public Sprite[] GameThumbnail_sprite;

    public ItemMgr itemMgr;

    public string[] GameNames;
    
    public CoinMgr coinMgr;
    public Option option;
    public TutorialMgr tutorialMgr;
    public AdManager adManager;
    public AdMobMgr adMobMgr;
    public TvGameMgr tvGameMgr;
    public KatalkGameMgr katalkGameMgr;
    public SnackGameMgr snackGameMgr;

    public GameObject Message;
    public Text Message_text;
    IEnumerator messageWait;

    public AudioSource GameChangeSound_AS;

    public Animation MiddleUI_Ani;
    public GameObject[] MiddleUI_UpDown_imgs;
    public bool isMiddleUIOn = true;
    public GameObject MiddleUI;

    void Start ()
    {
        messageWait = WaitforMessage(1.2f);
        RotatingMenu_ani["RotatingMenu(Right)_ani"].speed = 1.5f;
        RotatingMenu_ani["RotatingMenu_ani"].speed = 1.5f;
        
        WriteGameInfo();

        itemMgr.SetSGNumOfItem();
        itemMgr.SetSNNumOfItem();
        itemMgr.SetSGPrice();
        itemMgr.SetSNPrice();
        SettingGameNum();
        SettingGameMode(true);
        SettingMiddleUI();
    }
    
    public void ReloadGame()
    {
        coinMgr.ReloadStart();
        Start();
        itemMgr.ReloadStart();
        option.ReloadStart();
    }
    public void PressKey_Start()
    {
        if (!tutorialMgr.isTutorialOn)
        {
            if (GameMenus[1].transform.localPosition.x.Equals(0))
            {
                adMobMgr.bannerView.Hide();
                dataManager.SaveData();
                switch (InGameMgr.GameMode)
                {
                    case 0://TV
                        SceneManager.LoadScene("TVGame_Scene");
                        break;
                    case 1://Phone
                        SceneManager.LoadScene("KatalkScene");
                        break;
                    case 2:
                        SceneManager.LoadScene("SnackScene");
                        break;
                }
            }
        }
        else
        {
            WriteMessage("튜토리얼 중엔 게임을 시작할 수 없습니다.");
        }
    }

    public void PressKey_other(int nKey)
    {
        switch(nKey)
        {
            case 0://옵션
                if (BackkeyMgr.numOfOpenedMenus < 1)
                {
                    OptionMenu.SetActive(true);
                    Option_MenuAni.Play();
                    BackkeyMgr.numOfOpenedMenus++;
                }
                else
                {
                    WriteMessage("동시에 다른 두개의 메뉴를 띄을 수 없습니다.");
                }
                break;
            case 1:
                if (BackkeyMgr.numOfOpenedMenus < 1)
                {
                    StoreMenu.SetActive(true);
                    Store_MenuAni.Play();
                    BackkeyMgr.numOfOpenedMenus++;
                }
                else
                {
                    WriteMessage("동시에 다른 두개의 메뉴를 띄을 수 없습니다.");
                }
                break;
            case 2://AD
                if(BackkeyMgr.numOfOpenedMenus < 1)
                {
                    Ad_Menu.SetActive(true);
                    Ad_MenuAni.Play();
                    BackkeyMgr.numOfOpenedMenus++;
                }
                else
                {
                    WriteMessage("동시에 다른 두개의 메뉴를 띄울 수 없습니다.");
                }
                break;
        }
    }
    public void PressKey_otherBack(int nKey)
    {
        switch(nKey)
        {
            case 0:
                BackkeyMgr.numOfOpenedMenus--;
                //dataManager.SaveData();
                inGameMgr.CloseMenu(Option_MenuAni, OptionMenu);
                //OptionMenu.SetActive(false);
                break;
            case 1:
                if (BackkeyMgr.numOfOpenedMenus < 2)
                {
                    BackkeyMgr.numOfOpenedMenus--;
                    //dataManager.SaveData();
                    //StoreMenu.SetActive(false);
                    inGameMgr.CloseMenu(Store_MenuAni, StoreMenu);
                }
                else if(BackkeyMgr.numOfOpenedMenus.Equals(2))
                {
                    BackkeyMgr.numOfOpenedMenus -= 2;
                    store_subMenu.SetActive(false);
                    //dataManager.SaveData();
                    StoreMenu.SetActive(false);
                }
                break;
            case 2:
                BackkeyMgr.numOfOpenedMenus--;
                //Ad_Menu.SetActive(false);
                //dataManager.SaveData();
                inGameMgr.CloseMenu(Ad_MenuAni, Ad_Menu);
                break;
        }
    }
    public void WriteMessage(string message, float time = 1.2f)
    {
        StopCoroutine(messageWait);

        Message.SetActive(true);
        Message_text.text = message;

        messageWait = WaitforMessage(time);
        StartCoroutine(messageWait);
    }
    IEnumerator WaitforMessage(float time)
    {
        yield return new WaitForSeconds(time);

        Message.SetActive(false);
    }
    Vector2[] TouchPos = new Vector2[2];
    public void onTouchDown()
    {
        touchContinued = true;
        if (RuntimePlatform.Android.Equals(Application.platform))
            TouchPos[0] = Input.GetTouch(0).position;
        else
            TouchPos[0] = Input.mousePosition;
    }
    public void onToucnDown_Main()
    {
        if (GameMenus[1].transform.localPosition.x.Equals(0))
        {
            allowCenterDrag = true;
        }
        else
            allowCenterDrag = false;
    }
    public void onTouchUp()
    {
        if (RuntimePlatform.Android.Equals(Application.platform))
            TouchPos[1] = Input.GetTouch(0).position;
        else
            TouchPos[1] = Input.mousePosition;
        float deltaPos = TouchPos[1].x - TouchPos[0].x;
        if (deltaPos > 0)
        {
            TurnRight();
        }
        else if (deltaPos < 0)
        {
            TurnLeft();
        }

    }
    bool touchContinued = true;
    bool allowCenterDrag;
    public void onTouchUp_thumbnail(int button)
    {
        if (touchContinued)
        {
            if (RuntimePlatform.Android.Equals(Application.platform))
                TouchPos[1] = Input.GetTouch(0).position;
            else
                TouchPos[1] = Input.mousePosition;

            float deltaPos = TouchPos[1].x - TouchPos[0].x;
            
            if (deltaPos > 10 || deltaPos < -10)
            {
                if (deltaPos > 0)
                {
                    TurnRight();
                }
                else if (deltaPos < 0)
                {
                    TurnLeft();
                }
            }
            else
            {
                if (button < 2)
                    ChangeGame(button);
                else
                {
                    if(allowCenterDrag)
                        PressKey_Start();
                }
            }
        }
        else
            touchContinued = true;
    }
    public void onTouchExit()
    {
        touchContinued = false;
    }
    void TurnLeft()
    {
        if (ChangeEnalbled)
        {
            ChangeEnalbled = false;

            InGameMgr.GameMode++;
            if (InGameMgr.GameMode >= GameNames.Length)
                InGameMgr.GameMode = 0;
            WriteGameInfo();

            GameNum[3] = GameNum[0];
            GameImage_img[3].sprite = GameThumbnail_sprite[GameNum[3]];
            GameName_Texts[3].text = GameNames[GameNum[3]];

            GameMenus[2].transform.SetAsLastSibling();
            Playbutton_ani.Play();
            RotatingMenu_ani.Play();
            GameChangeSound_AS.Play();
            StartCoroutine(WaitForAnimation(false));
        }
    }
    void TurnRight()
    {
        if (ChangeEnalbled)
        {
            ChangeEnalbled = false;

            InGameMgr.GameMode--;
            if (InGameMgr.GameMode < 0)
                InGameMgr.GameMode = GameNames.Length - 1;
            WriteGameInfo();
            GameNum[3] = GameNum[2];
            GameImage_img[3].sprite = GameThumbnail_sprite[GameNum[3]];
            GameName_Texts[3].text = GameNames[GameNum[3]];

            GameMenus[0].transform.SetAsLastSibling();
            Playbutton_ani.Play();
            RotatingMenu_ani.CrossFade("RotatingMenu(Right)_ani");
            GameChangeSound_AS.Play();
            StartCoroutine(WaitForAnimation(true));
        }
    }
    public void ChangeGame(int dir)
    {
        switch (dir)
        {
            case 0://Left
                TurnLeft();
                break;

            case 1://Right
                TurnRight();
                break;
        }
    }
    IEnumerator WaitForAnimation(bool isRight)
    {
        while (RotatingMenu_ani.IsPlaying("RotatingMenu_ani") || RotatingMenu_ani.IsPlaying("RotatingMenu(Right)_ani"))
        {
            yield return new WaitForEndOfFrame();
        }
        SettingGameMode(isRight);
        ResetGameMenuPos();

    }
    void WriteGameInfo()
    {
        GetBestScores();
        ulong bestscore = BestScores[InGameMgr.GameMode];
        if (!bestscore.Equals(0))
            BestScore_text.text = "최고 기록: " + SetPointSpot(bestscore);
        else
            BestScore_text.text = "최고 기록: 0";
       
        if(bestscore < 500)
        {
            BestScore_text.color = ScoreColors[0];
        }
        else if(bestscore < 1000)
        {
            BestScore_text.color = ScoreColors[1];
        }
        else if(bestscore < 2000)
        {
            BestScore_text.color = ScoreColors[2];
        }
        else if(bestscore < 3000)
        {
            BestScore_text.color = ScoreColors[3];
        }
        else if(bestscore < 4500)
        {
            BestScore_text.color = ScoreColors[4];
        }
        else
        {
            BestScore_text.color = ScoreColors[5];
        }
        //if (inGameMgr.PlayTime[InGameMgr.GameMode] != 0 && inGameMgr.numOfPlay[InGameMgr.GameMode] != 0)
        //    AveragePlayTime_Text.text = "평균 플레이 타임: " + inGameMgr.PlayTime[InGameMgr.GameMode] / (ulong)inGameMgr.numOfPlay[InGameMgr.GameMode] + "초";
        //else
        //    AveragePlayTime_Text.text = "평균 플레이 타임: 기록되지 않음";
    }
    void GetBestScores()
    {
        BestScores[0] = tvGameMgr.BestScore;
        BestScores[1] = katalkGameMgr.BestScore;
        BestScores[2] = snackGameMgr.BestScore;
    }
    void SettingGameMode(bool isRight)
    {
        if (isRight)
        {
            int temp = GameNum[2];
            GameNum[2] = GameNum[1];
            GameNum[1] = GameNum[0];
            GameNum[0] = temp;
        }
        else
        {
            int temp = GameNum[0];
            GameNum[0] = GameNum[1];
            GameNum[1] = GameNum[2];
            GameNum[2] = temp;
        }

        GameName_Texts[1].text = GameNames[GameNum[1]];
        GameName_Texts[2].text = GameNames[GameNum[2]];
        GameName_Texts[3].text = GameNames[GameNum[3]];
        GameName_Texts[0].text = GameNames[GameNum[0]];

        GameImage_img[1].sprite = GameThumbnail_sprite[GameNum[1]];
        GameImage_img[2].sprite = GameThumbnail_sprite[GameNum[2]];
        GameImage_img[3].sprite = GameThumbnail_sprite[GameNum[3]];
        GameImage_img[0].sprite = GameThumbnail_sprite[GameNum[0]];
        /*
        GameName_Texts[1].text = GameNames[InGameMgr.GameMode];
        GameName_Texts[2].text = GameNames[NextNum(InGameMgr.GameMode, isRight)];
        GameName_Texts[3].text = GameNames[BehindNum(InGameMgr.GameMode, isRight)];
        GameName_Texts[0].text = GameNames[PriorNum(InGameMgr.GameMode, isRight)];

        GameImage_img[1].sprite = GameThumbnail_sprite[InGameMgr.GameMode];
        GameImage_img[2].sprite = GameThumbnail_sprite[NextNum(InGameMgr.GameMode, isRight)];
        GameImage_img[3].sprite = GameThumbnail_sprite[BehindNum(InGameMgr.GameMode, isRight)];
        GameImage_img[0].sprite = GameThumbnail_sprite[PriorNum(InGameMgr.GameMode, isRight)];
        */
    }
    int PriorNum(int CurrentNum, bool isRight)//왼쪽
    {
        /*int priorNum = CurrentNum - 1;
        if (priorNum < 0)
            priorNum = GameNames.Length - 1;
        return priorNum;*/
        if (isRight)
            return GameNum[2];
        else
            return GameNum[1];
    } 
    int NextNum(int CurrentNum, bool isRight)//오른쪽
    {
        /*int nextNum = CurrentNum + 1;
        if (nextNum >= GameNames.Length)
            nextNum = 0;
        return nextNum;*/
        if (isRight)
            return GameNum[1];
        else
            return GameNum[0];
    }
    int BehindNum(int CurrentNum, bool isRight)//뒤
    {
        /*int behindNum;
        if (isRight)
        {
            behindNum = CurrentNum + 2;
            if(behindNum.Equals(GameNames.Length))
            {
                behindNum = 0;
            }
            else if(behindNum > GameNames.Length)
            {
                behindNum = 1;
            }
        }
        else
        {
            behindNum = CurrentNum - 2;
            if (behindNum.Equals(-1))
            {
                behindNum = GameNames.Length-1;
            }
            else if (behindNum < -1)
            {
                behindNum = GameNames.Length-2;
            }
        }
        return behindNum;*/
        if (isRight)
            return GameNum[2];
        else
            return GameNum[0];
    }

    public void SettingGameNum()
    {
        GameNum[0] = InGameMgr.GameMode;
        for (int i = 1; i <= GameNum.Length - 2; i++)
        {
            int mode = InGameMgr.GameMode + i;
            if (mode >= GameNum.Length-1)
                mode -= GameNum.Length - 1;
            GameNum[i] = mode;
        }
    }

    void ResetGameMenuPos()
    {
        GameMenus[0].transform.localPosition = new Vector3(-250,0,0);
        GameMenus[1].transform.localPosition = new Vector3(0, 0, 0);
        GameMenus[2].transform.localPosition = new Vector3(250, 0, 0);
        GameMenus[3].transform.localPosition = new Vector3(0,0,0);

        GameMenus[0].transform.localScale = new Vector3(0.75f,0.75f,1);
        GameMenus[1].transform.localScale = new Vector3(1, 1, 1);
        GameMenus[2].transform.localScale = new Vector3(0.75f, 0.75f, 1);
        GameMenus[3].transform.localScale = new Vector3(0.5f, 0.5f, 1);

        ChangeEnalbled = true;
    }

    public void MiddleUI_MenuCon()
    {
        if(isMiddleUIOn)
        {
            isMiddleUIOn = false;
            MiddleUI_Ani.CrossFade("CloseMiddleUI");
        }
        else
        {
            MiddleUI_Ani.Play();
            isMiddleUIOn = true;
        }
        StartCoroutine(WaitMUIAni());
    }
    IEnumerator WaitMUIAni()
    {
        while(MiddleUI_Ani.isPlaying)
        {
            yield return new WaitForSeconds(0.1f);
        }
        SettingMiddleUI();
    }
    void SettingMiddleUI()
    {
        if(isMiddleUIOn)
        {
            MiddleUI.transform.localPosition = new Vector2(0, 100);
        }
        else
        {
            MiddleUI.transform.localPosition = new Vector2(0, -30);
        }
        MiddleUI_UpDown_imgs[0].SetActive(!isMiddleUIOn);
        MiddleUI_UpDown_imgs[1].SetActive(isMiddleUIOn);
    }
    string SetPointSpot(ulong score)
    {
        string SCORE = string.Format("{0:#,###}", score);
        return SCORE;
    }
}
