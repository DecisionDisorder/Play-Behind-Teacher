using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SnackGameMgr : MonoBehaviour
{
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
    /// 구간 별 점수 텍스트 색상
    /// </summary>
    public Color[] ScoreColors;

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
    /// 점수 상승 코루틴 
    /// </summary>
    IEnumerator plusScore;
    /// <summary>
    /// 리더보드 등록이 실패했는지 기록
    /// </summary>
    public bool FailedLeaderboard = false;

    /// <summary>
    /// 최종 점수 텍스트
    /// </summary>
    public Text FinalScore_text;
    /// <summary>
    /// 획득한 코인 텍스트
    /// </summary>
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

    /// <summary>
    /// 인내심 게이지 이동 관리 인스턴스
    /// </summary>
    public GageMove Endur_gageMove;
    /// <summary>
    /// 게이지가 감소 중인지 여부
    /// </summary>
    bool isGageDown;

    /// <summary>
    /// 메시지 오브젝트
    /// </summary>
    public GameObject Message;
    /// <summary>
    /// 메시지 내용 텍스트
    /// </summary>
    public Text Message_text;
    /// <summary>
    /// 게임오버 메뉴 오브젝트
    /// </summary>
    public GameObject GameOver_Menu;

    /// <summary>
    /// 먹는 단계
    /// </summary>
    public int EatingLevel = 0;
    /// <summary>
    /// 먹는 단계 최대치
    /// </summary>
    public int EatMax = 1000;
    /// <summary>
    /// 과자를 먹고 있는지 여부
    /// </summary>
    public bool isEating = false;
    /// <summary>
    /// 먹기 버튼을 누르고 있는지 여부
    /// </summary>
    public bool isPressing = false;
    /// <summary>
    /// 처음으로 '먹기'를 누르는지 여부
    /// </summary>
    bool isFirstPress = true;
    /// <summary>
    /// 처음으로 인내심 게이지가 떨어지는지 여부
    /// </summary>
    bool isFirstDecrease = true;

    /// <summary>
    /// 인내심 차감 코루틴
    /// </summary>
    IEnumerator decreaseEndur;

    /// <summary>
    /// 단계별 게임오버 확률
    /// </summary>
    public int[] Percent_GO;
    /// <summary>
    /// 처음으로 과자소리를 들었는지 여부
    /// </summary>
    bool isFirstSound = true;

    /// <summary>
    /// 학생 상태별 오브젝트 배열
    /// </summary>
    public GameObject[] StudentCon;
    /// <summary>
    /// 과자 먹고 있는 상태의 애니메이션
    /// </summary>
    public Animation Eatingstudent_ani;
    /// <summary>
    /// 과자 봉투
    /// </summary>
    public GameObject SnackBag;
    /// <summary>
    /// "Red" 단계에서 먹고 있는 소리 효과음
    /// </summary>
    public AudioClip[] EatingSnack_red;
    /// <summary>
    /// "Normal" 단계에서 먹고 있는 소리 효과음
    /// </summary>
    public AudioClip[] EatingSnack_normal;
    /// <summary>
    /// "Green" 단계에서 먹고 있는 소리 효과음
    /// </summary>
    public AudioClip EatingSnack_green;
    /// <summary>
    /// 과자 먹는 소리 오디오 소스
    /// </summary>
    public AudioSource EatingSnack_AS;

    /// <summary>
    /// 미션 시작  대기 코루틴
    /// </summary>
    IEnumerator waitMission;
    /// <summary>
    /// 미션 메시지 오브젝트
    /// </summary>
    public GameObject MissionMessage;
    /// <summary>
    /// 미션 메시지 내용 텍스트
    /// </summary>
    public Text MissionMessage_Text;
    /// <summary>
    /// 미션 시작 대기 시간 최솟값
    /// </summary>
    public float WaitTimeMin;
    /// <summary>
    /// 미션 시작 대기 시간 최댓값
    /// </summary>
    public float WaitTimeMax;
    /// <summary>
    /// 미션 성공까지 남은 시간
    /// </summary>
    float MissionTime;
    /// <summary>
    /// 미션 시간 기준치
    /// </summary>
    float missionTime_fixed;
    /// <summary>
    /// 미션 진행 시간 최솟값
    /// </summary>
    public float MissionMin;
    /// <summary>
    /// 미션 진행 시간 최댓값
    /// </summary>
    public float MissionMax;
    /// <summary>
    /// 주어진 시간
    /// </summary>
    float GivenTime;
    /// <summary>
    /// 타이머 슬라이더
    /// </summary>
    public Slider Timer_Slider;
    /// <summary>
    /// 1번 미션 보너스 점수 미션 성공 보상 
    /// </summary>
    public int RewardScore_Mission1;
    /// <summary>
    /// 1번 미션 보너스 코인 미션 성공 보상
    /// </summary>
    public int RewardCoin_Mission1;

    /// <summary>
    /// 과자먹기 미션이 실행중인지
    /// </summary>
    public bool isMissionOn_EatSnack = false;
    /// <summary>
    /// 미션으로 배정받은 먹어야할 과자 알맹이 남은 개수
    /// </summary>
    int MissionSnack;
    /// <summary>
    /// 미션으로 배정받은 먹어야할 과자 알맹이 목표 개수
    /// </summary>
    int MissionSnack_fixed;
    /// <summary>
    /// 먹기 미션(EatingMission) 최소 개수
    /// </summary>
    public int EM_Min;
    /// <summary>
    /// 먹기 미션(EatingMission) 최대 개수
    /// </summary>
    public int EM_Max;
    /// <summary>
    /// 2번 미션 보너스 점수 미션 성공 보상 
    /// </summary>
    public int RewardScore_Mission2;
    /// <summary>
    /// 2번 미션 보너스 코인 미션 성공 보상
    /// </summary>
    public int RewardCoin_Mission2;
    /// <summary>
    /// 과자 먹기 단계 포인터 바 오브젝트
    /// </summary>
    public GameObject PointerBar;

    private void Start()
    {
        // 게임 모드 설정
        InGameMgr.GameMode = 2;
        
        // 아이템 능력치 초기화
        levelMgr.SetItemAbility();

        // 게임 시작전 화면 활성화
        inGameMgr.BfStartGame.SetActive(true);

        // 인내심 슬라이더 초기 설정
        Endurance_slider.maxValue = EnduranceMax * 10;
        Endurance_slider.value = EnduranceMax * 10;
        endurColorMgr.SetColor(100);

        // 최고점수 표기
        if (!BestScore.Equals(0))
            BestScore_text.text = "최고점수: " + SetPointSpot(BestScore);
        else
            BestScore_text.text = "최고점수: 0";
    }

    /// <summary>
    /// 과자 먹기 시작
    /// </summary>
    public void SnackEat_Enable()
    {
        // 처음 누른 경우
        if (isFirstPress)
        {
            // 게임 시작 처리
            inGameMgr.BfStartGame.SetActive(false); // 게임 시작 메뉴 닫기
            inGameMgr.StartTimer();                 // 타이머 시작
            teacherMgr.StartTeacherChange();        // 선생님 위치 설정
            StartCoroutine(EatingCoroutine());      // Eating 게이지 관리 코루틴 시작
            StartPlusScore();                       // 점수 더하기 시작
            //튜토리얼 처리
            if (!tutorialMgr.isTutorialOn)
            {
                waitMission = WaitingMission(Random.Range(WaitTimeMin, WaitTimeMax));
                StartCoroutine(waitMission);
            }
            // 처음 시작 완료 처리
            isFirstPress = false;
        }
        // 먹기 버튼을 누른 상태임을 표시
        isPressing = true;
    }
    /// <summary>
    /// 과자 먹기 중단
    /// </summary>
    public void SnackEat_Disable()
    {
        isPressing = false;
    }
    /// <summary>
    /// 과자 숨기기
    /// </summary>
    public void HideSnack()
    {
        EatingLevel = 0;
        isEating = false;
        StudentCon[0].SetActive(true);
        StudentCon[1].SetActive(false);
        SnackBag.SetActive(false);
        EatingSnack_AS.clip = EatingSnack_green; //NO eat에서 Normal 넘어갈 때 소리나게 하기 위함
        EatingSnack_AS.Stop();
        PointerBar.transform.localPosition = new Vector3(540 * (EatingLevel * 0.001f) - 270, 0, 0);
    }
    /// <summary>
    /// Eating 게이지 가감 관리 코루틴
    /// </summary>
    IEnumerator EatingCoroutine()
    {
        yield return new WaitForEndOfFrame();
        // 게임이 일시정지된 상태가 아니면
        if (!inGameMgr.isPause)
        {
            // 누르고 있을 때는 최댓값 이내에서 Eating Level을 높이고
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
            // 누르지 않을 때는 최솟값 이상을 유지하며 Eating Level을 낮춘다.
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

            // Eating Level에 따라 게이지 포인터 위치 설정
            PointerBar.transform.localPosition = new Vector3(540 * (EatingLevel * 0.001f) - 270, 0, 0);

        }

        if (inGameMgr.IsPlayingGame && Endurance > 0)
        {
            StartCoroutine(EatingCoroutine());
        }
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
    /// 점수 지급 코루틴
    /// </summary>
    IEnumerator PlusScore()
    {
        yield return new WaitForSeconds(0.1f);

        // 인내심 기준치 설정
        int startValue = Endurance;

        // 점수 계산
        ScoreCalculator();

        // 인내심 게이지가 떨어지는게 아니면 회복
        if (!isGageDown)
        {
            if (option.smoothGage)
                Endur_gageMove.StartGageMove(startValue, Endurance, isGageDown);
            else
                Endurance_slider.value = Endurance * 10;
        }

        // 인내심 비율 계산 후 색상 조정
        int percentage = Endurance * 100 / EnduranceMax;
        endurColorMgr.SetColor(percentage);

        // 게임 진행 중인게 맞으면 점수 및 최고점수 갱신
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

    /// <summary>
    /// 인내심 차감 시작
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
        yield return new WaitForSeconds(snackDifficultyData.Period);

        // 기준치 설정
        int startValue = Endurance;

        // 단계별 인내심 하락치 계산
        int endurM = (int)(EnduranceMax * snackDifficultyData.DecreasePortion[inGameMgr.stage] * 0.01f);
        // 인내심 감소량 능력치 적용 후 차감
        levelMgr.StatArr[2].ApplyAbility(ref endurM);
        Endurance -= endurM;

        // 설정에 따른 슬라이더 업데이트 처리
        if (option.smoothGage)
            Endur_gageMove.StartGageMove(startValue, Endurance, isGageDown);
        else
            Endurance_slider.value = Endurance * 10;

        // 비율에 따라 슬라이더 색상 업데이트
        int percentage = Endurance * 100 / EnduranceMax;
        endurColorMgr.SetColor(percentage);

        // 과자를 먹지 않고 게임 진행 중일 때 인내심 차감 반복
        if (!isEating && inGameMgr.IsPlayingGame && Endurance > 0)
            StartDecreaseEndurance();
        // 인내심이 0이 되었을 때 게임오버 처리
        else if (Endurance <= 0 && !teacherMgr.TestMode)
        {
            // 일반 게임에서의 게임오버 처리
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
            // 튜토리얼에서의 게임오버 처리
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
            leaderboardMgr.SendBoardScore((long)BestScore, LeaderboardMgr.snackLeaderboardID, ref FailedLeaderboard);
        }
        // 이전에 리더보드 등록을 실패했을 때 재등록 시도
        else if (FailedLeaderboard)
        {
            if (BestScore != 0)
                leaderboardMgr.SendBoardScore((long)BestScore, LeaderboardMgr.snackLeaderboardID, ref FailedLeaderboard);
        }
    }
    /// <summary>
    /// 점수 지급 계산
    /// </summary>
    public void ScoreCalculator()
    {
        // 먹지 않는 상태에서의 점수 지급 처리
        if (EatingLevel < 150)
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
        // 먹는 상태에서의 지급 처리
        else
        {
            // 인내심 감소 중단
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

            // 완벽하게 조용히 먹고있을 때의 점수 지급 처리
            if (400 <= EatingLevel && EatingLevel <= 550)
            {
                Score_text.color = ScoreColors[1];
                Score += 10;
                snackStore.CalculateSnackLeft(3);//Default: 3

                // 효과음 및 효과 처리
                if (!EatingSnack_AS.clip.Equals(EatingSnack_green))
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
            // 그 외에 먹고있을 때의 점수 지급 처리
            else
            {
                Score_text.color = ScoreColors[2];
                Score += 7;
                snackStore.CalculateSnackLeft(1);//Default: 1

                // 시끄럽게 먹고 있는 경우의 효과음 및 효과 처리
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
                // 보토으이 상태에서 먹고 있는 경우의 효과음 및 효과 처리
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
    /// <summary>
    /// 시끄럽게 먹을 때 걸릴 확률 계산
    /// </summary>
    IEnumerator CheckingSound()
    {
        int r = Random.Range(0,100);
        // 800 이하로 먹을 때의 즉시 게임오버 확률 계산
        if (EatingLevel < 800)
        {
            if(r < Percent_GO[0])
            {
                GameOverBySound();
            }
        }
        // 800~900으로 먹을 때의 즉시 게임오버 확률 계산
        else if (EatingLevel < 900)
        {
            if (r < Percent_GO[1])
            {
                GameOverBySound();
            }
        }
        // 900 이상으로 먹을 때의 즉시 게임오버 확률 계산
        else
        {
            if (r < Percent_GO[2])
            {
                GameOverBySound();
            }
        }

        yield return new WaitForSeconds(1.0f);

        // 시끄럽게 먹고 있는 동안 반복
        if (EatingLevel > 650 && inGameMgr.IsPlayingGame)
            StartCoroutine(CheckingSound());
        else if(EatingLevel <= 650)
            isFirstSound = true;
    }
    /// <summary>
    /// 시끄럽게 먹어서 게임오버 될 때의 처리
    /// </summary>
    void GameOverBySound()
    {
        // 일반 게임 상태일 때의 게임오버 처리
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
        // 튜토리얼 상태에서의 게임오버 처리
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
    /// <summary>
    /// 미션 시작 대기 코루틴
    /// </summary>
    /// <param name="wt">대기 시간</param>
    IEnumerator WaitingMission(float wt)
    {
        yield return new WaitForSeconds(wt);

        if(inGameMgr.IsPlayingGame)
            MissionStart();
    }
    /// <summary>
    /// 미션 시작
    /// </summary>
    public void MissionStart()
    {
        // 무작위로 미션 종류 선택
        int r = Random.Range(0,2);
        // 튜토리얼일 때는 무조건 녹여먹기 미션
        if (r.Equals(0) || tutorialMgr.isTutorialOn)
        {
            // 미션 지속시간과 주어지는 시간 계산 및 UI 업데이트
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
            // 과자 n개 먹기 미션 개수 설정
            isMissionOn_EatSnack = true;
            MissionSnack = Random.Range(EM_Min, EM_Max + 1);
            MissionSnack_fixed = MissionSnack;

            MissionMessage.SetActive(true);
            MissionMessage_Text.text = "미션: 과자 알맹이 <color=red>"+MissionSnack+"</color>개 먹기!";
        }
    }
    // 녹여먹기 미션 시간을 세는 코루틴
    IEnumerator CountingTime()
    {
        yield return new WaitForSeconds(0.1f);
        
        if (!tutorialMgr.stopTimerForTutorial)
        {
            // 주어진 시간 차감
            GivenTime -= 0.1f;
            Timer_Slider.value = GivenTime;
            // 잘 녹여먹고 있을 때의 목표 시간 삭감 및 UI 업데이트
            if (400 <= EatingLevel && EatingLevel <= 500)
            {
                MissionTime -= 0.1f;
                string mtime = string.Format("{0:0.0}", MissionTime);
                MissionMessage_Text.text = "미션: <color=red>" + mtime + "초</color> 동안 <color=#00ff00ff>잘 녹여먹음</color>을 유지하기!";
                // 미션 시간만큼 잘 녹여먹었을 때의 미션 성공 처리
                if (MissionTime <= 0)
                {
                    // 튜토리얼일 때의 성공 처리
                    if (tutorialMgr.isTutorialOn)
                    {
                        tutorialMgr.ProcessTutorial_InGame();
                        tutorialMgr.MissionResult_text.text = "잘하셨습니다!\n다음 단계로 가볼까요?";
                        MissionMessage_Text.text = "미션을 성공하셨습니다!";
                    }
                    // 일반 게임에서의 보상 지급
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
            
            // 주어진 시간이 지났을 때의 미션 실패 처리
            if (GivenTime <= 0)
            {
                // 튜토리얼의 안내 메시지 업데이트 및 다음 튜토리얼 진행
                if (tutorialMgr.isTutorialOn)
                {
                    tutorialMgr.ProcessTutorial_InGame();
                    tutorialMgr.MissionResult_text.text = "결과가 어떻든 잘하셨습니다!\n다음 단계로 가볼까요??";
                }
                // 일반 게임 정보 업데이트
                MissionMessage_Text.text = "미션을 실패하셨습니다...";
                Timer_Slider.gameObject.SetActive(false);
                StartCoroutine(CloseMissionMessage(2.0f));
            }
        }
        if(GivenTime > 0 && MissionTime > 0 && inGameMgr.IsPlayingGame)
            StartCoroutine(CountingTime());
    }

    /// <summary>
    /// 과자 먹기 미션 진행
    /// </summary>
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

    /// <summary>
    /// 미션 보상 지급
    /// </summary>
    /// <param name="RewardResult">지급 결과</param>
    void MissionReward(ref string RewardResult)
    {
        int reward;
        int r = Random.Range(0,100);
        // 미션 성공 보상이 보너스 점수일 때
        if(r < 60) 
        {
            // 미션 지속시간/개수에 따라서 보상 계산
            if (!isMissionOn_EatSnack)
                reward = (int)(missionTime_fixed / 0.5f) * RewardScore_Mission1;
            else
                reward = MissionSnack_fixed * RewardScore_Mission2;
            // 능력치의 보상 추가 계산 적용
            levelMgr.StatArr[3].ApplyAbility(ref reward);
            // 점수 추가 및 UI 업데이트
            Score += (ulong)reward;
            RewardResult = "점수 +" + reward;
            BonusScore_text.text = "+" + reward;
            BonusScore_ani.Play();
        }
        // 미션 성공 보상이 보너스 코인일 때
        else
        {
            // 미션 지속시간/개수에 따라서 보상 계산
            if (!isMissionOn_EatSnack)
                reward = (int)(missionTime_fixed / 0.5f) * RewardCoin_Mission1;
            else
                reward = MissionSnack_fixed * RewardCoin_Mission2;

            // 능력치의 보상 추가 계산 적용
            levelMgr.StatArr[3].ApplyAbility(ref reward);
            // 코인 추가 및 UI 업데이트
            CoinMgr.Coin += (ulong)reward;
            CoinMgr.accumulatedCoins += (ulong)reward;
            coinMgr.SetAddedCoin(reward);
            coinMgr.setCoinText();
            RewardResult = " +" + reward + " Coin";
            BonusCoin_text.text = "+ " + reward;
            BonusCoin_ani.Play();
        }
    }
    /// <summary>
    /// 미션 메시지 종료 대기 코루틴
    /// </summary>
    /// <param name="wt">대기 시간</param>
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
    /// <summary>
    /// 게임 초기화
    /// </summary>
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

    /// <summary>
    /// 점수 데코레이션 (세자리수 콤마)
    /// </summary>
    /// <param name="score">점수</param>
    /// <returns>세자리 마다 콤마(,) 처리된 문자열</returns>
    public string SetPointSpot(ulong score)
    {
        string SCORE = string.Format("{0:#,###}", score);
        return SCORE;
    }
}
