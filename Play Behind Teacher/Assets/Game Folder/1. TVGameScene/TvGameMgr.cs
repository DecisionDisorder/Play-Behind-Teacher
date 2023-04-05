using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class TvGameMgr : MonoBehaviour {

    public ulong Score;
    public int Endurance = 1000;
    public int EnduranceMax = 1000;
    public ulong BestScore;
    public int numOfMissionClear;
    IEnumerator plusScore;
    public bool FailedLeaderboard = false;

    public float WaitMissionMin;
    public float WaitMissionMax;
    IEnumerator Waitmission;

    public int targetChannel;
    public int startChannel;

    public int targetTVPower;
    public int numOfTVPower;
    public int TVPowerMax;
    public int TVPowerMin;
    public bool isPowerMissionOn = false;
    IEnumerator decreaseEndur;

    ulong addingScore = 4;

    public int percentageOfCoin = 60;

    public Text Score_text;
    public Text BestScore_text;
    public Slider Endurance_slider;

    public Animation BonusScore_ani;
    public Text BonusScore_text;
    public Animation BonusCoin_ani;
    public Text BonusCoin_text;

    public Text FinalScore_text;
    public Text CoinGet_text;

    public Text Mission_text;
    public GameObject Mission_Backimg;
    
    public TVButtonMgr tvButtonMgr;
    public InGameMgr inGameMgr;
    public TeacherMgr teacherMgr;
    //public TVGameDifficulty tvGameDifficulty;
    public DifficultyData tvDifficultyData;
    public DataManager dataMgr;
    public SliderColorMgr endurColorMgr;
    public CoinMgr coinMgr;
    public ItemMgr itemMgr;
    public TutorialMgr tutorialMgr;
    public Option option;
    public LeaderboardMgr leaderboardMgr;
    public LevelMgr levelMgr;

    public GageMove Endur_gageMove;

    public GameObject GameOver_Menu;

    private void Start()
    {
        levelMgr.SetItemAbility();
        inGameMgr.BfStartGame.SetActive(true);
        Endurance_slider.maxValue = EnduranceMax * 10;
        Endurance_slider.value = EnduranceMax* 10;
        if(!BestScore.Equals(0))
            BestScore_text.text = "최고점수: " + SetPointSpot(BestScore);
        else
            BestScore_text.text = "최고점수: 0";
        endurColorMgr.SetColor(100);
    }
    public void StartPlusScore()
    {
        plusScore = PlusScore();
        StartCoroutine(plusScore);
    }
    IEnumerator PlusScore()
    {
        yield return new WaitForSeconds(0.1f);

        if (tvButtonMgr.isTvOn)
        {
            if (decreaseEndur != null)
                StopCoroutine(decreaseEndur);
            Score += addingScore * 2;

            int startValue = Endurance;
            if (Endurance < EnduranceMax * 0.5f)
                Endurance += 50;
            else if (Endurance < EnduranceMax)
                Endurance += 30;
            else
                Endurance = EnduranceMax;
            
            if (option.smoothGage)
                Endur_gageMove.StartGageMove(startValue, Endurance, false);
            else
                Endurance_slider.value = Endurance * 10;

            int percentage = Endurance * 100 / EnduranceMax;
            endurColorMgr.SetColor(percentage);
        }
        else
        {
            Score += addingScore;
        }

        if (inGameMgr.IsPlayingGame)
        {
            string score = SetPointSpot(Score);
            Score_text.text = "점수: " + score;
            if (BestScore < Score)
            {
                BestScore_text.color = Color.yellow;
                if(ResolutionSettings.is18vs9)
                    BestScore_text.fontSize = 42;
                else
                    BestScore_text.fontSize = 32;
                BestScore_text.text = "최고 점수: " + score;
            }
        }

        if (inGameMgr.IsPlayingGame)
            StartPlusScore();
    }
    public void SetBestScore()
    {
        if (Score > BestScore)
        {
            BestScore = Score;
            BestScore_text.text = "최고점수: " + SetPointSpot(BestScore);
            leaderboardMgr.SendBoardScore((long)BestScore, LeaderboardMgr.tvLeaderboardID, ref FailedLeaderboard);
        }
        else if (FailedLeaderboard)
        {
            if(BestScore != 0)
                leaderboardMgr.SendBoardScore((long)BestScore, LeaderboardMgr.tvLeaderboardID, ref FailedLeaderboard);
        }
    }
    public void StartDecreaseEndurance()
    {
        decreaseEndur = DecreaseEndurance();
        StartCoroutine(decreaseEndur);
    }
    IEnumerator DecreaseEndurance()
    {
        yield return new WaitForSeconds(tvDifficultyData.Period);
        
        int startValue = Endurance;
        int endurM = (int)(EnduranceMax * tvDifficultyData.DecreasePortion[inGameMgr.stage] * 0.01f);
        levelMgr.StatArr[2].ApplyAbility(ref endurM);
        Endurance -= endurM;

        if (option.smoothGage)
            Endur_gageMove.StartGageMove(startValue, Endurance, true);
        else
            Endurance_slider.value = Endurance * 10;

        int percentage = Endurance * 100 / EnduranceMax;
        endurColorMgr.SetColor(percentage);

        if (!tvButtonMgr.isTvOn && inGameMgr.IsPlayingGame && Endurance > 0)
            StartDecreaseEndurance();
        else if (Endurance <= 0 && !teacherMgr.TestMode)
        {
            if (!tutorialMgr.isTutorialOn)
            {
                if (inGameMgr.IsPlayingGame)//중복 게임 오버 방지
                {
                    teacherMgr.NormalCon.SetActive(false);
                    teacherMgr.GameOverCon.SetActive(true);
                    teacherMgr.GameOverBySleep.SetActive(true);
                    teacherMgr.StartWaitGameOver(teacherMgr.GameOverBySleep_ani);
                    teacherMgr.TvGameOver();
                }
            }
            else
            {
                if (!tutorialMgr.gameovered_endurance)
                {
                    tutorialMgr.onGameOver_tut.SetActive(true);
                    tutorialMgr.reason_text.text = "사유: 졸려서 뻗음..";
                    Time.timeScale = 0.0f;
                    inGameMgr.isPause = true;
                    tutorialMgr.gameovered_endurance = true;
                }
            }
        }
    }
    public void ExecuteMission(float time)
    {
        Waitmission = WaitMission(time);
        StartCoroutine(Waitmission);
    }
    public void CheckChannel(int channel)
    {
        if (targetChannel != 0)
        {
            if (channel.Equals(targetChannel))
            {
                ulong reward = 0;
                string kind = "";
                targetChannel = 0;
                numOfMissionClear++;
                if (!tutorialMgr.isTutorialOn)
                {
                    MissionReward(ref reward, ref kind, 0);
                    Mission_text.text = "미션 성공!\n성공 보상: " + kind + " +" + reward;
                    StartCoroutine(CloseMissionImg(3f));
                    ExecuteMission(Random.Range(WaitMissionMin, WaitMissionMax));
                }
                else
                {
                    Mission_text.text = "미션 성공!";
                    StartCoroutine(CloseMissionImg(3f));
                    tutorialMgr.Game_tutorial[tutorialMgr.explainStep].SetActive(true);
                    if (tutorialMgr.explainStep < 9)
                    {
                        //Debug.Log("explainstep++ called");
                        tutorialMgr.explainStep++;
                    }
                    tutorialMgr.needLateOn = false;
                }
            }
            else
            {
                //미션 실패 -> 미션 취소 & 미션 쿨타임
                targetChannel = 0;
                Mission_text.text = "미션 실패..";
                if (!tutorialMgr.isTutorialOn)
                {
                    StartCoroutine(CloseMissionImg(2.5f));
                    ExecuteMission(Random.Range(WaitMissionMin, WaitMissionMax));
                }
                else
                {
                    if (tutorialMgr.explainStep < 9)
                    {
                        tutorialMgr.explainStep++;
                        tutorialMgr.Game_tutorial[tutorialMgr.explainStep].SetActive(true);
                        ExecuteMission(0);
                    }
                    else
                    {
                        Mission_Backimg.SetActive(true);
                        Mission_text.text = "그럴수 있어요... 다음단계로!!";
                        tutorialMgr.needLateOn = false;
                        StartCoroutine(CloseMissionImg(3.0f));
                    }
                }
            }
        }
    }

    public void CheckTVpower()
    {

        numOfTVPower++;
        Mission_text.text = "TV껐다 켜기: " + (targetTVPower - numOfTVPower) + "회";
        if (numOfTVPower >= targetTVPower)
        {
            ulong reward = 0;
            string kind = "";
            numOfMissionClear++;
            isPowerMissionOn = false;
            MissionReward(ref reward, ref kind, 1);
            Mission_text.text = "미션 성공!\n성공 보상: " + kind + " +" + reward;
            StartCoroutine(CloseMissionImg(3f));
            ExecuteMission(Random.Range(WaitMissionMin, WaitMissionMax));
        }
    }
    void MissionReward(ref ulong reward, ref string kind, int missionmode)
    {
        if (missionmode.Equals(0))
        {
            int[] channelGap = new int[2] { targetChannel - startChannel, startChannel + tvButtonMgr.ChannelMax - targetChannel };
            int p = Random.Range(0, 100);
            if (channelGap[0] < 0)
                channelGap[0] *= -1;
            if (channelGap[1] < 0)
                channelGap[1] *= -1;
            if (p < percentageOfCoin)
            {
                kind = "코인";
                if (channelGap[0] > channelGap[1] && channelGap[0] < 0)
                    reward = 5 + (ulong)channelGap[1] * 2;
                else
                    reward = 5 + (ulong)channelGap[0] * 2;

                levelMgr.StatArr[3].ApplyAbility(ref reward);
                CoinMgr.Coin += reward;
                CoinMgr.accumulatedCoins += reward;
                coinMgr.SetAddedCoin((int)reward);
                coinMgr.setCoinText();
                BonusCoin_text.text = "+ " + reward;
                BonusCoin_ani.Play();

            }
            else
            {
                kind = "점수";
                if (channelGap[0] > channelGap[1])
                    reward = 100 + (ulong)channelGap[1] * 25;
                else
                    reward = 100 + (ulong)channelGap[0] * 25;

                levelMgr.StatArr[3].ApplyAbility(ref reward);
                Score += reward;
                BonusScore_text.text = "+ " + reward; //코인 전용도 만들기 & 까톡과 방식 통일
                BonusScore_ani.Play();
            }
        }
        else
        {
            int p = Random.Range(0, 100);
            if(p < percentageOfCoin)
            {
                kind = "코인";
                reward = (ulong)(targetTVPower * 4);
                CoinMgr.Coin += reward;
                CoinMgr.accumulatedCoins += reward;
                coinMgr.SetAddedCoin((int)reward);
                coinMgr.setCoinText();
                BonusCoin_text.text = "+ " + reward;
                BonusCoin_ani.Play();
            }
            else
            {
                kind = "점수";
                reward = (ulong)(targetTVPower * 15);
                Score += reward;
                BonusScore_text.text = "+ " + reward;
                BonusScore_ani.Play();
            }
        }
    }
    IEnumerator CloseMissionImg(float waittime = 1.5f)
    {
        yield return new WaitForSeconds(waittime);

        Mission_Backimg.SetActive(false);
    }
    IEnumerator WaitMission(float time)
    {
        yield return new WaitForSeconds(time);

        int randomMission = Random.Range(0,2);

        if (randomMission.Equals(0) || tutorialMgr.isTutorialOn)
        {
            startChannel = tvButtonMgr.TvChannel;
            targetChannel = Random.Range(1, tvButtonMgr.ChannelMax + 1);
            Mission_Backimg.SetActive(true);
            Mission_text.text = "목표 채널: " + targetChannel;
        }
        else
        {
            targetTVPower = Random.Range(TVPowerMin, TVPowerMax);
            numOfTVPower = 0;
            Mission_Backimg.SetActive(true);
            isPowerMissionOn = true;
            Mission_text.text = "TV껐다 켜기: " + targetTVPower + "회";
        }
    }
    public void StopPlusScore()
    {
        StopCoroutine(plusScore);
    }
    public void StopWaitMission()
    {
        StopCoroutine(Waitmission);
    }
    public void ResetGame()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
        /*
        teacherMgr.SetSafe();
        teacherMgr.NormalCon.SetActive(true);
        teacherMgr.GameOverCon.SetActive(false);
        teacherMgr.GameOverBySleep.SetActive(false);
        teacherMgr.GameOverByContent.SetActive(false);
        teacherMgr.Teacher.transform.localScale = new Vector3(1.1f, 1.1f, 1.0f);
        Score = 0;
        Endurance = EnduranceMax;
        endurColorMgr.SetColor(100);
        tvButtonMgr.isTvOn = false;
        StopCoroutine(Waitmission);
        Mission_Backimg.SetActive(false);
        tvButtonMgr.ChannelSign_RC.SetActive(false);
        targetChannel = 0;
        inGameMgr.playTimeEach = 0;
        inGameMgr.stage = 0;
        Score_text.text = "점수: 0";
        coinMgr.ResetAddedCoin();
        Endurance_slider.value = Endurance_slider.maxValue;
        tvButtonMgr.TvDisplay_obj.SetActive(false);
        tvButtonMgr.startgame = false;
        endurColorMgr.SleepyEffect.SetActive(false);
        inGameMgr.BfStartGame.SetActive(true);
        inGameMgr.IsPlayingGame = true;
        GameOver_Menu.SetActive(false);*/
        
    }
    public string SetPointSpot(ulong score)
    {
        string SCORE = string.Format("{0:#,###}",score);
        return SCORE;
    }
}
