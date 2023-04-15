using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

/// <summary>
/// 선생님 관리 시스템
/// </summary>
public class TeacherMgr : MonoBehaviour {

    /// <summary>
    /// 선생님 오브젝트
    /// </summary>
    public GameObject Teacher;
    /// <summary>
    /// 선생님 이미지
    /// </summary>
    public Image Teacher_img;
    /// <summary>
    /// 안전 상태의 색상
    /// </summary>
    public Color Green = Color.green;
    /// <summary>
    /// 위험 상태의 색상
    /// </summary>
    public Color Red = Color.red;
    /// <summary>
    /// 위험 직전 상태의 색상
    /// </summary>
    public Color Orange = new Vector4(0,0,0,1);
    
    /// <summary>
    /// 게임 오버 효과음 오디오 소스
    /// </summary>
    public AudioSource GameOver_Effect_as;
    /// <summary>
    /// 의심하는 효과음 오디오 소스
    /// </summary>
    public AudioSource SuspectingSound_AS;
    /// <summary>
    /// 칠판 필기 효과음 오디오 소스
    /// </summary>
    public AudioSource WritingSound_AS;
    /// <summary>
    /// 칠판 필기 오디오 클립 배열
    /// </summary>
    public AudioClip[] WritingSoundClips;

    /// <summary>
    /// 상태별 선생님 오브젝트 배열
    /// </summary>
    public GameObject[] Teacher_condition;
    /// <summary>
    /// 위험 직전 단계의 이미지
    /// </summary>
    public Image OrangeCon_img;
    /// <summary>
    /// 위험 직전 단계의 종류별 이미지 스프라이트 배열
    /// </summary>
    public Sprite[] TOrange_sprite;

    /// <summary>
    /// 일반 상태의 그룹 오브젝트
    /// </summary>
    public GameObject NormalCon;
    /// <summary>
    /// 아이템 적용 상태의 그룹 오브젝트
    /// </summary>
    public GameObject ItemCon;
    /// <summary>
    /// 게임오버 상태의 그룹 오브젝트
    /// </summary>
    public GameObject GameOverCon;

    /// <summary>
    /// 해당 게임의 콘텐츠(TV, 폰, 과자)에 의해 게임오버 됐을 때의 오브젝트
    /// </summary>
    public GameObject GameOverByContent;
    /// <summary>
    /// 졸려서(인내심 0) 게임오버 됐을 때의 오브젝트
    /// </summary>
    public GameObject GameOverBySleep;
    /// <summary>
    /// 콘텐츠 게임오버 애니메이션 효과
    /// </summary>
    public Animation GameOverByContent_ani;
    /// <summary>
    /// 졸림 게임오버 애니메이션 효과
    /// </summary>
    public Animation GameOverBySleep_ani;

    public TVButtonMgr tvButtonMgr;
    public InGameMgr inGameMgr;
    public TvGameMgr tvGameMgr;

    public DataManager dataMgr;
    public LevelMgr levelMgr;

    public PhoneConMgr phoneConMgr;
    public KatalkGameMgr katalkGameMgr;

    public SnackGameMgr snackGameMgr;

    public DifficultyData difficultyData;

    public CoinMgr coinMgr;
    public TutorialMgr tutorialMgr;
    public Option option;
    public SliderColorMgr endurColorMgr;
    public AdManager adManager;
    public ItemMgr itemMgr;

    /// <summary>
    /// 테스트 모드 여부
    /// </summary>
    public bool TestMode = false;

    /// <summary>
    /// 해당 게임의 플레이 횟수
    /// </summary>
    public int numOfPlay;

    /// <summary>
    /// 선생님이 앞을(학생 쪽을) 보고있는지 여부
    /// </summary>
    public bool isTeacherFront = false;

    /// <summary>
    /// 선생님이 눈치 챈 정도 (최대치부터 시작)
    /// </summary>
    public int teacherNotice = 1000;
    /// <summary>
    /// 선생님이 눈치 챈 정도의 최댓값 (시작 수치)
    /// </summary>
    public int teacherNoticeMax = 1000;
    /// <summary>
    /// 눈치채기 시작했는지 여부
    /// </summary>
    bool firstNotice = true;
    /// <summary>
    /// 눈치 단계 (눈치 여러 번 챌 때마다 눈치 수치 감소 속도가 빨라진다)
    /// </summary>
    public int noticeStep = 0;

    void Start ()
    {
        SetSafe();
    }

    /// <summary>
    /// 선생님 상태 변화 시작
    /// </summary>
    public void StartTeacherChange()
    {
        StartCoroutine(TeacherChange(difficultyData.DangerMin[inGameMgr.stage], difficultyData.DangerMax[inGameMgr.stage], difficultyData.SafeMin[inGameMgr.stage], difficultyData.SafeMax[inGameMgr.stage], numOfPlay));
    }
    /// <summary>
    /// 선생님 상태 변화 대기 코루틴
    /// </summary>
    /// <param name="Red_min">위험 상태 최소 시간</param>
    /// <param name="Red_max">위험 상태 최대 시간</param>
    /// <param name="Green_min">안전 상태 최소 시간</param>
    /// <param name="Green_max">안전 상태 최대 시간</param>
    /// <param name="numofplay">플레이 횟수</param>
    IEnumerator TeacherChange(float Red_min, float Red_max, float Green_min, float Green_max, int numofplay)
    {
        // 선생님이 앞을 볼 때
        if (isTeacherFront)
        {
            // 위험 상태 지속 시간 랜덤 대기 후
            yield return new WaitForSeconds(Random.Range(Red_min, Red_max));
            // 안전 상태로 전환
            SetSafe();
            // 게임이 진행 중인지 확인 후 다음 상태 변화 대기 시작
            if (inGameMgr.IsPlayingGame && numofplay.Equals(numOfPlay))
            {
                StartTeacherChange();
            }
        }
        // 선생님이 뒤돌아 있을 때
        else
        {
            // 안전 상태 지속 시간 랜덤 대기 후 
            yield return new WaitForSeconds(Random.Range(Green_min, Green_max));
            // 위험 직전 단계로 전환
            SetMiddle(Red_min, Red_max, Green_min, Green_max, numofplay);
        }
    }
    /// <summary>
    /// 선생님이 학생들을 보기 직전 상태 대기 코루틴
    /// </summary>
    /// <param name="danger_min">위험 상태 최소 시간</param>
    /// <param name="danger_max">위험 상태 최대 시간</param>
    /// <param name="safe_min">안전 상태 최소 시간</param>
    /// <param name="safe_max">안전 상태 최대 시간</param>
    /// <param name="numofplay">플레이 횟수</param>
	IEnumerator TeacherSee(float danger_min, float danger_max, float safe_min, float safe_max, int numofplay)
    {
        // 위험 직전 단계 최소, 최대 시간 계산
        float middle_min = difficultyData.MiddleMin[inGameMgr.stage], middle_max = difficultyData.MiddleMax[inGameMgr.stage];

        // 중간 대기 시간 계산
        float OrangeTime = Random.Range(middle_min, middle_max) * itemMgr.OrangeTimeUp;
        
        // 안경 아이템 효과 처리
        if (itemMgr.isGlassOn)
            itemMgr.ConsumeGlasses(OrangeTime);

        yield return new WaitForSeconds(OrangeTime);

        // 게임이 진행 중인지 확인 후 위험 상태로 전환
        if (inGameMgr.IsPlayingGame && numofplay.Equals(numOfPlay))
        {
            SetDanger();
            StartCoroutine(TeacherChange(danger_min, danger_max, safe_min, safe_max, numofplay));
        }

    }
    /// <summary>
    /// 선생님을 위험 상태로 전환
    /// </summary>
    public void SetDanger()
    {
        isTeacherFront = true;
        Teacher_img.color = Red;
        Teacher_condition[1].SetActive(false);
        Teacher_condition[0].SetActive(true);
        SuspectingSound_AS.Play();
        StartCoroutine(CheckStudent());
    }
    /// <summary>
    /// 선생님을 안전 상태로 전환
    /// </summary>
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
    /// <summary>
    /// 선생님을 위험 직전 단계 (뒤도는 단계)로 전환
    /// </summary>
    /// <param name="danger_min">위험 상태 최소 시간</param>
    /// <param name="danger_max">위험 상태 최대 시간</param>
    /// <param name="safe_min">안전 상태 최소 시간</param>
    /// <param name="safe_max">안전 상태 최대 시간</param>
    /// <param name="numofplay">플레이 횟수</param>
    public void SetMiddle(float danger_min, float danger_max, float safe_min, float safe_max, int numofplay)
    {
        WritingSound_AS.Stop();
        Teacher_img.color = Orange;
        OrangeCon_img.sprite = TOrange_sprite[Random.Range(0,2)];
        Teacher_condition[2].SetActive(false);
        Teacher_condition[1].SetActive(true);
        StartCoroutine(TeacherSee(danger_min, danger_max, safe_min, safe_max, numofplay));
    }
    /// <summary>
    /// 칠판 작성 효과음 교체 코루틴
    /// </summary>
    IEnumerator ChangeSound_Writing()
    {
        // 1.5초 후에 전환
        yield return new WaitForSecondsRealtime(1.5f);

        // 기존 효과음 중단
        WritingSound_AS.Stop();
        // 랜덤하게 다음 효과음 선택 후 재생
        int i = Random.Range(0, WritingSoundClips.Length);
        WritingSound_AS.clip = WritingSoundClips[i];
        WritingSound_AS.Play();

        // 안전 상태가 맞으면 다음 효과음 대기 후 재생
        if (Teacher_img.color.Equals(Green) && inGameMgr.IsPlayingGame)
            StartCoroutine(ChangeSound_Writing());
        // 다른 상태로 바뀌면 재생 중지
        else
            WritingSound_AS.Stop();
    }
    /// <summary>
    /// 선생님이 학생들을 확인하는 코루틴
    /// </summary>
    IEnumerator CheckStudent()
    {
        yield return new WaitForEndOfFrame();

        // 게임이 플레이 중인지 확인
        if (!TestMode && inGameMgr.IsPlayingGame)
        {
            // 선생님이 (아이템 효과로) 자고 있지 않을 때
            if (!ItemMgr.isTeacherSleeping)
            {
                // 게임 모드가 0(TV)일 때
                if (InGameMgr.GameMode.Equals(0))
                {
                    // TV가 켜져있는지 확인
                    if (tvButtonMgr.isTvOn)
                    {
                        // 튜토리얼이 아니면 게임 오버 처리
                        if (!tutorialMgr.isTutorialOn)
                        {
                            NormalCon.SetActive(false);
                            GameOverCon.SetActive(true);
                            GameOverByContent.SetActive(true);
                            StartWaitGameOver(GameOverByContent_ani);
                            TvGameOver();
                        }
                        // 튜토리얼일 때의 게임오버 처리
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
                // 게임 모드가 1(카톡)일 때
                else if (InGameMgr.GameMode.Equals(1))
                {
                    // 휴대폰을 꺼내 놨는지 확인
                    if (phoneConMgr.isPhoneOn)
                    {
                        // 선생님이 눈치를 다 챘으면
                        if (teacherNotice <= 0)
                        {
                            // 일반 게임 모드일 때 게임 오버 처리
                            if (!tutorialMgr.isTutorialOn)
                            {
                                NormalCon.SetActive(false);
                                GameOverCon.SetActive(true);
                                GameOverByContent.SetActive(true);
                                StartWaitGameOver(GameOverByContent_ani);
                                KatalkGameOver();
                            }
                            // 튜토리얼 일 때의 게임 오버 처리
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
                        // 아직 긴가민가 할 때
                        else
                        {
                            // 처음 긴가민가 하기 시작할 때
                            if (firstNotice)
                            {
                                // 눈치 단계 상승 처리 
                                noticeStep++;
                                if (noticeStep >= difficultyData.NoticeDecrease.Length)
                                    noticeStep = difficultyData.NoticeDecrease.Length - 1;
                                // 눈치 채고 있는 코루틴 시작
                                StartCoroutine(DecreaseNotice());
                                firstNotice = false;
                            }
                        }
                    }
                }
                // 게임 모드가 2(과자)일 때
                else if(InGameMgr.GameMode.Equals(2))
                {
                    // 과자를 먹고 있는지 확인
                    if(snackGameMgr.isEating)
                    {
                        // 선생님이 눈치를 다 챘으면 
                        if (teacherNotice <= 0)
                        {
                            // 일반 게임일 때의 게임 오버 처리
                            if (!tutorialMgr.isTutorialOn)
                            {
                                NormalCon.SetActive(false);
                                GameOverCon.SetActive(true);
                                GameOverByContent.SetActive(true);
                                StartWaitGameOver(GameOverByContent_ani);
                                SnackGameOver();
                            }
                            // 튜토리얼 일 때의 게임 오버 처리
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
                        // 선생님이 긴가민가 할 때
                        else
                        {
                            // 처음 긴가민가 하기 시작할 때
                            if (firstNotice)
                            {
                                // 눈치 단계 상승 처리 
                                noticeStep++;
                                if (noticeStep >= difficultyData.NoticeDecrease.Length)
                                    noticeStep = difficultyData.NoticeDecrease.Length - 1;
                                // 눈치 채고 있는 코루틴 시작
                                StartCoroutine(DecreaseNotice());
                                firstNotice = false;
                            }
                        }
                    }
                }
            }
        }
        // 게임이 진행 중이고, 선생님이 앞을 보고 있을 때 반복적으로 확인
        if (isTeacherFront && inGameMgr.IsPlayingGame)
            StartCoroutine(CheckStudent());
    }
    /// <summary>
    /// 게임 모드 상관 없이 공통적 게임 오버 처리
    /// </summary>
    void GameOver_Common()
    {
        // 안경 장착 해제
        if(itemMgr.isGlassOn)
            itemMgr.Disable_Glasses(itemMgr.glassKey);
        // 게임 종료 처리
        inGameMgr.IsPlayingGame = false;
        // 게임 플레이 횟수 증가
        numOfPlay++;
        inGameMgr.numOfPlay[InGameMgr.GameMode]++;
        inGameMgr.numOfFinish++;
        // 클라우드 권유
        if ((inGameMgr.numOfFinish % 5).Equals(0))
            Option.TimeToAutoCloud = true;
        // UI 업데이트 및 저장
        GameOver_Effect_as.Play();
        endurColorMgr.SleepyEffect.SetActive(false);
        adManager.SetInstritial();
        dataMgr.SaveData();
    }
    /// <summary>
    /// TV 게임 오버 처리
    /// </summary>
    public void TvGameOver()
    {
        // 점수 지급 및 미션 대기 중단
        tvGameMgr.StopPlusScore();
        tvGameMgr.StopWaitMission();
        // 플레이 타임 누적
        inGameMgr.PlayTime[InGameMgr.GameMode] += (ulong)inGameMgr.playTimeEach;
        // 점수 정산 
        int score = (int)tvGameMgr.Score;
        levelMgr.StatArr[0].ApplyAbility(ref tvGameMgr.Score);
        tvGameMgr.SetBestScore();
        // 코인 정산
        ulong coinReward = (ulong)coinMgr.GetReward(inGameMgr.playTimeEach);
        CoinMgr.Coin += coinReward;
        coinMgr.setCoinText();
        // 게임오버 UI 업데이트
        tvButtonMgr.BGM_as.Stop();
        tvButtonMgr.OnXXX_Students[0].SetActive(true);
        tvButtonMgr.OnXXX_Students[1].SetActive(false);
        string scoreR = "점수: " + tvGameMgr.SetPointSpot(tvGameMgr.Score);
        string coinR = "+ " + coinReward;
        levelMgr.StatArr[0].ShowAbility(score, (int)tvGameMgr.Score,  ref scoreR);
        levelMgr.StatArr[1].ShowAbility(inGameMgr.playTimeEach * 2, (int)coinReward, ref coinR);
        tvGameMgr.FinalScore_text.text = scoreR;
        tvGameMgr.CoinGet_text.text = coinR;
        
        // 공통적 게임오버 처리
        GameOver_Common();
    }
    /// <summary>
    /// 카톡 게임 오버 처리
    /// </summary>
    public void KatalkGameOver()
    {
        // 점수 지급 및 미션 대기 중단
        katalkGameMgr.StopPlusScore();
        // 점수 정산 
        int score = (int)katalkGameMgr.Score;
        levelMgr.StatArr[0].ApplyAbility(ref katalkGameMgr.Score);
        katalkGameMgr.SetBestScore();
        // 코인 정산
        ulong coinReward = (ulong)coinMgr.GetReward(inGameMgr.playTimeEach);
        CoinMgr.Coin += coinReward;
        coinMgr.setCoinText();
        // 게임오버 UI 업데이트
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
        // 스마트폰 비활성화
        if (phoneConMgr.isPhoneOn)
            phoneConMgr.OnOffPhone();

        // 공통적 게임오버 처리
        GameOver_Common();
    }
    /// <summary>
    /// 과자 게임 오버 처리
    /// </summary>
    public void SnackGameOver()
    {
        // 플레이 타임 누적
        inGameMgr.PlayTime[InGameMgr.GameMode] += (ulong)inGameMgr.playTimeEach;
        // 점수 정산 
        int score = (int)snackGameMgr.Score;
        levelMgr.StatArr[0].ApplyAbility(ref snackGameMgr.Score);
        snackGameMgr.SetBestScore();
        // 코인 정산
        ulong coinReward = (ulong)coinMgr.GetReward(inGameMgr.playTimeEach);
        CoinMgr.Coin += coinReward;
        coinMgr.setCoinText();
        // 게임오버 UI 업데이트
        snackGameMgr.EatingSnack_AS.Stop();
        snackGameMgr.StudentCon[0].SetActive(true);
        snackGameMgr.StudentCon[1].SetActive(false);
        string scoreR = "점수: " + snackGameMgr.SetPointSpot(snackGameMgr.Score);
        string coinR = "+ " + coinReward;
        levelMgr.StatArr[0].ShowAbility(score, (int)snackGameMgr.Score, ref scoreR);
        levelMgr.StatArr[1].ShowAbility(inGameMgr.playTimeEach * 2, (int)coinReward, ref coinR);
        snackGameMgr.FinalScore_text.text = scoreR;
        snackGameMgr.CoinGet_text.text = coinR;

        // 공통적 게임오버 처리
        GameOver_Common();
    }
    /// <summary>
    /// 게임오버 애니메이션 대기 시작
    /// </summary>
    /// <param name="ani">게임 오버 애니메이션</param>
    public void StartWaitGameOver(Animation ani)
    {
        StartCoroutine(WaitforGameOver(ani));
    }
    /// <summary>
    /// 게임 오버 애니메이션 대기 코루틴
    /// </summary>
    /// <param name="ani"></param>
    /// <returns></returns>
    IEnumerator WaitforGameOver(Animation ani)
    {
        while(ani.isPlaying)
        {
            yield return new WaitForEndOfFrame();
        }
        // TV 게임 게임오버 애니메이션 종료 후 EXP 지급 효과 재생
        if (SceneManager.GetActiveScene().buildIndex.Equals(1))
        {
            tvGameMgr.GameOver_Menu.SetActive(true);
            levelMgr.ProvideExp(tvGameMgr.Score);
        }
        // 카톡 게임 게임오버 애니메이션 종료 후 EXP 지급 효과 재생
        else if (SceneManager.GetActiveScene().buildIndex.Equals(2))
        {
            katalkGameMgr.GameOver_Menu.SetActive(true);
            levelMgr.ProvideExp(katalkGameMgr.Score);
        }
        // 과자 게임 게임오버 애니메이션 종료 후 EXP 지급 효과 재생
        else if (SceneManager.GetActiveScene().buildIndex.Equals(3))
        {
            snackGameMgr.GameOver_Menu.SetActive(true);
            levelMgr.ProvideExp(snackGameMgr.Score);
        }

        // 데이터 저장
        dataMgr.SaveData();
        // 구글 플레이 리뷰 권유
        inGameMgr.CheckReview();
    }
    
    /// <summary>
    /// 선생님 눈치 시스템 코루틴
    /// </summary>
    IEnumerator DecreaseNotice()
    {
        // 0.01초 마다 반복
        yield return new WaitForSeconds(0.01f);

        // 카톡 게임일 때
        if (SceneManager.GetActiveScene().buildIndex.Equals(2))
        {
            // 스마트폰을 보고 있으면 눈치 단계에 따라 눈치 게이지 감소
            if (phoneConMgr.isPhoneOn)
            {
                teacherNotice -= (int)difficultyData.NoticeDecrease[noticeStep];
            }
        }
        // 과자 게임일 때 
        else if (SceneManager.GetActiveScene().buildIndex.Equals(3))
        {
            // 과자를 먹고 있으면 눈치 단계에 따라 눈치 게이지 감소
            if (snackGameMgr.isEating)
                teacherNotice -= (int)difficultyData.NoticeDecrease[noticeStep];
        }

        // 선생님이 앞을 보고 있고 게임이 진행 중이면 반복
        if (isTeacherFront && inGameMgr.IsPlayingGame)
        {
            StartCoroutine(DecreaseNotice());
        }
        // 다시 돌아가면 처음 긴가민가 상태가 아닌 것으로 전환
        else
        {
            firstNotice = true;
        }
    }
    
    /// <summary>
    /// 눈치 게이지 회복 코루틴
    /// </summary>
    IEnumerator IncreaseNotice()
    {
        // 0.1초마다 회복
        yield return new WaitForSeconds(0.1f);

        // 최대치 이하이고, 게임이 진행 중일 때 
        if (teacherNotice < teacherNoticeMax && inGameMgr.IsPlayingGame)
        {
            // 카톡 게임, 과자 게임에 대해서 감소량의 90% 수치만큼 증가
            if (SceneManager.GetActiveScene().buildIndex.Equals(2))
                teacherNotice += (int)(teacherNoticeMax * difficultyData.NoticeDecrease[noticeStep] * 0.01f * 0.9f);
            else if (SceneManager.GetActiveScene().buildIndex.Equals(3))
                teacherNotice += (int)(teacherNoticeMax * difficultyData.NoticeDecrease[noticeStep] * 0.01f * 0.9f);

            StartCoroutine(IncreaseNotice());
        }
        else
            teacherNotice = teacherNoticeMax;
    }
    
    /// <summary>
    /// 테스트 모드 버튼 텍스트
    /// </summary>
    public Text testmodeButton_text;
    /// <summary>
    /// 테스트 모드 전환 관련 함수
    /// </summary>
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
