using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;

/// <summary>
/// 스마트폰 제어 클래스
/// </summary>
public class PhoneConMgr : MonoBehaviour {

    /// <summary>
    /// 상태에 따른 학생 이미지 스프라이트 배열
    /// </summary>
    public Sprite[] studentSprites;
    /// <summary>
    /// 메인 학생 이미지
    /// </summary>
    public Image Student;
    /// <summary>
    /// 상태에 따른 다른 학생들 이미지 그룹 오브젝트 배열
    /// </summary>
    public GameObject[] OnXXX_Students;

    /// <summary>
    /// 스마트폰 시계 텍스트
    /// </summary>
    public Text Time_text;
    /// <summary>
    /// 스마트폰 on/off 상태 텍스트 
    /// </summary>
    public Text OpenPhone_text;
    /// <summary>
    /// 스마트폰 UI상의 날짜 텍스트
    /// </summary>
    public Text Date_text;

    /// <summary>
    /// 스마트폰 게임 오브젝트
    /// </summary>
    public GameObject Phone;

    /// <summary>
    /// 스마트폰 on/off 애니메이션 효과
    /// </summary>
    public Animation PhoneOnOff_animation;

    public KatalkGameMgr katalkGameMgr;
    public DifficultyData katalkDifficultyData;
    public TeacherMgr teacherMgr;
    public InGameMgr inGameMgr;
    public TutorialMgr tutorialMgr;

    /// <summary>
    /// 폰이 열려있는지 여부
    /// </summary>
    public bool isPhoneOn = false;
    /// <summary>
    /// 게임이 시작되었는지 여부
    /// </summary>
    public bool startgame = false;

    /// <summary>
    /// 대화 단어 단계
    /// </summary>
    public int wordStep = -1;

    /// <summary>
    /// 키보드상의 버튼 오브젝트 배열
    /// </summary>
    public GameObject[] Key_buttons = new GameObject[6];
    /// <summary>
    /// 키보드상의 버튼 텍스트 배열
    /// </summary>
    public Text[] Key_texts = new Text[6];
    /// <summary>
    /// 대화 단어 생성기
    /// </summary>
    public SuggestWords suggestWords;
    /// <summary>
    /// 키보드 on/off 애니메이션 효과
    /// </summary>
    public Animation Keyboard_ani;
    /// <summary>
    /// 키보드가 열려있는지 여부
    /// </summary>
    public bool isKeyboardOn = false;
    /// <summary>
    /// 입력 시작 버튼
    /// </summary>
    public Button EnteringField_Button;

    /// <summary>
    /// 키보드 영역 오브젝트
    /// </summary>
    public GameObject KeyboardField_obj;
    /// <summary>
    /// 키보드 마스킹 범위 오브젝트
    /// </summary>
    public GameObject Range_obj;
    /// <summary>
    /// 입력 영역 오브젝트
    /// </summary>
    public GameObject EnteringField_obj;

    /// <summary>
    /// 카톡 대화방 리스트 화면 오브젝트
    /// </summary>
    public GameObject OutsideKatalk_obj;

    /// <summary>
    /// 배경음악 오디오소스
    /// </summary>
    public AudioSource BGM_as;


	void Start ()
    {
        // 튜토리얼이 아닐 때 대화 준비
        if(!tutorialMgr.isTutorialOn)
            StartCoroutine(StartWordWait());
        // 시간 설정
        TimeSet();
        StartCoroutine(TimeSetting());
        DateSet();
    }
    /// <summary>
    /// 대화 시작 대기 코루틴 시작
    /// </summary>
    public void StartCor_wordWait()
    {
        StartCoroutine(StartWordWait());
    }
    /// <summary>
    /// 대화 시작 대기 코루틴
    /// </summary>
    IEnumerator StartWordWait()
    {
        yield return new WaitForSeconds(0.5f);
        suggestWords.SetWord();
    }
    /// <summary>
    /// 시간 정보 업데이트 코루틴
    /// </summary>
    /// <returns></returns>
	IEnumerator TimeSetting()
    {
        yield return new WaitForSeconds(10f);

        TimeSet();

        StartCoroutine(TimeSetting());
    }
    /// <summary>
    /// 시간 정보 설정
    /// </summary>
    void TimeSet()
    {
        string h = System.DateTime.Now.ToString("hh");
        string tt = System.DateTime.Now.ToString("tt");
        if (tt.Equals("AM"))
            tt = "오전";
        else
            tt = "오후";

        Time_text.text = tt + " " + h + ":" + System.DateTime.Now.ToString("mm");
    }
    /// <summary>
    /// 시간 정보 설정
    /// </summary>
    void DateSet()
    {
        string year = System.DateTime.Now.ToString("yyyy");
        string month = System.DateTime.Now.ToString("MM");
        string day = System.DateTime.Now.ToString("dd");
        string dayOfWeek = System.DateTime.Now.DayOfWeek.ToString();
        Date_text.text = year + "년 " + month + "월 " + day + "일 " + EngToKor_dayOfWeek(dayOfWeek);
    }
    /// <summary>
    /// 영어 요일 -> 한글 요일로 변환
    /// </summary>
    /// <param name="eng">영어 요일</param>
    /// <returns>한글 요일</returns>
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
    /// <summary>
    /// 하단 버튼(멀티태스킹, 홈, 뒤로가기) 리스너
    /// </summary>
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
                    CloseKeyboard();
                break;
        }
    }

    /// <summary>
    /// 휴대폰 열고 닫는 함수
    /// </summary>
    public void OnOffPhone()
    {
        // 폰이 열려있으면
        if(isPhoneOn)
        {
            // BGM을 중단하고 휴대폰을 닫는다.
            BGM_as.Pause();
            PhoneOnOff_animation.CrossFade("ClosingPhone");
            isPhoneOn = false;
            Student.sprite = studentSprites[0];
            OnXXX_Students[0].SetActive(true);
            OnXXX_Students[1].SetActive(false);
            OpenPhone_text.text = "↑↑폰↑↑";
            Message_NoMission();
            katalkGameMgr.StartDecreaseEndurance();
        }
        // 폰이 닫혀있으면
        else
        {
            // 게임 시작하기 전이면 
            if (!startgame)
            {
                // BGM을 시작하며 게임 시작
                inGameMgr.BfStartGame.SetActive(false);
                BGM_as.Play();
                katalkGameMgr.StartPlusScore();
                inGameMgr.StartTimer();
                teacherMgr.StartTeacherChange();
                startgame = true;
            }
            // 게임 중이었으면, 일시정지였던 배경음악 재생
            else
                BGM_as.UnPause();

            // 휴대폰 열림 처리
            suggestWords.Alarm_obj.SetActive(false);
            isPhoneOn = true;
            Student.sprite = studentSprites[1];
            OnXXX_Students[1].SetActive(true);
            OnXXX_Students[0].SetActive(false);
            Message_NoMission();
            OpenPhone_text.text = "↓↓폰↓↓";
            PhoneOnOff_animation.Play();
        }
    }

    /// <summary>
    /// 대화의 단어 버튼의 위치 랜덤 설정
    /// </summary>
    public void RandomKeyPos()
    {
        // 할당된 숫자
        int[] allocatedNum = new int[6] { 0, 1, 2, 3, 4, 5 };
        // 키보드가 필요하고, 대화를 보내는 타이밍이거나 보너스 카톡일 때
        if (suggestWords.IskeyboardNeed && (!suggestWords.isTimeToSend || suggestWords.IsBonusTalk))
        {
            // 할당된 숫자의 배열 순서를 무작위로 섞는다.
            int limit = Random.Range(25, 37);
            for (int i = 0; i < limit; i++)
            {
                int r1 = Random.Range(0, allocatedNum.Length);
                int r2 = Random.Range(0, allocatedNum.Length);
                int temp = allocatedNum[r1];
                allocatedNum[r1] = allocatedNum[r2];
                allocatedNum[r2] = temp;
            }
            // 키 버튼의 위치를 일정 범위 내에서 무작위로 옮기고 필요한 대화 단어를 텍스트에 업데이트 한다.
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
            // 대화 단계가 모두 다했을 때 키보드가 필요 없음으로 설정한다.
            if (suggestWords.step.Equals(suggestWords.TalkLists[suggestWords.TalkType].Talks.Length))
                suggestWords.IskeyboardNeed = false;
        }
        // 키보드 텍스트를 비운다.
        else
        {
            for(int i = 0; i < allocatedNum.Length; i++)
                Key_texts[i].text = "";
        }
    }
    /// <summary>
    /// 키보드 열기
    /// </summary>
    public void OpenKeyboard()
    {
        EnteringField_Button.enabled = false;
        RandomKeyPos();
        isKeyboardOn = true;
        Keyboard_ani.Play();
    }
    /// <summary>
    /// 키보드 닫기
    /// </summary>
    public void CloseKeyboard()
    {
        EnteringField_Button.enabled = true;
        isKeyboardOn = false;
        Keyboard_ani.CrossFade("ClosingKeyboard");
        StartCoroutine(WaitForAnimation_keyboard());
    }
    /// <summary>
    /// 키보드 초기화
    /// </summary>
    public void ResetKeyboard()
    {
        EnteringField_Button.enabled = true;
        isKeyboardOn = false;
        EnteringField_obj.transform.localPosition = new Vector3(0,-420,0);
        Range_obj.transform.localPosition = new Vector3(0,140,0);
        KeyboardField_obj.transform.localPosition = new Vector3(0,-330,0);
    }
    /// <summary>
    /// 카톡 미션이 없음을 알린다
    /// </summary>
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
    /// <summary>
    /// 키보드 애니메이션 효과 종료 대기 후 위치 설정 코루틴
    /// </summary>
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
}
