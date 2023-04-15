using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

/// <summary>
/// 과자 상점 시스템 관리 클래스
/// </summary>
public class SnackStore : MonoBehaviour {
    
    public CoinMgr coinMgr;
    public SnackGameMgr snackGameMgr;
    public ItemMgr itemMgr;
    public DataManager dataManager;

    /// <summary>
    /// 과자 아이템 정보 프리셋 배열
    /// </summary>
    public Snack_buscuit[] Buscuits;
    /// <summary>
    ///  구매 확인 메뉴
    /// </summary>
    public GameObject BuyCheck_Menu;
    /// <summary>
    /// (구매 확인) 샘플 이미지
    /// </summary>
    public Image ImgInfo_img;
    /// <summary>
    /// (구매 확인) 가격 정보 텍스트
    /// </summary>
    public Text priceInfo_text;
    /// <summary>
    /// (구매 확인) 과자 이름 텍스트
    /// </summary>
    public Text nameInfo_text;

    /// <summary>
    /// (과자 게임 내에서 적용) 선택한 과자 번호
    /// </summary>
    public int selectedBuscuit;

    /// <summary>
    /// 먹은 개별 과자의 양을 표시하기 위한 블랙 영역의 RectTransform
    /// </summary>
    public RectTransform[] snackBlack_rects;
    /// <summary>
    /// 개별 과자 알의 이미지 배열
    /// </summary>
    public Image[] snackInside_img;
    /// <summary>
    /// 개별 과자 알의 오브젝트 배열
    /// </summary>
    public GameObject[] snack_objs;
    /// <summary>
    /// 과자 슬롯별 이미지
    /// </summary>
    public Image[] SnackSlots_img;
    /// <summary>
    /// 책상 위에 있는 과자 봉지의 이미지
    /// </summary>
    public Image SnackOnDesk_img;
    /// <summary>
    /// 선택 중인 과자를 나타내는 배경 이미지 스프라이트
    /// </summary>
    public Sprite EquippedSlot_sprite;
    /// <summary>
    /// 선택 중이지 않은 과자를 나타내는 배경 이미지 스프라이트
    /// </summary>
    public Sprite UnEquippedSlot_sprite;

    /// <summary>
    /// 메시지 오브젝트
    /// </summary>
    public GameObject Message;
    /// <summary>
    /// 메시지 텍스트
    /// </summary>
    public Text Message_text;
    /// <summary>
    /// 메시지 종료 대기 코루틴
    /// </summary>
    IEnumerator messageWait;

    /// <summary>
    /// 과자 상점에서 선택한 과자의 번호
    /// </summary>
    private int selectedSnack;

    void Start () {
        // 시작 씬일 때 상점 정보 업데이트
        if (SceneManager.GetActiveScene().buildIndex.Equals(0))
            SettingStore();
        // 과자 및 관련 텍스트 정보 업데이트
        else if (SceneManager.GetActiveScene().buildIndex.Equals(3))
        {
            SettingSnack();
            SettingText();
        }
	}
    /// <summary>
    /// 과자 상점 정보 업데이트
    /// </summary>
	void SettingStore()
    {
        for(int i = 1; i < Buscuits.Length; i++)
        {
            Buscuits[i].numOfbuscuits_text.text = "x" + Buscuits[i].numOfbuscuit;
            Buscuits[i].price_text.text = Buscuits[i].price + " Coin";
            Buscuits[i].effect_text.text = "+" + Buscuits[i].effect + "%/s";
        }
    }
    /// <summary>
    /// 과자 구매 버튼 클릭 리스너
    /// </summary>
    public void BuyMenuButton(int nkey)
    {
        switch(nkey)
        {
            case 0://buy Menu on
                if (selectedSnack != 0)
                {
                    nameInfo_text.text = Buscuits[selectedSnack].name;
                    priceInfo_text.text = Buscuits[selectedSnack].price + " Coin";
                    ImgInfo_img.sprite = Buscuits[selectedSnack].snackSprite;
                    BuyCheck_Menu.SetActive(true);
                    
                    if(BackkeyMgr.numOfOpenedMenus.Equals(2))
                        BackkeyMgr.numOfOpenedMenus++;
                }
                else
                {
                    WriteMessage("기본 과자는 구매할 수 없습니다.");
                }
                break;
            case 1://buy Menu off
                BuyCheck_Menu.SetActive(false);
                BackkeyMgr.numOfOpenedMenus--;
                break;
        }
    }
    /// <summary>
    /// 구매할 과자 종류 선택
    /// </summary>
    /// <param name="kind">과자 번호</param>
    public void SetKind(int kind)
    {
        selectedSnack = kind;
    }
    /// <summary>
    /// 과자 구매 처리
    /// </summary>
    public void OnBuy()
    {
        // 구매 확인 메뉴 닫기
        BuyMenuButton(1);
        // 코인 보유량 확인
        if ((ulong)Buscuits[selectedSnack].price <= CoinMgr.Coin)
        {
            // 코인 소모 처리
            CoinMgr.Coin -= (ulong)Buscuits[selectedSnack].price;
            coinMgr.setCoinText();
            // 아이템 구매 처리
            Buscuits[selectedSnack].numOfbuscuit++;
            // 구매한 과자의 개수가 1개일 때 용량 및 과자 알 개수 초기화
            if(Buscuits[selectedSnack].numOfbuscuit.Equals(1))
            {
                Buscuits[selectedSnack].snackCapacity = 75;
                Buscuits[selectedSnack].snackLeft = 10;
            }
            // UI 업데이트
            itemMgr.CoinSound_buy();
            WriteMessage(Buscuits[selectedSnack].name+" 구매 완료!!");
            Buscuits[selectedSnack].numOfbuscuits_text.text = "x" + Buscuits[selectedSnack].numOfbuscuit;
            dataManager.SaveData();
        }
        else
        {
            WriteMessage("코인이 부족합니다.");
        }
    }
    
    /// <summary>
    /// 남은 과자 계산
    /// </summary>
    /// <param name="minus">과자 섭취량</param>
    public void CalculateSnackLeft(int minus)
    {
        // 과자 봉투가 새거일 때 (기본 과자 제외)
        if(Buscuits[selectedBuscuit].snackLeft.Equals(10) && Buscuits[selectedBuscuit].snackCapacity.Equals(75) && selectedSnack != 0)
        {
            // 과자 봉투 수량 1개 차감
            Buscuits[selectedBuscuit].numOfbuscuit--;
            Buscuits[selectedBuscuit].numOfbuscuits_text.text = "x" + Buscuits[selectedBuscuit].numOfbuscuit;

            // 남은 과자 봉투 수량 색상 업데이트
            if (Buscuits[selectedBuscuit].numOfbuscuit.Equals(0))
                Buscuits[selectedBuscuit].numOfbuscuits_text.color = Color.red;
            else
                Buscuits[selectedBuscuit].numOfbuscuits_text.color = Color.green;
        }

        // 과자 알 일정 비율 소모 처리
        Buscuits[selectedBuscuit].snackCapacity -= minus;
        // 과자 알 먹은 부분 표시 업데이트
        snackBlack_rects[Buscuits[selectedBuscuit].snackLeft - 1].offsetMin = new Vector2(0, Buscuits[selectedBuscuit].snackCapacity);

        // 과자 알 하나를 다 먹었을 때
        if (Buscuits[selectedBuscuit].snackCapacity <= 0)
        {
            // 남은 과자알 개수 차감
            snack_objs[Buscuits[selectedBuscuit].snackLeft - 1].SetActive(false);
            Buscuits[selectedBuscuit].snackLeft--;

            // 미션 성공 조건 확인
            if (snackGameMgr.isMissionOn_EatSnack)
                snackGameMgr.Mission_SnackEat();

            // 다음 과자 알 초기화
            Buscuits[selectedBuscuit].snackCapacity = 75;
        }
        // 과자 알을 모두 다 먹은 경우
        if(Buscuits[selectedBuscuit].snackLeft.Equals(0))
        {
            // 과자 봉투 수량 1개 차감
            Buscuits[selectedBuscuit].numOfbuscuit--;
            SettingText();

            // 봉투가 0개일 때
            if(Buscuits[selectedBuscuit].numOfbuscuit <= 0)
            {
                // 다음 과자 봉투 선택
                if(selectedBuscuit != 0)
                    FindNextSnack();
            }

            // 새로운 봉투를 뜯어, 과자 알 개수 초기화
            Buscuits[selectedBuscuit].snackLeft = 10;

            // 과자 알 먹은 부분 표시 이미지 초기화
            for(int i = 0; i < snack_objs.Length; i++)
            {
                snack_objs[i].SetActive(true);
                snackBlack_rects[i].offsetMin = new Vector2(0, 75);
            }
        }
    }
    /// <summary>
    /// 과자알 남은 개수 불러오기
    /// </summary>
    public void LoadSnackLeft()
    {
        // 선택한 과자 알이 0개이면 10개로 초기화
        if (Buscuits[selectedBuscuit].snackLeft.Equals(0))
            Buscuits[selectedBuscuit].snackLeft = 10;

        // 과자 알 오브젝트 활성화
        for(int i = 0; i < Buscuits[selectedBuscuit].snackLeft; i++)
        {
            snack_objs[i].SetActive(true);
        }

        // 남은 과자 개수가 10개(full)이 아니면, 먹은 과자 알 개수 만큼 비활성화
        if(Buscuits[selectedBuscuit].snackLeft != 10)
        {
            for(int i = Buscuits[selectedBuscuit].snackLeft; i < 10; i++)
            {
                snack_objs[i].SetActive(false);
            }
        }
        // 과자 알 마다의 남은 양 계산
        LoadSnackCapacity();
    }
    /// <summary>
    /// 과자 알 남은 양 만큼 black 영역 계산
    /// </summary>
    public void LoadSnackCapacity()
    {
        for(int i = 0; i < 10; i++)
        {
            snackBlack_rects[i].offsetMin = new Vector2(0, 75);
        }
        snackBlack_rects[Buscuits[selectedBuscuit].snackLeft-1].offsetMin = new Vector2(0, Buscuits[selectedBuscuit].snackCapacity);
    }
    /// <summary>
    /// 과자를 다 먹었을 때 다른 과자 자동 선택
    /// </summary>
    void FindNextSnack()
    {
        // 다 먹은 과자의 슬롯을 장착 해제 상태로 변경
        SnackSlots_img[selectedBuscuit].sprite = UnEquippedSlot_sprite;
        SnackSlots_img[selectedBuscuit].type = Image.Type.Simple;

        // 기존 과자의 왼쪽 과자를 우선으로 기본 과자까지 남은 개수 검사하여 보유한 과자를 선택
        for (int i = selectedBuscuit - 1; i >= 0; i--)
        {
            if(i.Equals(0))
            {
                selectedBuscuit = i;
            }
            else if (Buscuits[i].numOfbuscuit > 0)
            {
                selectedBuscuit = i;
                break;
            }
        }
        SettingSnack();
    }
    /// <summary>
    /// 선택한 과자 장착 처리
    /// </summary>
    void SettingSnack()
    {
        // 책상 위 과자 이미지 업데이트
        SnackOnDesk_img.sprite = Buscuits[selectedBuscuit].snackSprite;
        // 과자 슬롯 업데이트
        SnackSlots_img[selectedBuscuit].sprite = EquippedSlot_sprite;
        SnackSlots_img[selectedBuscuit].type = Image.Type.Simple;
        // 과자 알 이미지 업데이트
        for(int i = 0; i < 10; i++)
        {
            snackInside_img[i].sprite = Buscuits[selectedBuscuit].snackInsideSprite;
        }
        LoadSnackLeft();
    }
    /// <summary>
    /// 과자 봉지 개수 정보 업데이트
    /// </summary>
    void SettingText()
    {
        // 기본 과자를 제외하고 남은 개수 업데이트
        for (int i = 1; i < Buscuits.Length; i++)
        {
            Buscuits[i].numOfbuscuits_text.text = "x" + Buscuits[i].numOfbuscuit;
            if (Buscuits[i].numOfbuscuit.Equals(0))
                Buscuits[i].numOfbuscuits_text.color = Color.red;
            else
                Buscuits[i].numOfbuscuits_text.color = Color.green;
        }
    }
    /// <summary>
    /// 선택한 과자의 장착 처리
    /// </summary>
    /// <param name="kind">장착할 과자 번호</param>
    public void ChangeSnack(int kind)
    {
        // 과자의 개수가 0이 아니거나, 기본 과자일 때
        if (!Buscuits[kind].numOfbuscuit.Equals(0) || kind.Equals(0))
        {
            // 장착 처리
            SnackSlots_img[selectedBuscuit].sprite = UnEquippedSlot_sprite;
            SnackSlots_img[selectedBuscuit].type = Image.Type.Simple;
            selectedBuscuit = kind;
            SettingSnack();
        }
        else
        {
            WriteMessage("과자가 없으므로 꺼낼 수 없습니다.");
        }
    }
    /// <summary>
    /// 메시지 표시
    /// </summary>
    /// <param name="message">메시지 내용</param>
    /// <param name="time">지속 시간</param>
    public void WriteMessage(string message, float time = 1.2f)
    {
        messageWait = WaitforMessage(time);
        StopCoroutine(messageWait);

        Message.SetActive(true);
        Message_text.text = message;
        StartCoroutine(messageWait);
    }
    /// <summary>
    /// 메시지 종료 대기 코루틴
    /// </summary>
    /// <param name="time">지속 시간</param>
    IEnumerator WaitforMessage(float time)
    {
        yield return new WaitForSeconds(time);

        Message.SetActive(false);
    }
}

/// <summary>
/// 과자 아이템 데이터 클래스
/// </summary>
[System.Serializable]
public class Snack_buscuit
{
    /// <summary>
    /// 과자 이름
    /// </summary>
    public string name;
    /// <summary>
    /// 과자 가격
    /// </summary>
    public int price;
    /// <summary>
    /// 과자 효과 수치
    /// </summary>
    public int effect;
    /// <summary>
    /// 남은 과자 봉지 개수
    /// </summary>
    public int numOfbuscuit;
    /// <summary>
    /// 남은 과자 알의 개수
    /// </summary>
    public int snackLeft;
    /// <summary>
    /// 섭취 중인 과자 알의 남은 양
    /// </summary>
    public int snackCapacity;
    
    /// <summary>
    /// 과자 봉지 이미지 스프라이트
    /// </summary>
    public Sprite snackSprite;
    /// <summary>
    /// 과자 알 이미지 스프라이트
    /// </summary>
    public Sprite snackInsideSprite;
    /// <summary>
    /// 과자 가격 정보 텍스트
    /// </summary>
    public Text price_text;
    /// <summary>
    /// 과자 효과 정보 텍스트
    /// </summary>
    public Text effect_text;
    /// <summary>
    /// 과자 남은 봉지 개수 텍스트
    /// </summary>
    public Text numOfbuscuits_text;
}