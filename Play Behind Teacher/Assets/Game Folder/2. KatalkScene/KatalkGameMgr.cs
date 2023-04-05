using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Text.RegularExpressions;
using UnityEngine.SceneManagement;

public class KatalkGameMgr : MonoBehaviour {

    public SuggestWords suggestWords;
    public PhoneConMgr phoneConMgr;
    public InGameMgr inGameMgr;
    public TeacherMgr teacherMgr;
    public DifficultyData katalkDifficultyData;
    public DataManager dataMgr;
    public SliderColorMgr endurColorMgr;
    public CoinMgr coinMgr;
    public ItemMgr itemMgr;
    public TutorialMgr tutorialMgr;
    public Option option;
    public LeaderboardMgr leaderboardMgr;
    public LevelMgr levelMgr;

    public GageMove Endur_gageMove;

    public Text Score_text;
    public Text BestScore_text;
    public Slider Endurance_slider;
    IEnumerator plusScore;
    public bool FailedLeaderboard = false;

    public Animation BonusScore_ani;
    public Text BonusScore_text;
    public Animation BonusCoin_ani;
    public Text BonusCoin_text;

    public GameObject Send_button;
    public Text talkMessage_text;
    public AudioSource KeyboardClickSound_AS;
    public AudioSource KeyboardEraseSound_AS;

    public ulong Score;
    public ulong BestScore;
    public int numOfMissionClear;

    public int Endurance = 1000;
    public int EnduranceMax = 1000;
    public ulong addingScore = 4;
    IEnumerator decreaseEndur;

    string message = "";

    public GameObject GameOver_Menu;
    public Text FinalScore_text;
    public Text CoinGet_text;

    public Color Black;

    bool IsSP_on = false;
    bool backDown = false;

    public int stringPos = 0;
    public GameObject TouchPosFinder;
    public int[] FontSize_input = new int[5];// 0: ? / 1: ~ / 2: ' ' / 3: ! / 4: 일반 /

    public bool isFirstKatalk = true;
    public GameObject FirstVibrateSetting_Menu;
    public GameObject VibrateOn_obj;
    public GameObject VibrateOff_obj;

    public GameObject BlockPhonebutton;
    
    private void Awake()
    {
        if (SceneManager.GetActiveScene().name.Equals("KatalkScene"))
        {
            InGameMgr.GameMode = 1;

        }
    }
    void Start ()
    {
        levelMgr.SetItemAbility();
        if (isFirstKatalk)
        {
            Time.timeScale = 0.0f;
            FirstVibrateSetting_Menu.SetActive(true);
        }

        inGameMgr.BfStartGame.SetActive(true);
        endurColorMgr.SetColor(100);
        if(!BestScore.Equals(0))
            BestScore_text.text = "최고점수: " + SetPointSpot(BestScore);
        else
            BestScore_text.text = "최고점수: 0";

        Endurance_slider.maxValue = EnduranceMax * 10;
        Endurance_slider.value = EnduranceMax * 10;
        StartCoroutine(StringPosBlinking());
    }

    public void SetVibrate(int key)
    {
        switch(key)
        {
            case 0://ON
                option.IsVibrateOn = true;
                VibrateOn_obj.SetActive(true);
                VibrateOff_obj.SetActive(false);
                option.OptionSetting_Katalk();

                break;
            case 1://OFF
                option.IsVibrateOn = false;
                VibrateOff_obj.SetActive(true);
                VibrateOn_obj.SetActive(false);
                option.OptionSetting_Katalk();
                break;
            case 2://Confirm
                Time.timeScale = 1.0f;
                FirstVibrateSetting_Menu.SetActive(false);
                isFirstKatalk = false;
                break;
        }
    }

	IEnumerator StringPosBlinking()
    {
        yield return new WaitForSeconds(0.8f);

        string format = "<size=30>l</size>";
        string talkMsg = talkMessage_text.text;
        if (IsSP_on)
        {
            talkMessage_text.text = talkMsg.Replace("<size=30>l</size>", "");
            IsSP_on = false;
        }
        else
        {
            talkMessage_text.text = talkMsg.Insert(stringPos,format);
            IsSP_on = true;
        }

        StartCoroutine(StringPosBlinking());

    }
    public void GetKeyboard(int keyNum)
    {
        if (keyNum < 6)
        {
            if (message.Length < 25)
            {
                string word = phoneConMgr.Key_texts[keyNum].text + " ";
                message = message.Insert(stringPos, word);
                stringPos += word.Length;
                KeyboardClickSound_AS.Play();
            }
        }
        else
        {
            switch (keyNum)
            {
                case 6:// ~
                    if (message.Length < 25)
                    {
                        message = message.Insert(stringPos, "~");
                        stringPos += 1;
                        KeyboardClickSound_AS.Play();
                    }
                    break;
                case 7:// Space bar
                    if (message.Length < 25)
                    {
                        message = message.Insert(stringPos, " ");
                        stringPos += 1;
                        KeyboardClickSound_AS.Play();
                    }
                    break;
                case 8:// !
                    if (message.Length < 25)
                    {
                        message = message.Insert(stringPos, "!");
                        stringPos += 1;
                        KeyboardClickSound_AS.Play();
                    }
                    break;
                case 9:// ?
                    if (message.Length < 25)
                    {
                        message = message.Insert(stringPos, "?");
                        stringPos += 1;
                        KeyboardClickSound_AS.Play();
                    }
                    break;
                case 10:// BackSpace
                    if (stringPos >= 1)
                    {
                        message = message.Remove(stringPos-1, 1);
                        stringPos -= 1;
                        KeyboardEraseSound_AS.Play();
                    }
                    break;
                case 11://left
                    if(stringPos >= 1)
                        stringPos--;
                    break;
                case 12://right
                    if(stringPos < message.Length)
                        stringPos++;
                    break;
            }
        }
        talkMessage_text.text = message;
        if(message != "")
        {
            Send_button.SetActive(true);
        }
        else
        {
            Send_button.SetActive(false);
        }
    }
    public void BackKey_Down()
    {
        backDown = true;
        KeyboardEraseSound_AS.Play();
        StartCoroutine(BackSpacing());
    }
    IEnumerator BackSpacing()
    {
        yield return new WaitForSeconds(0.1f);

        if (stringPos >= 1)
        {
            message = message.Remove(stringPos - 1, 1);
            stringPos -= 1;

            talkMessage_text.text = message;
            if (message != "")
            {
                Send_button.SetActive(true);
            }
            else
            {
                Send_button.SetActive(false);
            }
        }

        if (backDown)
            StartCoroutine(BackSpacing());
    }
    public void BackKey_Up()
    {
        backDown = false;
    }
    public void FindStringPos()//채팅입력 폰트 talkbox의 텍스트와 동일하게 폰트 조정하기
    {
        if (!phoneConMgr.isKeyboardOn)
            phoneConMgr.OpenKeyboard();
        if (message != "")
        {
            if (RuntimePlatform.Android.Equals(Application.platform))
            {
                Touch touch = Input.GetTouch(0);
                TouchPosFinder.transform.position = new Vector3(touch.position.x, TouchPosFinder.transform.position.y, 0);
            }
            else
            {
                TouchPosFinder.transform.position = new Vector3(Input.mousePosition.x, TouchPosFinder.transform.position.y, 0);
            }
            float pos = TouchPosFinder.transform.localPosition.x + 333.3f * 0.5f;
            int i = 0;
            if (pos > GetFontSize(message[0].ToString()) * 0.5f)
            {
                while (pos > 0 && i < message.Length)
                {
                    pos -= GetFontSize(message[i].ToString());
                    i++;
                }
            }
            stringPos = i;
        }
    }
    int GetFontSize(string letter)
    {
        if (letter.Equals("?"))
            return FontSize_input[0];
        else if (letter.Equals("~"))
            return FontSize_input[1];
        else if (letter.Equals(" "))
            return FontSize_input[2];
        else if (letter.Equals("!"))
            return FontSize_input[3];
        else
            return FontSize_input[4];
    }
    void MissionReward_Inprocess()
    {
        int p = Random.Range(0,100);
        if(p < suggestWords.percentageOfCoin)
        {
            ulong reward = (ulong)suggestWords.TalkLists[suggestWords.TalkType].Coins[suggestWords.step/2];
            levelMgr.StatArr[3].ApplyAbility(ref reward);
            CoinMgr.Coin += reward;
            CoinMgr.accumulatedCoins += reward;
            coinMgr.setCoinText();
            BonusCoin_text.text = "+" + reward;
            BonusCoin_ani.Play();
        }
        else
        {
            ulong reward = (ulong)suggestWords.TalkLists[suggestWords.TalkType].Points[suggestWords.step/2];
            levelMgr.StatArr[3].ApplyAbility(ref reward);
            Score += reward;
            BonusScore_text.text = "+" + reward;
            BonusScore_ani.Play();
        }
    }
    public void SendTalk()
    {
        if (suggestWords.IsTalkOn)
        {
            if (MessageJudge())
            {
                suggestWords.SetTalkTimeOnSend();
                talkMessage_text.text = message;
                suggestWords.Talk_Texts[suggestWords.step].color = Black;
                if(!tutorialMgr.isTutorialOn)
                    MissionReward_Inprocess();
                if (Endurance < 1000)
                    Endurance += 100;
                suggestWords.step++;
                suggestWords.ProcessingTalk();
                if (!suggestWords.IskeyboardNeed)
                    phoneConMgr.CloseKeyboard();

            }
            else
            {
                suggestWords.IsTalkOn = false;
                suggestWords.Message.SetActive(true);
                suggestWords.Message_text.text = "메시지 내용이 잘못 입력되었습니다.\n다음 카톡미션을 노려주세요!";
                suggestWords.StartWaitMission();
                StartCoroutine(suggestWords.WaitforMessage(1.0f));
                suggestWords.ResetTalk();
                phoneConMgr.Message_NoMission();
                //StartCoroutine(phoneConMgr.WaitPhoneDown(1.0f));
                if (tutorialMgr.isTutorialOn)
                {
                    tutorialMgr.MissionResult_text.text = tutorialMgr.failMessage;
                    tutorialMgr.Game_tutorial[10].SetActive(true);
                }
            }
        }
        else
        {
            suggestWords.Message.SetActive(true);
            suggestWords.Message_text.text = "아직 까톡 미션이 진행중이지 않습니다.\n미션 때 톡해주세요!";
            StartCoroutine(suggestWords.WaitforMessage(1.0f));
        }
        message = "";
        Send_button.SetActive(false);
        talkMessage_text.text = "";
        stringPos = 0;
    }
    bool MessageJudge()
    {
        string CorrectAnswer = suggestWords.TalkLists[suggestWords.TalkType].Talks[suggestWords.step];
        string user_message = message;

        CorrectAnswer = Regex.Replace(CorrectAnswer," ","");
        user_message = Regex.Replace(user_message," ","");
        
        if (CorrectAnswer.Equals(user_message))
            return true;
        else
            return false;
    }
    public void StartPlusScore()
    {
        plusScore = PlusScore();
        StartCoroutine(plusScore);
    }
    IEnumerator PlusScore()
    {
        yield return new WaitForSeconds(0.1f);

        if (inGameMgr.IsPlayingGame)
        {
            if (phoneConMgr.isPhoneOn)
            {
                if (decreaseEndur != null)
                    StopCoroutine(decreaseEndur);
                Score += addingScore * 2;

                int startValue = Endurance;
                if (Endurance < EnduranceMax)
                    Endurance += 20;
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
                Score += addingScore;


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
            BestScore_text.text = "최고점수: " + SetPointSpot(BestScore);//최고점수 갱신
            leaderboardMgr.SendBoardScore((long)BestScore, LeaderboardMgr.katalkLeaderboardID, ref FailedLeaderboard);
        }
        else if (FailedLeaderboard)
        {
            if (BestScore != 0)
                leaderboardMgr.SendBoardScore((long)BestScore, LeaderboardMgr.katalkLeaderboardID, ref FailedLeaderboard);
        }
    }
    public void StartDecreaseEndurance()
    {
        decreaseEndur = DecreaseEndurance();
        StartCoroutine(decreaseEndur);
    }
    IEnumerator DecreaseEndurance()
    {
        yield return new WaitForSeconds(katalkDifficultyData.Period);

        int startValue = Endurance;
        int endurM = (int)(EnduranceMax * katalkDifficultyData.DecreasePortion[inGameMgr.stage] * 0.01f);
        levelMgr.StatArr[2].ApplyAbility(ref endurM);
        Endurance -= endurM;

        if (option.smoothGage)
            Endur_gageMove.StartGageMove(startValue, Endurance, true);
        else
            Endurance_slider.value = Endurance * 10;

        int percentage = Endurance * 100 / EnduranceMax;
        endurColorMgr.SetColor(percentage);

        if (!phoneConMgr.isPhoneOn && inGameMgr.IsPlayingGame && Endurance > 0)
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
                    teacherMgr.KatalkGameOver();
                }
            }
            else
            {
                if (!tutorialMgr.gameovered_endurance)
                {
                    tutorialMgr.onGameOver_tut.SetActive(true);
                    tutorialMgr.reason_text.text = "사유: 졸려서 뻗음...";
                    Time.timeScale = 0.0f;
                    inGameMgr.isPause = true;
                    tutorialMgr.gameovered_endurance = true;
                }
            }
        }
    }
    public void ResetGame()
    {
        teacherMgr.SetSafe();//선생님 상태 초기화
        teacherMgr.NormalCon.SetActive(true);
        teacherMgr.GameOverBySleep.SetActive(false);
        teacherMgr.GameOverByContent.SetActive(false);
        teacherMgr.GameOverCon.SetActive(false);
        teacherMgr.Teacher.transform.localScale = new Vector3(1.1f, 1.1f, 1.0f);
        BlockPhonebutton.SetActive(false);
        Score = 0;//점수 초기화
        Endurance = EnduranceMax;//인내심 초기화
        endurColorMgr.SetColor(100);
        //endurColorMgr.SetColor_notice(100);
        teacherMgr.teacherNotice = teacherMgr.teacherNoticeMax * 10;
        teacherMgr.noticeStep = 0;
        phoneConMgr.isPhoneOn = false;//폰 상태 초기화
        suggestWords.ResetTalk();
        phoneConMgr.StartCor_wordWait();
        phoneConMgr.Phone.transform.localPosition = new Vector3(-124,-1240,0);//폰 위치 초기화
        message = "";
        talkMessage_text.text = "";
        stringPos = 0;
        phoneConMgr.OpenPhone_text.text = "↑↑폰↑↑";
        inGameMgr.playTimeEach = 0;
        inGameMgr.stage = 0;
        Score_text.text = "점수: 0";
        coinMgr.ResetAddedCoin();
        Endurance_slider.value = Endurance_slider.maxValue;
        endurColorMgr.SleepyEffect.SetActive(false);
        inGameMgr.BfStartGame.SetActive(true);
        inGameMgr.IsPlayingGame = true;//게임 상태 초기화
        phoneConMgr.startgame = false;//폰 처음 꺼낼때의 변수
        GameOver_Menu.SetActive(false);//게임오버 메뉴 비활성화
    }
    public void StopPlusScore()
    {
        StopCoroutine(plusScore);
    }
    public string SetPointSpot(ulong score)
    {
        string SCORE = string.Format("{0:#,###}", score);
        return SCORE;
    }
    public void Test_InsertAnswer()
    {
        message = suggestWords.TalkLists[suggestWords.TalkType].Talks[suggestWords.step];
        talkMessage_text.text = message;
        stringPos += message.Length;
        if (message != "")
        {
            Send_button.SetActive(true);
        }
        else
        {
            Send_button.SetActive(false);
        }
    }
}