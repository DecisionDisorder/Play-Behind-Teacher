using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

/// <summary>
/// 아이템 관리 클래스
/// </summary>
public class ItemMgr : MonoBehaviour {

    public CoinMgr coinMgr;
    public InGameMgr inGameMgr;
    public TeacherMgr teacherMgr;
    public TvGameMgr tvGameMgr;
    public KatalkGameMgr katalkGameMgr;
    public SnackGameMgr snackGameMgr;
    public Option option;
    public DataManager dataManager;
    public TutorialMgr tutorialMgr;

    /// <summary>
    /// 메시지 오브젝트
    /// </summary>
    public GameObject Message;
    /// <summary>
    /// 메시지 내용 텍스트
    /// </summary>
    public Text Message_text;
    /// <summary>
    /// 메시지 종료 대기 코루틴
    /// </summary>
    IEnumerator messageWait;

    /// <summary>
    /// 아이템 상점 메뉴
    /// </summary>
    public GameObject ItemStore_Menu;
    /// <summary>
    /// 스마트폰 상점 메뉴
    /// </summary>
    public GameObject PhoneStore_Menu;
    /// <summary>
    /// 간식 상점 메뉴
    /// </summary>
    public GameObject SnackStore_Menu;
    /// <summary>
    /// 상점 메뉴 활성화 애니메이션
    /// </summary>
    public Animation[] Store_MenuAni;

    /// <summary>
    /// 아이템 선택 메뉴
    /// </summary>
    public GameObject SelectItem_Menu;
    /// <summary>
    /// 선택한 아이템 이름 텍스트
    /// </summary>
    public Text SelectedItemName_text;
    /// <summary>
    /// 선택한 아이템의 설명 텍스트
    /// </summary>
    public Text SelectedItemExplain_text;
    /// <summary>
    /// 선택한 아이템의 이미지
    /// </summary>
    public Image SelectedItemImage_img;

    /// <summary>
    /// 구매처리 효과음 오디오 소스
    /// </summary>
    public AudioSource coinBuy_AS;

    /// <summary>
    /// (임시 변수) 장착 대상 슬롯
    /// </summary>
    int slotNum;
    /// <summary>
    /// 슬롯에 아이탬 등록하는 메뉴
    /// </summary>
    public GameObject SelectItemBySlot_Menu;

    /// <summary>
    /// 아이템 최대 보유량
    /// </summary>
    public int numOfItemMax = 5;

    /// <summary>
    /// 슬롯에 장착한 아이템 종류 (대 분류 0: 미장착/ 1: 수면총/ 2: 간식)
    /// </summary>
    public int[] ItemKind = new int[2];
    /// <summary>
    /// 슬롯에 장착한 아이템 (소분류)
    /// </summary>
    public int[] ItemDetail = new int[2];
    /// <summary>
    /// 아이템 슬롯 이미지
    /// </summary>
    public Image[] ItemSlot_img = new Image[2];
    /// <summary>
    /// 아이템 슬롯 오브젝트
    /// </summary>
    public GameObject[] ItemSlot = new GameObject[2];
    /// <summary>
    /// 아이템 슬롯별 번호 텍스트
    /// </summary>
    public Text[] ItemSlotNum = new Text[2];
    /// <summary>
    /// 슬롯에 장착한 아이템 이름 텍스트
    /// </summary>
    public Text[] EquippedItem_Text = new Text[2];
    /// <summary>
    /// 빈 슬롯 이미지 스프라이트
    /// </summary>
    public Sprite EmptySlot_sprite;

    /// <summary>
    /// 아이템 가격 초기화 대기 시간
    /// </summary>
    public int ResetTime = 6000;
    /// <summary>
    /// 아이템 가격 초기화 대기 시간 텍스트
    /// </summary>
    public Text ResetTime_text;
    /// <summary>
    /// 가격 초기화 후 처음으로 구매하는 아이템인지 여부
    /// </summary>
    public bool isFirstItem = true;
    /// <summary>
    /// 구매마다 추가되는 비용
    /// </summary>
    public int[] AddCost = new int[2] { 15, 30 };

    /// <summary>
    /// (임시 변수) 장착 선택한 아이템 종류
    /// </summary>
    int temp_kind;
    /// <summary>
    /// (임시 변수) 장착 선택한 세부 아이템 번호
    /// </summary>
    int temp_detail;

    private void Start()
    {
        messageWait = WaitforMessage(1.2f);
        // 게임 씬인 경우
        if (!SceneManager.GetActiveScene().name.Equals("MainScene"))
        {
            // 슬롯 별로 아이템의 이미지와 수량 정보를 업데이트한다.
            for (int i = 0; i < ItemSlotNum.Length; i++)
            {
                if (ItemKind[i].Equals(1))
                {
                    ItemSlot[i].SetActive(true);
                    ItemSlot_img[i].sprite = sleepingGun[ItemDetail[i]].ItemImg;
                    ItemSlotNum[i].text = "x" + sleepingGun[ItemDetail[i]].numOfItem;
                }
                else if (ItemKind[i].Equals(2))
                {
                    ItemSlot[i].SetActive(true);
                    ItemSlot_img[i].sprite = snack[ItemDetail[i]].ItemImg;
                    ItemSlotNum[i].text = "x" + snack[ItemDetail[i]].numOfItem;
                }
                else if(ItemKind[i].Equals(3))
                {
                    ItemSlot[i].SetActive(true);
                    ItemSlot_img[i].sprite = glasses[ItemDetail[i]].ItemImg;
                    ItemSlotNum[i].text = "x" + glasses[ItemDetail[i]].numOfItem;
                }
                else if(ItemKind[i].Equals(0))
                {
                    ItemSlot[i].SetActive(false);
                    ItemSlotNum[i].text = "x0";
                }
            }
        }
        // 시작 화면인 경우
        else
        {
            // 아이템 가격 및 수량 계산
            SetSGPrice();
            SetSNPrice();
            SetGLPrice();
            SetSGNumOfItem();
            SetSNNumOfItem();
            SetGLNumOfItem();
            // 아이템 슬롯 정보 업데이트
            for(int i = 0; i < EquippedItem_Text.Length; i++)
            {
                if (ItemKind[i].Equals(1))
                {
                    ItemSlot[i].SetActive(true);
                    ItemSlot_img[i].sprite = sleepingGun[ItemDetail[i]].ItemImg;
                    EquippedItem_Text[i].text = "<슬롯 " + (i + 1) + ">\n" + sleepingGun[ItemDetail[i]].name;
                }
                else if (ItemKind[i].Equals(2))
                {
                    ItemSlot[i].SetActive(true);
                    ItemSlot_img[i].sprite = snack[ItemDetail[i]].ItemImg;
                    EquippedItem_Text[i].text = "<슬롯 " + (i + 1) + ">\n" + snack[ItemDetail[i]].name;
                }
                else if(ItemKind[i].Equals(3))
                {
                    ItemSlot[i].SetActive(true);
                    ItemSlot_img[i].sprite = glasses[ItemDetail[i]].ItemImg;
                    EquippedItem_Text[i].text = "<슬롯 " + (i + 1) + ">\n" + glasses[ItemDetail[i]].name;
                }
                else if(ItemKind[i].Equals(0))
                {
                    ItemSlot[i].SetActive(false);
                    EquippedItem_Text[i].text = "<슬롯 " + (i + 1) + ">";
                }
            }
        }
        
        if (!isFirstItem)
            StartCoroutine(ResetTime_Timer());
    }
    /// <summary>
    /// 씬 리로드시에 호출될 함수
    /// </summary>
    public void ReloadStart()
    {
        Start();
    }
    /// <summary>
    /// 아이템을 장착할 슬롯 지정
    /// </summary>
    /// <param name="slot"></param>
    public void SetSlot(int slot)
    {
        slotNum = slot;
        BackkeyMgr.numOfOpenedMenus++;
        SelectItemBySlot_Menu.SetActive(true);
    }
    /// <summary>
    /// 슬롯으로 아이템 장착하는 메뉴 닫기
    /// </summary>
    public void CloseMenuBySlot()
    {
        SelectItemBySlot_Menu.SetActive(false);
    }
    /// <summary>
    /// 아이템 종류 선택
    /// </summary>
    /// <param name="kind">아이템 종류(대분류)</param>
    public void SelectKind(int kind)
    {
        temp_kind = kind;
    }
    /// <summary>
    /// 세부 아이템 선택
    /// </summary>
    /// <param name="detail">아이템 번호(소분류)</param>
    public void SelectDetail(int detail)
    {
        temp_detail = detail;

        // 아이템 장착 경로에 따른 메뉴 활성화/비활성화
        if (!SelectItemBySlot_Menu.activeInHierarchy)
            SettingSelectMenu();
        else
        {
            SelectItem(slotNum);
            SelectItemBySlot_Menu.SetActive(false);
        }
    }
    /// <summary>
    /// 아이템 선택 메뉴 설정
    /// </summary>
    void SettingSelectMenu()
    {
        // 아이템 종류에 따라 아이템의 이름, 효과 설명, 이미지 업데이트
        switch (temp_kind)
        {
            case 1:
                SelectedItemName_text.text = sleepingGun[temp_detail].name;
                SelectedItemExplain_text.text = "<color=green>"+sleepingGun[temp_detail].Possibility + "%</color>의 확률로 선생님을 <color=red>" + sleepingGun[temp_detail].SleepingTime + "초</color> 동안 재운다.";
                SelectedItemImage_img.sprite = sleepingGun[temp_detail].ItemImg;
                break;
            case 2:
                SelectedItemName_text.text = snack[temp_detail].name;
                SelectedItemExplain_text.text = "<color=green>사용즉시</color> 졸림을 <color=red>" + snack[temp_detail].RecoverEndurance + "</color>만큼 회복한다.";
                SelectedItemImage_img.sprite = snack[temp_detail].ItemImg;
                break;
            case 3:
                SelectedItemName_text.text = glasses[temp_detail].name;
                SelectedItemExplain_text.text = "<color=green>사용 시,</color> 선생님이 뒤도는 시간이 <color=red>" + glasses[temp_detail].timeUp + "%</color>만큼 늘어난다.";
                if (glasses[temp_detail].isSpecial)
                    GLExplainTexts[temp_detail].text += "\n+ 뒤도는 시간이 보인다.";
                SelectedItemImage_img.sprite = glasses[temp_detail].ItemImg;
                break;
        }
        if (BackkeyMgr.numOfOpenedMenus < 3)
            BackkeyMgr.numOfOpenedMenus++;
        SelectItem_Menu.SetActive(true);
    }
    /// <summary>
    /// 아이템 슬롯 위치 교환
    /// </summary>
    public void ChangeItem()
    {
        int Ftemp_detail, Ftemp_kind;
        Sprite temp_sprite;
        string temp_name;
        // 1번 슬롯 아이템 내용 백업
        temp_sprite = ItemSlot_img[0].sprite;
        Ftemp_kind = ItemKind[0];
        Ftemp_detail = ItemDetail[0];
        temp_name = EquippedItem_Text[0].text;

        // 1번 슬롯에 2번 슬롯 아이템 내용 복사
        ItemKind[0] = ItemKind[1];
        ItemDetail[0] = ItemDetail[1];
        ItemSlot_img[0].sprite = ItemSlot_img[1].sprite;
        EquippedItem_Text[0].text = EquippedItem_Text[1].text;

        // 2번 슬롯에 백업해둔 아이템 내용 복사
        ItemKind[1] = Ftemp_kind;
        ItemDetail[1] = Ftemp_detail;
        ItemSlot_img[1].sprite = temp_sprite;
        EquippedItem_Text[1].text = temp_name;

        // 기존에 둘 중에 빈 슬롯이 있을 때의 처리
        if (ItemSlot_img[0].sprite == null)
            ItemSlot[0].SetActive(false);
        else
            ItemSlot[0].SetActive(true);

        if (ItemSlot_img[1].sprite == null)
            ItemSlot[1].SetActive(false);
        else
            ItemSlot[1].SetActive(true);

        // 슬롯 번호 유지
        EquippedItem_Text[0].text = EquippedItem_Text[0].text.Replace("슬롯 2", "슬롯 1");
        EquippedItem_Text[1].text = EquippedItem_Text[1].text.Replace("슬롯 1", "슬롯 2");

        WriteMessage("아이템 슬롯 교환을 완료하였습니다.",0.5f);
    }

    /// <summary>
    /// 특정 슬롯에 아이템 장착 처리
    /// </summary>
    /// <param name="slot">슬롯 번호</param>
    public void SelectItem(int slot)
    {
        // 슬롯 번호가 유효한지 확인
        if (slot >= 0)
        {
            // 다른 슬롯에 같은 종류의 아이템이 장착되어 있는지 확인
            if (!isSameItem(slot))
            {
                // 아이템 종류별로 대응
                switch (temp_kind)
                {
                    case 1: // 마취총 아이템의 세부 아이템 수량 확인 후 장착 처리
                        if (sleepingGun[temp_detail].numOfItem > 0)
                        {
                            ItemKind[slot] = temp_kind;
                            ItemDetail[slot] = temp_detail;
                            ItemSlot[slot].SetActive(true);
                            ItemSlot_img[slot].sprite = sleepingGun[ItemDetail[slot]].ItemImg;
                            EquippedItem_Text[slot].text = "<슬롯 " + (slot + 1) + ">\n" + sleepingGun[ItemDetail[slot]].name;
                            WriteMessage(sleepingGun[ItemDetail[slot]].name + "아이템을 " + (slot + 1) + "번 슬롯에 장착하였습니다.");
                        }
                        else
                            WriteMessage("해당 아이템이 1개 이상인 경우에 장착 가능합니다.");
                        break;
                    case 2:
                        // 간식 아이템의 세부 아이템 수량 확인 후 장착 처리
                        if (snack[temp_detail].numOfItem > 0)
                        {
                            ItemKind[slot] = temp_kind;
                            ItemDetail[slot] = temp_detail;
                            ItemSlot[slot].SetActive(true);
                            ItemSlot_img[slot].sprite = snack[ItemDetail[slot]].ItemImg;
                            EquippedItem_Text[slot].text = "<슬롯 " + (slot + 1) + ">\n" + snack[ItemDetail[slot]].name;
                            WriteMessage(snack[ItemDetail[slot]].name + "아이템을 " + (slot + 1) + "번 슬롯에 장착하였습니다.");
                        }
                        else
                            WriteMessage("해당 아이템이 1개 이상인 경우에 장착 가능합니다.");
                        break;
                    case 3:
                        // 안경 아이템의 세부 아이템 수량 확인 후 장착 처리
                        if(glasses[temp_detail].numOfItem > 0)
                        {
                            ItemKind[slot] = temp_kind;
                            ItemDetail[slot] = temp_detail;
                            ItemSlot[slot].SetActive(true);
                            ItemSlot_img[slot].sprite = glasses[ItemDetail[slot]].ItemImg;
                            EquippedItem_Text[slot].text = "<슬롯 " + (slot + 1) + ">\n" + glasses[ItemDetail[slot]].name;
                            WriteMessage(glasses[ItemDetail[slot]].name + "아이템을 " + (slot + 1) + "번 슬롯에 장착하였습니다.");
                        }
                        else
                            WriteMessage("해당 아이템이 1개 이상인 경우에 장착 가능합니다.");
                        break;
                }
                // 장착 경로에 맞추어 메뉴 닫기
                if (!SelectItemBySlot_Menu.activeInHierarchy)
                {
                    SelectItem_Menu.SetActive(false);
                }
                else
                {
                    SelectItemBySlot_Menu.SetActive(false);
                }
                BackkeyMgr.numOfOpenedMenus--;
            }
            else
            {
                WriteMessage("같은 종류의 아이템을 선택할 수 없습니다.");
            }
        }
        else
        {
            SelectItem_Menu.SetActive(false);
            BackkeyMgr.numOfOpenedMenus--;
        }

    }
    /// <summary>
    /// 다른 슬롯에 같은 종류의 아이템을 끼웠는지 확인
    /// </summary>
    /// <param name="slot">슬롯 번호</param>
    /// <returns>같은 종류의 아이템을 장착했는지 여부</returns>
    bool isSameItem(int slot)
    {
        // 1번 슬롯에 장착하고자 할 때
        if(slot.Equals(1))
        {
            // 0번 슬롯에 이미 장착되어 있는지 확인
            if (ItemKind[0].Equals(temp_kind))
                return true;
            else
                return false;
        }
        // 0번 슬롯에 장착하고자 할 때
        else
        {
            // 1번 슬롯에 이미 장착되어 있는지 확인
            if (ItemKind[1].Equals(temp_kind))
                return true;
            else
                return false;
        }
    }

    /// <summary>
    /// 인게임에서 아이템 사용 처리
    /// </summary>
    /// <param name="slot"></param>
    public void UseItem(int slot)
    {
        // 게임이 시작 전인지 확인
        if (!inGameMgr.BfStartGame.activeInHierarchy)
        {
            // 튜토리얼 진행 중이 아닌지 확인
            if (!tutorialMgr.isTutorialOn)
            {
                // 아이템 종류별 사용 처리
                if (ItemKind[slot].Equals(1))
                    ActiveGun(slot);
                else if (ItemKind[slot].Equals(2))
                    ActiveSnack(slot);
                else if (ItemKind[slot].Equals(3))
                    ActiveGlasses(slot);
                else
                    WriteMessage("아이템이 없습니다.");
            }
            else
            {
                WriteMessage("튜토리얼 진행중엔 아이템을 사용하실 수 없습니다.");
            }
        }
        else
            WriteMessage("게임이 진행중일 때 사용 가능합니다.");
            
    }

    /// <summary>
    /// 특정 상점 메뉴 활성화 처리
    /// </summary>
    /// <param name="key">상점 번호</param>
    public void StoreMenusOn(int key)
    {
        BackkeyMgr.numOfOpenedMenus++;
        switch(key)
        {
            case 0:
                ItemStore_Menu.SetActive(true);
                Store_MenuAni[0].Play();
                break;
            case 1:
                PhoneStore_Menu.SetActive(true);
                Store_MenuAni[1].Play();
                break;
            case 2:
                SnackStore_Menu.SetActive(true);
                Store_MenuAni[2].Play();
                break;
        }
    }
    /// <summary>
    /// 특정 상점 메뉴닫기
    /// </summary>
    /// <param name="key">상점 번호</param>
    public void StoreMenusOff(int key)
    {
        BackkeyMgr.numOfOpenedMenus = 1;
        switch(key)
        {
            case 0:
                inGameMgr.CloseMenu(Store_MenuAni[0],ItemStore_Menu);
                break;
            case 1:
                inGameMgr.CloseMenu(Store_MenuAni[1], PhoneStore_Menu);
                break;
            case 2:
                inGameMgr.CloseMenu(Store_MenuAni[2], SnackStore_Menu);
                break;
        }
    }
    /// <summary>
    /// 구매 효과음 재생
    /// </summary>
    public void CoinSound_buy()
    {
        coinBuy_AS.Play();
    }
    /// <summary>
    /// 메시지 표시
    /// </summary>
    /// <param name="message">메시지 내용</param>
    /// <param name="time">지속 시간</param>
    public void WriteMessage(string message, float time = 1.2f)
    {
        StopCoroutine(messageWait);

        Message.SetActive(true);
        Message_text.text = message;

        messageWait = WaitforMessage(time);
        StartCoroutine(messageWait);
    }
    /// <summary>
    /// 메시지 종료 대기 코루틴
    /// </summary>
    /// <param name="time">대기 시간</param>
    IEnumerator WaitforMessage(float time)
    {
        yield return new WaitForSeconds(time);

        Message.SetActive(false);
    }
    /// <summary>
    /// 아이템 가격 초기화 타이머
    /// </summary>
    /// <returns></returns>
    IEnumerator ResetTime_Timer()
    {
        yield return new WaitForSecondsRealtime(1.0f);

        // 초기화 대기 시간 차감
        ResetTime--;
        if (ResetTime < 0)
            ResetTime = 0;

        // 텍스트 정보 업데이트
        if(SceneManager.GetActiveScene().buildIndex.Equals(0))
            ResetTime_text.text = "가격 초기화까지 남은 시간:\n"+ResetTime/60+"분 "+ResetTime%60+"초";
        if (ResetTime > 0)
        {
            StartCoroutine(ResetTime_Timer());
        }
        else
        {
            // 아이템 가격 초기화 및 UI 업데이트
            for (int i = 0; i < sleepingGun.Length; i++)
            {
                sleepingGun[i].price = sleepingGun[i].OriginalPrice;
                snack[i].price = snack[i].OriginalPrice;
                if (SceneManager.GetActiveScene().buildIndex.Equals(0))
                {
                    SG_priceText[i].text = sleepingGun[i].price + "Coin";
                    SN_priceText[i].text = snack[i].price + "Coin";
                    GL_priceText[i].text = glasses[i].price + "Coin";
                }
            }
            isFirstItem = true;
            ResetTime = 6000;
        }
    }
    
    #region 수면총 [1]
    /// <summary>
    /// 수면총 아이템 데이터
    /// </summary>
    public SleepingGun[] sleepingGun = new SleepingGun[4];

    /// <summary>
    /// 선생님이 수면 중인지 여부
    /// </summary>
    public static bool isTeacherSleeping;
    /// <summary>
    /// 평시 상태의 선생님
    /// </summary>
    public GameObject normalEffect_Teacher;
    /// <summary>
    /// 아이템 효과 적용된 선생님
    /// </summary>
    public GameObject itemEffect_Teacher;
    /// <summary>
    /// 수면총 가격 텍스트 배열
    /// </summary>
    public Text[] SG_priceText = new Text[4];
    /// <summary>
    /// 수면총 설명 텍스트 배열
    /// </summary>
    public Text[] SGExplainTexts = new Text[4];
    /// <summary>
    /// 수면총 설명 오브젝트 배열
    /// </summary>
    public GameObject[] SGExplain_obj = new GameObject[4];
    /// <summary>
    /// 수면총 보유량 텍스트 배열
    /// </summary>
    public Text[] SGnumOfItem_text = new Text[4];

    /// <summary>
    /// 수면 효과음 오디오 소스
    /// </summary>
    public AudioSource SleepingSound_AS;
    /// <summary>
    /// 수면 효과음 오디오 클립 리소스
    /// </summary>
    public AudioClip[] SleepingSoundClips;

    /// <summary>
    /// 수면총 설명 활성화
    /// </summary>
    /// <param name="detail">아이템 인덱스</param>
    public void SetSGExplainText(int detail)
    {
        if (!SGExplain_obj[detail].activeInHierarchy)
        {
            SGExplain_obj[detail].SetActive(true);
            SGExplainTexts[detail].text = "<color=green>" + sleepingGun[detail].Possibility + "%</color>의 확률로 선생님을 <color=red>" + sleepingGun[detail].SleepingTime + "초</color> 동안 재운다.";
        }
        else
            SGExplain_obj[detail].SetActive(false);
    }
    /// <summary>
    /// 수면총 가격 UI 업데이트
    /// </summary>
    public void SetSGPrice()
    {
        for(int i = 0; i < sleepingGun.Length; i++)
        {
            SG_priceText[i].text = sleepingGun[i].price + "Coin";
        }
    }
    /// <summary>
    /// 수면총 아이템 개수 UI 업데이트
    /// </summary>
    public void SetSGNumOfItem()
    {
        for (int i = 0; i < sleepingGun.Length; i++)
        {
            SGnumOfItem_text[i].text = sleepingGun[i].numOfItem+"개";
        }
    }
    /// <summary>
    /// 수면총 구매 처리
    /// </summary>
    /// <param name="detail">아이템 인덱스</param>
    public void PurchaseSG(int detail)
    {
        // 코인 보유량 확인
        if (CoinMgr.Coin >= (ulong)sleepingGun[detail].price)
        {
            // 아이템 최대 보유량 확인
            if (sleepingGun[detail].numOfItem < numOfItemMax)
            {
                // 코인 소모 처리
                CoinMgr.Coin -= (ulong)sleepingGun[detail].price;
                // 아이템 지급 처리
                sleepingGun[detail].numOfItem++;
                // 특수 아이템 여부에 따른 가격 증가 계산
                if (sleepingGun[detail].isSpecial)
                    sleepingGun[detail].price += AddCost[1];
                else
                    sleepingGun[detail].price += AddCost[0];
                // 가격 증가에 따른 UI 업데이트
                SG_priceText[detail].text = sleepingGun[detail].price + "Coin";
                // 가격 초기화 이후 첫 구매일 때는 타이머 시작
                if (isFirstItem)
                {
                    StartCoroutine(ResetTime_Timer());
                    isFirstItem = false;
                }
                // 아이템 구매 관련 UI 업데이트
                SetSGNumOfItem();
                coinMgr.setCoinText();
                CoinSound_buy();
                WriteMessage(sleepingGun[detail].name + "을 구매하셨습니다.");
                dataManager.SaveData();
            }
            else
                WriteMessage("1가지 아이템 당 최대 " + numOfItemMax + "개까지만 보유할 수 있습니다.");
        }
        else
            WriteMessage("코인이 부족합니다.");
    }
    /// <summary>
    /// 수면총 아이템 효과 발동
    /// </summary>
    /// <param name="slot">슬롯 번호</param>
    public void ActiveGun(int slot)
    {
        // 수면총 아이템 보유량 확인
        if (sleepingGun[ItemDetail[slot]].numOfItem > 0)
        {
            // 수면총 아이템 적용 확률 계산
            int p = Random.Range(0, 100);
            if (p < sleepingGun[ItemDetail[slot]].Possibility)
            {
                // 아이템 소모 처리
                sleepingGun[ItemDetail[slot]].numOfItem--;
                // 수면총 효과 적용
                normalEffect_Teacher.SetActive(false);
                itemEffect_Teacher.SetActive(true);
                WriteMessage(sleepingGun[ItemDetail[slot]].name + " 사용에 성공하여 선생님이 잠에 듭니다!");
                ItemSlotNum[slot].text = "x" + sleepingGun[ItemDetail[slot]].numOfItem;
                isTeacherSleeping = true;

                // 수면 효과음 재생
                int i = Random.Range(0,SleepingSoundClips.Length);
                SleepingSound_AS.clip = SleepingSoundClips[i];
                SleepingSound_AS.Play();

                // 수면총 개수가 0개가 될 때 슬롯 장착 해제 처리
                if(sleepingGun[ItemDetail[slot]].numOfItem <= 0)
                {
                    ItemKind[slot] = 0;
                    ItemSlot[slot].SetActive(false);
                }
                StartCoroutine(WaitforSleepGun(sleepingGun[ItemDetail[slot]].SleepingTime));
            }
            else
            {
                // 아이템 소모 처리
                sleepingGun[ItemDetail[slot]].numOfItem--;
                // 아이템 소모 관련 UI 업데이트
                ItemSlotNum[slot].text = "x" + sleepingGun[ItemDetail[slot]].numOfItem;
                WriteMessage("아쉽게도 "+sleepingGun[ItemDetail[slot]].name + " 사용에 실패했습니다...");
                // 수면총 개수가 0개가 될 때 슬롯 장착 해제 처리
                if (sleepingGun[ItemDetail[slot]].numOfItem <= 0)
                {
                    ItemKind[slot] = 0;
                    ItemSlot[slot].SetActive(false);
                }
            }
        }
        else
        {
            Debug.Log("수면총 없음");
        }
    }
    /// <summary>
    /// 수면총 효과 종료 대기 코루틴
    /// </summary>
    /// <param name="sleepTime">지속 시간</param>
    IEnumerator WaitforSleepGun(float sleepTime)
    {
        yield return new WaitForSeconds(sleepTime);

        // 수면총 효과 비활성화
        unActiveGun();
    }
    /// <summary>
    /// 수면총 효과 비활성화
    /// </summary>
    public void unActiveGun()
    {
        itemEffect_Teacher.SetActive(false);
        normalEffect_Teacher.SetActive(true);
        isTeacherSleeping = false;
        SleepingSound_AS.Stop();
    }
    #endregion
    #region 간식[2]
    /// <summary>
    /// 간식 아이템 데이터
    /// </summary>
    public Snack[] snack = new Snack[4];

    /// <summary>
    /// 간식 아이템 가격 텍스트 배열
    /// </summary>
    public Text[] SN_priceText = new Text[4];
    /// <summary>
    /// 간식 아이템 설명 텍스트 배열
    /// </summary>
    public Text[] SNExplainTexts = new Text[4];
    /// <summary>
    /// 간식 아이템 설명 오브젝트 배열
    /// </summary>
    public GameObject[] SNExplain_obj = new GameObject[4];
    /// <summary>
    /// 간식 아이템 보유량 텍스트 배열
    /// </summary>
    public Text[] SNnumOfItem_text = new Text[4];

    /// <summary>
    /// 먹기 효과음 오디오 소스
    /// </summary>
    public AudioSource EatingSound_AS;
    /// <summary>
    /// 먹기 효과음 오디오 클립 리소스
    /// </summary>
    public AudioClip[] EatingSoundClips;

    /// <summary>
    /// 간식 아이템 설명 정보 활성화
    /// </summary>
    /// <param name="detail"></param>
    public void SetSNExplainText(int detail)
    {
        if (!SNExplain_obj[detail].activeInHierarchy)
        {
            SNExplain_obj[detail].SetActive(true);
            SNExplainTexts[detail].text = "<color=green>사용즉시</color> 졸림을 <color=red>" + snack[detail].RecoverEndurance + "</color>만큼 회복한다.";
        }
        else
            SNExplain_obj[detail].SetActive(false);
    }
    /// <summary>
    /// 간식 가격 정보 UI 업데이트
    /// </summary>
    public void SetSNPrice()
    {
        for(int i = 0; i < snack.Length; i++)
        {
            SN_priceText[i].text = snack[i].price + "Coin";
        }
    }
    /// <summary>
    /// 간식 보유량 UI 업데이트
    /// </summary>
    public void SetSNNumOfItem()
    {
        for (int i = 0; i < snack.Length; i++)
        {
            SNnumOfItem_text[i].text = snack[i].numOfItem + "개";
        }
    }
    /// <summary>
    /// 간식 구매 처리
    /// </summary>
    /// <param name="detail">아이템 인덱스</param>
    public void PurchaseSN(int detail)
    {
        // 코인 보유량 확인
        if (CoinMgr.Coin >= (ulong)snack[detail].price)
        {
            // 아이템 보유량 최대치 확인
            if (snack[detail].numOfItem < numOfItemMax)
            {
                // 코인 소모 처리
                CoinMgr.Coin -= (ulong)snack[detail].price;
                // 아이템 지급 처리
                snack[detail].numOfItem++;
                // 아이템 가격 상승 처리
                if (snack[detail].isSpecial)
                    snack[detail].price += AddCost[1];
                else
                    snack[detail].price += AddCost[0];
                // 아이템 가격 텍스트 업데이트
                SN_priceText[detail].text = snack[detail].price + "Coin";
                // 가격 초기화 이후 첫 구매일 때 초기화 타이머 시작
                if (isFirstItem)
                {
                    StartCoroutine(ResetTime_Timer());
                    isFirstItem = false;
                }
                // 아이템 구매 관련 UI 업데이트
                SetSNNumOfItem();
                coinMgr.setCoinText();
                CoinSound_buy();
                WriteMessage(snack[detail].name + " 아이템을 구매하셨습니다.");
                dataManager.SaveData();
            }
            else
                WriteMessage("1가지 아이템 당 최대 " + numOfItemMax + "개까지만 보유할 수 있습니다.");
        }
        else
            WriteMessage("코인이 부족합니다.");
    }
    /// <summary>
    /// 간식 아이템 효과 발동
    /// </summary>
    /// <param name="slot">슬롯 번호</param>
    public void ActiveSnack(int slot)
    {
        // 아이템 보유량 확인
        if (snack[ItemDetail[slot]].numOfItem > 0)
        {
            // 아이템 소모 처리
            snack[ItemDetail[slot]].numOfItem--;
            // UI 업데이트
            WriteMessage(snack[ItemDetail[slot]].name + " 아이템을 사용하였습니다.");
            ItemSlotNum[slot].text = "x" + snack[ItemDetail[slot]].numOfItem;

            // 아이템 사용 효과음 재생
            int i = Random.Range(0,EatingSoundClips.Length);
            EatingSound_AS.clip = EatingSoundClips[i];
            EatingSound_AS.Play();

            // TV 게임에서의 아이템 효과 적용
            if (SceneManager.GetActiveScene().buildIndex.Equals(1))
            {
                tvGameMgr.Endurance += snack[ItemDetail[slot]].RecoverEndurance;

                if (tvGameMgr.Endurance > tvGameMgr.EnduranceMax)
                    tvGameMgr.Endurance = tvGameMgr.EnduranceMax;

                tvGameMgr.Endurance_slider.value = tvGameMgr.Endurance * 10;
            }
            // 카톡 게임에서의 아이템 효과 적용
            else if(SceneManager.GetActiveScene().buildIndex.Equals(2))
            {
                katalkGameMgr.Endurance += snack[ItemDetail[slot]].RecoverEndurance;

                if (katalkGameMgr.Endurance > katalkGameMgr.EnduranceMax)
                    katalkGameMgr.Endurance = katalkGameMgr.EnduranceMax;

                katalkGameMgr.Endurance_slider.value = katalkGameMgr.Endurance * 10;
            }
            // 과자 게임에서의 아이템 효과 적용
            else if(SceneManager.GetActiveScene().buildIndex.Equals(3))
            {
                snackGameMgr.Endurance += snack[ItemDetail[slot]].RecoverEndurance;

                if (snackGameMgr.Endurance > snackGameMgr.EnduranceMax)
                    snackGameMgr.Endurance = snackGameMgr.EnduranceMax;

                snackGameMgr.Endurance_slider.value = snackGameMgr.Endurance * 10;
            }

            // 간식 개수가 0개가 될 때 슬롯 장착 해제 처리
            if (snack[ItemDetail[slot]].numOfItem <= 0)
            {
                ItemKind[slot] = 0;
                ItemSlot[slot].SetActive(false);
            }
        }
        else
        {
            Debug.Log("스낵 없음");
        }
    }
    #endregion
    #region 안경[3]
    /// <summary>
    /// 안경 아이템 데이터
    /// </summary>
    public Glasses[] glasses = new Glasses[4];
    /// <summary>
    /// 안경 아이템 가격 텍스트 배열
    /// </summary>
    public Text[] GL_priceText = new Text[4];
    /// <summary>
    /// 안경 아이템 설명 텍스트 배열
    /// </summary>
    public Text[] GLExplainTexts = new Text[4];
    /// <summary>
    /// 안경 아이템 설명 오브젝트 배열
    /// </summary>
    public GameObject[] GLExplain_obj = new GameObject[4];
    /// <summary>
    /// 안경 아이템 보유량 텍스트 배열
    /// </summary>
    public Text[] GLnumOfItem_text = new Text[4];
    /// <summary>
    /// 선생님 뒤돌아보는 타이머 오브젝트
    /// </summary>
    public GameObject OrangeTimer_slider;
    /// <summary>
    /// 선생님 뒤돌아보는 타이머 슬라이더 
    /// </summary>
    public Slider Glass_slider;
    /// <summary>
    /// 안경 착용 여부
    /// </summary>
    public bool isGlassOn = false;
    /// <summary>
    /// 안경 아이템 효과 관련 오브젝트
    /// </summary>
    public GameObject[] ActiveEffect_obj;
    /// <summary>
    /// 장착한 안경 아이템의 슬롯 번호
    /// </summary>
    public int glassKey;

    /// <summary>
    /// 선생님이 뒤도는 중간 단계 시간 증가 배율
    /// </summary>
    public float OrangeTimeUp = 1.0f;

    /// <summary>
    /// 안경 아이템 설명 활성화
    /// </summary>
    /// <param name="detail">아이템 인덱스</param>
    public void SetGLExplainText(int detail)
    {
        if (!GLExplain_obj[detail].activeInHierarchy)
        {
            GLExplain_obj[detail].SetActive(true);
            GLExplainTexts[detail].text = "<color=green>사용 시,</color> 선생님이 뒤도는 시간이 <color=red>" + glasses[detail].timeUp + "%</color>만큼 늘어난다.";
            if (glasses[detail].isSpecial)
                GLExplainTexts[detail].text += "\n+ 뒤도는 시간이 보인다.";
        }
        else
            GLExplain_obj[detail].SetActive(false);
    }
    /// <summary>
    /// 안경 아이템 가격 UI 업데이트
    /// </summary>
    public void SetGLPrice()
    {
        for (int i = 0; i < glasses.Length; i++)
        {
            GL_priceText[i].text = glasses[i].price + "Coin";
        }
    }
    /// <summary>
    /// 안경 아이템 보유량 UI 업데이트
    /// </summary>
    public void SetGLNumOfItem()
    {
        for (int i = 0; i < glasses.Length; i++)
        {
            GLnumOfItem_text[i].text = glasses[i].numOfItem + "개";
        }
    }
    /// <summary>
    /// 안경 아이템 구매 처리
    /// </summary>
    /// <param name="detail">아이템 인덱스</param>
    public void PurchaseGL(int detail)
    {
        // 코인 보유량 확인
        if (CoinMgr.Coin >= (ulong)glasses[detail].price)
        {
            // 아이템 보유량 최대치 확인
            if (glasses[detail].numOfItem < numOfItemMax)
            {
                // 코인 소모 처리
                CoinMgr.Coin -= (ulong)glasses[detail].price;
                // 아이템 지급 처리
                glasses[detail].numOfItem++;
                // 아이템 가격 증가 처리
                if (glasses[detail].isSpecial)
                    glasses[detail].price += AddCost[1];
                else
                    glasses[detail].price += AddCost[0];
                // 아이템 가격 UI 업데이트
                GL_priceText[detail].text = glasses[detail].price + "Coin";
                // 초기화 이후 첫 구매일 때 초기화 타이머 시작
                if (isFirstItem)
                {
                    StartCoroutine(ResetTime_Timer());
                    isFirstItem = false;
                }
                // 아이템 구매 관련 UI 업데이트
                SetGLNumOfItem();
                coinMgr.setCoinText();
                CoinSound_buy();
                WriteMessage(glasses[detail].name + " 아이템을 구매하셨습니다.");
                dataManager.SaveData();
            }
            else
                WriteMessage("1가지 아이템 당 최대 " + numOfItemMax + "개까지만 보유할 수 있습니다.");
        }
        else
            WriteMessage("코인이 부족합니다.");
    }
    /// <summary>
    /// 안경 아이템 효과 활성화/비활성화
    /// </summary>
    /// <param name="slot">슬롯 번호</param>
    public void ActiveGlasses(int slot)
    {
        if (glasses[ItemDetail[slot]].numOfItem > 0)
        {
            if(isGlassOn)
            {
                Disable_Glasses(slot);
            }
            else
            {
                Enable_Glassses(slot);
            }
        }
        else
        {
            Debug.Log("안경 없음");
        }
    }
    /// <summary>
    /// 안경 효과 발동
    /// </summary>
    /// <param name="slot">슬롯 번호</param>
    public void Enable_Glassses(int slot)
    {
        // 안경 장착 처리
        isGlassOn = true;
        OrangeTimeUp = 1 + (glasses[ItemDetail[slot]].timeUp * 0.01f);
        // 아이템 효과 UI 업데이트
        WriteMessage(glasses[ItemDetail[slot]].name + "을 활성화 하였습니다.");
        ActiveEffect_obj[slot].SetActive(true);
        // 안경 아이템의 슬롯 번호 캐싱
        glassKey = slot;
        // 스페셜 아이템의 특수 효과 발동
        if (glasses[ItemDetail[slot]].isSpecial)
        {
            OrangeTimer_slider.SetActive(true);
        }
    }
    /// <summary>
    /// 안경 효과 비활성화
    /// </summary>
    /// <param name="slot">슬롯 번호</param>
    public void Disable_Glasses(int slot)
    {
        // 안경 탈착 처리
        isGlassOn = false;
        // 아이템 발동 이전으로 복원
        OrangeTimeUp = 1.0f;
        // 아이템 효과 관련 UI 업데이트
        WriteMessage(glasses[ItemDetail[slot]].name + "을 비활성화 하였습니다.");
        OrangeTimer_slider.SetActive(false);
        ActiveEffect_obj[slot].SetActive(false);
    }
    /// <summary>
    /// 안경 아이템 소모 처리
    /// </summary>
    /// <param name="Otime">선생님 뒤도는 과정의 시간</param>
    public void ConsumeGlasses(float Otime)
    {
        // 아이템 소모 처리
        glasses[ItemDetail[glassKey]].numOfItem--;
        // 개수 업데이트
        ItemSlotNum[glassKey].text = "x" + glasses[ItemDetail[glassKey]].numOfItem;
        // 안경 타이머 설정
        SetTimer_Glasses(Otime);

        // 안경 개수가 0개가 될 때 슬롯 장착 해제 처리
        if (glasses[ItemDetail[glassKey]].numOfItem <= 0)
        {
            Disable_Glasses(glassKey);
            ItemKind[glassKey] = 0;
            ItemSlot[glassKey].SetActive(false);
        }
    }
    /// <summary>
    /// 선생님이 뒤돌기까지 남은 시간
    /// </summary>
    float TimeLeft;
    /// <summary>
    /// 안경 특수 효과 타이머 설정
    /// </summary>
    /// <param name="Otime">선생님이 뒤도는 과정의 시간</param>
    void SetTimer_Glasses(float Otime)
    {
        TimeLeft = Otime;
        Glass_slider.maxValue = Otime;
        StartCoroutine(GlassTimer());
    }
    /// <summary>
    /// 안경 특수효과 타이머 업데이트 코루틴
    /// </summary>
    IEnumerator GlassTimer()
    {
        yield return new WaitForSeconds(0.1f);

        TimeLeft -= 0.1f;
        Glass_slider.value = TimeLeft;
        if (TimeLeft <= 0)
        {
            Glass_slider.value = Glass_slider.maxValue;
        }
        else
            StartCoroutine(GlassTimer());
    }
    #endregion
}
/// <summary>
/// 수면총 아이템 데이터 클래스
/// </summary>
[System.Serializable]
public class SleepingGun
{
    /// <summary>
    /// 아이템 이름
    /// </summary>
    public string name;
    /// <summary>
    /// 아이템 발동 확률
    /// </summary>
    public int Possibility;
    /// <summary>
    /// 수면 지속 시간
    /// </summary>
    public float SleepingTime;
    /// <summary>
    /// 특수 아이템 여부
    /// </summary>
    public bool isSpecial;
    /// <summary>
    /// 아이템 가격
    /// </summary>
    public int price;
    /// <summary>
    /// 아이템 초기 가격
    /// </summary>
    public int OriginalPrice;
    /// <summary>
    /// 아이템 보유량
    /// </summary>
    public int numOfItem;
    /// <summary>
    /// 아이템 아이콘 이미지 스프라이트
    /// </summary>
    public Sprite ItemImg;
}

[System.Serializable]
public class Snack
{
    /// <summary>
    /// 아이템 이름
    /// </summary>
    public string name;
    /// <summary>
    /// 특수 아이템 여부
    /// </summary>
    public bool isSpecial;
    /// <summary>
    /// 아이템 가격
    /// </summary>
    public int price;
    /// <summary>
    /// 아이템 초기 가격
    /// </summary>
    public int OriginalPrice;
    /// <summary>
    /// 학생 인내심 회복량
    /// </summary>
    public int RecoverEndurance;
    /// <summary>
    /// 아이템 보유량
    /// </summary>
    public int numOfItem;
    /// <summary>
    /// 아이템 아이콘 이미지 스프라이트
    /// </summary>
    public Sprite ItemImg;
}

[System.Serializable]
public class Glasses
{
    /// <summary>
    /// 아이템 이름
    /// </summary>
    public string name;
    /// <summary>
    /// 아이템 가격
    /// </summary>
    public int price;
    /// <summary>
    /// 아이템 초기 가격
    /// </summary>
    public int OriginalPrice;
    /// <summary>
    /// 특수 아이템 여부
    /// </summary>
    public bool isSpecial;
    /// <summary>
    /// 선생님 뒤도는 시간 증가율
    /// </summary>
    public int timeUp;
    /// <summary>
    /// 아이템 보유량
    /// </summary>
    public int numOfItem;
    /// <summary>
    /// 아이템 아이콘 이미지 스프라이트
    /// </summary>
    public Sprite ItemImg;

}
