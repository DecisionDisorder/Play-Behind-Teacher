using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

/// <summary>
/// 도전과제 시스템 관리 클래스
/// </summary>
public class AchievementMgr : MonoBehaviour {

    public CoinMgr coinMgr;
    public TvGameMgr tvGameMgr;
    public KatalkGameMgr katalkGameMgr;
    public SnackGameMgr snackGameMgr;
    public InGameMgr inGameMgr;
    public DataManager dataManager;
    public MainSceneMgr mainSceneMgr;

    /// <summary>
    /// 도전과제 콘텐츠 인스턴스
    /// </summary>
    public Achv_Item[] achievements;
    /// <summary>
    /// 도전과제 메뉴
    /// </summary>
    public GameObject Achievement_Menu;
    /// <summary>
    /// 도저놔제 메뉴 활성화 애니메이션
    /// </summary>
    public Animation Achievement_MenuAni;
    /// <summary>
    /// 코인 획득 효과음 오디오소스
    /// </summary>
    public AudioSource CoinGet_AS;
    /// <summary>
    /// 도전과제 알람 뱃지 오브젝트
    /// </summary>
    public GameObject Badge;
    /// <summary>
    /// 수령하지 않은 도전과제 보상 개수
    /// </summary>
    public int numOfAchieve = 0;

    private void Start()
    {
        CheckAll();
    }

    /// <summary>
    /// 도전과제 메뉴 제어 함수
    /// </summary>
    public void AchvMenuControl(int key)
    {
        switch(key)
        {
            case 0:
                if (BackkeyMgr.numOfOpenedMenus < 1)
                {
                    Achievement_Menu.SetActive(true);
                    BackkeyMgr.numOfOpenedMenus++;
                    Achievement_MenuAni.Play();
                    SetNameLevelText(-1);
                    CheckAll();
                }
                else
                {
                    mainSceneMgr.WriteMessage("동시에 다른 두개의 메뉴를 띄을 수 없습니다.");
                }
                break;
            case 1:
                BackkeyMgr.numOfOpenedMenus--;
                inGameMgr.CloseMenu(Achievement_MenuAni, Achievement_Menu);
                break;
        }
    }

    /// <summary>
    /// 전체 도전과제 항목 확인
    /// </summary>
    public void CheckAll()
    {
        numOfAchieve = 0;
        CheckBestscore();
        CheckCoin();
        CheckAcuCoin();
        CheckFinish();
        CheckTvMission();
        CheckKtMission();
        CheckSnackMission();
        CheckAllMission();
        CheckBadge();
    }
    /// <summary>
    /// 최고점수 도전과제 달성 확인
    /// </summary>
	public void CheckBestscore() 
    {
        int code = 0;

        ulong bs1 = tvGameMgr.BestScore, bs2 = katalkGameMgr.BestScore, bs3 = snackGameMgr.BestScore;

        if(bs1 > bs2 && bs1 > bs3)
        {
            CheckingAchv(bs1,code);
        }
        else if(bs2 > bs1 && bs2 > bs3)
        {
            CheckingAchv(bs2, code);
        }
        else
        {

            CheckingAchv(bs3, code);
        }
    }
    /// <summary>
    /// 보유 코인 도전과제 달성 확인
    /// </summary>
    public void CheckCoin()
    {
        int code = 1;
        CheckingAchv(CoinMgr.Coin, code);
    }
    /// <summary>
    /// 누적 코인 도전과제 달성 확인
    /// </summary>
    public void CheckAcuCoin()
    {
        int code = 2;
        CheckingAchv(CoinMgr.accumulatedCoins, code);
    }
    /// <summary>
    /// 선생님한테 걸린 횟수 도전과제 달성 확인
    /// </summary>
    public void CheckFinish()
    {
        int code = 3;
        CheckingAchv((ulong)inGameMgr.numOfFinish, code);
    }
    /// <summary>
    /// TV 미션 성공 횟수 도전과제 달성 확인
    /// </summary>
    public void CheckTvMission()
    {
        int code = 4;
        CheckingAchv((ulong)tvGameMgr.numOfMissionClear, code);
    }
    /// <summary>
    /// 카톡 미션 성공 횟수 도전과제 달성 확인
    /// </summary>
    public void CheckKtMission()
    {
        int code = 5;
        CheckingAchv((ulong)katalkGameMgr.numOfMissionClear, code);
    }
    /// <summary>
    /// 과자 미션 성공 횟수 도전과제 달성 확인
    /// </summary>
    public void CheckSnackMission()
    {
        int code = 6;
        CheckingAchv((ulong)snackGameMgr.numOfMissionClear, code);
    }
    /// <summary>
    /// 전체 게임 미션 도전과제 달성 확인
    /// </summary>
    public void CheckAllMission()
    {
        int code = 7;
        CheckingAchv((ulong)(tvGameMgr.numOfMissionClear + katalkGameMgr.numOfMissionClear + snackGameMgr.numOfMissionClear), code);
    }
    /// <summary>
    /// 특정 도전과제 달성 확인
    /// </summary>
    /// <param name="target">대상 숫자</param>
    /// <param name="code">도전과제 코드</param>
    public void CheckingAchv(ulong target, int code)
    {
        // 특정 도전 과제의 보상을 모두 수령한게 아니라면
        if (achievements[code].step < achievements[code].rewards.Length)
        {
            // 슬라이더 최대값 조정
            achievements[code].State_slider.maxValue = achievements[code].StepConditions[achievements[code].step];

            // 달성률 텍스트 포맷팅
            string t = string.Format("{0:#,###}", target);
            if (t.Equals("")) { t = "0"; }
            string c = string.Format("{0:#,###}", achievements[code].StepConditions[achievements[code].step]);

            // 달성률을 나타내는 UI 업데이트
            achievements[code].State_Text.text = t + "/" + c;
            achievements[code].State_slider.value = target;
            achievements[code].Reward_text.text = "+" + achievements[code].rewards[achievements[code].step];

            // 도전과제 달성 조건 계산
            if (target >= (ulong)achievements[code].StepConditions[achievements[code].step])
            {
                achievements[code].State_img.color = Color.green;
                achievements[code].Reward_text.color = Color.green;
                numOfAchieve++;
            }
            else
            {
                achievements[code].State_img.color = Color.yellow;
                achievements[code].Reward_text.color = Color.yellow;
            }
        }
        // 모든 도전과제 보상을 받은 경우, 달성 완료 UI 표시
        else
        {
            achievements[code].State_slider.value = achievements[code].State_slider.maxValue;
            achievements[code].State_img.color = Color.green;
            achievements[code].State_Text.text = "도전과제 달성 완료";
            achievements[code].State_Text.color = Color.red;
            achievements[code].Reward_text.text = "완료";
            achievements[code].Reward_text.color = Color.red;
        }
    }
    /// <summary>
    /// 도전과제 보상 지급
    /// </summary>
    /// <param name="code">도전과제 코드</param>
    public void OfferReward(int code)
    {
        // 모든 보상을 수령한게 아니라면
        if (achievements[code].step < achievements[code].rewards.Length)
        {
            // 해당 도전과제를 달성한게 맞으면
            if (achievements[code].State_img.color.Equals(Color.green))
            {
                // 코인 보상 지급
                CoinMgr.Coin += (ulong)achievements[code].rewards[achievements[code].step];
                CoinMgr.accumulatedCoins += (ulong)achievements[code].rewards[achievements[code].step];
                coinMgr.setCoinText();
                // 도전과제 단계 상승 및 도전과제 UI 업데이트
                achievements[code].step++;
                SetNameLevelText(code);
                CoinGet_AS.Play();
                numOfAchieve--;
                CheckBadge();
                CheckCoin();
                CheckAcuCoin();

                // 해당 도전과제의 진행도 갱신
                switch (code)
                {
                    case 0:
                        CheckBestscore();
                        break;
                    case 1:
                        CheckCoin();
                        break;
                    case 2:
                        CheckAcuCoin();
                        break;
                    case 3:
                        CheckFinish();
                        break;
                    case 4:
                        CheckTvMission();
                        break;
                    case 5:
                        CheckKtMission();
                        break;
                    case 6:
                        CheckSnackMission();
                        break;
                    case 7:
                        CheckAllMission();
                        break;
                }
                dataManager.SaveData();
            }
        }
        else
        {
            mainSceneMgr.WriteMessage("이미 모두 완료한 도전과제 입니다!");
        }
    }
    /// <summary>
    /// 보상을 수령하지 않은 도전과제가 있음을 알림
    /// </summary>
    void CheckBadge()
    {
        if (numOfAchieve > 0)
            Badge.SetActive(true);
        else
            Badge.SetActive(false);
    }
    /// <summary>
    /// 도전과제 이름과 단계 표기
    /// </summary>
    /// <param name="num">도전과제 코드</param>
    void SetNameLevelText(int num)
    {
        if (num.Equals(-1))
        {
            for (int i = 0; i < achievements.Length; i++)
                SetNameLevelText(i);
        }
        else
        {
            if(achievements[num].step < achievements[num].rewards.Length)
                achievements[num].name_text.text = achievements[num].name + " (" + (achievements[num].step + 1) + ")";
            else
                achievements[num].name_text.text = achievements[num].name + " (Max)";
        }
    }
}
/// <summary>
/// 도전과제 콘텐츠 데이터 클래스
/// </summary>
[System.Serializable]
public class Achv_Item
{
    /// <summary>
    /// 도전과제 이름
    /// </summary>
    public string name;
    /// <summary>
    /// 도전과제 현재 단계
    /// </summary>
    public int step;
    /// <summary>
    /// 도전과제 단계별 달성 조건
    /// </summary>
    public int[] StepConditions;
    /// <summary>
    /// 도전과제 단계별 보상
    /// </summary>
    public int[] rewards;
    /// <summary>
    /// 도전과제 보상 텍스트
    /// </summary>
    public Text Reward_text;
    /// <summary>
    /// 도전과제 진행도 텍스트
    /// </summary>
    public Text State_Text;
    /// <summary>
    /// 도전과제 이름 텍스트
    /// </summary>
    public Text name_text;
    /// <summary>
    /// 도전과제 진행도 슬라이더
    /// </summary>
    public Slider State_slider;
    /// <summary>
    /// 도전과제 상태 이미지
    /// </summary>
    public Image State_img;
}