using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

/// <summary>
/// 게임 플레이에 공통적으로 필요한 시스템을 관리하는 클래스
/// </summary>
public class InGameMgr : MonoBehaviour {

    /// <summary>
    /// 현재 게임이 진행 중인지 여부
    /// </summary>
    public bool IsPlayingGame = true;
    /// <summary>
    /// 게임 종류
    /// </summary>
    public static int GameMode;
    /// <summary>
    /// 일시정지 여부
    /// </summary>
    public bool isPause = false;
    /// <summary>
    /// 일시정지 메뉴
    /// </summary>
    public GameObject Pause_Menu;
    /// <summary>
    /// 튜토리얼 진행 확인 메뉴
    /// </summary>
    public GameObject TutorialWarningMessage_Menu;

    /// <summary>
    /// 게임 시작 전 스크린 오브젝트
    /// </summary>
    public GameObject BfStartGame;

    /// <summary>
    /// 게임 종류 별 누적 플레이 시간
    /// </summary>
    public ulong[] PlayTime = new ulong[2] { 0, 0 };
    /// <summary>
    /// 게임 종류별 누적 플레이 횟수
    /// </summary>
    public int[] numOfPlay = new int[2] { 0, 0 };
    /// <summary>
    /// 게임을 플레이하여 게임 오버된 횟수
    /// </summary>
    public int numOfFinish;
    /// <summary>
    /// 구글 플레이 리뷰 참여 수락 여부
    /// </summary>
    public bool didReviewed = false;
    /// <summary>
    /// 구글 플레이 리뷰 권유 메뉴
    /// </summary>
    public GameObject Review_Menu;

    /// <summary>
    /// 현재 게임의 플레이 시간
    /// </summary>
    public int playTimeEach;

    /// <summary>
    /// 난이도 단계
    /// </summary>
    public int stage;
    /// <summary>
    /// 게임의 난이도 데이터
    /// </summary>
    public DifficultyData difficultyData;

    public DataManager dataManager;
    public TutorialMgr tutorialMgr;

    private void Update()
    {
        // 뒤로가기/Esc 키를 눌렀을 때 게임 일시정지 혹은 재개
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            if (!isPause)
            {
                PauseGame();
            }
            else
            {
                ResumeGame();
            }
        }
    }

    /// <summary>
    /// 게임 관련 타이머 시작
    /// </summary>
    public void StartTimer()
    {
        StartCoroutine(GamePlayTimer());
        StartCoroutine(GameStageTimer());
    }

    /// <summary>
    /// 게임 난이도 단계를 계산하는 타이머 코루틴
    /// </summary>
    IEnumerator GameStageTimer()
    {
        float time = Random.Range(difficultyData.StageTimeMin[stage], difficultyData.StageTimeMax[stage]);
        
        yield return new WaitForSeconds(time);

        stage++;
        
        if(stage < difficultyData.StageTimeMin.Length - 1)
            StartCoroutine(GameStageTimer());
    }

    /// <summary>
    /// 게임 플레이 시간을 계산하는 타이머 코루틴
    /// </summary>
    IEnumerator GamePlayTimer()
    {
        yield return new WaitForSeconds(1f);

        playTimeEach++;

        StartCoroutine(GamePlayTimer());
    }


    /// <summary>
    /// 일시정지 메뉴의 버튼 클릭 리스너 함수
    /// </summary>
    public void Button_PauseMenu(int nKey)
    {
        switch(nKey)
        {
            case 0://Back to Menu
                ResumeGame();
                SceneManager.LoadScene("MainScene");
                break;
            case 1://Resume
                ResumeGame();
                break;
            case 2://Tutorial
                TutorialWarningMessage_Menu.SetActive(true);
                break;
        }
    }
    /// <summary>
    /// 게임 재개
    /// </summary>
    void ResumeGame()
    {
        Time.timeScale = 1.0f;
        isPause = false;
        dataManager.SaveData();
        Pause_Menu.SetActive(isPause);
    }
    /// <summary>
    /// 게임 일시정지
    /// </summary>
    void PauseGame()
    {
        isPause = true;
        Time.timeScale = 0.0f;
        Pause_Menu.SetActive(isPause);
    }
    /// <summary>
    /// 튜토리얼 선택
    /// </summary>
    /// <param name="nKey"></param>
    public void SelectTutorial(int nKey)
    {
        switch(nKey)
        {
            case 0://YES
                // 튜토리얼 진행을 수락한 경우, 게임을 초기화하며,
                // 튜토리얼을 플레이하지 않은 것으로 처리한 후에 씬 리로드
                ResumeGame();
                tutorialMgr.didTutorialComplete[SceneManager.GetActiveScene().buildIndex] = false;
                dataManager.SaveData();
                SceneManager.LoadScene(SceneManager.GetActiveScene().name);
                break;
            case 1://No
                TutorialWarningMessage_Menu.SetActive(false);
                break;
        }
    }
    /// <summary>
    /// (Unused) 게임 씬 변경
    /// </summary>
    public void SceneChange()
    {
        if(GameMode.Equals(0))
        {
            GameMode = 1;
            SceneManager.LoadScene("KatalkScene");
        }
        else
        {
            GameMode = 0;
            SceneManager.LoadScene("TVGame_Scene");
        }
    }
    /// <summary>
    /// 특정 메뉴 닫기
    /// </summary>
    /// <param name="menuAni">메뉴 비활성화 애니메이션</param>
    /// <param name="menu">닫을 메뉴</param>
    public void CloseMenu(Animation menuAni, GameObject menu)
    {
        menuAni.CrossFade("CloseMenu");

        StartCoroutine(WaitClosemenu(menuAni, menu));
    }
    /// <summary>
    /// 애니메이션이 끝나면 메뉴를 비활성화하는 코루틴
    /// </summary>
    /// <param name="menuAni">재생중인 애니메이션</param>
    /// <param name="menu">닫을 메뉴</param>
    IEnumerator WaitClosemenu(Animation menuAni, GameObject menu)
    {
        while (menuAni.isPlaying)
        {
            yield return new WaitForEndOfFrame();
        }
        
        menu.SetActive(false);
    }

    /// <summary>
    /// 게임 8번 할 때마다 리뷰 요청에 응답하지 않았으면 요청
    /// </summary>
    public void CheckReview()
    {
        if ((numOfFinish % 8).Equals(0))
        {
            if (!didReviewed)
            {
                Review_Menu.SetActive(true);
            }
        }
    }

    /// <summary>
    /// 리뷰 요청 메뉴 버튼 클릭 리스너 함수
    /// </summary>
    public void ReviewRequest(int key)
    {
        switch(key)
        {
            case 0://Open Review
                didReviewed = true;
                Application.OpenURL("https://play.google.com/store/apps/details?id=com.decisiondisorder.behindteacher");
                Review_Menu.SetActive(false);
                break;
            case 1:
                Review_Menu.SetActive(false);
                break;
        }
    }
}
