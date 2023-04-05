using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
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

    public GameObject Message;
    public Text Message_text;
    IEnumerator messageWait;

    public GameObject ItemStore_Menu;
    public GameObject PhoneStore_Menu;
    public GameObject SnackStore_Menu;
    public Animation[] Store_MenuAni;

    public GameObject SelectItem_Menu;
    public Text SelectedItemName_text;
    public Text SelectedItemExplain_text;
    public Image SelectedItemImage_img;

    public AudioSource coinBuy_AS;

    int slotNum;
    public GameObject SelectItemBySlot_Menu;

    public int numOfItemMax = 5;

    public int[] ItemKind = new int[2];//대 분류 0: 미장착/ 1: 수면총/ 2: 간식
    public int[] ItemDetail = new int[2];//소 분류
    public Image[] ItemSlot_img = new Image[2];
    public GameObject[] ItemSlot = new GameObject[2];
    public Text[] ItemSlotNum = new Text[2];
    public Text[] EquippedItem_Text = new Text[2];
    public Sprite EmptySlot_sprite;

    public int ResetTime = 6000;
    public Text ResetTime_text;
    public bool isFirstItem = true;
    public int[] AddCost = new int[2] { 15, 30 };

    int temp_kind, temp_detail;

    private void Start()
    {
        messageWait = WaitforMessage(1.2f);
        if (!SceneManager.GetActiveScene().name.Equals("MainScene"))
        {
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
        else
        {
            SetSGPrice();
            SetSNPrice();
            SetGLPrice();
            SetSGNumOfItem();
            SetSNNumOfItem();
            SetGLNumOfItem();
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
    public void ReloadStart()
    {
        Start();
    }
    public void SetSlot(int slot)
    {
        slotNum = slot;
        BackkeyMgr.numOfOpenedMenus++;
        SelectItemBySlot_Menu.SetActive(true);
    }
    public void CloseMenuBySlot()
    {
        SelectItemBySlot_Menu.SetActive(false);
    }
    public void SelectKind(int kind)
    {
        temp_kind = kind;
    }
    public void SelectDetail(int detail)
    {
        temp_detail = detail;

        if (!SelectItemBySlot_Menu.activeInHierarchy)//by장착 버튼
            SettingSelectMenu();
        else//by 슬롯 버튼
        {
            SelectItem(slotNum);
            SelectItemBySlot_Menu.SetActive(false);
        }
    }
    void SettingSelectMenu()
    {
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
    public void ChangeItem()
    {
        int Ftemp_detail, Ftemp_kind;
        Sprite temp_sprite;
        string temp_name;
        temp_sprite = ItemSlot_img[0].sprite;
        Ftemp_kind = ItemKind[0];
        Ftemp_detail = ItemDetail[0];
        temp_name = EquippedItem_Text[0].text;

        ItemKind[0] = ItemKind[1];
        ItemDetail[0] = ItemDetail[1];
        ItemSlot_img[0].sprite = ItemSlot_img[1].sprite;
        EquippedItem_Text[0].text = EquippedItem_Text[1].text;

        ItemKind[1] = Ftemp_kind;
        ItemDetail[1] = Ftemp_detail;
        ItemSlot_img[1].sprite = temp_sprite;
        EquippedItem_Text[1].text = temp_name;

        if (ItemSlot_img[0].sprite == null)
            ItemSlot[0].SetActive(false);
        else
            ItemSlot[0].SetActive(true);

        if (ItemSlot_img[1].sprite == null)
            ItemSlot[1].SetActive(false);
        else
            ItemSlot[1].SetActive(true);

        EquippedItem_Text[0].text = EquippedItem_Text[0].text.Replace("슬롯 2", "슬롯 1");
        EquippedItem_Text[1].text = EquippedItem_Text[1].text.Replace("슬롯 1", "슬롯 2");

        WriteMessage("아이템 슬롯 교환을 완료하였습니다.",0.5f);
    }
    public void SelectItem(int key)//메인에서 아이템 고르는 함수
    {
        if (key >= 0)
        {
            if (!isSameItem(key))
            {
                switch (temp_kind)
                {
                    case 1:
                        if (sleepingGun[temp_detail].numOfItem > 0)
                        {
                            ItemKind[key] = temp_kind;
                            ItemDetail[key] = temp_detail;
                            ItemSlot[key].SetActive(true);
                            ItemSlot_img[key].sprite = sleepingGun[ItemDetail[key]].ItemImg;
                            EquippedItem_Text[key].text = "<슬롯 " + (key + 1) + ">\n" + sleepingGun[ItemDetail[key]].name;
                            WriteMessage(sleepingGun[ItemDetail[key]].name + "아이템을 " + (key + 1) + "번 슬롯에 장착하였습니다.");
                        }
                        else
                            WriteMessage("해당 아이템이 1개 이상인 경우에 장착 가능합니다.");
                        break;
                    case 2:
                        if (snack[temp_detail].numOfItem > 0)
                        {
                            ItemKind[key] = temp_kind;
                            ItemDetail[key] = temp_detail;
                            ItemSlot[key].SetActive(true);
                            ItemSlot_img[key].sprite = snack[ItemDetail[key]].ItemImg;
                            EquippedItem_Text[key].text = "<슬롯 " + (key + 1) + ">\n" + snack[ItemDetail[key]].name;
                            WriteMessage(snack[ItemDetail[key]].name + "아이템을 " + (key + 1) + "번 슬롯에 장착하였습니다.");
                        }
                        else
                            WriteMessage("해당 아이템이 1개 이상인 경우에 장착 가능합니다.");
                        break;
                    case 3:
                        if(glasses[temp_detail].numOfItem > 0)
                        {
                            ItemKind[key] = temp_kind;
                            ItemDetail[key] = temp_detail;
                            ItemSlot[key].SetActive(true);
                            ItemSlot_img[key].sprite = glasses[ItemDetail[key]].ItemImg;
                            EquippedItem_Text[key].text = "<슬롯 " + (key + 1) + ">\n" + glasses[ItemDetail[key]].name;
                            WriteMessage(glasses[ItemDetail[key]].name + "아이템을 " + (key + 1) + "번 슬롯에 장착하였습니다.");
                        }
                        else
                            WriteMessage("해당 아이템이 1개 이상인 경우에 장착 가능합니다.");
                        break;
                }
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
    bool isSameItem(int key)
    {
        if(key.Equals(1))
        {
            if (ItemKind[0].Equals(temp_kind))
                return true;
            else
                return false;
        }
        else
        {
            if (ItemKind[1].Equals(temp_kind))
                return true;
            else
                return false;
        }
    }
    public void UseItem(int key)//인게임에서 게임 사용
    {
        if (!inGameMgr.BfStartGame.activeInHierarchy)
        {
            if (!tutorialMgr.isTutorialOn)
            {
                if (ItemKind[key].Equals(1))
                    ActiveGun(key);
                else if (ItemKind[key].Equals(2))
                    ActiveSnack(key);
                else if (ItemKind[key].Equals(3))
                    ActiveGlasses(key);
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
    public void StoreMenusOff(int key)
    {
        BackkeyMgr.numOfOpenedMenus = 1;
        switch(key)
        {
            case 0:
                //ItemStore_Menu.SetActive(false);
                inGameMgr.CloseMenu(Store_MenuAni[0],ItemStore_Menu);
                break;
            case 1:
                //PhoneStore_Menu.SetActive(false);
                inGameMgr.CloseMenu(Store_MenuAni[1], PhoneStore_Menu);
                break;
            case 2:
                //SnackStore_Menu.SetActive(false);
                inGameMgr.CloseMenu(Store_MenuAni[2], SnackStore_Menu);
                break;
        }
    }
    public void CoinSound_buy()
    {
        coinBuy_AS.Play();
    }
    public void WriteMessage(string message, float time = 1.2f)
    {
        StopCoroutine(messageWait);

        Message.SetActive(true);
        Message_text.text = message;

        messageWait = WaitforMessage(time);
        StartCoroutine(messageWait);
    }
    IEnumerator WaitforMessage(float time)
    {
        yield return new WaitForSeconds(time);

        Message.SetActive(false);
    }
    IEnumerator ResetTime_Timer()
    {
        yield return new WaitForSecondsRealtime(1.0f);

        ResetTime--;
        if (ResetTime < 0)
            ResetTime = 0;
        //Debug.Log(ResetTime);
        if(SceneManager.GetActiveScene().buildIndex.Equals(0))
            ResetTime_text.text = "가격 초기화까지 남은 시간:\n"+ResetTime/60+"분 "+ResetTime%60+"초";
        if (ResetTime > 0)
        {
            StartCoroutine(ResetTime_Timer());
        }
        else
        {
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
    //================================================수면총 [1]=========================================================
    public SleepingGun[] sleepingGun = new SleepingGun[4];

    public static bool isTeacherSleeping;
    public GameObject normalEffect_Teacher;
    public GameObject itemEffect_Teacher;
    public Text[] SG_priceText = new Text[4];
    public Text[] SGExplainTexts = new Text[4];
    public GameObject[] SGExplain_obj = new GameObject[4];
    public Text[] SGnumOfItem_text = new Text[4];

    public AudioSource SleepingSound_AS;
    public AudioClip[] SleepingSoundClips;

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
    public void SetSGPrice()
    {
        for(int i = 0; i < sleepingGun.Length; i++)
        {
            SG_priceText[i].text = sleepingGun[i].price + "Coin";
        }
    }
    public void SetSGNumOfItem()
    {
        for (int i = 0; i < sleepingGun.Length; i++)
        {
            SGnumOfItem_text[i].text = sleepingGun[i].numOfItem+"개";
        }
    }
    public void PurchaseSG(int detail)
    {
        if (CoinMgr.Coin >= (ulong)sleepingGun[detail].price)
        {
            if (sleepingGun[detail].numOfItem < numOfItemMax)
            {
                CoinMgr.Coin -= (ulong)sleepingGun[detail].price;
                sleepingGun[detail].numOfItem++;
                if (sleepingGun[detail].isSpecial)
                    sleepingGun[detail].price += AddCost[1];
                else
                    sleepingGun[detail].price += AddCost[0];
                SG_priceText[detail].text = sleepingGun[detail].price + "Coin";
                if (isFirstItem)
                {
                    StartCoroutine(ResetTime_Timer());
                    isFirstItem = false;
                }
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
    public void ActiveGun(int key)
    {
        if (sleepingGun[ItemDetail[key]].numOfItem > 0)
        {
            int p = Random.Range(0, 100);
            if (p < sleepingGun[ItemDetail[key]].Possibility)
            {
                normalEffect_Teacher.SetActive(false);
                itemEffect_Teacher.SetActive(true);
                sleepingGun[ItemDetail[key]].numOfItem--;
                WriteMessage(sleepingGun[ItemDetail[key]].name + " 사용에 성공하여 선생님이 잠에 듭니다!");
                ItemSlotNum[key].text = "x" + sleepingGun[ItemDetail[key]].numOfItem;
                isTeacherSleeping = true;

                int i = Random.Range(0,SleepingSoundClips.Length);
                SleepingSound_AS.clip = SleepingSoundClips[i];
                SleepingSound_AS.Play();

                if(sleepingGun[ItemDetail[key]].numOfItem <= 0)
                {
                    ItemKind[key] = 0;
                    ItemSlot[key].SetActive(false);
                }
                StartCoroutine(WaitforSleepGun(sleepingGun[ItemDetail[key]].SleepingTime));
            }
            else
            {
                sleepingGun[ItemDetail[key]].numOfItem--;
                ItemSlotNum[key].text = "x" + sleepingGun[ItemDetail[key]].numOfItem;
                WriteMessage("아쉽게도 "+sleepingGun[ItemDetail[key]].name + " 사용에 실패했습니다...");
                if (sleepingGun[ItemDetail[key]].numOfItem <= 0)
                {
                    ItemKind[key] = 0;
                    ItemSlot[key].SetActive(false);
                }
            }
        }
        else
        {
            Debug.Log("수면총 없음");
        }
    }
    IEnumerator WaitforSleepGun(float sleepTime)
    {
        yield return new WaitForSeconds(sleepTime);

        unActiveGun();
    }
    public void unActiveGun()
    {
        itemEffect_Teacher.SetActive(false);
        normalEffect_Teacher.SetActive(true);
        isTeacherSleeping = false;
        SleepingSound_AS.Stop();
    }
    //================================================간식 [2]==========================================================
    public Snack[] snack = new Snack[4];

    public Text[] SN_priceText = new Text[4];
    public Text[] SNExplainTexts = new Text[4];
    public GameObject[] SNExplain_obj = new GameObject[4];
    public Text[] SNnumOfItem_text = new Text[4];

    public AudioSource EatingSound_AS;
    public AudioClip[] EatingSoundClips;

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
    public void SetSNPrice()
    {
        for(int i = 0; i < snack.Length; i++)
        {
            SN_priceText[i].text = snack[i].price + "Coin";
        }
    }
    public void SetSNNumOfItem()
    {
        for (int i = 0; i < snack.Length; i++)
        {
            SNnumOfItem_text[i].text = snack[i].numOfItem + "개";
        }
    }
    public void PurchaseSN(int detail)
    {
        if (CoinMgr.Coin >= (ulong)snack[detail].price)
        {
            if (snack[detail].numOfItem < numOfItemMax)
            {
                CoinMgr.Coin -= (ulong)snack[detail].price;
                snack[detail].numOfItem++;
                if (snack[detail].isSpecial)
                    snack[detail].price += AddCost[1];
                else
                    snack[detail].price += AddCost[0];
                SN_priceText[detail].text = snack[detail].price + "Coin";
                if (isFirstItem)
                {
                    StartCoroutine(ResetTime_Timer());
                    isFirstItem = false;
                }
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
    public void ActiveSnack(int key)
    {
        if (snack[ItemDetail[key]].numOfItem > 0)
        {
            snack[ItemDetail[key]].numOfItem--;
            WriteMessage(snack[ItemDetail[key]].name + " 아이템을 사용하였습니다.");
            ItemSlotNum[key].text = "x" + snack[ItemDetail[key]].numOfItem;

            int i = Random.Range(0,EatingSoundClips.Length);
            EatingSound_AS.clip = EatingSoundClips[i];
            EatingSound_AS.Play();

            if (SceneManager.GetActiveScene().buildIndex.Equals(1))
            {
                tvGameMgr.Endurance += snack[ItemDetail[key]].RecoverEndurance;

                if (tvGameMgr.Endurance > tvGameMgr.EnduranceMax)
                    tvGameMgr.Endurance = tvGameMgr.EnduranceMax;

                tvGameMgr.Endurance_slider.value = tvGameMgr.Endurance * 10;
            }
            else if(SceneManager.GetActiveScene().buildIndex.Equals(2))
            {
                katalkGameMgr.Endurance += snack[ItemDetail[key]].RecoverEndurance;

                if (katalkGameMgr.Endurance > katalkGameMgr.EnduranceMax)
                    katalkGameMgr.Endurance = katalkGameMgr.EnduranceMax;

                katalkGameMgr.Endurance_slider.value = katalkGameMgr.Endurance * 10;
            }
            else if(SceneManager.GetActiveScene().buildIndex.Equals(3))
            {
                snackGameMgr.Endurance += snack[ItemDetail[key]].RecoverEndurance;

                if (snackGameMgr.Endurance > snackGameMgr.EnduranceMax)
                    snackGameMgr.Endurance = snackGameMgr.EnduranceMax;

                snackGameMgr.Endurance_slider.value = snackGameMgr.Endurance * 10;
            }
            if(snack[ItemDetail[key]].numOfItem <= 0)
            {
                ItemKind[key] = 0;
                ItemSlot[key].SetActive(false);
            }
        }
        else
        {
            Debug.Log("스낵 없음");
        }
    }
    //================================================안경 [3]==========================================================

    public Glasses[] glasses = new Glasses[4];
    public Text[] GL_priceText = new Text[4];
    public Text[] GLExplainTexts = new Text[4];
    public GameObject[] GLExplain_obj = new GameObject[4];
    public Text[] GLnumOfItem_text = new Text[4];
    public GameObject OrangeTimer_slider;
    public Slider Glass_slider;
    public bool isGlassOn = false;
    public GameObject[] ActiveEffect_obj;
    public int glassKey;

    public float OrangeTimeUp = 1.0f;

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
    public void SetGLPrice()
    {
        for (int i = 0; i < glasses.Length; i++)
        {
            GL_priceText[i].text = glasses[i].price + "Coin";
        }
    }
    public void SetGLNumOfItem()
    {
        for (int i = 0; i < glasses.Length; i++)
        {
            GLnumOfItem_text[i].text = glasses[i].numOfItem + "개";
        }
    }
    public void PurchaseGL(int detail)
    {
        if (CoinMgr.Coin >= (ulong)glasses[detail].price)
        {
            if (glasses[detail].numOfItem < numOfItemMax)
            {
                CoinMgr.Coin -= (ulong)glasses[detail].price;
                glasses[detail].numOfItem++;
                if (glasses[detail].isSpecial)
                    glasses[detail].price += AddCost[1];
                else
                    glasses[detail].price += AddCost[0];
                GL_priceText[detail].text = glasses[detail].price + "Coin";
                if (isFirstItem)
                {
                    StartCoroutine(ResetTime_Timer());
                    isFirstItem = false;
                }
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
    public void ActiveGlasses(int key)
    {
        if (glasses[ItemDetail[key]].numOfItem > 0)
        {
            if(isGlassOn)
            {
                Disable_Glasses(key);
            }
            else
            {
                Enable_Glassses(key);
            }
        }
        else
        {
            Debug.Log("안경 없음");
        }
    }
    public void Enable_Glassses(int key)
    {
        isGlassOn = true;//안경 장착
        OrangeTimeUp = 1 + (glasses[ItemDetail[key]].timeUp * 0.01f);
        WriteMessage(glasses[ItemDetail[key]].name + "을 활성화 하였습니다.");
        ActiveEffect_obj[key].SetActive(true);
        glassKey = key;
        if (glasses[ItemDetail[key]].isSpecial)
        {
            OrangeTimer_slider.SetActive(true);
        }
    }
    public void Disable_Glasses(int key)
    {
        isGlassOn = false;//안경 탈착
        OrangeTimeUp = 1.0f;
        WriteMessage(glasses[ItemDetail[key]].name + "을 비활성화 하였습니다.");
        OrangeTimer_slider.SetActive(false);
        ActiveEffect_obj[key].SetActive(false);
    }
    public void ConsumeGlasses(float Otime)
    {
        glasses[ItemDetail[glassKey]].numOfItem--;
        ItemSlotNum[glassKey].text = "x" + glasses[ItemDetail[glassKey]].numOfItem;
        SetTimer_Glasses(Otime);
        if (glasses[ItemDetail[glassKey]].numOfItem <= 0)
        {
            Disable_Glasses(glassKey);
            ItemKind[glassKey] = 0;
            ItemSlot[glassKey].SetActive(false);
        }
    }
    float TimeLeft;
    void SetTimer_Glasses(float Otime)
    {
        TimeLeft = Otime;
        Glass_slider.maxValue = Otime;
        StartCoroutine(GlassTimer(Otime));
    }
    IEnumerator GlassTimer(float Otime)
    {
        yield return new WaitForSeconds(0.1f);

        TimeLeft -= 0.1f;
        Glass_slider.value = TimeLeft;
        if (TimeLeft <= 0)
        {
            Glass_slider.value = Glass_slider.maxValue;
        }
        else
            StartCoroutine(GlassTimer(Otime));
    }
}
[System.Serializable]
public class SleepingGun
{
    public string name;
    public int Possibility;
    public float SleepingTime;
    public bool isSpecial;
    public int price;
    public int OriginalPrice;
    public int numOfItem;
    public Sprite ItemImg;
}

[System.Serializable]
public class Snack
{
    public string name;
    public bool isSpecial;
    public int price;
    public int OriginalPrice;
    public int RecoverEndurance;
    public int numOfItem;
    public Sprite ItemImg;
}

[System.Serializable]
public class Glasses
{
    public string name;
    public int price;
    public int OriginalPrice;
    public bool isSpecial;
    public int timeUp;
    public int numOfItem;
    public Sprite ItemImg;

}
