using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Text.RegularExpressions;
using UnityEngine.SceneManagement;

/// <summary>
/// 카톡 게임 시스템 관리 클래스
/// </summary>
public class KatalkGameMgr : MonoBehaviour {

    /// <summary>
    /// 미션 단어 생성기
    /// </summary>
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

    /// <summary>
    /// 학생 인내심 이동 관리 인스턴스
    /// </summary>
    public GageMove Endur_gageMove;

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
    /// 점수 상승 코루틴 
    /// </summary>
    IEnumerator plusScore;
    /// <summary>
    /// 리더보드 등록이 실패했는지 기록
    /// </summary>
    public bool FailedLeaderboard = false;

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
    /// 메시지 전송 버튼 오브젝트
    /// </summary>
    public GameObject Send_button;
    /// <summary>
    /// 카톡 메시지 내용 텍스트
    /// </summary>
    public Text talkMessage_text;
    /// <summary>
    /// 키보드 클릭 효과음 오디오 소스
    /// </summary>
    public AudioSource KeyboardClickSound_AS;
    /// <summary>
    /// 키보드 지우기 효과음 오디오 소스
    /// </summary>
    public AudioSource KeyboardEraseSound_AS;

    /// <summary>
    /// 실시간 점수
    /// </summary>
    public ulong Score;
    /// <summary>
    /// 최고 점수
    /// </summary>
    public ulong BestScore;
    /// <summary>
    /// 미션 성공 횟수
    /// </summary>
    public int numOfMissionClear;

    /// <summary>
    /// 학생 인내심
    /// </summary>
    public int Endurance = 1000;
    /// <summary>
    /// 학생 인내심 최대치
    /// </summary>
    public int EnduranceMax = 1000;
    /// <summary>
    /// 시간마다 더해지는 점수 폭 기준치
    /// </summary>
    public ulong addingScore = 4;
    /// <summary>
    /// 인내심 차감 코루틴
    /// </summary>
    IEnumerator decreaseEndur;

    /// <summary>
    /// 카톡 미션에 입력한 메시지
    /// </summary>
    string message = "";

    /// <summary>
    /// 게임 오버 메뉴 오브젝트
    /// </summary>
    public GameObject GameOver_Menu;
    /// <summary>
    /// 최종 점수 텍스트
    /// </summary>
    public Text FinalScore_text;
    /// <summary>
    /// 코인 획득량 텍스트
    /// </summary>
    public Text CoinGet_text;

    /// <summary>
    /// 검정 계열 색상
    /// </summary>
    public Color Black;

    /// <summary>
    /// String Position을 나타내는 커서가 보이는지
    /// </summary>
    bool IsSP_on = false;
    /// <summary>
    /// 키보드의 Back 버튼이 눌리고 있는지 여부
    /// </summary>
    bool backDown = false;

    /// <summary>
    /// 현재 메시지 문자열의 커서 위치
    /// </summary>
    public int stringPos = 0;
    /// <summary>
    /// Touch 위치를 찾기 위한 오브젝트
    /// </summary>
    public GameObject TouchPosFinder;
    /// <summary>
    /// 입력되는 문자의 종류에 따른 폰트 크기
    /// </summary>
    public int[] FontSize_input = new int[5];// 0: ? / 1: ~ / 2: ' ' / 3: ! / 4: 일반 /

    /// <summary>
    /// 처음으로 하는 카톡 게임인지 확인
    /// </summary>
    public bool isFirstKatalk = true;
    /// <summary>
    /// 진동 여부 설정 메뉴
    /// </summary>
    public GameObject FirstVibrateSetting_Menu;
    /// <summary>
    /// 진동 On을 나타내는 오브젝트
    /// </summary>
    public GameObject VibrateOn_obj;
    /// <summary>
    /// 진동 Off를 나타내는 오브젝트
    /// </summary>
    public GameObject VibrateOff_obj;

    /// <summary>
    /// 폰 버튼을 막는 오브젝트
    /// </summary>
    public GameObject BlockPhonebutton;
    
    private void Awake()
    {
        // 게임 모드 설정
        if (SceneManager.GetActiveScene().name.Equals("KatalkScene"))
        {
            InGameMgr.GameMode = 1;

        }
    }
    void Start ()
    {
        levelMgr.SetItemAbility();                                          // 아이템 능력치 초기화
        if (isFirstKatalk)                                                  // 첫 게임 입장 시 확인
        {
            Time.timeScale = 0.0f;
            FirstVibrateSetting_Menu.SetActive(true);
        }

        inGameMgr.BfStartGame.SetActive(true);                              // 게임 시작 전 화면 활성화
        if(!BestScore.Equals(0))                                            // 최고 점수 표기
            BestScore_text.text = "최고점수: " + SetPointSpot(BestScore);
        else
            BestScore_text.text = "최고점수: 0";

        endurColorMgr.SetColor(100);                                        // 인내심 슬라이더 초기 설정
        Endurance_slider.maxValue = EnduranceMax * 10;
        Endurance_slider.value = EnduranceMax * 10;
        StartCoroutine(StringPosBlinking());                                // 문자 커서 코루틴 활성화
    }

    /// <summary>
    /// 진동 여부 설정 클릭 리스너
    /// </summary>
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

    /// <summary>
    /// 문자 커서 깜빡임 코루틴
    /// </summary>
	IEnumerator StringPosBlinking()
    {
        yield return new WaitForSeconds(0.8f);

        string format = "<size=30>l</size>";
        string talkMsg = talkMessage_text.text;
        // 깜빡임 문자가 있으면 지우고
        if (IsSP_on)
        {
            talkMessage_text.text = talkMsg.Replace("<size=30>l</size>", "");
            IsSP_on = false;
        }
        // 깜빡임 문자가 없으면 추가
        else
        {
            talkMessage_text.text = talkMsg.Insert(stringPos,format);
            IsSP_on = true;
        }

        StartCoroutine(StringPosBlinking());

    }

    /// <summary>
    /// 키보드 문자 입력 버튼 리스너
    /// </summary>
    /// <param name="keyNum">키 코드</param>
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
        // 메시지 업데이트
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
    /// <summary>
    /// 키보드 Back key(지우기) 누른 상태
    /// </summary>
    public void BackKey_Down()
    {
        backDown = true;
        KeyboardEraseSound_AS.Play();
        StartCoroutine(BackSpacing());
    }
    /// <summary>
    /// 키보드 지우기 버튼 누르는 동안 내용을 지우는 코루틴
    /// </summary>
    IEnumerator BackSpacing()
    {
        // 0.1초마다 커서 위치 이전 문자를 지운다
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
    /// <summary>
    /// 지우기 버튼에서 손을 떼었을 때의 리스너
    /// </summary>
    public void BackKey_Up()
    {
        backDown = false;
    }
    /// <summary>
    /// 사용자가 터치한 위치에 맞는 문자 커서 위치 찾기
    /// </summary>
    public void FindStringPos()
    {
        // 키보드가 닫혀있으면 열기
        if (!phoneConMgr.isKeyboardOn)
            phoneConMgr.OpenKeyboard();
        if (message != "")
        {
            // 안드로이드 플랫폼이면 터치를 통해 찾고, 그 외엔 마우스 위치로 찾는다.
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

            // 폰트 크기에 따라서 문자 커서 인덱스 위치 계산
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
    /// <summary>
    /// 입력된 문자의 고정된 폰트 크기 찾기
    /// </summary>
    /// <param name="letter">대상 문자</param>
    /// <returns>폰트 크기</returns>
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
    /// <summary>
    /// 카톡 미션 보상 지급
    /// </summary>
    void MissionReward_Inprocess()
    {
        // 보상 종류를 확률에 따라 결정
        int p = Random.Range(0,100);
        if(p < suggestWords.percentageOfCoin)
        {
            // 코인 보상 지급 및 UI 업데이트
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
            // 추가 점수 지급 및 UI 업데이트
            ulong reward = (ulong)suggestWords.TalkLists[suggestWords.TalkType].Points[suggestWords.step/2];
            levelMgr.StatArr[3].ApplyAbility(ref reward);
            Score += reward;
            BonusScore_text.text = "+" + reward;
            BonusScore_ani.Play();
        }
    }
    /// <summary>
    /// 카톡 보내기
    /// </summary>
    public void SendTalk()
    {
        // 주어진 카톡 내용이 있을 때
        if (suggestWords.IsTalkOn)
        {
            // 메시지 내용이 맞는지 확인
            if (MessageJudge())
            {
                // 다음 카톡 내용 활성화
                suggestWords.SetTalkTimeOnSend();
                talkMessage_text.text = message;
                suggestWords.Talk_Texts[suggestWords.step].color = Black;
                // 튜토리얼 모드가 아니면 보상 지급
                if(!tutorialMgr.isTutorialOn)
                    MissionReward_Inprocess();
                // 인내심 회복
                if (Endurance < 1000)
                    Endurance += 100;
                // 다음 단계 대화로 넘어가기
                suggestWords.step++;
                suggestWords.ProcessingTalk();
                if (!suggestWords.IskeyboardNeed)
                    phoneConMgr.CloseKeyboard();

            }
            // 내용이 틀렸을 때 
            else
            {
                // 미션 실패 처리 및 대화 내용 초기화
                suggestWords.IsTalkOn = false;
                suggestWords.Message.SetActive(true);
                suggestWords.Message_text.text = "메시지 내용이 잘못 입력되었습니다.\n다음 카톡미션을 노려주세요!";
                suggestWords.StartWaitMission();
                StartCoroutine(suggestWords.WaitforMessage(1.0f));
                suggestWords.ResetTalk();
                phoneConMgr.Message_NoMission();
                if (tutorialMgr.isTutorialOn)
                {
                    tutorialMgr.MissionResult_text.text = tutorialMgr.failMessage;
                    tutorialMgr.Game_tutorial[10].SetActive(true);
                }
            }
        }
        // 미션 진행 중이 아님
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
    // 대화 내용이 올바른지 확인
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
        yield return new WaitForSeconds(0.1f);

        // 게임이 플레이 중인지 확인
        if (inGameMgr.IsPlayingGame)
        {
            // 폰이 켜져있는지 확인
            if (phoneConMgr.isPhoneOn)
            {
                // 인내심 감소 중단
                if (decreaseEndur != null)
                    StopCoroutine(decreaseEndur);
                // 점수 2배 지급
                Score += addingScore * 2;

                // 인내심 상승 처리
                int startValue = Endurance;
                if (Endurance < EnduranceMax)
                    Endurance += 20;
                else
                    Endurance = EnduranceMax;
                if (option.smoothGage)
                    Endur_gageMove.StartGageMove(startValue, Endurance, false);
                else
                    Endurance_slider.value = Endurance * 10;
                // 인내심 색상 정보 업데이트
                int percentage = Endurance * 100 / EnduranceMax;
                endurColorMgr.SetColor(percentage);
            }
            // 폰이 꺼져있을 때 기준치 만큼만 지급
            else
                Score += addingScore;

            // 게임 진행중일 때 점수 업데이트 및 최고 점수 검사
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
    
        // 게임이 진행중일 때 반복
        if (inGameMgr.IsPlayingGame)
            StartPlusScore();
    }
    /// <summary>
    /// 최고 점수 업데이트
    /// </summary>
    public void SetBestScore()
    {
        // 최고 점수를 갱신 했을 때 최고점수 텍스트 업데이트 및 리더보드 등록
        if (Score > BestScore)
        {
            BestScore = Score;
            BestScore_text.text = "최고점수: " + SetPointSpot(BestScore);//최고점수 갱신
            leaderboardMgr.SendBoardScore((long)BestScore, LeaderboardMgr.katalkLeaderboardID, ref FailedLeaderboard);
        }
        // 이전에 리더보드 등록을 실패했을 때 재등록 시도
        else if (FailedLeaderboard)
        {
            if (BestScore != 0)
                leaderboardMgr.SendBoardScore((long)BestScore, LeaderboardMgr.katalkLeaderboardID, ref FailedLeaderboard);
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
    /// 인내심 감소 반복 코루틴
    /// </summary>
    IEnumerator DecreaseEndurance()
    {
        yield return new WaitForSeconds(katalkDifficultyData.Period);

        // 차감할 비율에 따라서 인내심 차감 처리
        int startValue = Endurance;
        int endurM = (int)(EnduranceMax * katalkDifficultyData.DecreasePortion[inGameMgr.stage] * 0.01f);
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

        // 폰이 꺼져있고, 게임이 진행 중일 때 감소 반복
        if (!phoneConMgr.isPhoneOn && inGameMgr.IsPlayingGame && Endurance > 0)
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
                    teacherMgr.KatalkGameOver();
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
                    tutorialMgr.reason_text.text = "사유: 졸려서 뻗음...";
                    Time.timeScale = 0.0f;
                    inGameMgr.isPause = true;
                    tutorialMgr.gameovered_endurance = true;
                }
            }
        }
    }
    /// <summary>
    /// 게임 초기화
    /// </summary>
    public void ResetGame()
    {
        //선생님 상태 초기화
        teacherMgr.SetSafe();
        teacherMgr.NormalCon.SetActive(true);
        teacherMgr.GameOverBySleep.SetActive(false);
        teacherMgr.GameOverByContent.SetActive(false);
        teacherMgr.GameOverCon.SetActive(false);
        teacherMgr.Teacher.transform.localScale = new Vector3(1.1f, 1.1f, 1.0f);
        teacherMgr.teacherNotice = teacherMgr.teacherNoticeMax * 10;
        teacherMgr.noticeStep = 0;
        //점수 초기화
        Score = 0;
        //인내심 초기화
        Endurance = EnduranceMax;
        endurColorMgr.SetColor(100);
        //폰 상태 초기화
        BlockPhonebutton.SetActive(false);
        phoneConMgr.isPhoneOn = false;
        suggestWords.ResetTalk();
        phoneConMgr.StartCor_wordWait();
        phoneConMgr.Phone.transform.localPosition = new Vector3(-124,-1240,0);
        // UI 초기화
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
        // 기타 게임 정보 초기화
        inGameMgr.IsPlayingGame = true;
        phoneConMgr.startgame = false;
        GameOver_Menu.SetActive(false);
    }
    /// <summary>
    /// 점수 지급 종료
    /// </summary>
    public void StopPlusScore()
    {
        StopCoroutine(plusScore);
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
    /// <summary>
    /// 테스트용 답 입력
    /// </summary>
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