using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using System.Text.RegularExpressions;

public class SuggestWords : MonoBehaviour {

    public TalkingList[] TalkLists;
    public string[] foodList = new string[9] { "부대찌개", "순대국", "파닭", "떡볶이", "돈까스", "햄버거", "감자탕", "함박 스테이크", "김치 스파게티"};
    public string[] subjectList;
    public string[] marketList;
    public VariousAnswer[] Type12_VA;

    public int percentageOfCoin = 35;

    public int TalkType;

    public int[] BonusTalkNumber;

    public Text TalkTarget_text;

    Vector2[] TalkMinPos = new Vector2[4];
    Vector2[] TalkMaxPos = new Vector2[4];

    public RectTransform[] TalkBox = new RectTransform[4];
    public GameObject[] TalkBox_obj = new GameObject[4];
    public Text[] Talk_Texts = new Text[4];

    public Sprite[] TalkBox_Sprite = new Sprite[2];
    public Image[] TalkBox_Img = new Image[2];
    public RectTransform[] TalkBox_Textrect = new RectTransform[2];

    public GameObject Message;
    public Text Message_text;

    public GameObject[] TalkTime_obj = new GameObject[4];
    public RectTransform[] TalkTime_rect = new RectTransform[4];
    public Text[] TalkTime_text = new Text[4];
    public Color TextBlack_color;

    public GameObject Alarm_obj;

    public int step = 0;
    public int FontSize_w = 17;
    public int FontSize_h = 21;
    public int LineLimit = 15;

    public int case6_StringSize = 13;// ~
    public int space_StringSize = 3;
    public int case8_StringSize = 6;// !
    public int case9_StringSize = 11;// ?
    public int Initial_StringSize = 19;//초성
    //public int MultipleNum_width = 11;
    //public int MultipleNum_height = 9;

    public float WaitTimeMin = 15f;
    public float WaitTimeMax = 20f;

    public PhoneConMgr phoneConMgr;
    public Option option;
    public KatalkGameMgr katalkGameMgr;
    public CoinMgr coinMgr;
    public TutorialMgr tutorialMgr;
    public LevelMgr levelMgr;

    public bool isTimeToSend;
    public bool IskeyboardNeed = true;
    public bool IsBonusTalk = false;
    public bool IsTalkOn = false;
    
    public void SetWord()
    {
        int per = Random.Range(0,100);

        if (tutorialMgr.isTutorialOn)
        {
            TalkType = 1;
        }
        else
        {
            if (per < 80)
            {
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
            else
            {
                int per2 = Random.Range(0, 2);
                if (per2.Equals(0))
                    TalkType = 2;
                else
                    TalkType = 6;
            }
        }
        isTimeToSend = !(TalkLists[TalkType].isReceiveFirst);
        IsTalkOn = true;
        Alarm_Vibrate();
        phoneConMgr.Message_NoMission();
        ProcessingTalk();
    }
    void Alarm_Vibrate()
    {
        if (!phoneConMgr.isPhoneOn)
            Alarm_obj.SetActive(true);

        if (Application.platform.Equals(RuntimePlatform.Android) && option.IsVibrateOn)
        {
            if (!phoneConMgr.isPhoneOn)
                Handheld.Vibrate();
        }
        else if (!Application.platform.Equals(RuntimePlatform.Android) && option.IsVibrateOn)
        {
            if (!phoneConMgr.isPhoneOn)
                Debug.Log("Vibrate");
        }
    }
    IEnumerator WaitMission()
    {
        yield return new WaitForSeconds(Random.Range(WaitTimeMin,WaitTimeMax));

        SetWord();
    }
    public void StartWaitMission()
    {
        StartCoroutine(WaitMission());
    }
    public void ProcessingTalk()
    {
        StartCoroutine(ProcessingTalk_coroutine());
    }
    IEnumerator ProcessingTalk_coroutine()
    {
        float WaitTime = Random.Range(0.5f, 1.0f);
        if (step < TalkLists[TalkType].Talks.Length)
        {
            string talk = "";
            if (TalkType.Equals(1) && step.Equals(1))
            {
                talk += foodList[Random.Range(0, foodList.Length)];
            }
            else if (TalkType.Equals(4) && step.Equals(1))
                talk += subjectList[Random.Range(0, subjectList.Length)] + " ";
            else if (TalkType.Equals(11) && step.Equals(2))
                talk += marketList[Random.Range(0,marketList.Length)];

            talk += TalkLists[TalkType].Talks[step];

            if ((step % 2).Equals(1) && !IsBonusTalk)
                yield return new WaitForSeconds(WaitTime);

            Talk_Texts[step].text = talk;
            TalkBox_obj[step].SetActive(true);
            if (TalkLists[TalkType].Talks.Length > TalkLists[TalkType].Points.Length) //일반 톡
            {
                IsBonusTalk = false;
                if (phoneConMgr.wordStep < TalkLists[TalkType].talkWords.Length)
                {
                    IskeyboardNeed = true;
                }
                else
                {
                    IskeyboardNeed = false;
                }
                SetTalkPos(talk);
                SetTalkBox(talk, TalkBox[step], Talk_Texts[step]);
                
                if (isTimeToSend)
                { 
                    Talk_Texts[step].color = Color.gray;
                    isTimeToSend = false;
                }
                else
                {
                    Talk_Texts[step].color = TextBlack_color;
                    step++;
                    isTimeToSend = true;
                    ProcessingTalk();
                }//보내는건지 구분하는 bool 형을 바꿔주는 코드
            }
            else //보너스 톡 (독백)
            {
                IsBonusTalk = true;
                if (phoneConMgr.wordStep < TalkLists[TalkType].talkWords.Length)
                {
                    IskeyboardNeed = true;
                }
                else
                {
                    IskeyboardNeed = false;
                }
                SetTalkPos_Self(talk);
                Talk_Texts[step].color = Color.gray;
                SetTalkBox(talk, TalkBox[step], Talk_Texts[step]);
            }
            phoneConMgr.RandomKeyPos();
        }
        else
        {
            Message.SetActive(true);
            ulong reward = 0;
            string kind = "";
            katalkGameMgr.numOfMissionClear++;
            if (tutorialMgr.isTutorialOn)
            {
                Message_text.text = "채팅 미션을 완료 하셨습니다!";
                tutorialMgr.MissionResult_text.text = tutorialMgr.successMessage;
                tutorialMgr.Game_tutorial[10].SetActive(true);
            }
            else
            {
                MissionReward_end(ref reward, ref kind);
                Message_text.text = "채팅 미션을 완료 하셨습니다!\n 추가 " + kind + " +" + reward;
            }

            yield return new WaitForSeconds(WaitTime + 2.0f);
            ResetTalk();
            IsTalkOn = false;
            phoneConMgr.Message_NoMission();

            StartWaitMission();
            StartCoroutine(WaitforMessage(0.0f));
            //if (phoneConMgr.isPhoneOn)
            //    StartCoroutine(phoneConMgr.WaitPhoneDown(0.0f));

        }
    }
    void MissionReward_end(ref ulong reward, ref string kind)
    {
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
        else
        {
            reward = (ulong)TalkLists[TalkType].Points[TalkLists[TalkType].Points.Length - 1];
            levelMgr.StatArr[3].ApplyAbility(ref reward);
            katalkGameMgr.Score += reward;
            kind = "점수";
            
        }
    }
    public int SizeOfMessage(string talk)
    {
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
    public void SetTalkPos(string talk)//Min: Left & Bottom / Max = Right & Top
    {
        if(step.Equals(0))
        {
            if (isTimeToSend)//첫번째가 보내는 톡
            {
                TalkBox_Img[0].sprite = TalkBox_Sprite[0];
                TalkBox_Textrect[0].offsetMax = new Vector2(FontSize_w, 4) * -1;
                TalkBox_Textrect[0].offsetMin = new Vector2(8, 4);
                TalkMaxPos[0] = new Vector2(15, 135) * -1;

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
                else
                {
                    TalkMinPos[0] = new Vector2(420 - SizeOfMessage(talk), 710);
                }
            }
            else//첫번째가 받는 톡
            {
                TalkBox_Img[0].sprite = TalkBox_Sprite[1];
                TalkBox_Textrect[0].offsetMax = new Vector2(8, 4) * -1;
                TalkBox_Textrect[0].offsetMin = new Vector2(FontSize_w, 4);
                TalkMinPos[0] = new Vector2(15, 710 - talk.Length / LineLimit * FontSize_h);

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
                else
                {
                    TalkMaxPos[0] = new Vector2(420 - SizeOfMessage(talk), 135) * -1;
                }
            }
        }
        else
        {
            if (!isTimeToSend)//받는 톡
            {
                TalkBox_Img[step].sprite = TalkBox_Sprite[1];
                TalkBox_Textrect[step].offsetMax = new Vector2(8,4) * -1;
                TalkBox_Textrect[step].offsetMin = new Vector2(FontSize_w,4);
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
                else
                {
                    TalkMaxPos[step] = new Vector2(420 - SizeOfMessage(talk), TalkMaxPos[step - 1].y * -1 + 50 + TalkLists[TalkType].Talks[step - 1].Length / LineLimit * FontSize_h) * -1;
                    TalkMinPos[step] = new Vector2(TalkMaxPos[step - 1].x * -1, TalkMinPos[step - 1].y - 50 - talk.Length / LineLimit * FontSize_h);
                }
                
                if(!step.Equals(TalkLists[TalkType].Talks.Length-1))
                    Alarm_Vibrate();
            }
            else//보내는 톡
            {
                TalkBox_Img[step].sprite = TalkBox_Sprite[0];
                TalkBox_Textrect[step].offsetMax = new Vector2(FontSize_w, 4) * -1;
                TalkBox_Textrect[step].offsetMin = new Vector2(8, 4);
                if (step != 1)
                    phoneConMgr.wordStep++;
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
                else
                {
                    TalkMaxPos[step] = new Vector2(TalkMinPos[step - 1].x, TalkMaxPos[step - 1].y * -1 + 50 + TalkLists[TalkType].Talks[step - 1].Length / LineLimit * FontSize_h)*-1;
                    TalkMinPos[step] = new Vector2(420 - SizeOfMessage(talk), TalkMinPos[step - 1].y - 50 - talk.Length / LineLimit * FontSize_h);
                }
            }
        }
    }
    public void SetTalkPos_Self(string talk)
    {
        if(step != 0)
            phoneConMgr.wordStep++;
        TalkBox_Img[step].sprite = TalkBox_Sprite[0];
        TalkBox_Textrect[step].offsetMin = new Vector2(8, 4);
        TalkBox_Textrect[step].offsetMax = new Vector2(FontSize_w, 4) * -1;
        TalkMaxPos[0] = new Vector2(15, 135) * -1;
        if (step.Equals(0))
        {
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
            else
            {
                TalkMinPos[0] = new Vector2(420 - SizeOfMessage(talk), 710);
            }
        }
        else
        {
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
            else
            {
                TalkMaxPos[step] = new Vector2(15, TalkMaxPos[step - 1].y * -1 + 50 + TalkLists[TalkType].Talks[step - 1].Length / LineLimit * FontSize_h) * -1;
                TalkMinPos[step] = new Vector2(420 - SizeOfMessage(talk), TalkMinPos[step - 1].y - 50 - talk.Length / LineLimit * FontSize_h);
            }
        }
    }
    public void SetTalkBox(string talk, RectTransform talk_rect, Text talk_text)
    {
        talk_rect.offsetMin = TalkMinPos[step];
        talk_rect.offsetMax = TalkMaxPos[step];
        //if (TalkLists[TalkType].isReceiveFirst)
        //{
        //    if (!isTimeToSend)
        //    {
        //        //new Vector2(420 - FontSize * 15, 570 - TalkLists[TalkType].Talks.Length / FontSize * 15);
        //        talk_text.alignment = TextAnchor.MiddleLeft;
        //    }
        //    else
        //    {
        //        talk_text.alignment = TextAnchor.MiddleCenter;
        //    }
        //}
        //else
        //{
        //    if (isTimeToSend)
        //    {
        //        //new Vector2(420 - FontSize * 15, 570 - TalkLists[TalkType].Talks.Length / FontSize * 15);
        //        talk_text.alignment = TextAnchor.MiddleLeft;
        //    }
        //    else
        //    {
        //        talk_text.alignment = TextAnchor.MiddleCenter;
        //    }
        //}
        talk_text.alignment = TextAnchor.MiddleCenter;
        SetTalkTime(step);
    }
    public int WordNum(string String, string Word)
    {
        int Num;

        Num = String.Length - String.Replace(Word, "").Length;
        Num = Num / Word.Length;

        return Num;
    }
    public void SetTalkTime(int i)
    {
        Vector3 boxPos = TalkBox_obj[i].transform.localPosition;
        RectTransform boxRect = TalkBox[i];

        float time_X;
        if (!IsBonusTalk)
        {
            if (isTimeToSend)
            {
                time_X = boxPos.x - (boxRect.rect.width * 0.5f + TalkTime_rect[i].rect.width * 0.5f);
            }
            else
            {
                time_X = boxPos.x + (boxRect.rect.width * 0.5f + TalkTime_rect[i].rect.width * 0.5f);
                TalkTime_text[i].text = phoneConMgr.Time_text.text;
                TalkTime_obj[i].SetActive(true);
            }
        }
        else
        {
            time_X = boxPos.x - (boxRect.rect.width * 0.5f + TalkTime_rect[i].rect.width * 0.5f);
        }
        float time_Y = boxPos.y - (boxRect.rect.height*0.5f - TalkTime_rect[i].rect.height*0.5f);
        TalkTime_obj[i].transform.localPosition = new Vector3(time_X,time_Y);
    }
    public void SetTalkTimeOnSend()
    {
        TalkTime_text[step].text = phoneConMgr.Time_text.text;
        TalkTime_obj[step].SetActive(true);
    }
    public IEnumerator WaitforMessage(float time)
    {
        yield return new WaitForSeconds(time);

        Message.SetActive(false);
    }
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
    IEnumerator WaitKatalkMission()
    {
        yield return new WaitForSeconds(Random.Range(WaitTimeMin,WaitTimeMax));

        SetWord();
    }
}
[System.Serializable]
public class TalkingList
{
    public string[] Talks;
    public int[] Points;
    public int[] Coins;
    public Words[] talkWords;
    public bool isReceiveFirst;
}
[System.Serializable]
public class Words
{
    public string[] TalkWords;
}
[System.Serializable]
public class VariousAnswer
{
    public string Talks;
    public Words talkWords;
}