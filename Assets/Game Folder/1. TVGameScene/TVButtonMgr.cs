using UnityEngine;
using System.Collections;
using UnityEngine.UI;

/// <summary>
/// TV 게임에서의 버튼 클릭 리스너 클래스
/// </summary>
public class TVButtonMgr : MonoBehaviour {

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
    /// TV 종료시의 TV 화면 스프라이트
    /// </summary>
    public Sprite TvOFF_spt;
    /// <summary>
    /// TV 켰을 때의 TV 화면 스프라이트
    /// </summary>
    public Sprite TvON_spt;

    /// <summary>
    /// TV 화면 이미지
    /// </summary>
    public Image TvDisplay_img;
    /// <summary>
    /// TV 화면 오브젝트
    /// </summary>
    public GameObject TvDisplay_obj;
    /// <summary>
    /// TV에 표시되는 현재 채널 텍스트
    /// </summary>
    public Text ChannelSign_Text;
    /// <summary>
    /// 하단 UI 리모컨에 표시되는 현재 채널 텍스트
    /// </summary>
    public Text ChannelSign_RC_Text;

    /// <summary>
    /// TV 채널 표시 배경
    /// </summary>
    public GameObject ChannelSign_BackImg;
    /// <summary>
    /// 하단 UI 리모컨의 채널 오브젝트
    /// </summary>
    public GameObject ChannelSign_RC;

    /// <summary>
    /// 리모컨 불빛을 표현하기 위한 오브젝트
    /// </summary>
    public GameObject Light;

    /// <summary>
    /// 현재 TV 채널
    /// </summary>
    public int TvChannel = 5;
    /// <summary>
    /// TV 채널 최대치
    /// </summary>
    public int ChannelMax = 30;

    /// <summary>
    /// TV가 켜져있는지 여부
    /// </summary>
    public bool isTvOn = false;
    /// <summary>
    /// 게임이 시작되었는지 여부
    /// </summary>
    public bool startgame = false;

    public TvGameMgr tvGameMgr;
    public TeacherMgr teacherMgr;
    public InGameMgr inGameMgr;
    public TutorialMgr tutorialMgr;

    /// <summary>
    /// 리모컨 이미지 오브젝트
    /// </summary>
    public GameObject RemoteController;

    /// <summary>
    /// 배경음악 오디오 소스
    /// </summary>
    public AudioSource BGM_as;

    /// <summary>
    /// 채널 표시 지우기 대기 코루틴
    /// </summary>
    IEnumerator MessageErase_cor;

    /// <summary>
    /// 하단 UI 리모컨 버튼 클릭 리스너 함수
    /// </summary>
    /// <param name="command">명령 코드</param>
    public void PressRemoteCon(int command)
    {
        switch (command)
        {
            case -1: // 리모컨 누르기 종료
                Light.SetActive(false);
                if(isTvOn)
                    Student.sprite = studentSprites[1];
                else
                    Student.sprite = studentSprites[0];
                break;
            case 0: // 리모컨 전원 버튼 누르기
                Light.SetActive(true);
                // TV가 켜져있으면
                if (isTvOn)
                {
                    // 배경음악을 정지하고, TV OFF 처리
                    BGM_as.Pause();
                    isTvOn = false;
                    ChannelSign_RC.SetActive(false);
                    Student.sprite = studentSprites[2];
                    OnXXX_Students[0].SetActive(true);
                    OnXXX_Students[1].SetActive(false);
                    // 학생들의 인내심 차감 시작
                    tvGameMgr.StartDecreaseEndurance();
                }
                // TV가 꺼져있으면
                else
                {
                    // 게임이 시작되지 않은 상태면
                    if (!startgame)
                    {
                        // 게임 시작 처리 및 배경음악 재생
                        inGameMgr.BfStartGame.SetActive(false);
                        inGameMgr.StartTimer();
                        BGM_as.Play();
                        tvGameMgr.StartPlusScore();
                        teacherMgr.StartTeacherChange();
                        if (!tutorialMgr.isTutorialOn)
                            tvGameMgr.ExecuteMission(Random.Range(tvGameMgr.WaitMissionMin, tvGameMgr.WaitMissionMax));
                        startgame = true;
                    }
                    // 진행중이었으면, 일시중지 중이던 BGM 재생
                    else
                        BGM_as.UnPause();
                    // TV ON 처리
                    isTvOn = true;
                    Student.sprite = studentSprites[2];
                    OnXXX_Students[1].SetActive(true);
                    OnXXX_Students[0].SetActive(false);
                    ChannelSign_RC.SetActive(true);
                    ChannelSign_RC_Text.text = "채널\n" + TvChannel;
                }
                TvDisplay_obj.SetActive(isTvOn);
                // TV 껐다 켜기 미션 체크
                if (tvGameMgr.isPowerMissionOn)
                    tvGameMgr.CheckTVpower();
                break;
            case 1: // 채널 올리기 처리
                Light.SetActive(true);
                // TV가 켜져있을 때에만
                if (isTvOn)
                {
                    // 리모컨을 누르며 TV 채널 올리기 처리 및 채널 표시
                    Student.sprite = studentSprites[2];
                    MessageErase_cor = WaitChannelSign();
                    StopCoroutine(MessageErase_cor);
                    TvChannel++;
                    if (TvChannel > ChannelMax)
                        TvChannel = 1;
                    ShowChannel();
                    ChannelSign_RC_Text.text = "채널\n" + TvChannel;
                }
                break;
            case 2: // 채널 내리기 처리
                Light.SetActive(true);
                // TV가 켜져있을 때에만
                if (isTvOn)
                {
                    // 리모컨을 누르면 TV 채널 내리기 처리 및 채널 표시
                    Student.sprite = studentSprites[2];
                    MessageErase_cor = WaitChannelSign();
                    StopCoroutine(MessageErase_cor);
                    TvChannel--;
                    if (TvChannel < 1)
                        TvChannel = ChannelMax;
                    ShowChannel();
                    ChannelSign_RC_Text.text = "채널\n" + TvChannel;
                }
                break;
            case 3:// 목표 채널 미션 확인
                if (isTvOn)
                {
                    Student.sprite = studentSprites[2];
                    tvGameMgr.CheckChannel(TvChannel);
                }
                break;
        }
    }
    /// <summary>
    /// 현재 채널 표시
    /// </summary>
    void ShowChannel()
    {
        ChannelSign_BackImg.SetActive(true);
        ChannelSign_Text.text = "채널\n" + TvChannel;
        
        // 일정 시간 이후 채널 표시가 종료되도록 코루틴 시작
        StartCoroutine(MessageErase_cor);
    }
    /// <summary>
    /// 채널 표시 종료 대기 코루틴
    /// </summary>
    IEnumerator WaitChannelSign()
    {
        yield return new WaitForSeconds(0.7f);

        ChannelSign_BackImg.SetActive(false);
    }
    
}