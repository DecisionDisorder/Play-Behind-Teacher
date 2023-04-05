using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;

public class PhoneConMgr : MonoBehaviour {

    public Sprite[] studentSprites;
    public Image Student;
    public GameObject[] OnXXX_Students;

    public Text Time_text;
    public Text OpenPhone_text;
    public Text Date_text;

    public GameObject Phone;

    public Animation PhoneOnOff_animation;
    public Animation buttonOnOff_animation;

    public KatalkGameMgr katalkGameMgr;
    public KatalkDifficulty katalkDifficulty;
    public TeacherMgr teacherMgr;
    public InGameMgr inGameMgr;
    public TutorialMgr tutorialMgr;

    public bool isPhoneOn = false;
    public bool startgame = false;

    public int wordStep = -1;

    public GameObject[] Key_buttons = new GameObject[6];
    public Text[] Key_texts = new Text[6];
    public SuggestWords suggestWords;
    public Animation Keyboard_ani;
    public bool isKeyboardOn = false;
    public Button EnteringField_Button;

    public GameObject KeyboardField_obj;
    public GameObject Range_obj;
    public GameObject EnteringField_obj;

    public GameObject OutsideKatalk_obj;

    public AudioSource BGM_as;


	void Start ()
    {
        if(!tutorialMgr.isTutorialOn)
            StartCoroutine(StartWordWait());
        TimeSet();
        StartCoroutine(TimeSetting());
        DateSet();
    }
    public void StartCor_wordWait()
    {
        StartCoroutine(StartWordWait());
    }
    IEnumerator StartWordWait()
    {
        yield return new WaitForSeconds(0.5f);
        suggestWords.SetWord();
    }
	IEnumerator TimeSetting()
    {
        yield return new WaitForSeconds(10f);

        TimeSet();

        StartCoroutine(TimeSetting());
    }
    void TimeSet()
    {
        string h = System.DateTime.Now.ToString("hh");
        string tt = System.DateTime.Now.ToString("tt");
        if (tt.Equals("AM"))
            tt = "오전";
        else
            tt = "오후";

        Time_text.text = tt + " " + h + ":" + System.DateTime.Now.ToString("mm");
        /*if (h >= 12 && h < 24)
        {
            if(h != 12)
                
            else
                Time_text.text = tt+" 12" + ":" + System.DateTime.Now.ToString("mm");
        }
        else
        {
            if (h.Equals(0) || h.Equals(24))
                h = 12;

            Time_text.text = "오전 " + h + ":" + System.DateTime.Now.ToString("mm");
        }*/
    }
    void DateSet()
    {
        string year = System.DateTime.Now.ToString("yyyy");
        string month = System.DateTime.Now.ToString("MM");
        string day = System.DateTime.Now.ToString("dd");
        string dayOfWeek = System.DateTime.Now.DayOfWeek.ToString();
        Date_text.text = year + "년 " + month + "월 " + day + "일 " + EngToKor_dayOfWeek(dayOfWeek);
    }
    string EngToKor_dayOfWeek(string eng)
    {
        if(eng.Equals("Monday"))
        {
            return "월요일";
        }
        else if(eng.Equals("Tuesday"))
        {
            return "화요일";
        }
        else if (eng.Equals("Wendsday"))
        {
            return "수요일";
        }
        else if (eng.Equals("Thursday"))
        {
            return "목요일";
        }
        else if (eng.Equals("Friday"))
        {
            return "금요일";
        }
        else if (eng.Equals("Saturday"))
        {
            return "토요일";
        }
        else if (eng.Equals("Sunday"))
        {
            return "일요일";
        }
        else
        {
            return "오류";
        }
    }
    public void UnderButtons(int nkey)
    {
        switch(nkey)
        {
            case 0://멀티
                break;
            case 1://홈버튼
                break;
            case 2://뒤로가기
                if (isKeyboardOn)
                {
                    CloseKeyboard();
                }
                break;
        }
    }
    public void OnOffPhone()
    {
        if(isPhoneOn)
        {
            BGM_as.Pause();
            PhoneOnOff_animation.CrossFade("ClosingPhone");
            buttonOnOff_animation.CrossFade("phoneOnOffbutton_(OFF)");
            isPhoneOn = false;
            Student.sprite = studentSprites[0];
            OnXXX_Students[0].SetActive(true);
            OnXXX_Students[1].SetActive(false);
            OpenPhone_text.text = "↑↑폰↑↑";
            Message_NoMission();
            katalkGameMgr.StartDecreaseEndurance();
            StartCoroutine(WaitForAnimation_phone());
        }
        else
        {
            if (!startgame)
            {
                inGameMgr.BfStartGame.SetActive(false);
                BGM_as.Play();
                katalkGameMgr.StartPlusScore();
                katalkDifficulty.StartTimePlus();
                teacherMgr.StartTeacherChange();
                startgame = true;
            }
            else
                BGM_as.UnPause();
            suggestWords.Alarm_obj.SetActive(false);
            isPhoneOn = true;
            Student.sprite = studentSprites[1];
            OnXXX_Students[1].SetActive(true);
            OnXXX_Students[0].SetActive(false);
            Message_NoMission();
            OpenPhone_text.text = "↓↓폰↓↓";
            PhoneOnOff_animation.Play();
            buttonOnOff_animation.Play();
        }
    }
    IEnumerator WaitPhonepos()
    {
        yield return new WaitForSeconds(0.4f);
        Phone.transform.localPosition = new Vector3(-160,-410,0); 
    }

    public IEnumerator WaitPhoneDown(float time)
    {
        yield return new WaitForSeconds(time);

        OnOffPhone();
    }

    public void RandomKeyPos()
    {
        int[] allocatedNum = new int[6] { 0, 1, 2, 3, 4, 5 };
        //Debug.Log("keyboardneed: " + suggestWords.IskeyboardNeed);
        //Debug.Log("timetosend: " + !suggestWords.isTimeToSend);
        //Debug.Log("isbonus: " + suggestWords.IsBonusTalk);
        if (suggestWords.IskeyboardNeed && (!suggestWords.isTimeToSend || suggestWords.IsBonusTalk))
        {
            int limit = Random.Range(25, 37);
            for (int i = 0; i < limit; i++)
            {
                int r1 = Random.Range(0, allocatedNum.Length);
                int r2 = Random.Range(0, allocatedNum.Length);
                int temp = allocatedNum[r1];
                allocatedNum[r1] = allocatedNum[r2];
                allocatedNum[r2] = temp;
            }
            for (int i = 0; i < allocatedNum.Length; i++)
            {
                Key_buttons[i].transform.localPosition = new Vector3(Random.Range(-22f, 22f), Random.Range(-45f, 45f));

                if (allocatedNum[i] < suggestWords.TalkLists[suggestWords.TalkType].talkWords[wordStep].TalkWords.Length)
                {
                    Key_texts[i].text = suggestWords.TalkLists[suggestWords.TalkType].talkWords[wordStep].TalkWords[allocatedNum[i]];
                }
                else
                {
                    Key_texts[i].text = "";
                }
            }
            if (suggestWords.step.Equals(suggestWords.TalkLists[suggestWords.TalkType].Talks.Length))
                suggestWords.IskeyboardNeed = false;
        }
        else
        {
            for(int i = 0; i < allocatedNum.Length; i++)
                Key_texts[i].text = "";
        }
    }
    public void OpenKeyboard()
    {
        EnteringField_Button.enabled = false;
        RandomKeyPos();
        isKeyboardOn = true;
        Keyboard_ani.Play();
    }
    public void CloseKeyboard()
    {
        EnteringField_Button.enabled = true;
        isKeyboardOn = false;
        Keyboard_ani.CrossFade("ClosingKeyboard");
        StartCoroutine(WaitForAnimation_keyboard());
    }
    public void ResetKeyboard()
    {
        EnteringField_Button.enabled = true;
        isKeyboardOn = false;
        EnteringField_obj.transform.localPosition = new Vector3(0,-420,0);
        Range_obj.transform.localPosition = new Vector3(0,140,0);
        KeyboardField_obj.transform.localPosition = new Vector3(0,-330,0);
    }
    public void Message_NoMission()
    {
        if (!suggestWords.IsTalkOn)
        {
            OutsideKatalk_obj.SetActive(true);
            suggestWords.Message.SetActive(true);
            suggestWords.Message_text.text = "현재 진행중인 까톡 미션이 없습니다.";
        }
        else
        {
            OutsideKatalk_obj.SetActive(false);
            suggestWords.Message.SetActive(false);
        }
    }
    IEnumerator WaitForAnimation_keyboard()
    {
        while (Keyboard_ani.IsPlaying("ClosingKeyboard"))
        {
            yield return new WaitForEndOfFrame();
        }

        KeyboardField_obj.transform.localPosition = new Vector3(0,-330,0);
        Range_obj.transform.localPosition = new Vector3(0,140,0);
        EnteringField_obj.transform.localPosition = new Vector3(0,-420,0);
    }
    IEnumerator WaitForAnimation_phone()
    {
        while (PhoneOnOff_animation.IsPlaying("ClosingPhone"))
        {
            yield return new WaitForEndOfFrame();
        }

        Phone.transform.localPosition = new Vector3(-160, -410, 0);
        Phone.transform.localScale = new Vector3(0.08f,0.08f,1);
    }
}
