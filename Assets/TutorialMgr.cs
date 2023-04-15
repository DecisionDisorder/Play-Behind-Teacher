using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

/// <summary>
/// 튜토리얼 시스템 관리 클래스
/// </summary>
public class TutorialMgr : MonoBehaviour {
    /// <summary>
    /// 튜토리얼이 진행 중인지 여부
    /// </summary>
    public bool isTutorialOn = false;
    /// <summary>
    /// 선생님에게 걸려서 게임오버인지 여부
    /// </summary>
    public bool gameovered_teacher = false;
    /// <summary>
    /// 인내심 한계로 게임오버인지 여부
    /// </summary>
    public bool gameovered_endurance = false;
    /// <summary>
    /// 간식 먹다가 걸려서 게임오버인지 여부
    /// </summary>
    public bool gameovered_snack = false;
    /// <summary>
    /// 튜토리얼 그룹 오브젝트
    /// </summary>
    public GameObject Tutorial_Group;
    /// <summary>
    /// 각 미니게임의 튜토리얼을 완료했는지 여부
    /// </summary>
    public bool[] didTutorialComplete = new bool[3];

    /// <summary>
    /// 게임 튜토리얼 단계별 그룹 오브젝트
    /// </summary>
    public GameObject[] Game_tutorial = new GameObject[7];
    
    public MainSceneMgr mainSceneMgr;
    public ItemMgr itemMgr;
    public InGameMgr inGameMgr;
    public DataManager dataManager;
    public TeacherMgr teacherMgr;
    public DailyGiftMgr dailyGiftMgr;
    
    /// <summary>
    /// 설명 단계
    /// </summary>
    public int explainStep;

    /// <summary>
    /// 현재 씬의 번호
    /// </summary>
    public int SceneNumber;


    void Start() {
        // 현재 씬의 번호를 얻어온다,
        SceneNumber = SceneManager.GetActiveScene().buildIndex;
        // 해당 씬의 튜토리얼을 하지 않았다면, 튜토리얼 시작 처리
        if (!didTutorialComplete[SceneNumber])
        {
            Tutorial_Group.SetActive(true);
            isTutorialOn = true;
            ProcessTutorial_InGame();
        }
    }
    /// <summary>
    /// 선택한 종류의 튜토리얼 기록 초기화
    /// </summary>
    /// <param name="kind">튜토리얼 종류</param>
    public void ResetTutorialData(int kind)
    {
        didTutorialComplete[kind] = false;
        dataManager.SaveData();
    }
    #region 시작씬(메인씬) 튜토리얼
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
    #endregion
    #region TV 게임 튜토리얼
    public TvGameMgr tvGameMgr;
    public TVButtonMgr tvButtonMgr;

    /// <summary>
    /// TV 전원 버튼을 블로킹하는 이미지 오브젝트
    /// </summary>
    public GameObject tvpowerBlockImg;

    /// <summary>
    /// TV 게임 튜토리얼의 단계별 버튼 이벤트 리스너 클래스
    /// </summary>
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
    /// <summary>
    /// 선생님이 특정 단계에 있을때 까지 대기하는 코루틴
    /// </summary>
    /// <param name="color">대기할 색상</param>
    IEnumerator WaitColorChange(string color)
    {
        // orange 상태(위험 직전 단계)까지 대기
        if(color.Equals("orange"))
        {
            while(!teacherMgr.Teacher_img.color.Equals(teacherMgr.Orange))
            {
                yield return new WaitForEndOfFrame();
            }
            // 해당 타이밍에서의 설명 업데이트 및 일시정지 처리
            Game_tutorial[explainStep-1].SetActive(true);
            Time.timeScale = 0.0f;
            inGameMgr.isPause = true;
        }
        // green 상태(안전 단계)까지 대기
        else if(color.Equals("green"))
        {
            while(!teacherMgr.Teacher_img.color.Equals(teacherMgr.Green))
            {
                yield return new WaitForEndOfFrame();
            }
            // 해당 타이밍에서의 설명 업데이트 및 일시정지 처리
            Game_tutorial[explainStep-1].SetActive(true);
            Time.timeScale = 0.0f;
            inGameMgr.isPause = true;

            if(SceneNumber.Equals(3))
                BlockEat.SetActive(false);
        }
    }
    /// <summary>
    /// TV 불빛 꺼짐 대기 코루틴
    /// </summary>
    /// <param name="time">대기 시간</param>
    IEnumerator WaitLightOff(float time)
    {
        yield return new WaitForSeconds(time);

        tvButtonMgr.PressRemoteCon(-1);
    }
    #endregion
    #region 카톡 게임 튜토리얼

    public KatalkGameMgr katalkGameMgr;
    public PhoneConMgr phoneConMgr;
    public SuggestWords suggestWords;

    /// <summary>
    /// 전송 버튼 겸 다음 단계 진행 벝큰
    /// </summary>
    public Button Sendbutton_NextButton;

    public Option option;

    /// <summary>
    /// 미션 결과 텍스트
    /// </summary>
    public Text MissionResult_text;
    /// <summary>
    /// 성공 시의 메시지 문자열
    /// </summary>
    public string successMessage = "잘하셨네요! 앞으로 이렇게 하시면 됩니다!!";
    /// <summary>
    /// 실패 시의 메시지 문자열
    /// </summary>
    public string failMessage = "그럴 수 있어요.. 다음부터 잘하면 되죠!! 다음 단계로~~";
    /// <summary>
    /// 스마트폰 on/off를 블로킹하는 이미지 오브젝트
    /// </summary>
    public GameObject BlockPhoneOnOffImg;
    /// <summary>
    /// 키보드를 여는 버튼을 블로킹하는 이미지 오브젝트
    /// </summary>
    public GameObject BlockMessageOnImg;

    /// <summary>
    /// 카톡 게임 튜토리얼의 단계별 버튼 이벤트 리스너 클래스
    /// </summary>
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
    /// <summary>
    /// 스마트폰이 활성화 될 때까지 대기하는 코루틴
    /// </summary>
    IEnumerator WaitforPhoneOn()
    {
        while(phoneConMgr.PhoneOnOff_animation.IsPlaying("OpeningPhone"))
        {
            yield return new WaitForEndOfFrame();
        }
        Game_tutorial[explainStep-1].SetActive(true);
    }
    #endregion
    #region 간식 게임 튜토리얼

    /// <summary>
    /// 간식 먹기 버튼 겸 다음 단계 진행 버튼
    /// </summary>
    public GameObject nextbutton_EatSnack;
    /// <summary>
    /// 먹기 버튼을 블로킹하는 이미지 오브젝트
    /// </summary>
    public GameObject BlockEat;

    public SnackGameMgr snackGameMgr;
    /// <summary>
    /// 튜토리얼을 위해 타이머를 멈추고있는지 여부
    /// </summary>
    public bool stopTimerForTutorial;

    /// <summary>
    /// 간식 게임 튜토리얼의 단계별 버튼 이벤트 리스너 클래스
    /// </summary>
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
    /// <summary>
    /// nextbutton_EatSnack을 비활성화
    /// </summary>
    public void UnActiveNextAndSnack()
    {
        if(explainStep.Equals(4))
            nextbutton_EatSnack.SetActive(false);
    }
    #endregion
    #region 공통 부분
    /// <summary>
    /// 튜토리얼 게임오버 그룹 오브젝트
    /// </summary>
    public GameObject onGameOver_tut;
    /// <summary>
    /// 게임오버 사유 텍스트
    /// </summary>
    public Text reason_text;
    /// <summary>
    /// 튜토리얼 단계 그룹을 한번 넘기는지 여부 
    /// </summary>
    public bool needLateOn = false;
    /// <summary>
    /// 게임 초기화 중임을 나타내는 그룹 오브젝트
    /// </summary>
    public GameObject ResetImg;
    /// <summary>
    /// 로딩 중임을 나타내는 애니메이션 효과
    /// </summary>
    public Animation rotateLoadingCircle_ani;

    /// <summary>
    /// 튜토리얼 진행을 공통적으로 관리해주는 함수
    /// </summary>
    public void ProcessTutorial_InGame()
    {
        // 첫 단계일 때의 처리
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
        // 그 이후부터 마지막 전 단계에서의 처리
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
        // 마지막 단계에서의 처리
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
    /// <summary>
    /// 게임오버 후 튜토리얼 재개 처리
    /// </summary>
    public void GameOverContinue()
    {
        Time.timeScale = 1.0f;
        inGameMgr.isPause = false;
        onGameOver_tut.SetActive(false);
        teacherMgr.TestMode = true;
        StartCoroutine(WaitAfterContinue());
    }
    /// <summary>
    /// 선생님이 다시 뒤돌기 전까지 무적 처리 유지 후 해제하는 코루틴
    /// </summary>
    IEnumerator WaitAfterContinue()
    {
        while (!teacherMgr.Teacher_img.color.Equals(teacherMgr.Green))
        {
            yield return new WaitForEndOfFrame();
        }
        teacherMgr.TestMode = false;
    }
    /// <summary>
    /// 튜토리얼 스킵 처리
    /// </summary>
    public void SkipTutorial_Ingame()
    {
        Game_tutorial[explainStep - 1].SetActive(false);
        didTutorialComplete[SceneNumber] = true;
        dataManager.SaveData();

        ResetImg.SetActive(true);
        rotateLoadingCircle_ani.Play();
        StartCoroutine(WaitResetTime());
    }
    /// <summary>
    /// 일정 시간 후 시간 흐름 속도 복원 후 씬을 리로드하는 코루틴
    /// </summary>
    IEnumerator WaitResetTime()
    {
        yield return new WaitForSecondsRealtime(1.5f);

        if (Time.timeScale.Equals(0))
            Time.timeScale = 1.0f;

        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }
    #endregion
}