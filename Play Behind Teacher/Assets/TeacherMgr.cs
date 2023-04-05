using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class TeacherMgr : MonoBehaviour {

    public GameObject Teacher;
    public Image Teacher_img;
    public Color Green = Color.green;
    public Color Red = Color.red;
    public Color Orange = new Vector4(0,0,0,1);
    
    public AudioSource GameOver_Effect_as;
    public AudioSource SuspectingSound_AS;
    public AudioSource WritingSound_AS;
    public AudioClip[] WritingSoundClips;

    public GameObject[] Teacher_condition;
    public Image OrangeCon_img;
    public Sprite[] TOrange_sprite;

    public GameObject NormalCon;
    public GameObject ItemCon;
    public GameObject GameOverCon;

    public GameObject GameOverByContent;
    public GameObject GameOverBySleep;
    public Animation GameOverByContent_ani;
    public Animation GameOverBySleep_ani;
    //public Animation TeacherToRed_ani;
    //public Animation TeacherToWhite_ani;

    public TVButtonMgr tvButtonMgr;
    public InGameMgr inGameMgr;
    public TvGameMgr tvGameMgr;
    //public TVGameDifficulty tvGameDifficulty;

    public DataManager dataMgr;
    public LevelMgr levelMgr;
    //public ItemMgr itemMgr;

    public PhoneConMgr phoneConMgr;
    public KatalkGameMgr katalkGameMgr;
    //public KatalkDifficulty katalkDifficulty;

    public SnackGameMgr snackGameMgr;
    //public SnackDifficulty snackDifficulty;

    public DifficultyData difficultyData;

    public CoinMgr coinMgr;
    public TutorialMgr tutorialMgr;
    public Option option;
    public SliderColorMgr endurColorMgr;
    public AdManager adManager;
    public ItemMgr itemMgr;

    public bool TestMode = false;

    public int numOfPlay;

    public bool isTeacherFront = false;

    public int teacherNotice = 1000;
    public int teacherNoticeMax = 1000;
    bool firstNotice = true;
    public int noticeStep = 0;

    void Start ()
    {
        SetSafe();
    }

    public void StartTeacherChange()
    {
        StartCoroutine(TeacherChange(difficultyData.DangerMin[inGameMgr.stage], difficultyData.DangerMax[inGameMgr.stage], difficultyData.SafeMin[inGameMgr.stage], difficultyData.SafeMax[inGameMgr.stage], numOfPlay));
    }

    IEnumerator TeacherChange(float Red_min, float Red_max, float Green_min, float Green_max, int numofplay)
    {
        if (isTeacherFront)
        {
            yield return new WaitForSeconds(Random.Range(Red_min, Red_max));
            SetSafe();
            if (inGameMgr.IsPlayingGame && numofplay.Equals(numOfPlay))
            {
                StartTeacherChange();
            }
        }
        else
        {
            yield return new WaitForSeconds(Random.Range(Green_min, Green_max));
            SetMiddle(Red_min, Red_max, Green_min, Green_max, numofplay);
        }
    }
	IEnumerator TeacherSee(float danger_min, float danger_max, float safe_min, float safe_max, int numofplay)
    {
        float middle_min = difficultyData.MiddleMin[inGameMgr.stage], middle_max = difficultyData.MiddleMax[inGameMgr.stage];

        //Debug.Log("Min: " + orange_min + ", Max: " + orange_max);
        float OrangeTime = Random.Range(middle_min, middle_max) * itemMgr.OrangeTimeUp;
        //Debug.Log("Orangetime: " + OrangeTime);
        if (itemMgr.isGlassOn)
            itemMgr.ConsumeGlasses(OrangeTime);

        yield return new WaitForSeconds(OrangeTime);

        if (inGameMgr.IsPlayingGame && numofplay.Equals(numOfPlay))
        {
            SetDanger();
            StartCoroutine(TeacherChange(danger_min, danger_max, safe_min, safe_max, numofplay));
        }

    }
    public void SetDanger()
    {
        isTeacherFront = true;
        Teacher_img.color = Red;
        Teacher_condition[1].SetActive(false);
        Teacher_condition[0].SetActive(true);
        SuspectingSound_AS.Play();
        StartCoroutine(CheckStudent());
    }
    public void SetSafe()
    {
        isTeacherFront = false;
        Teacher_img.color = Green;
        Teacher_condition[0].SetActive(false);
        Teacher_condition[1].SetActive(false);
        Teacher_condition[2].SetActive(true);
        int i = Random.Range(0,WritingSoundClips.Length);
        WritingSound_AS.clip = WritingSoundClips[i];
        WritingSound_AS.Play();
        StartCoroutine(ChangeSound_Writing());
        if (InGameMgr.GameMode.Equals(1) || InGameMgr.GameMode.Equals(2))
            StartCoroutine(IncreaseNotice());
    }
    public void SetMiddle(float danger_min, float danger_max, float safe_min, float safe_max, int numofplay)
    {
        WritingSound_AS.Stop();
        Teacher_img.color = Orange;
        OrangeCon_img.sprite = TOrange_sprite[Random.Range(0,2)];
        Teacher_condition[2].SetActive(false);
        Teacher_condition[1].SetActive(true);
        StartCoroutine(TeacherSee(danger_min, danger_max, safe_min, safe_max, numofplay));
    }
    IEnumerator ChangeSound_Writing()
    {
        yield return new WaitForSecondsRealtime(1.5f);

        WritingSound_AS.Stop();
        int i = Random.Range(0, WritingSoundClips.Length);
        WritingSound_AS.clip = WritingSoundClips[i];
        WritingSound_AS.Play();

        if (Teacher_img.color.Equals(Green) && inGameMgr.IsPlayingGame)
            StartCoroutine(ChangeSound_Writing());
        else
            WritingSound_AS.Stop();
    }
    IEnumerator CheckStudent()
    {
        yield return new WaitForEndOfFrame();

        if (!TestMode && inGameMgr.IsPlayingGame)
        {
            if (!ItemMgr.isTeacherSleeping)
            {
                if (InGameMgr.GameMode.Equals(0))
                {
                    if (tvButtonMgr.isTvOn)
                    {
                        if (!tutorialMgr.isTutorialOn)
                        {
                            NormalCon.SetActive(false);
                            GameOverCon.SetActive(true);
                            GameOverByContent.SetActive(true);
                            StartWaitGameOver(GameOverByContent_ani);
                            TvGameOver();
                        }
                        else
                        {
                            if (!tutorialMgr.gameovered_teacher)
                            {
                                tutorialMgr.onGameOver_tut.SetActive(true);
                                tutorialMgr.reason_text.text = "사유: 선생님이 앞에 볼때 TV켜진게 들킴..";
                                Time.timeScale = 0.0f;
                                inGameMgr.isPause = true;
                                tutorialMgr.gameovered_teacher = true;
                            }
                        }
                    }
                }
                else if (InGameMgr.GameMode.Equals(1))
                {
                    if (phoneConMgr.isPhoneOn)
                    {
                        if (teacherNotice <= 0)
                        {
                            if (!tutorialMgr.isTutorialOn)
                            {
                                NormalCon.SetActive(false);
                                GameOverCon.SetActive(true);
                                GameOverByContent.SetActive(true);
                                StartWaitGameOver(GameOverByContent_ani);
                                KatalkGameOver();
                            }
                            else
                            {
                                if (!tutorialMgr.gameovered_teacher)
                                {
                                    tutorialMgr.onGameOver_tut.SetActive(true);
                                    tutorialMgr.reason_text.text = "사유: 선생님한테 폰하는거 들킴...";
                                    Time.timeScale = 0.0f;
                                    inGameMgr.isPause = true;
                                    tutorialMgr.gameovered_teacher = true;
                                }
                            }
                        }
                        else
                        {
                            if (firstNotice)
                            {
                                noticeStep++;
                                if (noticeStep >= difficultyData.NoticeDecrease.Length)
                                    noticeStep = difficultyData.NoticeDecrease.Length - 1;
                                StartCoroutine(DecreaseNotice());
                                firstNotice = false;
                            }
                        }
                    }
                }
                else if(InGameMgr.GameMode.Equals(2))
                {
                    if(snackGameMgr.isEating)
                    {
                        if (teacherNotice <= 0)
                        {
                            if (!tutorialMgr.isTutorialOn)
                            {
                                NormalCon.SetActive(false);
                                GameOverCon.SetActive(true);
                                GameOverByContent.SetActive(true);
                                StartWaitGameOver(GameOverByContent_ani);
                                SnackGameOver();
                            }
                            else
                            {
                                if (!tutorialMgr.gameovered_teacher)
                                {
                                    tutorialMgr.onGameOver_tut.SetActive(true);
                                    tutorialMgr.reason_text.text = "사유: 대놓고 과자먹다 들킴...";
                                    Time.timeScale = 0.0f;
                                    inGameMgr.isPause = true;
                                    tutorialMgr.gameovered_teacher = true;
                                }
                            }
                        }
                        else
                        {
                            if (firstNotice)
                            {
                                noticeStep++;
                                if (noticeStep >= difficultyData.NoticeDecrease.Length)
                                    noticeStep = difficultyData.NoticeDecrease.Length - 1;
                                StartCoroutine(DecreaseNotice());
                                firstNotice = false;
                            }
                        }
                    }
                }
            }
        }
        if (isTeacherFront && inGameMgr.IsPlayingGame)
            StartCoroutine(CheckStudent());
    }
    void GameOver_Common()
    {
        if(itemMgr.isGlassOn)
            itemMgr.Disable_Glasses(itemMgr.glassKey);
        numOfPlay++;
        inGameMgr.IsPlayingGame = false;
        inGameMgr.numOfPlay[InGameMgr.GameMode]++;
        inGameMgr.numOfFinish++;
        if ((inGameMgr.numOfFinish % 5).Equals(0))
            Option.TimeToAutoCloud = true;
        GameOver_Effect_as.Play();
        endurColorMgr.SleepyEffect.SetActive(false);
        adManager.SetInstritial();
        dataMgr.SaveData();
    }
    public void TvGameOver()
    {
        tvGameMgr.StopPlusScore();
        tvGameMgr.StopWaitMission();
        inGameMgr.PlayTime[InGameMgr.GameMode] += (ulong)inGameMgr.playTimeEach;
        int score = (int)tvGameMgr.Score;
        levelMgr.StatArr[0].ApplyAbility(ref tvGameMgr.Score);
        tvGameMgr.SetBestScore();
        ulong coinReward = (ulong)coinMgr.GetReward(inGameMgr.playTimeEach);
        CoinMgr.Coin += coinReward;
        coinMgr.setCoinText();
        tvButtonMgr.BGM_as.Stop();
        tvButtonMgr.OnXXX_Students[0].SetActive(true);
        tvButtonMgr.OnXXX_Students[1].SetActive(false);
        string scoreR = "점수: " + tvGameMgr.SetPointSpot(tvGameMgr.Score);
        string coinR = "+ " + coinReward;
        levelMgr.StatArr[0].ShowAbility(score, (int)tvGameMgr.Score,  ref scoreR);
        levelMgr.StatArr[1].ShowAbility(inGameMgr.playTimeEach * 2, (int)coinReward, ref coinR);
        tvGameMgr.FinalScore_text.text = scoreR;
        tvGameMgr.CoinGet_text.text = coinR;
        
        GameOver_Common();
    }
    public void KatalkGameOver()
    {
        katalkGameMgr.StopPlusScore();
        int score = (int)katalkGameMgr.Score;
        levelMgr.StatArr[0].ApplyAbility(ref katalkGameMgr.Score);
        katalkGameMgr.SetBestScore();
        ulong coinReward = (ulong)coinMgr.GetReward(inGameMgr.playTimeEach);
        CoinMgr.Coin += coinReward;
        coinMgr.setCoinText();
        phoneConMgr.BGM_as.Stop();
        phoneConMgr.OnXXX_Students[0].SetActive(true);
        phoneConMgr.OnXXX_Students[1].SetActive(false);
        katalkGameMgr.BlockPhonebutton.SetActive(true);
        string scoreR = "점수: " + katalkGameMgr.SetPointSpot(katalkGameMgr.Score);
        string coinR = "+ " + coinReward;
        levelMgr.StatArr[0].ShowAbility(score, (int)katalkGameMgr.Score,  ref scoreR);
        levelMgr.StatArr[1].ShowAbility(inGameMgr.playTimeEach * 2, (int)coinReward, ref coinR);
        katalkGameMgr.CoinGet_text.text = coinR;
        katalkGameMgr.FinalScore_text.text = scoreR;
        if (phoneConMgr.isPhoneOn)
            phoneConMgr.OnOffPhone();
        GameOver_Common();
    }
    public void SnackGameOver()
    {
        inGameMgr.PlayTime[InGameMgr.GameMode] += (ulong)inGameMgr.playTimeEach;
        int score = (int)snackGameMgr.Score;
        levelMgr.StatArr[0].ApplyAbility(ref snackGameMgr.Score);
        snackGameMgr.SetBestScore();
        ulong coinReward = (ulong)coinMgr.GetReward(inGameMgr.playTimeEach);
        CoinMgr.Coin += coinReward;
        coinMgr.setCoinText();
        snackGameMgr.EatingSnack_AS.Stop();
        snackGameMgr.StudentCon[0].SetActive(true);
        snackGameMgr.StudentCon[1].SetActive(false);
        string scoreR = "점수: " + snackGameMgr.SetPointSpot(snackGameMgr.Score);
        string coinR = "+ " + coinReward;
        levelMgr.StatArr[0].ShowAbility(score, (int)snackGameMgr.Score, ref scoreR);
        levelMgr.StatArr[1].ShowAbility(inGameMgr.playTimeEach * 2, (int)coinReward, ref coinR);
        snackGameMgr.FinalScore_text.text = scoreR;
        snackGameMgr.CoinGet_text.text = coinR;
        GameOver_Common();
    }
    public void StartWaitGameOver(Animation ani)
    {
        StartCoroutine(WaitforGameOver(ani));
    }
    IEnumerator WaitforGameOver(Animation ani)
    {
        while(ani.isPlaying)
        {
            yield return new WaitForEndOfFrame();
        }
        if (SceneManager.GetActiveScene().buildIndex.Equals(1))
        {
            tvGameMgr.GameOver_Menu.SetActive(true);
            levelMgr.ProvideExp(tvGameMgr.Score);
        }
        else if (SceneManager.GetActiveScene().buildIndex.Equals(2))
        {
            katalkGameMgr.GameOver_Menu.SetActive(true);
            levelMgr.ProvideExp(katalkGameMgr.Score);
        }
        else if (SceneManager.GetActiveScene().buildIndex.Equals(3))
        {
            snackGameMgr.GameOver_Menu.SetActive(true);
            levelMgr.ProvideExp(snackGameMgr.Score);
        }

        dataMgr.SaveData();
        inGameMgr.CheckReview();
    }
    //bool firstDecrease = false;
    
    IEnumerator DecreaseNotice()
    {
        yield return new WaitForSeconds(0.01f);

        if (SceneManager.GetActiveScene().buildIndex.Equals(2))
        {
            if (phoneConMgr.isPhoneOn)
            {
                teacherNotice -= (int)difficultyData.NoticeDecrease[noticeStep];
            }
        }
        else if (SceneManager.GetActiveScene().buildIndex.Equals(3))
        {
            if(snackGameMgr.isEating)
                teacherNotice -= (int)difficultyData.NoticeDecrease[noticeStep];
        }

        if (isTeacherFront && inGameMgr.IsPlayingGame)
        {
            //firstDecrease = true;
            StartCoroutine(DecreaseNotice());
        }
        else
        {
            firstNotice = true;
        }
    }
    //bool firstIncrease = false;
    IEnumerator IncreaseNotice()
    {
        yield return new WaitForSeconds(0.1f);

        if (teacherNotice < teacherNoticeMax && inGameMgr.IsPlayingGame)
        {
            if(SceneManager.GetActiveScene().buildIndex.Equals(2))
                teacherNotice += (int)(teacherNoticeMax * difficultyData.NoticeDecrease[noticeStep] * 0.01f * 0.9f);//감소량의 90%수준으로 증가
            else if(SceneManager.GetActiveScene().buildIndex.Equals(3))
                teacherNotice += (int)(teacherNoticeMax * difficultyData.NoticeDecrease[noticeStep] * 0.01f * 0.9f);//감소량의 90%수준으로 증가

            StartCoroutine(IncreaseNotice());
        }
        else
            teacherNotice = teacherNoticeMax;
    }
    
    public Text testmodeButton_text;
    public void SetTestMode()
    {
        if(TestMode)
        {
            TestMode = false;
            testmodeButton_text.text = "테스트 모드 OFF";
        }
        else
        {
            TestMode = true;
            testmodeButton_text.text = "테스트 모드 ON";
        }
    }
}
