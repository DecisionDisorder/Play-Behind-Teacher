using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class TutorialMgr : MonoBehaviour {

    public bool isTutorialOn = false;
    public bool gameovered_teacher = false;
    public bool gameovered_endurance = false;
    public bool gameovered_snack = false;
    public GameObject Tutorial_Group;
    public bool[] didTutorialComplete = new bool[3];

    public GameObject[] Game_tutorial = new GameObject[7];
    
    public MainSceneMgr mainSceneMgr;
    public ItemMgr itemMgr;
    public InGameMgr inGameMgr;
    public DataManager dataManager;
    public TeacherMgr teacherMgr;
    public DailyGiftMgr dailyGiftMgr;
    
    public int explainStep;

    public int SceneNumber;


    void Start() {
        SceneNumber = SceneManager.GetActiveScene().buildIndex;
        if (!didTutorialComplete[SceneNumber])
        {
            Tutorial_Group.SetActive(true);
            isTutorialOn = true;
            ProcessTutorial_InGame();
        }
    }
    public void ResetTutorialData(int kind)
    {
        didTutorialComplete[kind] = false;
        dataManager.SaveData();
    }
    //=======================================================#메인씬#=======================================================
    public void CheckEvent_MainScene()
    {
        switch(explainStep)
        {
            case 2:
                mainSceneMgr.StoreMenu.SetActive(true);
                break;
            case 3:
                itemMgr.ItemStore_Menu.SetActive(true);
                break;
            case 6:
                itemMgr.ItemStore_Menu.SetActive(false);
                mainSceneMgr.StoreMenu.SetActive(false);
                break;
        }
    }
    public void SkipTutorial_MainScene()
    {
        isTutorialOn = false;
        Tutorial_Group.SetActive(false);
        didTutorialComplete[SceneNumber] = true;
        dailyGiftMgr.CheckingDailyGift();
        dataManager.SaveData();
    }
    //=======================================================#TV게임 씬=======================================================
    public TvGameMgr tvGameMgr;
    public TVButtonMgr tvButtonMgr;

    public GameObject tvpowerBlockImg;
    public GameObject RCmoveArea;

    public void CheckEvent_TvGame()
    {
        switch(explainStep)
        {
            case 0:
                needLateOn = true;
                break;
            case 1:
                tvButtonMgr.PressRemoteCon(0);
                StartCoroutine(WaitLightOff(0.4f));
                StartCoroutine(WaitColorChange("orange"));
                break;
            case 2:
                Time.timeScale = 1.0f;
                inGameMgr.isPause = false;
                needLateOn = false;
                tvButtonMgr.PressRemoteCon(0);
                StartCoroutine(WaitLightOff(0.4f));
                StartCoroutine(WaitColorChange("green"));
                break;
            case 3:
                Time.timeScale = 1.0f;
                inGameMgr.isPause = false;
                tvButtonMgr.PressRemoteCon(0);
                StartCoroutine(WaitLightOff(0.4f));
                tvpowerBlockImg.SetActive(false);
                break;
            case 4:
                Game_tutorial[explainStep - 2].SetActive(false);
                break;
            case 5:
                tvGameMgr.ExecuteMission(0);
                break;
            case 6:
                needLateOn = true;
                break;
            case 7:
                tvGameMgr.CheckChannel(tvButtonMgr.TvChannel);
                Game_tutorial[6].SetActive(false);
                break;
            case 9:
                tvGameMgr.CheckChannel(tvButtonMgr.TvChannel);
                Game_tutorial[explainStep - 2].SetActive(false);
                Game_tutorial[explainStep - 1].SetActive(false);
                Game_tutorial[explainStep].SetActive(true);
                break;
        }
    }
    IEnumerator WaitColorChange(string color)
    {
        if(color.Equals("orange"))
        {
            while(!teacherMgr.Teacher_img.color.Equals(teacherMgr.Orange))
            {
                yield return new WaitForEndOfFrame();
            }
            Game_tutorial[explainStep-1].SetActive(true);
            Time.timeScale = 0.0f;
            inGameMgr.isPause = true;
        }
        else if(color.Equals("green"))
        {
            while(!teacherMgr.Teacher_img.color.Equals(teacherMgr.Green))
            {
                yield return new WaitForEndOfFrame();
            }
            Game_tutorial[explainStep-1].SetActive(true);
            Time.timeScale = 0.0f;
            inGameMgr.isPause = true;

            if(SceneNumber.Equals(3))
                BlockEat.SetActive(false);
        }
    }
    IEnumerator WaitLightOff(float time)
    {
        yield return new WaitForSeconds(time);

        tvButtonMgr.PressRemoteCon(-1);
    }
    
    //=======================================================#까톡게임 씬=======================================================

    public KatalkGameMgr katalkGameMgr;
    public PhoneConMgr phoneConMgr;
    public SuggestWords suggestWords;

    public Button Sendbutton_NextButton;
    public Option option;

    public Text MissionResult_text;
    public string successMessage = "잘하셨네요! 앞으로 이렇게 하시면 됩니다!!";
    public string failMessage = "그럴 수 있어요.. 다음부터 잘하면 되죠!! 다음 단계로~~";
    public GameObject BlockPhoneOnOffImg;
    public GameObject BlockMessageOnImg;

    public void CheckEvent_Katalk()
    {
        switch (explainStep)
        {
            case 0:
                needLateOn = true;
                break;
            case 1:
                Sendbutton_NextButton.enabled = false;
                if (!phoneConMgr.isPhoneOn)
                    phoneConMgr.OnOffPhone();
                StartCoroutine(WaitColorChange("orange"));
                break;
            case 2:
                Time.timeScale = 1.0f;
                inGameMgr.isPause = false;
                if (phoneConMgr.isPhoneOn)
                    phoneConMgr.OnOffPhone();
                StartCoroutine(WaitColorChange("green"));
                break;
            case 3:
                Time.timeScale = 1.0f;
                inGameMgr.isPause = false;
                if (!phoneConMgr.isPhoneOn)
                    phoneConMgr.OnOffPhone();
                StartCoroutine(WaitforPhoneOn());
                BlockPhoneOnOffImg.SetActive(false);
                needLateOn = false;
                break;
            case 6:
                suggestWords.SetWord();
                break;
            case 8:
                phoneConMgr.OpenKeyboard();
                Sendbutton_NextButton.enabled = true;
                BlockMessageOnImg.SetActive(false);
                break;
            case 9:
                needLateOn = true;
                teacherMgr.TestMode = true;
                break;
            case 10:
                katalkGameMgr.SendTalk();
                needLateOn = false;
                break;
            case 11:
                teacherMgr.TestMode = false;
                break;
        }
    }
    IEnumerator WaitforPhoneOn()
    {
        while(phoneConMgr.PhoneOnOff_animation.IsPlaying("OpeningPhone"))
        {
            yield return new WaitForEndOfFrame();
        }
        Game_tutorial[explainStep-1].SetActive(true);
    }

    //=======================================================#까톡게임 씬=======================================================

    public GameObject nextbutton_EatSnack;
    public GameObject BlockEat;

    public SnackGameMgr snackGameMgr;
    public bool stopTimerForTutorial;

    public void CheckEvent_Snack()
    {
        switch (explainStep)
        {
            case 0:
                needLateOn = true;
                break;
            case 1:
                BlockEat.SetActive(true);
                StartCoroutine(WaitColorChange("orange"));
                break;
            case 2:
                Time.timeScale = 1.0f;
                inGameMgr.isPause = false;
                StartCoroutine(WaitColorChange("green"));
                needLateOn = false;
                break;
            case 3:
                Time.timeScale = 0.0f;
                inGameMgr.isPause = true;
                break;
            case 6:
                snackGameMgr.MissionStart();
                stopTimerForTutorial = true;
                break;
            case 8:
                Time.timeScale = 1.0f;
                inGameMgr.isPause = false;
                stopTimerForTutorial = false;
                teacherMgr.TestMode = true;
                break;
            case 9:
                Time.timeScale = 0.0f;
                inGameMgr.isPause = true;
                break;
            case 12:
                Time.timeScale = 1.0f;
                inGameMgr.isPause = false;
                break;
        }
    }
    public void UnActiveNextAndSnack()
    {
        if(explainStep.Equals(4))
            nextbutton_EatSnack.SetActive(false);
    }
    //=======================================================#공통=======================================================
    public GameObject onGameOver_tut;
    public Text reason_text;
    public bool needLateOn = false;
    public GameObject ResetImg;
    public Animation rotateLoadingCircle_ani;

    public void ProcessTutorial_InGame()
    {
        if (explainStep.Equals(0))
        {
            Game_tutorial[explainStep].SetActive(true);
            if (SceneNumber.Equals(1))
                CheckEvent_TvGame();
            else if (SceneNumber.Equals(2))
                CheckEvent_Katalk();
            else if (SceneNumber.Equals(3))
                CheckEvent_Snack();
            explainStep++;
        }
        else if (explainStep < Game_tutorial.Length-1)
        {
            Game_tutorial[explainStep - 1].SetActive(false);
            if (explainStep < Game_tutorial.Length)
            {
                if (!needLateOn)
                {
                    Game_tutorial[explainStep].SetActive(true);
                }
            }
            if (SceneNumber.Equals(0))
                CheckEvent_MainScene();
            else if (SceneNumber.Equals(1))
                CheckEvent_TvGame();
            else if (SceneNumber.Equals(2))
                CheckEvent_Katalk();
            else if (SceneNumber.Equals(3))
                CheckEvent_Snack();
            explainStep++;
        }
        else
        {
            Time.timeScale = 1.0f;
            inGameMgr.isPause = false;
            Game_tutorial[explainStep - 1].SetActive(false);
            didTutorialComplete[SceneNumber] = true;
            dataManager.SaveData();
            if (SceneNumber > 0)
            {
                ResetImg.SetActive(true);
                rotateLoadingCircle_ani.Play();
                StartCoroutine(WaitResetTime());
            }
            else
            {
                Tutorial_Group.SetActive(false);
                isTutorialOn = false;
                dailyGiftMgr.CheckingDailyGift();
            }
        }
    }
    public void GameOverContinue()
    {
        Time.timeScale = 1.0f;
        inGameMgr.isPause = false;
        onGameOver_tut.SetActive(false);
        teacherMgr.TestMode = true;
        StartCoroutine(WaitAfterContinue());
    }
    IEnumerator WaitAfterContinue()
    {
        while (!teacherMgr.Teacher_img.color.Equals(teacherMgr.Green))
        {
            yield return new WaitForEndOfFrame();
        }
        teacherMgr.TestMode = false;
    }
    public void SkipTutorial_Ingame()
    {
        Game_tutorial[explainStep - 1].SetActive(false);
        didTutorialComplete[SceneNumber] = true;
        dataManager.SaveData();

        ResetImg.SetActive(true);
        rotateLoadingCircle_ani.Play();
        StartCoroutine(WaitResetTime());
    }
    IEnumerator WaitResetTime()
    {
        yield return new WaitForSecondsRealtime(1.5f);

        if (Time.timeScale.Equals(0))
            Time.timeScale = 1.0f;

        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }
}

/* TV 원본
public void ProcessTutorial_TVGameScene()
{
    if (explainStep.Equals(0))
    {
        Game_tutorial[explainStep].SetActive(true);
        teacherMgr.TestMode = true;
        if (Game_PMG[explainStep].pointMove_ani.Length != 0)
        {
            for (int i = 0; i < Game_PMG[explainStep].pointMove_ani.Length; i++)
            {
                Game_PMG[explainStep].pointMove_ani[i].Play();
            }
        }
        CheckEvent_TvGame();
        explainStep++;
    }
    else if(explainStep < Game_tutorial.Length)
    {
        Game_tutorial[explainStep - 1].SetActive(false);
        if (explainStep < Game_tutorial.Length)
        {
            Game_tutorial[explainStep].SetActive(true);

            if (Game_PMG[explainStep].pointMove_ani.Length != 0)
            {
                for (int i = 0; i < Game_PMG[explainStep].pointMove_ani.Length; i++)
                {
                    Game_PMG[explainStep].pointMove_ani[i].Play();
                }
            }
        }
        CheckEvent_TvGame();
        explainStep++;
    }
    else 
    {
        Game_tutorial[explainStep - 1].SetActive(false);
        ResetImg.SetActive(true);
        isTutorialOn = false;
        didTutorialComplete[1] = true;
        teacherMgr.TestMode = false;
        rotateLoadingCircle_ani.Play();
        dataManager.SaveData();
        StartCoroutine(WaitResetTime());
    }
}*/
