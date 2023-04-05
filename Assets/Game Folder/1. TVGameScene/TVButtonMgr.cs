using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class TVButtonMgr : MonoBehaviour {

    public Sprite[] studentSprites;
    public Image Student;
    public GameObject[] OnXXX_Students;

    public Sprite TvOFF_spt;
    public Sprite TvON_spt;

    public Image TvDisplay_img;
    public GameObject TvDisplay_obj;
    public Text ChannelSign_Text;
    public Text ChannelSign_RC_Text;

    public GameObject ChannelSign_BackImg;
    public GameObject ChannelSign_RC;

    public GameObject Light;

    public int TvChannel = 5;
    public int ChannelMax = 30;

    public bool isTvOn = false;
    public bool startgame = false;

    public TvGameMgr tvGameMgr;
    public TeacherMgr teacherMgr;
    public TVGameDifficulty tvGameDifficulty;
    public InGameMgr inGameMgr;
    public TutorialMgr tutorialMgr;

    public GameObject RemoteController;
    public bool RCMove = false;
    public GameObject MoveMessage;

    public AudioSource BGM_as;

    IEnumerator MessageErase_cor;

    public void PressRemoteCon(int command)
    {
        switch (command)
        {
            case -1:
                Light.SetActive(false);
                if(isTvOn)
                    Student.sprite = studentSprites[1];
                else
                    Student.sprite = studentSprites[0];
                break;
            case 0:
                Light.SetActive(true);
                if (isTvOn)
                {
                    BGM_as.Pause();
                    isTvOn = false;
                    ChannelSign_RC.SetActive(false);
                    Student.sprite = studentSprites[2];
                    OnXXX_Students[0].SetActive(true);
                    OnXXX_Students[1].SetActive(false);
                    tvGameMgr.StartDecreaseEndurance();
                }
                else
                {
                    if (!startgame)
                    {
                        inGameMgr.BfStartGame.SetActive(false);
                        tvGameDifficulty.StartTimePlus();
                        BGM_as.Play();
                        tvGameMgr.StartPlusScore();
                        teacherMgr.StartTeacherChange();
                        if (!tutorialMgr.isTutorialOn)
                            tvGameMgr.ExecuteMission(Random.Range(tvGameMgr.WaitMissionMin, tvGameMgr.WaitMissionMax));
                        startgame = true;
                    }
                    else
                        BGM_as.UnPause();
                    isTvOn = true;
                    Student.sprite = studentSprites[2];
                    OnXXX_Students[1].SetActive(true);
                    OnXXX_Students[0].SetActive(false);
                    ChannelSign_RC.SetActive(true);
                    ChannelSign_RC_Text.text = "채널\n" + TvChannel;
                }
                TvDisplay_obj.SetActive(isTvOn);
                if (tvGameMgr.isPowerMissionOn)
                    tvGameMgr.CheckTVpower();
                break;
            case 1:
                Light.SetActive(true);
                if (isTvOn)
                {
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
            case 2:
                Light.SetActive(true);
                if (isTvOn)
                {
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
            case 3://Check Channel
                if (isTvOn)
                {
                    Student.sprite = studentSprites[2];
                    tvGameMgr.CheckChannel(TvChannel);
                }
                break;
        }
    }
    void ShowChannel()
    {
        ChannelSign_BackImg.SetActive(true);
        ChannelSign_Text.text = "채널\n" + TvChannel;
        
        StartCoroutine(MessageErase_cor);
    }
    IEnumerator WaitChannelSign()
    {
        yield return new WaitForSeconds(0.7f);

        ChannelSign_BackImg.SetActive(false);
    }
    
}
//IEnumerator coroutine;
//public void RCmove_Down()
//{
//    RCMove = true;
//    coroutine = WaitRCmove();
//    StartCoroutine(coroutine);
//}
//public void RCmove_Up()
//{
//    RCMove = false;
//    MoveMessage.SetActive(false);
//    StopCoroutine(coroutine);
//}
//IEnumerator WaitRCmove()
//{
//    yield return new WaitForSecondsRealtime(0.3f);

//    MoveMessage.SetActive(true);
//    StartCoroutine(MovingRC());
//}
//IEnumerator MovingRC()
//{
//    yield return new WaitForEndOfFrame();

//    if (Application.platform.Equals(RuntimePlatform.Android))
//    {
//        Touch touch = Input.GetTouch(0);
//        RemoteController.transform.position = new Vector3(touch.position.x, RemoteController.transform.position.y,0);
//    }
//    else
//    {
//        RemoteController.transform.position = new Vector3(Input.mousePosition.x, RemoteController.transform.position.y,0);
//    }

//    RCmoveLimit();

//    if (RCMove)
//        StartCoroutine(MovingRC());
//}
//void RCmoveLimit()
//{
//    float x = RemoteController.transform.localPosition.x;
//    float y = RemoteController.transform.localPosition.y;

//    if (x > 232)
//        RemoteController.transform.localPosition = new Vector3(232, y, 0);
//    else if (x < -232)
//        RemoteController.transform.localPosition = new Vector3(-232, y, 0);

//}