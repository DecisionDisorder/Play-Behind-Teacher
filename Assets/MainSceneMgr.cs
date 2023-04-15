using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

/// <summary>
/// 시작 화면 관련 시스템 관리 클래스
/// </summary>
public class MainSceneMgr : MonoBehaviour {
    
    /// <summary>
    /// 미니 게임 입장 버튼 오브젝트 배열
    /// </summary>
    public GameObject[] GameButtons;

    /// <summary>
    /// 메뉴 회전 애니메이션
    /// </summary>
    public Animation RotatingMenu_ani;
    /// <summary>
    /// 플레이 버튼 애니메이션
    /// </summary>
    public Animation Playbutton_ani;
    /// <summary>
    /// 게임 간판 메뉴 배열 (왼쪽, 가운데, 오른쪽, 뒤쪽)
    /// </summary>
    public GameObject[] GameMenus;
    /// <summary>
    /// 게임 이름 텍스트 배열
    /// </summary>
    public Text[] GameName_Texts;
    /// <summary>
    /// 각 간판의 게임 이미지 텍스트 배열
    /// </summary>
    public Image[] GameImage_img;
    /// <summary>
    /// 각 메뉴가 가리키고 있는 게임의 번호
    /// </summary>
    public int[] GameNum;
    
    /// <summary>
    /// 게임 버튼들이 회전중인지 여부
    /// </summary>
    bool ChangeEnalbled = true;

    public DataManager dataManager;
    public BackUpDataMgr backUpDataMgr;

    /// <summary>
    /// 각 미니게임의 최고점수
    /// </summary>
    ulong[] BestScores = new ulong[3];
    /// <summary>
    /// 선택된 게임의 최고점수 표시 텍스트
    /// </summary>
    public Text BestScore_text;
    /// <summary>
    /// 점수 색상
    /// </summary>
    public Color[] ScoreColors;

    /// <summary>
    /// 평균 플레이 타임 텍스트
    /// </summary>
    public Text AveragePlayTime_Text;

    /// <summary>
    /// 상점 메뉴 
    /// </summary>
    public GameObject StoreMenu;
    /// <summary>
    /// 설정 메뉴 
    /// </summary>
    public GameObject OptionMenu;
    /// <summary>
    /// 선택한 아이템의 슬롯 선택 메뉴
    /// </summary>
    public GameObject store_subMenu;
    /// <summary>
    /// 광고 메뉴
    /// </summary>
    public GameObject Ad_Menu;
    /// <summary>
    /// 상점 메뉴 활성화 애니메이션
    /// </summary>
    public Animation Store_MenuAni;
    /// <summary>
    /// 설정 메뉴 활성화 애니메이션
    /// </summary>
    public Animation Option_MenuAni;
    /// <summary>
    /// 광고 메뉴 활성화 애니메이션
    /// </summary>
    public Animation Ad_MenuAni;

    public InGameMgr inGameMgr;
    /// <summary>
    /// 미니게임별 썸네일 이미지 스프라이트 배열
    /// </summary>
    public Sprite[] GameThumbnail_sprite;

    public ItemMgr itemMgr;

    /// <summary>
    /// 각 미니게임의 이름에 대한 배열
    /// </summary>
    public string[] GameNames;
    
    public CoinMgr coinMgr;
    public Option option;
    public TutorialMgr tutorialMgr;
    public AdManager adManager;
    public AdMobMgr adMobMgr;
    public TvGameMgr tvGameMgr;
    public KatalkGameMgr katalkGameMgr;
    public SnackGameMgr snackGameMgr;

    /// <summary>
    /// 메시지 오브젝트
    /// </summary>
    public GameObject Message;
    /// <summary>
    /// 메시지 텍스트
    /// </summary>
    public Text Message_text;
    /// <summary>
    /// 메시지 종료 대기 코루틴
    /// </summary>
    IEnumerator messageWait;

    /// <summary>
    /// 게임 전환 효과음 오디오 소스
    /// </summary>
    public AudioSource GameChangeSound_AS;

    /// <summary>
    /// 하단 UI의 활성화 애니메이션
    /// </summary>
    public Animation MiddleUI_Ani;
    /// <summary>
    /// 하단 UI 활성화 버튼의 상태별 이미지 오브젝트
    /// </summary>
    public GameObject[] MiddleUI_UpDown_imgs;
    /// <summary>
    /// 하단 UI가 올라와있는지 여부
    /// </summary>
    public bool isMiddleUIOn = true;
    /// <summary>
    /// 하단 UI (BottomUI는 광고 베너 전용으로 다름)
    /// </summary>
    public GameObject MiddleUI;

    /// <summary>
    /// 터치 위치 기록을 위한 2차원 벡터
    /// </summary>
    private Vector2[] touchPos = new Vector2[2];
    /// <summary>
    /// 터치 드래그가 진행중인지 여부
    /// </summary>
    private bool touchContinued = true;
    /// <summary>
    /// 가운데에서 드래그 허용 여부
    /// </summary>
    private bool allowCenterDrag;

    void Start ()
    {
        messageWait = WaitforMessage(1.2f);
        // 회전 메뉴 전환 속도 세팅
        RotatingMenu_ani["RotatingMenu(Right)_ani"].speed = 1.5f;
        RotatingMenu_ani["RotatingMenu_ani"].speed = 1.5f;
        
        // 게임 기록 정보 업데이트
        WriteGameInfo();

        // 아이템 정보 업데이트
        itemMgr.SetSGNumOfItem();
        itemMgr.SetSNNumOfItem();
        itemMgr.SetSGPrice();
        itemMgr.SetSNPrice();
        // 미니게임 선택 UI 업데이트
        SettingGameNum();
        SettingGameMode(true);
        SettingMiddleUI();
    }
    
    /// <summary>
    /// 씬 리로드시에 필요한 리로드 함수들 호출
    /// </summary>
    public void ReloadGame()
    {
        coinMgr.ReloadStart();
        Start();
        itemMgr.ReloadStart();
        option.ReloadStart();
    }
    /// <summary>
    /// 게임 시작 버튼 클릭 리스너
    /// </summary>
    public void PressKey_Start()
    {
        // 튜토리얼이 아닐 때
        if (!tutorialMgr.isTutorialOn)
        {
            // 게임 메뉴가 가운데에 정지해있는지 확인 후
            if (GameMenus[1].transform.localPosition.x.Equals(0))
            {
                // 하단 베너 광고를 숨기고 게임 시작
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

    /// <summary>
    /// 그 외의 메인 UI의 버튼 클릭 리스너
    /// </summary>
    public void PressKey_other(int nKey)
    {
        switch(nKey)
        {
            case 0: // 설정
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
            case 1: // 상점
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
            case 2: // 광고
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
    /// <summary>
    /// 그 외의 메인 UI의 닫기 버튼 클릭 리스너
    /// </summary>
    public void PressKey_otherBack(int nKey)
    {
        switch(nKey)
        {
            case 0: // 설정
                BackkeyMgr.numOfOpenedMenus--;
                inGameMgr.CloseMenu(Option_MenuAni, OptionMenu);
                break;
            case 1: // 상점
                if (BackkeyMgr.numOfOpenedMenus < 2)
                {
                    BackkeyMgr.numOfOpenedMenus--;
                    inGameMgr.CloseMenu(Store_MenuAni, StoreMenu);
                }
                else if(BackkeyMgr.numOfOpenedMenus.Equals(2))
                {
                    BackkeyMgr.numOfOpenedMenus -= 2;
                    store_subMenu.SetActive(false);
                    StoreMenu.SetActive(false);
                }
                break;
            case 2: // 광고
                BackkeyMgr.numOfOpenedMenus--;
                inGameMgr.CloseMenu(Ad_MenuAni, Ad_Menu);
                break;
        }
    }
    /// <summary>
    /// 메시지 표출
    /// </summary>
    /// <param name="message">메시지 내용</param>
    /// <param name="time">지속 시간</param>
    public void WriteMessage(string message, float time = 1.2f)
    {
        StopCoroutine(messageWait);

        Message.SetActive(true);
        Message_text.text = message;

        messageWait = WaitforMessage(time);
        StartCoroutine(messageWait);
    }
    /// <summary>
    /// 메시지 종료 대기 코루틴
    /// </summary>
    /// <param name="time">지속 시간</param>
    IEnumerator WaitforMessage(float time)
    {
        yield return new WaitForSeconds(time);

        Message.SetActive(false);
    }

    /// <summary>
    /// 터치/클릭 시작 위치 기록
    /// </summary>
    public void onTouchDown()
    {
        touchContinued = true;
        if (RuntimePlatform.Android.Equals(Application.platform))
            touchPos[0] = Input.GetTouch(0).position;
        else
            touchPos[0] = Input.mousePosition;
    }
    /// <summary>
    /// 가운데 게임 간판을 터치/클릭 시작시의 처리
    /// </summary>
    public void onToucnDown_Main()
    {
        if (GameMenus[1].transform.localPosition.x.Equals(0))
        {
            allowCenterDrag = true;
        }
        else
            allowCenterDrag = false;
    }
    /// <summary>
    /// 터치가 종료되는 시점의 위치를 읽어서 터치 위치 변화량 계산
    /// </summary>
    public void onTouchUp()
    {
        if (RuntimePlatform.Android.Equals(Application.platform))
            touchPos[1] = Input.GetTouch(0).position;
        else
            touchPos[1] = Input.mousePosition;
        float deltaPos = touchPos[1].x - touchPos[0].x;
        // x변화량이 양수이면 오른쪽으로 회전
        if (deltaPos > 0)
        {
            TurnRight();
        }
        // x변화량이 음수이면 왼쪽으로 회전
        else if (deltaPos < 0)
        {
            TurnLeft();
        }

    }

    /// <summary>
    /// 썸네일을 클릭하려는 경우
    /// </summary>
    /// <param name="button">touch down&up한 버튼의 번호</param>
    public void onTouchUp_thumbnail(int button)
    {
        // 터치가 진행중이면
        if (touchContinued)
        {
            // 터치 종료 위치를 읽는다
            if (RuntimePlatform.Android.Equals(Application.platform))
                touchPos[1] = Input.GetTouch(0).position;
            else
                touchPos[1] = Input.mousePosition;

            // x위치 변화량 계산
            float deltaPos = touchPos[1].x - touchPos[0].x;
            
            // 일정 범위 이상으로 드래그된 경우, 왼쪽/오른쪽으로 회전
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
            // 일정 범위 이내로 움직인 경우, 클릭으로 판정하여 해당 버튼의 게임으로 교체
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
    /// <summary>
    /// 드래그 종료 처리
    /// </summary>
    public void onTouchExit()
    {
        touchContinued = false;
    }
    /// <summary>
    /// 게임 간판들을 왼쪽으로 회전
    /// </summary>
    void TurnLeft()
    {
        // 게임 변경이 허용된 상태일 때
        if (ChangeEnalbled)
        {
            // 게임 중간에 다른 곳에서 게임을 변경할 수 없도록 설정
            ChangeEnalbled = false;
            
            // 게임 모드 번호 + 1
            InGameMgr.GameMode++;
            // 범위를 벗어나면 0으로 설정
            if (InGameMgr.GameMode >= GameNames.Length)
                InGameMgr.GameMode = 0;
            // 게임 정보 UI 업데이트
            WriteGameInfo();

            // 게임 썸네일 변경
            GameNum[3] = GameNum[0];
            GameImage_img[3].sprite = GameThumbnail_sprite[GameNum[3]];
            GameName_Texts[3].text = GameNames[GameNum[3]];
            GameMenus[2].transform.SetAsLastSibling();

            // 애니메이션 효과 시작
            Playbutton_ani.Play();
            RotatingMenu_ani.Play();
            GameChangeSound_AS.Play();
            StartCoroutine(WaitForAnimation(false));
        }
    }
    /// <summary>
    /// 게임 간판들을 오른쪽으로 회전
    /// </summary>
    void TurnRight()
    {
        // 게임 변경이 허용된 상태일 때
        if (ChangeEnalbled)
        {
            // 게임 중간에 다른 곳에서 게임을 변경할 수 없도록 설정
            ChangeEnalbled = false;

            // 게임 모드 번호 - 1
            InGameMgr.GameMode--;
            // 범위를 벗어나면 끝번으로 설정
            if (InGameMgr.GameMode < 0)
                InGameMgr.GameMode = GameNames.Length - 1;

            // 게임 정보 UI 업데이트
            WriteGameInfo();

            // 게임 썸네일 변경
            GameNum[3] = GameNum[2];
            GameImage_img[3].sprite = GameThumbnail_sprite[GameNum[3]];
            GameName_Texts[3].text = GameNames[GameNum[3]];
            GameMenus[0].transform.SetAsLastSibling();

            // 애니메이션 효과 시작
            Playbutton_ani.Play();
            RotatingMenu_ani.CrossFade("RotatingMenu(Right)_ani");
            GameChangeSound_AS.Play();
            StartCoroutine(WaitForAnimation(true));
        }
    }
    /// <summary>
    /// 게임 변경
    /// </summary>
    /// <param name="dir">방향</param>
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
    /// <summary>
    /// 애니메이션 재생 대기 코루틴
    /// </summary>
    /// <param name="isRight">회전 방향이 오른쪽인지 여부</param>
    IEnumerator WaitForAnimation(bool isRight)
    {
        while (RotatingMenu_ani.IsPlaying("RotatingMenu_ani") || RotatingMenu_ani.IsPlaying("RotatingMenu(Right)_ani"))
        {
            yield return new WaitForEndOfFrame();
        }
        SettingGameMode(isRight);
        ResetGameMenuPos();

    }
    /// <summary>
    /// 선택된 미니 게임 정보 UI 업데이트
    /// </summary>
    void WriteGameInfo()
    {
        // 최고 점수 업데이트
        GetBestScores();
        // 현재 게임의 최고점수 업데이트
        ulong bestscore = BestScores[InGameMgr.GameMode];
        // UI 업데이트
        if (!bestscore.Equals(0))
            BestScore_text.text = "최고 기록: " + SetPointSpot(bestscore);
        else
            BestScore_text.text = "최고 기록: 0";
       
        // 점수 범위 별로 색상 지정
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
    }
    /// <summary>
    /// 각 미니게임의 최고기록 갱신
    /// </summary>
    void GetBestScores()
    {
        BestScores[0] = tvGameMgr.BestScore;
        BestScores[1] = katalkGameMgr.BestScore;
        BestScores[2] = snackGameMgr.BestScore;
    }
    /// <summary>
    /// 게임 모드 설정
    /// </summary>
    /// <param name="isRight">오른쪽으로 회전했는지 여부</param>
    void SettingGameMode(bool isRight)
    {
        // 오른쪽 회전이면
        if (isRight)
        {
            // 그 방향대로 게임 번호 swaping
            int temp = GameNum[2];
            GameNum[2] = GameNum[1];
            GameNum[1] = GameNum[0];
            GameNum[0] = temp;
        }
        // 왼쪽 회전이면
        else
        {
            // 그 방향대로 게임 번호 swaping
            int temp = GameNum[0];
            GameNum[0] = GameNum[1];
            GameNum[1] = GameNum[2];
            GameNum[2] = temp;
        }

        // 게임 이름 텍스트 업데이트
        GameName_Texts[1].text = GameNames[GameNum[1]];
        GameName_Texts[2].text = GameNames[GameNum[2]];
        GameName_Texts[3].text = GameNames[GameNum[3]];
        GameName_Texts[0].text = GameNames[GameNum[0]];

        // 게임 썸네일 이미지 업데이트
        GameImage_img[1].sprite = GameThumbnail_sprite[GameNum[1]];
        GameImage_img[2].sprite = GameThumbnail_sprite[GameNum[2]];
        GameImage_img[3].sprite = GameThumbnail_sprite[GameNum[3]];
        GameImage_img[0].sprite = GameThumbnail_sprite[GameNum[0]];
    }

    /// <summary>
    /// 각 간판 별 게임 번호 설정
    /// </summary>
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

    /// <summary>
    /// 회전한 게임 간판 위치 초기화
    /// </summary>
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

    /// <summary>
    /// 하단 UI 메뉴 ON/OFF
    /// </summary>
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
    /// <summary>
    /// 하단 UI 활성화 효과 대기 코루틴
    /// </summary>
    IEnumerator WaitMUIAni()
    {
        while(MiddleUI_Ani.isPlaying)
        {
            yield return new WaitForSeconds(0.1f);
        }
        SettingMiddleUI();
    }
    /// <summary>
    /// 하단 UI 위치 설정
    /// </summary>
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
    /// <summary>
    /// 점수 데코레이션 (세자리수 콤마)
    /// </summary>
    /// <param name="score">점수</param>
    /// <returns>세자리 마다 콤마(,) 처리된 문자열</returns>
    string SetPointSpot(ulong score)
    {
        string SCORE = string.Format("{0:#,###}", score);
        return SCORE;
    }
}
