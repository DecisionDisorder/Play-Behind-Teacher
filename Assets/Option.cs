using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

/// <summary>
/// 설정 관리 클래스
/// </summary>
public class Option : MonoBehaviour {

    /// <summary>
    /// 활성화 색상
    /// </summary>
    public Color ActivedColor;
    /// <summary>
    /// 비활성화 색상
    /// </summary>
    public Color UnActivedColor;

    /// <summary>
    /// TV 게임 설정 메뉴
    /// </summary>
    public GameObject TvOptionMenu;
    /// <summary>
    /// 카톡 게임 설정 메뉴
    /// </summary>
    public GameObject KatalkOptionMenu;
    /// <summary>
    /// 개발자용 테스트 메뉴
    /// </summary>
    public GameObject Developer_Menu;

    /// <summary>
    /// TV 게임 설정 메뉴 선택 버튼 이미지
    /// </summary>
    public Image TvButton_img;
    /// <summary>
    /// 카톡 게임 설정 메뉴 선택 버튼 이미지
    /// </summary>
    public Image KatalkButton_img;

    /// <summary>
    /// FPS 표시 인스턴시
    /// </summary>
    public FPSDisplay fpsDisplay;
    /// <summary>
    /// FPS 표시 여부
    /// </summary>
    public bool showFPS;
    /// <summary>
    /// FPS 표시 설정 값을 보여주는 텍스트
    /// </summary>
    public Text FPS_text;

    public TeacherMgr teacherMgr;
    public InGameMgr inGameMgr;
    public MainSceneMgr mainSceneMgr;
    public DataManager dataManager;

    /// <summary>
    /// 전체 효과음들을 담은 배열
    /// </summary>
    public AudioSource[] EffectSounds_AS;//5: OnButton / 6: OffButton

    /// <summary>
    /// 프레임 제한 선택 버튼 이미지
    /// </summary>
    public Image[] FrameLimits_img;
    /// <summary>
    /// 선택에 따른 상태 이미지 스프라이트 배열
    /// </summary>
    public Sprite[] State_sprite;
    /// <summary>
    /// 프레임 제한 설정값 텍스트
    /// </summary>
    public Text[] FrameLimits_text;
    /// <summary>
    /// 선택 여부 상태별 색상
    /// </summary>
    public Color[] State_color;
    /// <summary>
    /// 선택된 프레임 종류
    /// </summary>
    public int frameKind;

    /// <summary>
    /// 부드러운 게이지 여부
    /// </summary>
    public bool smoothGage;
    /// <summary>
    /// 부드러운 게이지 설정 값을 보여주는 텍스트
    /// </summary>
    public Text Gage_text;

    /// <summary>
    /// 게임 효과음 볼륨
    /// </summary>
    public float gameSoundVolume;
    /// <summary>
    /// 게임 효과음 볼륨 조절 슬라이더
    /// </summary>
    public Slider gameSoundVolume_slider;
    /// <summary>
    /// 게임 배경음악 볼륨
    /// </summary>
    public float BackgroundVolume;
    /// <summary>
    /// 게임 배경음악 볼륨 조절 슬라이더
    /// </summary>
    public Slider BackgroundVolume_slider;

    /// <summary>
    /// 구글 로그인 여부
    /// </summary>
    public bool googleLogin;
    /// <summary>
    /// 구글 로그인 설정 값 텍스트
    /// </summary>
    public Text googleLogin_text;
    /// <summary>
    /// Google Play Game Service 관리 인스턴스
    /// </summary>
    public GPGSMng gpgsMng;

    /// <summary>
    /// 클라우드 저장 권유 여부
    /// </summary>
    public bool autoCloud;
    /// <summary>
    /// 클라우드 저장 설정 값 텍스트
    /// </summary>
    public Text autoCloud_text;
    /// <summary>
    /// 클라우드 저장 권유 메뉴
    /// </summary>
    public GameObject WillAutoSave_Menu;
    /// <summary>
    /// 데이터 백업 관리 인스턴스
    /// </summary>
    public BackUpDataMgr backUpDataMgr;
    /// <summary>
    /// 클라우드 저장 권유할 시간인지 여부
    /// </summary>
    public static bool TimeToAutoCloud = false;

    #region TV 게임 설정 관련 값
    /// <summary>
    /// TV 게임 버튼 관리 인스턴스
    /// </summary>
    public TVButtonMgr tvButtonMgr;

    /// <summary>
    /// 리모컨 터치 인식 범위 인디케이터 오브젝트
    /// </summary>
    public GameObject RC_HUD;
    /// <summary>
    /// 리모컨 터치 범위 표시 여부
    /// </summary>
    public bool IsHudOn = true;
    /// <summary>
    /// 리모컨 터치 범위 설정 텍스트
    /// </summary>
    public Text HUD_text;
    #endregion

    #region 카톡 게임 설정 관련 값
    /// <summary>
    /// 스마트폰 제어 인스턴스
    /// </summary>
    public PhoneConMgr phoneConMgr;

    /// <summary>
    /// 실제 진동 여부
    /// </summary>
    public bool IsVibrateOn = true;
    /// <summary>
    /// 진동 설정 값 텍스트
    /// </summary>
    public Text Vibrate_text;
    #endregion

    void Start () {
        // 최대 프레임 설정 적용
        SetFrameLimit(frameKind);

        // TV 게임 설정 값 적용
        if (SceneManager.GetActiveScene().name.Equals("TVGame_Scene"))
        {
            OptionSetting_TV();
        }
        // 카톡 게임 설정 값 적용
        else if (SceneManager.GetActiveScene().name.Equals("KatalkScene"))
        {
            OptionSetting_Katalk();
        }
        // 메인씬에서의 설정 값 적용
        else if (SceneManager.GetActiveScene().name.Equals("MainScene"))
        {
            // 클라우드 저장 권유 on일 때
            if (autoCloud)
            {
                // 클라우드 저장할 타이밍이고, 로그인 되었을때 권유
                if (TimeToAutoCloud && Social.localUser.authenticated)
                {
                    WillAutoSave_Menu.SetActive(true);
                    TimeToAutoCloud = false;
                }
            }
            // 모든 설정 값 적용
            OptionSetting_Main();
            OptionSetting_Katalk();
            OptionSetting_TV();
        }
        // 간식 게임 설정 값 적용
        else if (SceneManager.GetActiveScene().buildIndex.Equals(3))
        {
            OptionSetting_Sound();
        }
	}
    /// <summary>
    /// 씬 리로드시에 필요한 함수 호출
    /// </summary>
    public void ReloadStart()
    {
        Start();
    }

    /// <summary>
    /// 설정 값 저장
    /// </summary>
    public void SaveOption()
    {
        dataManager.Save_Option();
    }
    /// <summary>
    /// TV/카톡 설정 전환
    /// </summary>
	public void MainOption(int nKey)
    {
        switch(nKey)
        {
            case 0://Tv
                TvButton_img.color = ActivedColor;
                KatalkButton_img.color = UnActivedColor;
                TvOptionMenu.transform.SetAsLastSibling();
                break;
            case 1://Katalk
                TvButton_img.color = UnActivedColor;
                KatalkButton_img.color = ActivedColor;
                KatalkOptionMenu.transform.SetAsLastSibling();
                break;
        }
    }
    /// <summary>
    /// 공통 설정값 버튼 클릭 리스너
    /// </summary>
    /// <param name="option">설정 코드</param>
    public void SettingCommonOption(int option)
    {
        switch (option)
        {
            case 0://SmoothGage
                if(smoothGage)
                {
                    smoothGage = false;
                    Gage_text.text = "OFF";
                }
                else
                {
                    smoothGage = true;
                    Gage_text.text = "ON";
                }
                break;
            case 1://FpsDisplay
                if(showFPS)
                {
                    showFPS = false;
                    fpsDisplay.enabled = false;
                    FPS_text.text = "OFF";
                }
                else
                {
                    showFPS = true;
                    fpsDisplay.enabled = true;
                    FPS_text.text = "ON";
                }
                break;
        }
    }
    /// <summary>
    /// 효과음 볼륨 설정
    /// </summary>
    public void SettingEffectSound()
    {
        gameSoundVolume = gameSoundVolume_slider.value;

        EffectSounds_AS[0].volume = gameSoundVolume_slider.value * 0.6f;
        for (int i = 1; i < EffectSounds_AS.Length; i++)
        {
            EffectSounds_AS[i].volume = gameSoundVolume_slider.value * 0.8f;
        }
    }
    /// <summary>
    /// 배경음악 볼륨 설정
    /// </summary>
    public void SettingBackgroundSound()
    {
        BackgroundVolume = BackgroundVolume_slider.value;
        if (SceneManager.GetActiveScene().buildIndex != 0)
        {
            if (SceneManager.GetActiveScene().buildIndex.Equals(1))
                tvButtonMgr.BGM_as.volume = BackgroundVolume_slider.value * 0.5f;
            else if (SceneManager.GetActiveScene().buildIndex.Equals(2))
                phoneConMgr.BGM_as.volume = BackgroundVolume_slider.value * 0.5f;
        }
    }
    /// <summary>
    /// 효과음 및 배경음악 설정 값 세팅
    /// </summary>
    void OptionSetting_Sound()
    {
        // 설정 슬라이더 값 초기화
        if(gameSoundVolume_slider != null)
            gameSoundVolume_slider.value = gameSoundVolume;
        if (BackgroundVolume_slider != null)
            BackgroundVolume_slider.value = BackgroundVolume;

        // TV 게임과 카톡 게임에서의 볼륨 설정
        if (SceneManager.GetActiveScene().buildIndex.Equals(1))
        {
            tvButtonMgr.BGM_as.volume = BackgroundVolume_slider.value * 0.5f;
        }
        else if (SceneManager.GetActiveScene().buildIndex.Equals(2))
        {
            phoneConMgr.BGM_as.volume = BackgroundVolume_slider.value * 0.5f;
        }

        // 모든 효과음 볼륨 설정
        EffectSounds_AS[0].volume = gameSoundVolume_slider.value * 0.6f;
        for (int i = 1; i < EffectSounds_AS.Length; i++)
        {
            EffectSounds_AS[i].volume = gameSoundVolume_slider.value * 0.8f;
        }
    }
    /// <summary>
    /// 로그인 및 클라우드에 대한 설정 UI 업데이트
    /// </summary>
    public void OptionSetting_Main()
    {
        if(!googleLogin)
            googleLogin_text.text = "OFF";
        else
            googleLogin_text.text = "ON";

        if (!autoCloud)
            autoCloud_text.text = "OFF";
        else
            autoCloud_text.text = "ON";
    }
    /// <summary>
    /// 메인 설정 버튼 버튼 클릭 리스너
    /// </summary>
    public void OptionButtons_Main(int nKey)
    {
        switch(nKey)
        {
            case 0: // 구글 로그인 설정
                if(googleLogin)
                {
                    googleLogin_text.text = "OFF";
                    googleLogin = false;
                }
                else
                {
                    googleLogin_text.text = "ON";
                    googleLogin = true;

                    // ON 설정일 때 로그인 시도
                    gpgsMng.InitializeGPGS();
                    gpgsMng.LoginGPGS();
                }
                break;
            case 1: // 클라우드 권유 설정
                if(autoCloud)
                {
                    autoCloud_text.text = "OFF";
                    autoCloud = false;
                }
                else
                {
                    autoCloud_text.text = "ON";
                    autoCloud = true;
                }
                break;
        }
    }
    /// <summary>
    /// 클라우드 권유 메뉴 버튼 클릭 리스너
    /// </summary>
    public void SaveOnCloud(int command)
    {
        switch(command)
        {
            case 0://save
                WillAutoSave_Menu.SetActive(false);
                mainSceneMgr.OptionMenu.SetActive(true);
                backUpDataMgr.Recovery_Menu.SetActive(true);
                BackkeyMgr.numOfOpenedMenus = 2;
                backUpDataMgr.MenusOnOff(1);
                break;
            case 1://close
                WillAutoSave_Menu.SetActive(false);
                break;
        }
    }
    /// <summary>
    /// TV 게임 관련 설정 적용
    /// </summary>
    public void OptionSetting_TV()
    {
        // 시간 설정 적용 
        OptionSetting_Sound();
        // 게이지 설정 UI 적용
        if (!smoothGage)
            Gage_text.text = "OFF";
        else
            Gage_text.text = "ON";

        // 프레임 표시 설정 적용
        fpsDisplay.enabled = showFPS;
        if (!showFPS)
            FPS_text.text = "OFF";
        else
            FPS_text.text = "ON";

        // 리모컨 터치 범위 표시 설정 적용
        if (IsHudOn)
        {
            HUD_text.text = "ON";
            if (SceneManager.GetActiveScene().buildIndex.Equals(1))
                RC_HUD.SetActive(true);
        }
        else
        {
            HUD_text.text = "OFF";
            if (SceneManager.GetActiveScene().buildIndex.Equals(1))
                RC_HUD.SetActive(false);
        }
    }
    /// <summary>
    /// TV 게임 관련 설정 버튼 클릭 리스너
    /// </summary>
    public void OptionButtons_TV(int nKey)
    {
        switch (nKey)
        {
            case 0://HUD
                if (IsHudOn)
                {
                    IsHudOn = false;
                    HUD_text.text = "OFF";
                }
                else
                {
                    IsHudOn = true;
                    HUD_text.text = "ON";
                }
                if(SceneManager.GetActiveScene().buildIndex.Equals(1))
                    RC_HUD.SetActive(IsHudOn);
                break;
        }
    }
    /// <summary>
    /// 버튼 클릭 효과음 재생
    /// </summary>
    public void PrintButtonSound(int OnOff)
    {
        switch(OnOff)
        {
            case 0://ON
                if (SceneManager.GetActiveScene().buildIndex.Equals(0))
                    EffectSounds_AS[0].Play();
                else
                    EffectSounds_AS[5].Play();
                break;
            case 1://OFF
                if (SceneManager.GetActiveScene().buildIndex.Equals(0))
                    EffectSounds_AS[1].Play();
                else
                    EffectSounds_AS[6].Play();
                break;
        }
    }
    /// <summary>
    /// 카톡 게임 설정 값 적용
    /// </summary>
    public void OptionSetting_Katalk()
    {
        // 볼륨 설정 적용
        OptionSetting_Sound();
        // 게이지 설정 UI 적용
        if (!smoothGage)
            Gage_text.text = "OFF";
        else
            Gage_text.text = "ON";

        // FPS 표시 설정 적용
        fpsDisplay.enabled = showFPS;
        if (!showFPS)
            FPS_text.text = "OFF";
        else
            FPS_text.text = "ON";

        // 진동 설정 적용
        if (IsVibrateOn)
            Vibrate_text.text = "ON";
        else
            Vibrate_text.text = "OFF";
    }
    /// <summary>
    /// 카톡 게임 관련 설정 버튼 클릭 리스너
    /// </summary>
    public void OptionButtons_Katalk(int nKey)
    {
        switch(nKey)
        {
            case 0:
                if (IsVibrateOn)
                {
                    Vibrate_text.text = "OFF";
                    IsVibrateOn = false;
                }
                else
                {
                    Vibrate_text.text = "ON";
                    IsVibrateOn = true;
                }
                break;
        }
    }

    /// <summary>
    /// 프레임 제한 설정
    /// </summary>
    /// <param name="frameK">프레임 설정 값 종류</param>
    public void SetFrameLimit(int frameK)
    {
        // 프레임 설정 값 종류
        frameKind = frameK;

        // 선택한 프레임에 따른 UI 업데이트
        for (int i = 0; i < 3; i++)
        {
            FrameLimits_img[i].sprite = State_sprite[1];
            FrameLimits_text[i].color = State_color[1];
        }
        FrameLimits_img[frameK].sprite = State_sprite[0];
        FrameLimits_text[frameK].color = State_color[0];

        // 30 프레임 적용
        if (frameK.Equals(0))
        {
            Application.targetFrameRate = 30;
        }
        // 60 프레임 적용
        else if(frameK.Equals(1))
        {
            Application.targetFrameRate = 60;
        }
        // 120 프레임 적용
        else
        {
            Application.targetFrameRate = 120;
        }
    }

    /// <summary>
    /// 개발자용 테스트 메뉴 활성화 
    /// </summary>
    public void SetDeveloperMenu(int num)
    {
        switch (num)
        {
            case 0:
                Developer_Menu.SetActive(true);
                break;
            case 1:
                Developer_Menu.SetActive(false);
                break;
        }

    }
}
