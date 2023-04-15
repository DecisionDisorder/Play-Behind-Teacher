using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using System.Text.RegularExpressions;

/// <summary>
/// 카톡 대화 시스템 관리 클래스
/// </summary>
public class SuggestWords : MonoBehaviour {
    /// <summary>
    /// 카톡 대화 목록
    /// </summary>
    public TalkingList[] TalkLists;
    /// <summary>
    /// 음식 리스트 (대화에 삽입될 단어)
    /// </summary>
    public string[] foodList = new string[9] { "부대찌개", "순대국", "파닭", "떡볶이", "돈까스", "햄버거", "감자탕", "함박 스테이크", "김치 스파게티"};
    /// <summary>
    /// 과목 리스트 (대화에 삽입될 단어)
    /// </summary>
    public string[] subjectList;
    /// <summary>
    /// 장보기 리스트 (대화에 삽입될 단어)
    /// </summary>
    public string[] marketList;
    /// <summary>
    /// 12번 대화의 복수 대답 데이터
    /// </summary>
    public VariousAnswer[] Type12_VA;

    /// <summary>
    /// 코인 보상 지급 확률
    /// </summary>
    public int percentageOfCoin = 35;

    /// <summary>
    /// 대화 종류
    /// </summary>
    public int TalkType;

    /// <summary>
    /// 보너스 카톡의 인덱스 번호
    /// </summary>
    public int[] BonusTalkNumber;

    /// <summary>
    /// 대화 상대 정보 텍스트
    /// </summary>
    public Text TalkTarget_text;

    /// <summary>
    /// 카톡 대화상자 크기의 왼쪽 아래 지점
    /// </summary>
    Vector2[] TalkMinPos = new Vector2[4];
    /// <summary>
    /// 카톡 대화상자 크기의 오른쪽 위 지점
    /// </summary>
    Vector2[] TalkMaxPos = new Vector2[4];

    /// <summary>
    /// 대화상자의 크기 조절을 위한 RRectTransform 배열
    /// </summary>
    public RectTransform[] TalkBox = new RectTransform[4];
    /// <summary>
    /// 대화상자의 오브젝트 배열
    /// </summary>
    public GameObject[] TalkBox_obj = new GameObject[4];
    /// <summary>
    /// 대화상자 내용 텍스트
    /// </summary>
    public Text[] Talk_Texts = new Text[4];

    /// <summary>
    /// 대화 상자의 이미지 스프라이트 (타인, 본인 톡의 이미지)
    /// </summary>
    public Sprite[] TalkBox_Sprite = new Sprite[2];
    /// <summary>
    /// 대화상자 배경 이미지 배열
    /// </summary>
    public Image[] TalkBox_Img = new Image[2];
    /// <summary>
    /// 대화상자 텍스트 크기 조절을 위한 RectTransform 배열
    /// </summary>
    public RectTransform[] TalkBox_Textrect = new RectTransform[2];

    /// <summary>
    /// 토스트 메시지 오브젝트
    /// </summary>
    public GameObject Message;
    /// <summary>
    /// 토스트 메시지 텍스트
    /// </summary>
    public Text Message_text;

    /// <summary>
    /// 카톡 보낸 시간 오브젝트 
    /// </summary>
    public GameObject[] TalkTime_obj = new GameObject[4];
    /// <summary>
    /// 카톡 보낸 시간의 크기 조절을 위한 RectTransform
    /// </summary>
    public RectTransform[] TalkTime_rect = new RectTransform[4];
    /// <summary>
    /// 카톡 보낸 시간 텍스트
    /// </summary>
    public Text[] TalkTime_text = new Text[4];
    /// <summary>
    /// 문자용 검정 계열 색상
    /// </summary>
    public Color TextBlack_color;

    /// <summary>
    /// 카톡 알림 오브젝트
    /// </summary>
    public GameObject Alarm_obj;

    /// <summary>
    /// 대화 단계
    /// </summary>
    public int step = 0;
    /// <summary>
    /// 텍스트 하나당 폰트의 옆으로의 크기
    /// </summary>
    public int FontSize_w = 17;
    /// <summary>
    /// 텍스트 하나당 폰트의 높이 크기
    /// </summary>
    public int FontSize_h = 21;
    /// <summary>
    /// 한 줄당의 최대 문자열 길이
    /// </summary>
    public int LineLimit = 15;

    /// <summary>
    /// '~'문자의 크기
    /// </summary>
    public int case6_StringSize = 13;
    /// <summary>
    /// ' '문자의 크기
    /// </summary>
    public int space_StringSize = 3;
    /// <summary>
    /// '!' 문자의 크기
    /// </summary>
    public int case8_StringSize = 6;
    /// <summary>
    /// '?' 문자의 크기
    /// </summary>
    public int case9_StringSize = 11;
    /// <summary>
    /// 초성 문자의 크기
    /// </summary>
    public int Initial_StringSize = 19;

    /// <summary>
    /// 카톡 대화 시작 대기 시간 최솟값
    /// </summary>
    public float WaitTimeMin = 15f;
    /// <summary>
    /// 카톡 대화 시작 대기 시간 최댓값
    /// </summary>
    public float WaitTimeMax = 20f;

    public PhoneConMgr phoneConMgr;
    public Option option;
    public KatalkGameMgr katalkGameMgr;
    public CoinMgr coinMgr;
    public TutorialMgr tutorialMgr;
    public LevelMgr levelMgr;

    /// <summary>
    /// 카톡을 보낼 시간인지 여부
    /// </summary>
    public bool isTimeToSend;
    /// <summary>
    /// 키보드가 필요한지 여부
    /// </summary>
    public bool IskeyboardNeed = true;
    /// <summary>
    /// 보너스 카톡인지 여부
    /// </summary>
    public bool IsBonusTalk = false;
    /// <summary>
    /// 대화가 진행 중인지 여부
    /// </summary>
    public bool IsTalkOn = false;
    
    /// <summary>
    /// 대화 종류를 선택하여 카톡 미션 시작하는 함수
    /// </summary>
    public void SetWord()
    {
        // 대화 등급 선정
        int per = Random.Range(0,100);

        // 튜토리얼 일때는 1번 대화로 고정
        if (tutorialMgr.isTutorialOn)
        {
            TalkType = 1;
        }
        else
        {
            // 80%의 확률로 일반 대화 시작
            if (per < 80)
            {
                // 일반 대화 중간에 끼어있는 보너스 대화를 제외하고 무작위로 선정
                int frontOrback = Random.Range(0, BonusTalkNumber.Length + 1);

                for (int i = 0; i <= BonusTalkNumber.Length; i++)
                {
                    if (frontOrback.Equals(i))
                    {
                        int min, max;
                        if (i.Equals(0))
                            min = 0;
                        else
                            min = BonusTalkNumber[i - 1] + 1;

                        if (i.Equals(BonusTalkNumber.Length))
                            max = TalkLists.Length;
                        else
                            max = BonusTalkNumber[i];

                        TalkType = Random.Range(min, max);
                    }
                }
                // 대화 종류에 따라서 대화 상대 정보 업데이트
                switch (TalkType)
                {
                    case 10:
                        TalkTarget_text.text = "동생";
                        break;
                    case 11:
                        TalkTarget_text.text = "엄마";
                        break;
                    case 12:
                        TalkTarget_text.text = "DK택배";
                        int type = Random.Range(0, 3);
                        TalkLists[TalkType].Talks[1] = Type12_VA[type].Talks;
                        TalkLists[TalkType].talkWords[0].TalkWords = new string[Type12_VA[type].talkWords.TalkWords.Length];
                        for (int i = 0; i < Type12_VA[type].talkWords.TalkWords.Length; i++)
                            TalkLists[TalkType].talkWords[0].TalkWords[i] = Type12_VA[type].talkWords.TalkWords[i];
                        break;
                    default:
                        TalkTarget_text.text = "친구";
                        break;
                }

            }
            // 20%의 확률로 2번 혹은 6번 보너스 대화 시작
            else
            {
                int per2 = Random.Range(0, 2);
                if (per2.Equals(0))
                    TalkType = 2;
                else
                    TalkType = 6;
            }
        }
        // 전송할 타이밍임을 체크하고, 대화 시작
        isTimeToSend = !(TalkLists[TalkType].isReceiveFirst);
        IsTalkOn = true;
        Alarm_Vibrate();                 // 진동 알림
        phoneConMgr.Message_NoMission(); // 미션 없음 정보를 있음으로 전환
        ProcessingTalk();                // 대화 진행 시작
    }
    /// <summary>
    /// 기기 진동 알림
    /// </summary>
    void Alarm_Vibrate()
    {
        if (!phoneConMgr.isPhoneOn)
            Alarm_obj.SetActive(true);

        // 안드로이드 플랫폼이고, 설정에서 진동을 활성화한 경우, 진동 시작
        if (Application.platform.Equals(RuntimePlatform.Android) && option.IsVibrateOn)
        {
            if (!phoneConMgr.isPhoneOn)
                Handheld.Vibrate();
        }
        // 그 외엔 진동을 했다는 로그를 남김
        else if (!Application.platform.Equals(RuntimePlatform.Android) && option.IsVibrateOn)
        {
            if (!phoneConMgr.isPhoneOn)
                Debug.Log("Vibrate");
        }
    }
    /// <summary>
    /// 대화 미션 시작 대기 
    /// </summary>
    IEnumerator WaitMission()
    {
        yield return new WaitForSeconds(Random.Range(WaitTimeMin,WaitTimeMax));

        SetWord();
    }
    /// <summary>
    /// 미션 대기 시작
    /// </summary>
    public void StartWaitMission()
    {
        StartCoroutine(WaitMission());
    }
    /// <summary>
    /// 대화 단계 진행
    /// </summary>
    public void ProcessingTalk()
    {
        StartCoroutine(ProcessingTalk_coroutine());
    }
    IEnumerator ProcessingTalk_coroutine()
    {
        // 대화 중간 딜레이 시간 랜덤 설정
        float WaitTime = Random.Range(0.5f, 1.0f);

        // 대화 중인 경우
        if (step < TalkLists[TalkType].Talks.Length)
        {
            // 특정한 대화 단게에서 특정 단어 추가
            string talk = "";
            if (TalkType.Equals(1) && step.Equals(1))
            {
                talk += foodList[Random.Range(0, foodList.Length)];
            }
            else if (TalkType.Equals(4) && step.Equals(1))
                talk += subjectList[Random.Range(0, subjectList.Length)] + " ";
            else if (TalkType.Equals(11) && step.Equals(2))
                talk += marketList[Random.Range(0,marketList.Length)];

            // 대화 내용 설정
            talk += TalkLists[TalkType].Talks[step];

            // 보너스 대화가 아니고, 사용자가 메시지를 보낸 타이밍에 랜덤 시간 대기
            if ((step % 2).Equals(1) && !IsBonusTalk)
                yield return new WaitForSeconds(WaitTime);

            // 대화 내용 텍스트 업데이트
            Talk_Texts[step].text = talk;
            TalkBox_obj[step].SetActive(true);
            // 일반 대화일 때
            if (TalkLists[TalkType].Talks.Length > TalkLists[TalkType].Points.Length)
            {
                IsBonusTalk = false;
                // 키보드가 필요한지 (대화가 종료될 타이밍인지) 확인
                if (phoneConMgr.wordStep < TalkLists[TalkType].talkWords.Length)
                {
                    IskeyboardNeed = true;
                }
                else
                {
                    IskeyboardNeed = false;
                }
                // 대화 상자 위치 및 크기 설정
                SetTalkPos(talk);
                SetTalkBox(talk, TalkBox[step], Talk_Texts[step]);
                
                // 사용자가 보낼 타이밍이었으면 아닌 것으로 전환
                if (isTimeToSend)
                { 
                    Talk_Texts[step].color = Color.gray;
                    isTimeToSend = false;
                }
                // 상대가 대화를 보냈으면 사용자가 보낼 타이밍으로 전환하고 대화 내용 진행
                else
                {
                    Talk_Texts[step].color = TextBlack_color;
                    step++;
                    isTimeToSend = true;
                    ProcessingTalk();
                }
            }
            // 보너스 대화 진행
            else 
            {
                IsBonusTalk = true;
                // 키보드가 필요한지 (대화가 종료될 타이밍인지) 확인
                if (phoneConMgr.wordStep < TalkLists[TalkType].talkWords.Length)
                {
                    IskeyboardNeed = true;
                }
                else
                {
                    IskeyboardNeed = false;
                }
                // 독백하는 카톡 내용 및 크기 설정
                SetTalkPos_Self(talk);
                Talk_Texts[step].color = Color.gray;
                SetTalkBox(talk, TalkBox[step], Talk_Texts[step]);
            }
            // 키보드 자판 위치 섞기
            phoneConMgr.RandomKeyPos();
        }
        // 대화가 끝나는 타이밍인 경우
        else
        {
            // 메시지 활성화
            Message.SetActive(true);
            ulong reward = 0;
            string kind = "";
            // 클리어 횟수 증가
            katalkGameMgr.numOfMissionClear++;
            // 튜토리얼일 때 완료했다는 알림만 표시
            if (tutorialMgr.isTutorialOn)
            {
                Message_text.text = "채팅 미션을 완료 하셨습니다!";
                tutorialMgr.MissionResult_text.text = tutorialMgr.successMessage;
                tutorialMgr.Game_tutorial[10].SetActive(true);
            }
            // 일반 게임일 때 보상 지급하며 미션 성공 알림 표시
            else
            {
                MissionReward_end(ref reward, ref kind);
                Message_text.text = "채팅 미션을 완료 하셨습니다!\n 추가 " + kind + " +" + reward;
            }

            // 일정 시간 대기 후 카톡 대화 종료 처리
            yield return new WaitForSeconds(WaitTime + 2.0f);
            ResetTalk();
            IsTalkOn = false;
            phoneConMgr.Message_NoMission();

            // 다음 미션 대기
            StartWaitMission();
            StartCoroutine(WaitforMessage(0.0f));

        }
    }
    /// <summary>
    /// 미션 성공 보상 지급
    /// </summary>
    /// <param name="reward">보상 수량</param>
    /// <param name="kind">보상 종류</param>
    void MissionReward_end(ref ulong reward, ref string kind)
    {
        // 무작위로 숫자를 선택하여 코인 보상 확률 범위 내에 들면 코인 보상 지급
        int p = Random.Range(0, 100);
        if (p < percentageOfCoin)
        { 
            reward = (ulong)TalkLists[TalkType].Coins[TalkLists[TalkType].Coins.Length - 1];
            levelMgr.StatArr[3].ApplyAbility(ref reward);
            CoinMgr.Coin += reward;
            CoinMgr.accumulatedCoins += reward;
            coinMgr.SetAddedCoin((int)reward);
            katalkGameMgr.BonusCoin_text.text = "+" + reward;
            katalkGameMgr.BonusCoin_ani.Play();
            coinMgr.setCoinText();
            kind = "코인";
        }
        // 그 외엔 보너스 점수 지급
        else
        {
            reward = (ulong)TalkLists[TalkType].Points[TalkLists[TalkType].Points.Length - 1];
            levelMgr.StatArr[3].ApplyAbility(ref reward);
            katalkGameMgr.Score += reward;
            kind = "점수";
            
        }
    }
    /// <summary>
    /// 카톡 내용 문자열로 대화상자의 크기를 계산
    /// </summary>
    /// <param name="talk">카톡 내용</param>
    /// <returns>대화상자 가로 크기</returns>
    public int SizeOfMessage(string talk)
    {
        // 특수문자, 공백, 한글, 초성 등의 개수를 세고 종류별 크기를 합산한다.
        int numOfSwungDash = WordNum(talk, "~");
        string numbers = Regex.Replace(talk, @"\D", "");
        numOfSwungDash += numbers.Length;

        int numOfSpace = WordNum(talk, " ");
        int numOfExclamationMark = WordNum(talk, "!");
        int numOfQuestionMark = WordNum(talk, "?");

        string KorMessage = Regex.Replace(talk, @"[^가-힣]", "");
        int numOfNormal = KorMessage.Length;

        string initialMessage = Regex.Replace(talk,@"[^ㄱ-ㅎ]","");
        int numOfInitial = initialMessage.Length;

        return numOfSwungDash * case6_StringSize + numOfSpace * space_StringSize + numOfExclamationMark * case8_StringSize +
            numOfQuestionMark * case9_StringSize + numOfNormal * FontSize_w + numOfInitial * Initial_StringSize + 24; //24 = text와 talkbox의 width 차이
    }
    /// <summary>
    /// 대화 상자 위치를 설정한다.
    /// </summary>
    /// <param name="talk">대화 내용</param>
    public void SetTalkPos(string talk)//Min: Left & Bottom / Max = Right & Top
    {
        // 첫 대화 단계에서
        if(step.Equals(0))
        {
            // 첫 대화가 보내야 되는 톡일 때
            if (isTimeToSend)
            {
                // 대화 상자 이미지 변경 및 대화상자 크기 설정
                TalkBox_Img[0].sprite = TalkBox_Sprite[0];
                TalkBox_Textrect[0].offsetMax = new Vector2(FontSize_w, 4) * -1;
                TalkBox_Textrect[0].offsetMin = new Vector2(8, 4);
                TalkMaxPos[0] = new Vector2(15, 135) * -1;

                // 대화가 2줄 이상일 때의 크기 조절
                if (talk.Length >= LineLimit)
                {
                    string firstmessage = talk.Substring(0, LineLimit);
                    string secondmessage = talk.Substring(LineLimit, talk.Length - LineLimit);
                    int first_width = SizeOfMessage(firstmessage);
                    int second_width = SizeOfMessage(secondmessage);
                    if (first_width > second_width)
                        TalkMinPos[0] = new Vector2(420 - first_width, 710 - talk.Length / LineLimit * FontSize_h);
                    else
                        TalkMinPos[0] = new Vector2(420 - second_width, 710 - talk.Length / LineLimit * FontSize_h);
                }
                // 대화가 1줄일 때의 크기 조절
                else
                {
                    TalkMinPos[0] = new Vector2(420 - SizeOfMessage(talk), 710);
                }
            }
            // 첫 대화가 받는 톡일 때
            else
            {
                // 대화 상자 이미지 변경 및 대화상자 크기 설정
                TalkBox_Img[0].sprite = TalkBox_Sprite[1];
                TalkBox_Textrect[0].offsetMax = new Vector2(8, 4) * -1;
                TalkBox_Textrect[0].offsetMin = new Vector2(FontSize_w, 4);
                TalkMinPos[0] = new Vector2(15, 710 - talk.Length / LineLimit * FontSize_h);

                // 대화가 2줄 이상일 때의 크기 조절
                if (talk.Length >= LineLimit)
                {
                    string firstmessage = talk.Substring(0, LineLimit);
                    string secondmessage = talk.Substring(LineLimit, talk.Length - LineLimit);
                    int first_width = SizeOfMessage(firstmessage);
                    int second_width = SizeOfMessage(secondmessage);
                    if (first_width > second_width)
                        TalkMaxPos[0] = new Vector2(420 - first_width, 135) * -1;
                    else
                        TalkMaxPos[0] = new Vector2(420 - second_width, 135) * -1;
                }
                // 대화가 1줄일 때의 크기 조절
                else
                {
                    TalkMaxPos[0] = new Vector2(420 - SizeOfMessage(talk), 135) * -1;
                }
            }
        }
        // 그 외의 대화 단계에서
        else
        {
            // 톡을 받는 타이밍일 때 (상대가 보내는 타이밍일 때)
            if (!isTimeToSend)
            {
                // 대화 상자 이미지 변경 및 대화상자 크기 설정
                TalkBox_Img[step].sprite = TalkBox_Sprite[1];
                TalkBox_Textrect[step].offsetMax = new Vector2(8,4) * -1;
                TalkBox_Textrect[step].offsetMin = new Vector2(FontSize_w,4);

                // 대화가 2줄 이상일 때의 크기 조절
                if (talk.Length > LineLimit)
                {
                    string firstmessage = talk.Substring(0, LineLimit);
                    string secondmessage = talk.Substring(LineLimit, talk.Length - LineLimit);
                    int first_width = SizeOfMessage(firstmessage);
                    int second_width = SizeOfMessage(secondmessage);

                    if(first_width > second_width)
                        TalkMaxPos[step] = new Vector2(420 - first_width, TalkMaxPos[step - 1].y * -1 + 50 + TalkLists[TalkType].Talks[step - 1].Length / LineLimit * FontSize_h) * -1;
                    else
                        TalkMaxPos[step] = new Vector2(420 - second_width, TalkMaxPos[step - 1].y * -1 + 50 + TalkLists[TalkType].Talks[step - 1].Length / LineLimit * FontSize_h) * -1;

                    TalkMinPos[step] = new Vector2(TalkMaxPos[step - 1].x * -1, TalkMinPos[step - 1].y - 50 - talk.Length / LineLimit * FontSize_h);
                }
                // 대화가 1줄일 때의 크기 조절
                else
                {
                    TalkMaxPos[step] = new Vector2(420 - SizeOfMessage(talk), TalkMaxPos[step - 1].y * -1 + 50 + TalkLists[TalkType].Talks[step - 1].Length / LineLimit * FontSize_h) * -1;
                    TalkMinPos[step] = new Vector2(TalkMaxPos[step - 1].x * -1, TalkMinPos[step - 1].y - 50 - talk.Length / LineLimit * FontSize_h);
                }
                
                // 마지막 대화가 아니면 진동 알림
                if(!step.Equals(TalkLists[TalkType].Talks.Length-1))
                    Alarm_Vibrate();
            }
            // 사용자가 보내는 순서일 떄
            else
            {
                // 대화 상자 이미지 변경 및 대화상자 크기 설정
                TalkBox_Img[step].sprite = TalkBox_Sprite[0];
                TalkBox_Textrect[step].offsetMax = new Vector2(FontSize_w, 4) * -1;
                TalkBox_Textrect[step].offsetMin = new Vector2(8, 4);

                if (step != 1)
                    phoneConMgr.wordStep++;

                // 대화가 2줄 이상일 때의 크기 조절
                if (talk.Length > LineLimit)
                {
                    TalkMaxPos[step] = new Vector2(TalkMinPos[step - 1].x, TalkMaxPos[step - 1].y * -1 + 50 + TalkLists[TalkType].Talks[step-1].Length / LineLimit* FontSize_h)*-1;

                    string firstmessage = talk.Substring(0, LineLimit);
                    string secondmessage = talk.Substring(LineLimit, talk.Length - LineLimit);
                    int first_width = SizeOfMessage(firstmessage);
                    int second_width = SizeOfMessage(secondmessage);
                    if (first_width > second_width)
                        TalkMinPos[step] = new Vector2(420 - first_width, TalkMinPos[step - 1].y - 50 - talk.Length / LineLimit * FontSize_h);
                    else
                        TalkMinPos[step] = new Vector2(420 - second_width, TalkMinPos[step - 1].y - 50 - talk.Length / LineLimit * FontSize_h);
                }
                // 대화가 1줄일 때의 크기 조절
                else
                {
                    TalkMaxPos[step] = new Vector2(TalkMinPos[step - 1].x, TalkMaxPos[step - 1].y * -1 + 50 + TalkLists[TalkType].Talks[step - 1].Length / LineLimit * FontSize_h)*-1;
                    TalkMinPos[step] = new Vector2(420 - SizeOfMessage(talk), TalkMinPos[step - 1].y - 50 - talk.Length / LineLimit * FontSize_h);
                }
            }
        }
    }
    /// <summary>
    /// 나만의 대화에서 대화 상자 위치 설정
    /// </summary>
    /// <param name="talk">대화 내용</param>
    public void SetTalkPos_Self(string talk)
    {
        if(step != 0)
            phoneConMgr.wordStep++;

        // 대화 상자 이미지 변경 및 대화상자 크기 설정
        TalkBox_Img[step].sprite = TalkBox_Sprite[0];
        TalkBox_Textrect[step].offsetMin = new Vector2(8, 4);
        TalkBox_Textrect[step].offsetMax = new Vector2(FontSize_w, 4) * -1;
        TalkMaxPos[0] = new Vector2(15, 135) * -1;
        // 첫번째 대화에서
        if (step.Equals(0))
        {
            // 대화가 2줄 이상일 때의 크기 조절
            if (talk.Length >= LineLimit)
            {
                string firstmessage = talk.Substring(0, LineLimit);
                string secondmessage = talk.Substring(LineLimit, talk.Length - LineLimit);
                int first_width = SizeOfMessage(firstmessage);
                int second_width = SizeOfMessage(secondmessage);
                if (first_width > second_width)
                    TalkMinPos[0] = new Vector2(420 - SizeOfMessage(firstmessage), 710 - talk.Length / LineLimit * FontSize_h);
                else
                    TalkMinPos[0] = new Vector2(420 - SizeOfMessage(secondmessage), 710 - talk.Length / LineLimit * FontSize_h);
            }
            // 대화가 1줄일 때의 크기 조절
            else
            {
                TalkMinPos[0] = new Vector2(420 - SizeOfMessage(talk), 710);
            }
        }
        // 그외의 대화에서
        else
        {
            // 대화가 2줄 이상일 때의 크기 조절
            if (talk.Length > LineLimit)
            {
                TalkMaxPos[step] = new Vector2(15, TalkMaxPos[step - 1].y * -1 + 50 + TalkLists[TalkType].Talks[step - 1].Length / LineLimit * FontSize_h) * -1;
                
                string firstmessage = talk.Substring(0, LineLimit);
                string secondmessage = talk.Substring(LineLimit, talk.Length - LineLimit);
                int first_width = SizeOfMessage(firstmessage);
                int second_width = SizeOfMessage(secondmessage);
                if (first_width > second_width)
                    TalkMinPos[step] = new Vector2(420 - first_width, TalkMinPos[step - 1].y - 50 - talk.Length / LineLimit * FontSize_h);
                else
                    TalkMinPos[step] = new Vector2(420 - second_width, TalkMinPos[step - 1].y - 50 - talk.Length / LineLimit * FontSize_h);
            }
            // 대화가 1줄일 때의 크기 조절
            else
            {
                TalkMaxPos[step] = new Vector2(15, TalkMaxPos[step - 1].y * -1 + 50 + TalkLists[TalkType].Talks[step - 1].Length / LineLimit * FontSize_h) * -1;
                TalkMinPos[step] = new Vector2(420 - SizeOfMessage(talk), TalkMinPos[step - 1].y - 50 - talk.Length / LineLimit * FontSize_h);
            }
        }
    }
    /// <summary>
    /// 대화 상자 크기 최종 설정
    /// </summary>
    /// <param name="talk">대화 내용</param>
    /// <param name="talk_rect">대화 상자 Rect</param>
    /// <param name="talk_text">대화 내용 텍스트</param>
    public void SetTalkBox(string talk, RectTransform talk_rect, Text talk_text)
    {
        talk_rect.offsetMin = TalkMinPos[step];
        talk_rect.offsetMax = TalkMaxPos[step];
        talk_text.alignment = TextAnchor.MiddleCenter;
        SetTalkTime(step);
    }
    /// <summary>
    /// 문자열에 특정 단어/문자의 개수 세기
    /// </summary>
    /// <param name="String">대상 문자열</param>
    /// <param name="Word">셀 단어/문자</param>
    /// <returns>등장 횟수</returns>
    public int WordNum(string String, string Word)
    {
        int Num;

        Num = String.Length - String.Replace(Word, "").Length;
        Num = Num / Word.Length;

        return Num;
    }
    /// <summary>
    /// 카톡 보낸 시간 업데이트
    /// </summary>
    /// <param name="i">대화 단게</param>
    public void SetTalkTime(int i)
    {
        // 대화 상자 위치와 크기 불러오기
        Vector3 boxPos = TalkBox_obj[i].transform.localPosition;
        RectTransform boxRect = TalkBox[i];

        float time_X;
        // 보너스 대화가 아닐 떄
        if (!IsBonusTalk)
        {
            // 문자를 보낼 때의 시간 텍스트의 위치 계산
            if (isTimeToSend)
            {
                time_X = boxPos.x - (boxRect.rect.width * 0.5f + TalkTime_rect[i].rect.width * 0.5f);
            }
            // 문자를 받을 때의 시간 텍스트의 위치 계산
            else
            {
                time_X = boxPos.x + (boxRect.rect.width * 0.5f + TalkTime_rect[i].rect.width * 0.5f);
                TalkTime_text[i].text = phoneConMgr.Time_text.text;
                TalkTime_obj[i].SetActive(true);
            }
        }
        // 보너스 대화에서의 시간 텍스트의 위치 계산
        else
        {
            time_X = boxPos.x - (boxRect.rect.width * 0.5f + TalkTime_rect[i].rect.width * 0.5f);
        }
        float time_Y = boxPos.y - (boxRect.rect.height*0.5f - TalkTime_rect[i].rect.height*0.5f);
        // 시간 텍스트의 위치 적용
        TalkTime_obj[i].transform.localPosition = new Vector3(time_X,time_Y);
    }
    /// <summary>
    /// 문자를 보낸 시간 설정
    /// </summary>
    public void SetTalkTimeOnSend()
    {
        TalkTime_text[step].text = phoneConMgr.Time_text.text;
        TalkTime_obj[step].SetActive(true);
    }
    /// <summary>
    /// 메시지 종료 대기 코루틴
    /// </summary>
    /// <param name="time">대기 시간</param>
    public IEnumerator WaitforMessage(float time)
    {
        yield return new WaitForSeconds(time);

        Message.SetActive(false);
    }
    /// <summary>
    /// 카톡 대화방 초기화
    /// </summary>
    public void ResetTalk()
    {
        step = 0;
        phoneConMgr.wordStep = 0;
        phoneConMgr.ResetKeyboard();
        for (int i = 0; i < TalkBox_obj.Length; i++)
        {
            TalkBox_obj[i].SetActive(false);
            TalkTime_obj[i].SetActive(false);
        }
    }
}

/// <summary>
/// 카톡 대화 데이터 클래스
/// </summary>
[System.Serializable]
public class TalkingList
{
    /// <summary>
    /// 대화 순서대로 입력한 대화 문자열 배열
    /// </summary>
    public string[] Talks;
    /// <summary>
    /// 보상 점수
    /// </summary>
    public int[] Points;
    /// <summary>
    /// 보상 코인
    /// </summary>
    public int[] Coins;
    /// <summary>
    /// 키보드에 표시할 단어 배열
    /// </summary>
    public Words[] talkWords;
    /// <summary>
    /// 첫 수신 문자인지 여부
    /// </summary>
    public bool isReceiveFirst;
}
/// <summary>
/// 키보드에 표시할 단어들을 보관하는 데이터 클래스
/// </summary>
[System.Serializable]
public class Words
{
    /// <summary>
    /// 키보드에 표시할 단어들
    /// </summary>
    public string[] TalkWords;
}
/// <summary>
/// 답이 여러가지로 나뉠 수 있는 대화 표본
/// </summary>
[System.Serializable]
public class VariousAnswer
{
    /// <summary>
    /// 정답 문자열
    /// </summary>
    public string Talks;
    /// <summary>
    /// 키보드에 표시될 단어들
    /// </summary>
    public Words talkWords;
}