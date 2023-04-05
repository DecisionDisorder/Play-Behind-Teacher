using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SnackGameMgr : MonoBehaviour
{
    public ulong Score;
    public int Endurance = 1000;
    public int EnduranceMax = 1000;
    public ulong BestScore;
    public int numOfMissionClear;

    public Text Score_text;
    public Text BestScore_text;
    public Slider Endurance_slider;
    public Color[] ScoreColors;

    public Animation BonusScore_ani;
    public Text BonusScore_text;
    public Animation BonusCoin_ani;
    public Text BonusCoin_text;
    IEnumerator plusScore;
    public bool FailedLeaderboard = false;

    public Text FinalScore_text;
    public Text CoinGet_text;

    public InGameMgr inGameMgr;
    public TeacherMgr teacherMgr;
    public DifficultyData snackDifficultyData;
    public DataManager dataMgr;
    public SliderColorMgr endurColorMgr;
    public CoinMgr coinMgr;
    public ItemMgr itemMgr;
    public TutorialMgr tutorialMgr;
    public Option option;
    public SnackStore snackStore;
    public LeaderboardMgr leaderboardMgr;
    public LevelMgr levelMgr;

    public GageMove Endur_gageMove;
    bool isGageDown;

    public GameObject Message;
    public Text Message_text;
    public GameObject GameOver_Menu;

    public int EatingLevel = 0;
    public int EatMax = 1000;
    public bool isEating = false;
    public bool isPressing = false;
    bool isFirstPress = true;
    bool isFirstDecrease = true;
    IEnumerator decreaseEndur;

    public int[] Percent_GO;
    bool isFirstSound = true;

    public GameObject[] StudentCon;
    public Animation Eatingstudent_ani;
    public GameObject SnackBag;
    public AudioClip[] EatingSnack_red;
    public AudioClip[] EatingSnack_normal;
    public AudioClip EatingSnack_green;
    public AudioSource EatingSnack_AS;
    //bool isFirstEatingSound = true;

    IEnumerator waitMission;
    public GameObject MissionMessage;
    public Text MissionMessage_Text;
    public float WaitTimeMin;
    public float WaitTimeMax;
    float MissionTime;
    float missionTime_fixed;
    public float MissionMin;
    public float MissionMax;
    float GivenTime;
    public Slider Timer_Slider;
    public int RewardScore_Mission1;
    public int RewardCoin_Mission1;


    public bool isMissionOn_EatSnack = false;
    int MissionSnack;//미션으로 배정받은 먹어야할 과자 알맹이 개수
    int MissionSnack_fixed;
    public int EM_Min;//EM = Eat Mission
    public int EM_Max;
    public int RewardScore_Mission2;
    public int RewardCoin_Mission2;

    public GameObject PointerBar;

    private void Start()
    {
        InGameMgr.GameMode = 2;
        levelMgr.SetItemAbility();

        inGameMgr.BfStartGame.SetActive(true);
        Endurance_slider.maxValue = EnduranceMax * 10;
        Endurance_slider.value = EnduranceMax * 10;
        if (!BestScore.Equals(0))
            BestScore_text.text = "최고점수: " + SetPointSpot(BestScore);
        else
            BestScore_text.text = "최고점수: 0";
        endurColorMgr.SetColor(100);
    }

    public void SnackEat_Enable()
    {
        if (isFirstPress)
        {
            inGameMgr.BfStartGame.SetActive(false);
            inGameMgr.StartTimer();
            teacherMgr.StartTeacherChange();
            StartCoroutine(EatingCoroutine());
            StartPlusScore();
            if (!tutorialMgr.isTutorialOn)
            {
                waitMission = WaitingMission(Random.Range(WaitTimeMin, WaitTimeMax));
                StartCoroutine(waitMission);
            }
            isFirstPress = false;
        }
        isPressing = true;
    }
    public void SnackEat_Disable()
    {
        isPressing = false;
    }
    public void HideSnack()
    {
        EatingLevel = 0;
        isEating = false;
        StudentCon[0].SetActive(true);
        StudentCon[1].SetActive(false);
        SnackBag.SetActive(false);
        EatingSnack_AS.clip = EatingSnack_green;//NO eat에서 Normal 넘어갈 때 소리나게 하기 위함
        EatingSnack_AS.Stop();
        PointerBar.transform.localPosition = new Vector3(540 * (EatingLevel * 0.001f) - 270, 0, 0);
    }
    IEnumerator EatingCoroutine()
    {
        yield return new WaitForEndOfFrame();
        if (!inGameMgr.isPause)
        {
            if (isPressing)
            {
                if (EatingLevel < EatMax)
                {
                    EatingLevel += 10;
                    if (EatingLevel > EatMax)// Block the Eating Level 
                        EatingLevel = EatMax;
                }
                else
                {
                    EatingLevel = EatMax;
                }
            }
            else
            {
                if (EatingLevel > 0)
                {
                    EatingLevel -= 8;
                    if (EatingLevel < 0)
                        EatingLevel = 0;
                }
                else
                {
                    EatingLevel = 0;
                }
            }

            /*if (isgreenmode)//TESTMODE-GREEN
                EatingLevel = 450;*/
            PointerBar.transform.localPosition = new Vector3(540 * (EatingLevel * 0.001f) - 270, 0, 0);

        }

        if (inGameMgr.IsPlayingGame && Endurance > 0)
        {
            StartCoroutine(EatingCoroutine());
        }
    }
    public void StartPlusScore()
    {
        plusScore = PlusScore();
        StartCoroutine(plusScore);
    }
    IEnumerator PlusScore()
    {
        yield return new WaitForSeconds(0.1f);

        int startValue = Endurance;

        ScoreCalculator();

        if (!isGageDown)
        {
            if (option.smoothGage)
                Endur_gageMove.StartGageMove(startValue, Endurance, isGageDown);
            else
                Endurance_slider.value = Endurance * 10;
        }

        int percentage = Endurance * 100 / EnduranceMax;
        endurColorMgr.SetColor(percentage);

        if (inGameMgr.IsPlayingGame)
        {
            string score = SetPointSpot(Score);
            Score_text.text = "점수: " + score;
            if (BestScore < Score)
            {
                BestScore_text.color = Color.yellow;
                if (ResolutionSettings.is18vs9)
                    BestScore_text.fontSize = 42;
                else
                    BestScore_text.fontSize = 32;
                BestScore_text.text = "최고 점수: " + score;
            }

            StartPlusScore();
        }

    }

    public void StartDecreaseEndurance()
    {
        decreaseEndur = DecreaseEndurance();
        StartCoroutine(decreaseEndur);
    }

    IEnumerator DecreaseEndurance()
    {
        yield return new WaitForSeconds(snackDifficultyData.Period);

        int startValue = Endurance;

        int endurM = (int)(EnduranceMax * snackDifficultyData.DecreasePortion[inGameMgr.stage] * 0.01f);
        levelMgr.StatArr[2].ApplyAbility(ref endurM);
        Endurance -= endurM;

        if (option.smoothGage)
            Endur_gageMove.StartGageMove(startValue, Endurance, isGageDown);
        else
            Endurance_slider.value = Endurance * 10;

        int percentage = Endurance * 100 / EnduranceMax;
        endurColorMgr.SetColor(percentage);


        if (!isEating && inGameMgr.IsPlayingGame && Endurance > 0)
            StartDecreaseEndurance();
        else if (Endurance <= 0 && !teacherMgr.TestMode)
        {
            if (!tutorialMgr.isTutorialOn)
            {
                if (inGameMgr.IsPlayingGame)
                {
                    teacherMgr.NormalCon.SetActive(false);
                    teacherMgr.GameOverCon.SetActive(true);
                    teacherMgr.GameOverBySleep.SetActive(true);
                    teacherMgr.StartWaitGameOver(teacherMgr.GameOverBySleep_ani);
                    teacherMgr.SnackGameOver();
                }
            }
            else
            {
                if (!tutorialMgr.gameovered_endurance)
                {
                    tutorialMgr.onGameOver_tut.SetActive(true);
                    tutorialMgr.reason_text.text = "사유: 배고파서 뻗음...";
                    Time.timeScale = 0.0f;
                    inGameMgr.isPause = true;
                    tutorialMgr.gameovered_endurance = true;
                }
            }
        }


    }
    public void SetBestScore()
    {
        if (Score > BestScore)
        {
            BestScore = Score;
            BestScore_text.text = "최고점수: " + SetPointSpot(BestScore);
            leaderboardMgr.SendBoardScore((long)BestScore, LeaderboardMgr.snackLeaderboardID, ref FailedLeaderboard);
        }
        else if (FailedLeaderboard)
        {
            if (BestScore != 0)
                leaderboardMgr.SendBoardScore((long)BestScore, LeaderboardMgr.snackLeaderboardID, ref FailedLeaderboard);
        }
    }
    public void ScoreCalculator()
    {
        if (EatingLevel < 150)// NO EAT
        {
            Score += 3;
            Score_text.color = ScoreColors[0];
            isEating = false;
            isGageDown = true;
            StudentCon[0].SetActive(true);
            StudentCon[1].SetActive(false);
            SnackBag.SetActive(false);
            EatingSnack_AS.clip = EatingSnack_green;//NO eat에서 Normal 넘어갈 때 소리나게 하기 위함
            EatingSnack_AS.Stop();
            if (isFirstDecrease)
            {
                StartDecreaseEndurance();
                isFirstDecrease = false;
            }
        }
        else
        {
            if (decreaseEndur != null)
                StopCoroutine(decreaseEndur);
            isEating = true;
            Endurance += snackStore.Buscuits[snackStore.selectedBuscuit].effect;
            isGageDown = false;
            isFirstDecrease = true;
            StudentCon[1].SetActive(true);
            StudentCon[0].SetActive(false);
            SnackBag.SetActive(true);
            if (Endurance > EnduranceMax)
                Endurance = EnduranceMax;

            if (400 <= EatingLevel && EatingLevel <= 550)// EAT PERFECT
            {
                Score_text.color = ScoreColors[1];
                Score += 10;
                snackStore.CalculateSnackLeft(3);//Default: 3

                if(!EatingSnack_AS.clip.Equals(EatingSnack_green))
                {
                    EatingSnack_AS.Stop();
                    EatingSnack_AS.clip = EatingSnack_green;
                    EatingSnack_AS.Play();
                }

                if (!Eatingstudent_ani["EatingStudent"].speed.Equals(0.2f))
                {
                    Eatingstudent_ani["EatingStudent"].speed = 0.2f;
                }
            }
            else // EAT GOOD ~ Dangerous
            {
                Score_text.color = ScoreColors[2];
                Score += 7;
                snackStore.CalculateSnackLeft(1);//Default: 1

                if (EatingLevel > 650)
                {
                    if(!EatingSnack_AS.clip.Equals(EatingSnack_red[0]) && !EatingSnack_AS.clip.Equals(EatingSnack_red[1]))
                    {
                        EatingSnack_AS.Stop();
                        EatingSnack_AS.clip = EatingSnack_red[Random.Range(0,EatingSnack_red.Length)];
                        EatingSnack_AS.Play();
                    }

                    if(!Eatingstudent_ani["EatingStudent"].speed.Equals(1))
                    {
                        Eatingstudent_ani["EatingStudent"].speed = 1.0f;
                    }
                    Score_text.color = Color.red;
                    if (!ItemMgr.isTeacherSleeping)
                    {
                        if (isFirstSound)
                        {
                            StartCoroutine(CheckingSound());
                            isFirstSound = false;
                        }
                    }
                }
                else
                {
                    if (!EatingSnack_AS.clip.Equals(EatingSnack_normal[0]) && !EatingSnack_AS.clip.Equals(EatingSnack_normal[1]))
                    {
                        EatingSnack_AS.Stop();
                        EatingSnack_AS.clip = EatingSnack_normal[Random.Range(0, EatingSnack_normal.Length)];
                        EatingSnack_AS.Play();
                    }

                    if (!Eatingstudent_ani["EatingStudent"].speed.Equals(0.5f))
                    {
                        Eatingstudent_ani["EatingStudent"].speed = 0.5f;
                    }
                }
            }
        }
    }
    IEnumerator CheckingSound()
    {

        int r = Random.Range(0,100);
        if(EatingLevel < 800)
        {
            if(r < Percent_GO[0])
            {
                GameOverBySound();
            }
        }
        else if(EatingLevel < 900)
        {
            if (r < Percent_GO[1])
            {
                GameOverBySound();
            }
        }
        else
        {
            if (r < Percent_GO[2])
            {
                GameOverBySound();
            }
        }

        yield return new WaitForSeconds(1.0f);

        if (EatingLevel > 650 && inGameMgr.IsPlayingGame)
            StartCoroutine(CheckingSound());
        else if(EatingLevel <= 650)
            isFirstSound = true;
    }
    void GameOverBySound()
    {
        if (!tutorialMgr.isTutorialOn)
        {
            if (!teacherMgr.TestMode && inGameMgr.IsPlayingGame)
            {
                teacherMgr.NormalCon.SetActive(false);
                teacherMgr.GameOverCon.SetActive(true);
                teacherMgr.GameOverByContent.SetActive(true);
                teacherMgr.StartWaitGameOver(teacherMgr.GameOverByContent_ani);
                teacherMgr.SnackGameOver();
            }
        }
        else
        {
            if (!tutorialMgr.gameovered_snack)
            {
                tutorialMgr.onGameOver_tut.SetActive(true);
                tutorialMgr.gameovered_snack = true;
                tutorialMgr.reason_text.text = "사유: 소리나게 씹어먹어서 들킴";
                Time.timeScale = 0.0f;
                inGameMgr.isPause = true;
            }
        }
    }
    IEnumerator WaitingMission(float wt)
    {
        yield return new WaitForSeconds(wt);

        if(inGameMgr.IsPlayingGame)
            MissionStart();
    }
    public void MissionStart()
    {
        int r = Random.Range(0,2);
        if (r.Equals(0) || tutorialMgr.isTutorialOn)
        {
            MissionTime = Random.Range(MissionMin, MissionMax);
            missionTime_fixed = MissionTime;
            GivenTime = MissionTime + 5;
            Timer_Slider.gameObject.SetActive(true);
            Timer_Slider.maxValue = GivenTime;

            MissionMessage.SetActive(true);
            string mtime = string.Format("{0:0.0}", MissionTime);
            MissionMessage_Text.text = "미션: <color=red>" + mtime + "초</color> 동안 <color=#00ff00ff>잘 녹여먹음</color>을 유지하기!";
            StartCoroutine(CountingTime());
        }
        else
        {
            isMissionOn_EatSnack = true;
            MissionSnack = Random.Range(EM_Min, EM_Max + 1);
            MissionSnack_fixed = MissionSnack;

            MissionMessage.SetActive(true);
            MissionMessage_Text.text = "미션: 과자 알맹이 <color=red>"+MissionSnack+"</color>개 먹기!";
        }
    }
    IEnumerator CountingTime()
    {
        yield return new WaitForSeconds(0.1f);
        if (!tutorialMgr.stopTimerForTutorial)
        {
            GivenTime -= 0.1f;
            Timer_Slider.value = GivenTime;
            if (400 <= EatingLevel && EatingLevel <= 500)
            {
                MissionTime -= 0.1f;
                string mtime = string.Format("{0:0.0}", MissionTime);
                MissionMessage_Text.text = "미션: <color=red>" + mtime + "초</color> 동안 <color=#00ff00ff>잘 녹여먹음</color>을 유지하기!";
                if (MissionTime <= 0)
                {
                    if (tutorialMgr.isTutorialOn)
                    {
                        tutorialMgr.ProcessTutorial_InGame();
                        tutorialMgr.MissionResult_text.text = "잘하셨습니다!\n다음 단계로 가볼까요?";
                        MissionMessage_Text.text = "미션을 성공하셨습니다!";
                    }
                    else
                    {
                        string rewardResult = "";
                        MissionReward(ref rewardResult);
                        MissionMessage_Text.text = "미션을 성공하셨습니다!\n보상: " + rewardResult;
                    }
                    Timer_Slider.gameObject.SetActive(false);
                    StartCoroutine(CloseMissionMessage(2.5f));
                    yield break;
                }
            }
            
            if (GivenTime <= 0)
            {
                if (tutorialMgr.isTutorialOn)
                {
                    tutorialMgr.ProcessTutorial_InGame();
                    tutorialMgr.MissionResult_text.text = "결과가 어떻든 잘하셨습니다!\n다음 단계로 가볼까요??";
                }
                MissionMessage_Text.text = "미션을 실패하셨습니다...";
                Timer_Slider.gameObject.SetActive(false);
                StartCoroutine(CloseMissionMessage(2.0f));
            }
        }
        if(GivenTime > 0 && MissionTime > 0 && inGameMgr.IsPlayingGame)
            StartCoroutine(CountingTime());
    }

    public void Mission_SnackEat()
    {
        MissionSnack--;
        if(MissionSnack > 0)
            MissionMessage_Text.text = "미션: 과자 알맹이 <color=red>" + MissionSnack + "</color>개 먹기!";
        else if (MissionSnack.Equals(0))
        {
            string rewardResult = "";
            MissionReward(ref rewardResult);
            MissionMessage_Text.text = "미션을 성공하셨습니다!\n보상: " + rewardResult;
            StartCoroutine(CloseMissionMessage(2.5f));
        }
    }

    void MissionReward(ref string RewardResult)
    {
        int reward;
        int r = Random.Range(0,100);
        if(r < 60) //점수
        {
            if (!isMissionOn_EatSnack)
                reward = (int)(missionTime_fixed / 0.5f) * RewardScore_Mission1;
            else
                reward = MissionSnack_fixed * RewardScore_Mission2;

            levelMgr.StatArr[3].ApplyAbility(ref reward);
            Score += (ulong)reward;
            RewardResult = "점수 +" + reward;
            BonusScore_text.text = "+" + reward;
            BonusScore_ani.Play();
        }
        else//코인
        {
            if (!isMissionOn_EatSnack)
                reward = (int)(missionTime_fixed / 0.5f) * RewardCoin_Mission1;
            else
                reward = MissionSnack_fixed * RewardCoin_Mission2;

            levelMgr.StatArr[3].ApplyAbility(ref reward);
            CoinMgr.Coin += (ulong)reward;
            CoinMgr.accumulatedCoins += (ulong)reward;
            coinMgr.SetAddedCoin(reward);
            coinMgr.setCoinText();
            RewardResult = " +" + reward + " Coin";
            BonusCoin_text.text = "+ " + reward;
            BonusCoin_ani.Play();
        }
    }
    IEnumerator CloseMissionMessage(float wt)
    {
        yield return new WaitForSeconds(wt);
        
        MissionMessage.SetActive(false);
        if (inGameMgr.IsPlayingGame)
        {
            waitMission = WaitingMission(Random.Range(WaitTimeMin, WaitTimeMax));
            StartCoroutine(waitMission);
        }
    }
    public void ResetGame()
    {
        teacherMgr.SetSafe();
        teacherMgr.NormalCon.SetActive(true);
        teacherMgr.GameOverBySleep.SetActive(false);
        teacherMgr.GameOverByContent.SetActive(false);
        teacherMgr.GameOverCon.SetActive(false);
        teacherMgr.Teacher.transform.localScale = new Vector3(1.1f, 1.1f, 1.0f);
        Score = 0;
        Endurance = EnduranceMax;
        endurColorMgr.SetColor(100);
        endurColorMgr.SleepyEffect.SetActive(false);
        Score_text.color = ScoreColors[0];
        StopCoroutine(waitMission);
        MissionMessage.SetActive(false);
        inGameMgr.playTimeEach = 0;
        inGameMgr.stage = 0;
        Score_text.text = "점수: 0";
        coinMgr.ResetAddedCoin();
        Endurance_slider.value = Endurance_slider.maxValue;
        endurColorMgr.SleepyEffect.SetActive(false);
        inGameMgr.BfStartGame.SetActive(true);
        inGameMgr.IsPlayingGame = true;
        HideSnack();
        snackStore.LoadSnackLeft();
        isFirstPress = true;
        isFirstSound = true;
        isFirstDecrease = true;
        GameOver_Menu.SetActive(false);
    }

    public string SetPointSpot(ulong score)
    {
        string SCORE = string.Format("{0:#,###}", score);
        return SCORE;
    }

    public Text greenmode_text;
    /*bool isgreenmode = false;
    public void Testmode_green()
    {
        if (isgreenmode)
        {
            isgreenmode = false;
            greenmode_text.text = "Green 유지 OFF";
        }
        else
        {
            isgreenmode = true;
            greenmode_text.text = "Green 유지 ON";
        }
    }*/
}
