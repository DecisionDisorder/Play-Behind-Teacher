using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

/// <summary>
/// TV 게임 시스템 관리 클래스
/// </summary>
public class TvGameMgr : MonoBehaviour {

    /// <summary>
    /// 실시간 점수
    /// </summary>
    public ulong Score;
    /// <summary>
    /// 학생 인내심
    /// </summary>
    public int Endurance = 1000;
    /// <summary>
    /// 학생 인내심 최대치
    /// </summary>
    public int EnduranceMax = 1000;
    /// <summary>
    /// 최고 점수
    /// </summary>
    public ulong BestScore;
    /// <summary>
    /// 미션 성공 횟수
    /// </summary>
    public int numOfMissionClear;
    /// <summary>
    /// 점수 상승 코루틴 
    /// </summary>
    IEnumerator plusScore;
    /// <summary>
    /// 리더보드 등록이 실패했는지 기록
    /// </summary>
    public bool FailedLeaderboard = false;

    /// <summary>
    /// 미션 대기 시간 최소치
    /// </summary>
    public float WaitMissionMin;
    /// <summary>
    /// 미션 대기 시간 최대치
    /// </summary>
    public float WaitMissionMax;
    /// <summary>
    /// 미션 대기 코루틴
    /// </summary>
    IEnumerator Waitmission;

    /// <summary>
    /// 채널 맞추기 미션의 목표 채널
    /// </summary>
    public int targetChannel;
    /// <summary>
    /// 미션 시작할 때의 현재 채널
    /// </summary>
    public int startChannel;

    /// <summary>
    /// TV 껐다켜기 미션 목표치
    /// </summary>
    public int targetTVPower;
    /// <summary>
    /// TV를 껐다 킨 횟수
    /// </summary>
    public int numOfTVPower;
    /// <summary>
    /// 껐다 켜기 미션 목표 최대치
    /// </summary>
    public int TVPowerMax;
    /// <summary>
    /// 껐다 켜기 미션 목표 최소치
    /// </summary>
    public int TVPowerMin;
    /// <summary>
    /// 껐다 켜기 미션 가동 여부
    /// </summary>
    public bool isPowerMissionOn = false;

    /// <summary>
    /// 인내심 차감 코루틴
    /// </summary>
    IEnumerator decreaseEndur;

    /// <summary>
    /// 시간마다 더해지는 점수 폭 기준치
    /// </summary>
    ulong addingScore = 4;

    /// <summary>
    /// 미션 보인: 코인 확률
    /// </summary>
    public int percentageOfCoin = 60;

    /// <summary>
    /// 실시간 점수 텍스트
    /// </summary>
    public Text Score_text;
    /// <summary>
    /// 최고 점수 텍스트
    /// </summary>
    public Text BestScore_text;
    /// <summary>
    /// 학생 인내심 표시 슬라이더
    /// </summary>
    public Slider Endurance_slider;

    /// <summary>
    /// 보너스 점수 애니메이션 효과
    /// </summary>
    public Animation BonusScore_ani;
    /// <summary>
    /// 보너스 점수 표시 텍스트
    /// </summary>
    public Text BonusScore_text;
    /// <summary>
    /// 보너스 코인 애니메이션 효과
    /// </summary>
    public Animation BonusCoin_ani;
    /// <summary>
    /// 보너스 코인 표시 텍스트
    /// </summary>
    public Text BonusCoin_text;

    /// <summary>
    /// 최종 점수 텍스트
    /// </summary>
    public Text FinalScore_text;
    /// <summary>
    /// 획득한 코인 텍스트
    /// </summary>
    public Text CoinGet_text;

    /// <summary>
    /// 주어진 미션 텍스트
    /// </summary>
    public Text Mission_text;
    /// <summary>
    /// 미션 텍스트 배경 오브젝트
    /// </summary>
    public GameObject Mission_Backimg;
    
    public TVButtonMgr tvButtonMgr;
    public InGameMgr inGameMgr;
    public TeacherMgr teacherMgr;
    public DifficultyData tvDifficultyData;
    public DataManager dataMgr;
    public SliderColorMgr endurColorMgr;
    public CoinMgr coinMgr;
    public ItemMgr itemMgr;
    public TutorialMgr tutorialMgr;
    public Option option;
    public LeaderboardMgr leaderboardMgr;
    public LevelMgr levelMgr;

    /// <summary>
    /// 인내심 게이지 이동 관리 인스턴스
    /// </summary>
    public GageMove Endur_gageMove;

    /// <summary>
    /// 게임 오버 화면 오브젝트
    /// </summary>
    public GameObject GameOver_Menu;

    private void Start()
    {
        // 아이템 능력치 초기화
        levelMgr.SetItemAbility();

        // 게임 시작전 화면 활성화
        inGameMgr.BfStartGame.SetActive(true);

        // 인내심 슬라이더 초기 설정
        Endurance_slider.maxValue = EnduranceMax * 10;                      
        Endurance_slider.value = EnduranceMax* 10;
        endurColorMgr.SetColor(100);

        // 최고점수 표기
        if (!BestScore.Equals(0))                                            
            BestScore_text.text = "최고점수: " + SetPointSpot(BestScore);   
        else
            BestScore_text.text = "최고점수: 0";
    }
    /// <summary>
    /// 점수 지급 시작
    /// </summary>
    public void StartPlusScore()
    {
        plusScore = PlusScore();
        StartCoroutine(plusScore);
    }
    /// <summary>
    /// 점수 지급 처리 코루틴
    /// </summary>
    IEnumerator PlusScore()
    {
        // 0.1초 마다
        yield return new WaitForSeconds(0.1f);

        // TV가 켜져있을 때
        if (tvButtonMgr.isTvOn)
        {
            // 인내심 감소 종료
            if (decreaseEndur != null)
                StopCoroutine(decreaseEndur);
            // 점수 2배 지급
            Score += addingScore * 2;

            // 인내심 회복 처리
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
            // 점수 1배율로 지급
            Score += addingScore;
        }

        // 게임이 진행 중인지 확인 후
        if (inGameMgr.IsPlayingGame)
        {
            // 점수 업데이트 및 최고점수 갱신 확인
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

        // 게임 진행중이면 반복
        if (inGameMgr.IsPlayingGame)
            StartPlusScore();
    }
    /// <summary>
    /// 최고 점수 등록
    /// </summary>
    public void SetBestScore()
    {
        // 최고 점수를 갱신 했을 때 최고점수 텍스트 업데이트 및 리더보드 등록
        if (Score > BestScore)
        {
            BestScore = Score;
            BestScore_text.text = "최고점수: " + SetPointSpot(BestScore);
            leaderboardMgr.SendBoardScore((long)BestScore, LeaderboardMgr.tvLeaderboardID, ref FailedLeaderboard);
        }
        // 이전에 리더보드 등록을 실패했을 때 재등록 시도
        else if (FailedLeaderboard)
        {
            if(BestScore != 0)
                leaderboardMgr.SendBoardScore((long)BestScore, LeaderboardMgr.tvLeaderboardID, ref FailedLeaderboard);
        }
    }
    /// <summary>
    /// 인내심 감소 시작
    /// </summary>
    public void StartDecreaseEndurance()
    {
        decreaseEndur = DecreaseEndurance();
        StartCoroutine(decreaseEndur);
    }
    /// <summary>
    /// 인내심 차감 코루틴
    /// </summary>
    IEnumerator DecreaseEndurance()
    {
        yield return new WaitForSeconds(tvDifficultyData.Period);
        
        // 차감할 비율에 따라서 인내심 차감 처리
        int startValue = Endurance;
        int endurM = (int)(EnduranceMax * tvDifficultyData.DecreasePortion[inGameMgr.stage] * 0.01f);
        levelMgr.StatArr[2].ApplyAbility(ref endurM);
        Endurance -= endurM;

        // 설정에 따른 슬라이더 업데이트 처리
        if (option.smoothGage)
            Endur_gageMove.StartGageMove(startValue, Endurance, true);
        else
            Endurance_slider.value = Endurance * 10;

        // 비율에 따라 슬라이더 색상 업데이트
        int percentage = Endurance * 100 / EnduranceMax;
        endurColorMgr.SetColor(percentage);

        // TV가 꺼져있고, 게임이 진행 중일 때 감소 반복
        if (!tvButtonMgr.isTvOn && inGameMgr.IsPlayingGame && Endurance > 0)
            StartDecreaseEndurance();
        // 인내심이 바닥나고, 테스트 중이 아닐 때
        else if (Endurance <= 0 && !teacherMgr.TestMode)
        {
            // 튜토리얼이 아닐 때 (평소 상황)
            if (!tutorialMgr.isTutorialOn)
            {
                // 게임 오버가 아직 안되었을 때
                if (inGameMgr.IsPlayingGame)
                {
                    // 게임오버 처리
                    teacherMgr.NormalCon.SetActive(false);
                    teacherMgr.GameOverCon.SetActive(true);
                    teacherMgr.GameOverBySleep.SetActive(true);
                    teacherMgr.StartWaitGameOver(teacherMgr.GameOverBySleep_ani);
                    teacherMgr.TvGameOver();
                }
            }
            // 튜토리얼일 때
            else
            {
                // 게임 오버가 아직 안되었을 때
                if (!tutorialMgr.gameovered_endurance)
                {
                    // 튜토리얼 게임 오버 처리
                    tutorialMgr.onGameOver_tut.SetActive(true);
                    tutorialMgr.reason_text.text = "사유: 졸려서 뻗음..";
                    Time.timeScale = 0.0f;
                    inGameMgr.isPause = true;
                    tutorialMgr.gameovered_endurance = true;
                }
            }
        }
    }
    /// <summary>
    /// 미션 시작
    /// </summary>
    /// <param name="time">미션 시작 대기 시간</param>
    public void ExecuteMission(float time)
    {
        Waitmission = WaitMission(time);
        StartCoroutine(Waitmission);
    }
    /// <summary>
    /// 채널 밎추기 미션 확인
    /// </summary>
    /// <param name="channel">현재 채널</param>
    public void CheckChannel(int channel)
    {
        // 목표 채널이 있을 때
        if (targetChannel != 0)
        {
            // 목표 채널에 도달했으면
            if (channel.Equals(targetChannel))
            {
                ulong reward = 0;
                string kind = "";
                // 목표 채널 초기화 및 클리어 횟수 증가
                targetChannel = 0;
                numOfMissionClear++;
                // 튜토리얼이 아닐 때
                if (!tutorialMgr.isTutorialOn)
                {
                    // 미션 보상 계산 후 지급 처리
                    MissionReward(ref reward, ref kind, 0);
                    Mission_text.text = "미션 성공!\n성공 보상: " + kind + " +" + reward;
                    StartCoroutine(CloseMissionImg(3f));
                    // 다음 미션 대기 시작
                    ExecuteMission(Random.Range(WaitMissionMin, WaitMissionMax));
                }
                // 튜토리얼일 때의 미션 성공 처리
                else
                {
                    Mission_text.text = "미션 성공!";
                    StartCoroutine(CloseMissionImg(3f));
                    tutorialMgr.Game_tutorial[tutorialMgr.explainStep].SetActive(true);
                    if (tutorialMgr.explainStep < 9)
                    {
                        tutorialMgr.explainStep++;
                    }
                    tutorialMgr.needLateOn = false;
                }
            }
            else
            {
                //미션 실패 -> 미션 취소 & 미션 대기 시작
                targetChannel = 0;
                Mission_text.text = "미션 실패..";
                if (!tutorialMgr.isTutorialOn)
                {
                    StartCoroutine(CloseMissionImg(2.5f));
                    ExecuteMission(Random.Range(WaitMissionMin, WaitMissionMax));
                }
                // 튜토리얼일 때의 실패 처리
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

    /// <summary>
    /// TV 껐다 켜기 미션 확인
    /// </summary>
    public void CheckTVpower()
    {
        // 껐다 켠 횟수 증가
        numOfTVPower++;
        // UI 업데이트
        Mission_text.text = "TV껐다 켜기: " + (targetTVPower - numOfTVPower) + "회";
        // 미션 조건에 충족했을 때
        if (numOfTVPower >= targetTVPower)
        {
            ulong reward = 0;
            string kind = "";
            // 클리어 처리 및 보상 지급
            numOfMissionClear++;
            isPowerMissionOn = false;
            MissionReward(ref reward, ref kind, 1);
            Mission_text.text = "미션 성공!\n성공 보상: " + kind + " +" + reward;
            StartCoroutine(CloseMissionImg(3f));
            // 다음 미션 대기 시작
            ExecuteMission(Random.Range(WaitMissionMin, WaitMissionMax));
        }
    }
    /// <summary>
    /// 미션 성공 보상 계산
    /// </summary>
    /// <param name="reward">보상 수치</param>
    /// <param name="kind">보상 종류</param>
    /// <param name="missionmode">미션 종류</param>
    void MissionReward(ref ulong reward, ref string kind, int missionmode)
    {
        // 채널 맞추기 미션일 때
        if (missionmode.Equals(0))
        {
            // 채널 차이 계산
            int[] channelGap = new int[2] { targetChannel - startChannel, startChannel + tvButtonMgr.ChannelMax - targetChannel };
            int p = Random.Range(0, 100);
            // 채널 차이 절대값 처리
            if (channelGap[0] < 0)
                channelGap[0] *= -1;
            if (channelGap[1] < 0)
                channelGap[1] *= -1;
            // 보상 종류를 확률에 따라 결정
            if (p < percentageOfCoin)
            {
                // 보상이 코인일 때의 보상 계산 및 지급 처리
                kind = "코인";
                if (channelGap[0] > channelGap[1] && channelGap[0] < 0)
                    reward = 5 + (ulong)channelGap[1] * 2;
                else
                    reward = 5 + (ulong)channelGap[0] * 2;

                levelMgr.StatArr[3].ApplyAbility(ref reward);
                CoinMgr.Coin += reward;
                CoinMgr.accumulatedCoins += reward;
                coinMgr.SetAddedCoin((int)reward);
                // UI 업데이트
                coinMgr.setCoinText();
                BonusCoin_text.text = "+ " + reward;
                BonusCoin_ani.Play();

            }
            // 보상이 추가 점수일 때
            else
            {
                // 점수 계산 및 점수 지급 처리
                kind = "점수";
                if (channelGap[0] > channelGap[1])
                    reward = 100 + (ulong)channelGap[1] * 25;
                else
                    reward = 100 + (ulong)channelGap[0] * 25;

                levelMgr.StatArr[3].ApplyAbility(ref reward);
                Score += reward;
                BonusScore_text.text = "+ " + reward;
                BonusScore_ani.Play();
            }
        }
        // TV 껐다켜기 미션 보상
        else
        {
            // 확률에 따라서 보상 종류 결정
            int p = Random.Range(0, 100);
            if(p < percentageOfCoin)
            {
                // 코인 보상 계산 및 지급
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
                // 보너스 점수 계산 및 지급
                kind = "점수";
                reward = (ulong)(targetTVPower * 15);
                Score += reward;
                BonusScore_text.text = "+ " + reward;
                BonusScore_ani.Play();
            }
        }
    }
    /// <summary>
    /// 미션 배경 종료 대기 코루틴
    /// </summary>
    /// <param name="waittime">대기 시간</param>
    IEnumerator CloseMissionImg(float waittime = 1.5f)
    {
        yield return new WaitForSeconds(waittime);

        Mission_Backimg.SetActive(false);
    }
    /// <summary>
    /// 미션 시작 대기 코루틴
    /// </summary>
    /// <param name="time">대기 시간</param>
    IEnumerator WaitMission(float time)
    {
        yield return new WaitForSeconds(time);

        int randomMission = Random.Range(0,2);

        // 대기 시간이 다 되었을 때, 반반의 확률로 미션 종류 결정
        // 튜토리얼일 때는 무조건 0번 미션
        if (randomMission.Equals(0) || tutorialMgr.isTutorialOn)
        {
            // 채널 맞추기 미션 시작 처리
            startChannel = tvButtonMgr.TvChannel;
            targetChannel = Random.Range(1, tvButtonMgr.ChannelMax + 1);
            Mission_Backimg.SetActive(true);
            Mission_text.text = "목표 채널: " + targetChannel;
        }
        else
        {
            // TV 껐다 켜기 미션 시작 처리
            targetTVPower = Random.Range(TVPowerMin, TVPowerMax);
            numOfTVPower = 0;
            Mission_Backimg.SetActive(true);
            isPowerMissionOn = true;
            Mission_text.text = "TV껐다 켜기: " + targetTVPower + "회";
        }
    }
    /// <summary>
    /// 점수 지급 종료
    /// </summary>
    public void StopPlusScore()
    {
        StopCoroutine(plusScore);
    }
    /// <summary>
    /// 미션 대기 중단
    /// </summary>
    public void StopWaitMission()
    {
        StopCoroutine(Waitmission);
    }
    /// <summary>
    /// 게임 초기화
    /// </summary>
    public void ResetGame()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }
    /// <summary>
    /// 점수 데코레이션 (세자리수 콤마)
    /// </summary>
    /// <param name="score">점수</param>
    /// <returns>세자리 마다 콤마(,) 처리된 문자열</returns>
    public string SetPointSpot(ulong score)
    {
        string SCORE = string.Format("{0:#,###}",score);
        return SCORE;
    }
}
