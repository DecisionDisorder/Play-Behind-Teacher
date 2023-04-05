using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Option : MonoBehaviour {

    public Color ActivedColor;
    public Color UnActivedColor;

    public GameObject TvOptionMenu;
    public GameObject KatalkOptionMenu;
    public GameObject Developer_Menu;

    public Image TvButton_img;
    public Image KatalkButton_img;

    public FPSDisplay fpsDisplay;
    public bool showFPS;
    public Text FPS_text;

    public TeacherMgr teacherMgr;
    public InGameMgr inGameMgr;
    public MainSceneMgr mainSceneMgr;
    public DataManager dataManager;

    public AudioSource[] EffectSounds_AS;//5: OnButton / 6: OffButton

    public Image[] FrameLimits_img;
    public Sprite[] State_sprite;
    public Text[] FrameLimits_text;
    public Color[] State_color;
    public int frameKind;

    public bool smoothGage;
    public Text Gage_text;

    public float gameSoundVolume;
    public Slider gameSoundVolume_slider;
    public float BackgroundVolume;
    public Slider BackgroundVolume_slider;

    public bool googleLogin;
    public Text googleLogin_text;
    public GPGSMng gpgsMng;

    public bool autoCloud;
    public Text autoCloud_text;
    public GameObject WillAutoSave_Menu;
    public BackUpDataMgr backUpDataMgr;
    public static bool TimeToAutoCloud = false;

    //=============================================================
    public TVButtonMgr tvButtonMgr;

    public GameObject RC_HUD;
    public bool IsHudOn = true;
    public Text HUD_text;

    //==============================================================
    public PhoneConMgr phoneConMgr;

    public bool IsVibrateOn = true;
    public Text Vibrate_text;

    void Start () {
        SetFrameLimit(frameKind);

        if (SceneManager.GetActiveScene().name.Equals("TVGame_Scene"))
        {
            OptionSetting_TV();
        }
        else if (SceneManager.GetActiveScene().name.Equals("KatalkScene"))
        {
            OptionSetting_Katalk();
        }
        else if (SceneManager.GetActiveScene().name.Equals("MainScene"))
        {
            if (autoCloud)
            {
                if (TimeToAutoCloud && Social.localUser.authenticated)
                {
                    WillAutoSave_Menu.SetActive(true);
                    TimeToAutoCloud = false;
                }
            }
            OptionSetting_Main();
            OptionSetting_Katalk();
            OptionSetting_TV();
        }
        else if (SceneManager.GetActiveScene().buildIndex.Equals(3))
        {
            OptionSetting_Sound();
        }
	}
    public void ReloadStart()
    {
        Start();
    }

    public void SaveOption()
    {
        dataManager.Save_Option();
    }
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
    public void SettingEffectSound()
    {
        gameSoundVolume = gameSoundVolume_slider.value;

        for (int i = 0; i < EffectSounds_AS.Length; i++)
        {
            EffectSounds_AS[i].volume = gameSoundVolume_slider.value * 0.8f;
        }
    }
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
    void OptionSetting_Sound()
    {
        if(gameSoundVolume_slider != null)
            gameSoundVolume_slider.value = gameSoundVolume;
        if (BackgroundVolume_slider != null)
            BackgroundVolume_slider.value = BackgroundVolume;

        if (SceneManager.GetActiveScene().buildIndex.Equals(1))
        {
            tvButtonMgr.BGM_as.volume = BackgroundVolume_slider.value * 0.5f;
        }
        else if (SceneManager.GetActiveScene().buildIndex.Equals(2))
        {
            phoneConMgr.BGM_as.volume = BackgroundVolume_slider.value * 0.5f;
        }

        for (int i = 0; i < EffectSounds_AS.Length; i++)
        {
            EffectSounds_AS[i].volume = gameSoundVolume_slider.value * 0.8f;
        }
    }
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
    public void OptionButtons_Main(int nKey)
    {
        switch(nKey)
        {
            case 0:
                if(googleLogin)
                {
                    googleLogin_text.text = "OFF";
                    googleLogin = false;
                }
                else
                {
                    googleLogin_text.text = "ON";
                    googleLogin = true;

                    gpgsMng.InitializeGPGS();
                    gpgsMng.LoginGPGS();
                }
                break;
            case 1:
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
    public void OptionSetting_TV()
    {
        OptionSetting_Sound();
        if (!smoothGage)
            Gage_text.text = "OFF";
        else
            Gage_text.text = "ON";

        fpsDisplay.enabled = showFPS;
        if (!showFPS)
            FPS_text.text = "OFF";
        else
            FPS_text.text = "ON";

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
    public void OptionSetting_Katalk()
    {
        OptionSetting_Sound();
        if (!smoothGage)
            Gage_text.text = "OFF";
        else
            Gage_text.text = "ON";

        fpsDisplay.enabled = showFPS;
        if (!showFPS)
            FPS_text.text = "OFF";
        else
            FPS_text.text = "ON";

        if (IsVibrateOn)
        {
            Vibrate_text.text = "ON";
        }
        else
        {
            Vibrate_text.text = "OFF";
        }
    }
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

    public void SetFrameLimit(int frameK)
    {
        frameKind = frameK;

        for (int i = 0; i < 3; i++)
        {
            FrameLimits_img[i].sprite = State_sprite[1];
            FrameLimits_text[i].color = State_color[1];
        }

        FrameLimits_img[frameK].sprite = State_sprite[0];
        FrameLimits_text[frameK].color = State_color[0];

        if (frameK.Equals(0))
        {
            Application.targetFrameRate = 30;
        }
        else if(frameK.Equals(1))
        {
            Application.targetFrameRate = 45;
        }
        else// frame: 2
        {
            Application.targetFrameRate = 60;
        }
    }

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
