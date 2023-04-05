using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TicketMgr : MonoBehaviour
{
    public ItemMgr itemMgr;
    public MainSceneMgr mainSceneMgr;
    public InGameMgr inGameMgr;
    public DataManager dataManager;

    //Random Item Ticket
    public int RandomItemTicket_amount;
    public GameObject RandomItem_Menu;
    public Button OpenRT_button;
    public GameObject Reset_button;
    public GameObject LightEffect;
    public Animation RandomItem_MenuAni;
    public Animation OpenRandomItem_ani;
    public Animation ItemAppear_ani;
    public Animation ItemNameAppear_ani;
    public AudioSource RandomTicket_AS;
    public Image RandomResult_img;
    public Text ItemNameResult_text;
    public Text numOfRT_Text;
    public Color HighItem_color;
    public Color Normal_color;

    //Normal Item Ticket
    public int NormalItemTicket_amount;
    public Text[] numOfNI_texts;

    //High Rank Item Ticket
    public int HighRankItemTicket_amount;
    public Text[] numOfHI_texts;

    public AudioSource TicketExchange_AS;

    public GameObject rankTicket_Menu;
    public Animation rankTicket_MenuAni;
    public Image SelectedItem_img;
    public Text RankItemName_text;

    public GameObject NormalTicket_Menu;
    public GameObject HighTicket_Menu;
    public GameObject SelectedItemCheck_Menu;

    public void MenusControl(int k)
    {
        switch(k)
        {
            case 0:
                BackkeyMgr.numOfOpenedMenus++;
                numOfRT_Text.text = "티켓 수: " + RandomItemTicket_amount;
                RandomItem_MenuAni.Play();
                RandomItem_Menu.SetActive(true);
                break;
            case 1:
                if (BackkeyMgr.backEnabled)
                {
                    BackkeyMgr.numOfOpenedMenus--;
                    //RandomItem_Menu.SetActive(false);
                    inGameMgr.CloseMenu(RandomItem_MenuAni, RandomItem_Menu);
                }
                else
                {
                    mainSceneMgr.WriteMessage("티켓 오픈중에는 메뉴를 종료 할 수 없습니다.");
                }
                break;
            case 2:
                BackkeyMgr.numOfOpenedMenus++;
                SetText_Normal();
                SetText_HighRank();
                rankTicket_MenuAni.Play();
                rankTicket_Menu.SetActive(true);
                break;
            case 3:
                BackkeyMgr.numOfOpenedMenus--;
                //rankTicket_Menu.SetActive(false);
                inGameMgr.CloseMenu(rankTicket_MenuAni, rankTicket_Menu);
                break;
            case 4://Normal Ticket On
                BackkeyMgr.numOfOpenedMenus++;
                NormalTicket_Menu.SetActive(true);
                break;
            case 5://Normal Ticket Off
                BackkeyMgr.numOfOpenedMenus--;
                NormalTicket_Menu.SetActive(false);
                break;
            case 6://High Ticket On
                BackkeyMgr.numOfOpenedMenus++;
                HighTicket_Menu.SetActive(true);
                break;
            case 7://High Ticket Off
                BackkeyMgr.numOfOpenedMenus--;
                HighTicket_Menu.SetActive(false);
                break;
        }
    }

    public void OpenRandomItem() /*랜덤 아이템 티켓 오픈 시작 함수*/
    {
        bool isHigh = false;
        if (RandomItemTicket_amount > 0)
        {
            BackkeyMgr.backEnabled = false;
            OpenRT_button.enabled = false;
            AllocateRandomItem(ref isHigh);
            if (isHigh)
                OpenRandomItem_ani.CrossFade("TicketOpen(High)");
            else
                OpenRandomItem_ani.Play();
            StartCoroutine(WaitRandomItemAni());
            RandomItemTicket_amount--;
            numOfRT_Text.text = "티켓 수: " + RandomItemTicket_amount;
        }
        else
        {
            mainSceneMgr.WriteMessage("랜덤 아이템 티켓이 없습니다.");
        }
    }
    bool soundPrinted = false;
    IEnumerator WaitRandomItemAni() /*랜덤 아이템 오픈 애니메이션 대기*/
    {
        while (OpenRandomItem_ani.IsPlaying("TicketOpen") || OpenRandomItem_ani.IsPlaying("TicketOpen(High)"))
        {
            yield return new WaitForEndOfFrame();
            if ((OpenRandomItem_ani["TicketOpen"].time > 0.92f || OpenRandomItem_ani["TicketOpen(High)"].time > 0.92f) && !soundPrinted)
            {
                RandomTicket_AS.Play();
                soundPrinted = true;
            }
                
        }
        soundPrinted = false;
        ItemAppear_ani.Play();
        ItemNameAppear_ani.Play();
        StartCoroutine(WaitOpenRTEnd());
        Reset_button.SetActive(true);
    }
    IEnumerator WaitOpenRTEnd()
    {
        while(ItemAppear_ani.IsPlaying("ItemAppear"))
        {
            yield return new WaitForEndOfFrame();
        }

        BackkeyMgr.backEnabled = true;
        dataManager.SaveData();
    }
    public void AllocateRandomItem(ref bool isHigh)  /*랜덤 아이템 확률에 따른 랜덤 지정*/
    {
        int r = Random.Range(0,100);
        int bonusAdd;

        if(r < 20)
        {
            isHigh = true;
            bonusAdd = 2;
            ItemNameResult_text.color = HighItem_color;
        }
        else
        {
            isHigh = false;
            bonusAdd = 0;
            ItemNameResult_text.color = Normal_color;
        }

        int rI = Random.Range(0, 3);
        if (rI.Equals(0))//SleepingGun
        {
            int rk = Random.Range(0, 2);
            itemMgr.sleepingGun[bonusAdd + rk].numOfItem++;
            RandomResult_img.sprite = itemMgr.sleepingGun[bonusAdd + rk].ItemImg;
            ItemNameResult_text.text = itemMgr.sleepingGun[bonusAdd + rk].name;
            itemMgr.SetSGNumOfItem();
        }
        else if (rI.Equals(1))//Snack
        {
            int rk = Random.Range(0, 2);
            itemMgr.snack[bonusAdd + rk].numOfItem++;
            RandomResult_img.sprite = itemMgr.snack[bonusAdd + rk].ItemImg;
            ItemNameResult_text.text = itemMgr.snack[bonusAdd + rk].name;
            itemMgr.SetSNNumOfItem();
        }
        else if (rI.Equals(2))//Glasses
        {
            int rk = Random.Range(0, 2);
            itemMgr.glasses[bonusAdd + rk].numOfItem++;
            RandomResult_img.sprite = itemMgr.glasses[bonusAdd + rk].ItemImg;
            ItemNameResult_text.text = itemMgr.glasses[bonusAdd + rk].name;
            itemMgr.SetGLNumOfItem();
        }
    }
    public void ResetRandomTicket() /*랜덤 아이템 UI 초기화*/
    {

        ItemAppear_ani.Stop();
        RandomResult_img.color = new Vector4(1, 1, 1, 0);
        OpenRandomItem_ani["TicketOpen"].normalizedTime = 0;
        ItemNameAppear_ani["ItemNameAppear"].normalizedTime = 0;
        OpenRandomItem_ani.Play();
        ItemNameAppear_ani.Play();
        Reset_button.SetActive(false);
        OpenRT_button.enabled = true;
        LightEffect.SetActive(false);
        StartCoroutine(ResetRandomTicket_cor());
    }
    IEnumerator ResetRandomTicket_cor() /*랜덤 아이템 애니메이션 초기화 도우미*/
    {
        yield return new WaitForSeconds(0.01f);
        OpenRandomItem_ani.Stop();
        ItemNameAppear_ani.Stop();
    }


    bool confirmed, isnormal;
    int kind_item;
    public void ChooseNormalItem(int kind) /*일반 아이템 교환 티켓 고르기*/
    {
        if (NormalItemTicket_amount > 0)
        {
            int category = kind / 2;
            int type = kind % 2;
            kind_item = kind;
            isnormal = true;
            OfferItems(category, type);
            NormalItemTicket_amount--;
            SetText_Normal();
            dataManager.SaveData();
        }
        else
        {
            mainSceneMgr.WriteMessage("일반 아이템 교환 티켓이 없습니다.");
        }
    }

    public void ChooseHighRankItem(int kind) /*고급 아이템 교환 티켓 고르기*/
    {
        if (HighRankItemTicket_amount > 0)
        {
            int category = kind / 2;
            int type = kind % 2 + 2;
            kind_item = kind;
            isnormal = false;
            OfferItems(category, type);
            HighRankItemTicket_amount--;
            SetText_HighRank();
            dataManager.SaveData();
        }
        else
        {
            mainSceneMgr.WriteMessage("고급 아이템 교환 티켓이 없습니다.");
        }
    }
    public void SetText_Normal()
    {
        for(int i = 0; i < numOfNI_texts.Length; i++)
        {
            numOfNI_texts[i].text = NormalItemTicket_amount+"개";
        }
    }
    public void SetText_HighRank()
    {
        for (int i = 0; i < numOfHI_texts.Length; i++)
        {
            numOfHI_texts[i].text = HighRankItemTicket_amount+ "개";
        }
    }
    public void ConfirmItemSelect()
    {
        confirmed = true;
        if(isnormal)
        {
            ChooseNormalItem(kind_item);
        }
        else
        {
            ChooseHighRankItem(kind_item);
        }
    }
    public void CancelItemSelect()
    {
        SelectedItemCheck_Menu.SetActive(false);
    }
    public void OfferItems(int category, int type)
    {
        if (category.Equals(0))
        {
            if (confirmed)
            {
                itemMgr.sleepingGun[type].numOfItem++;
                itemMgr.SetSGNumOfItem();
                TicketExchange_AS.Play();
                confirmed = false;
                SelectedItemCheck_Menu.SetActive(false);
                mainSceneMgr.WriteMessage("아이템 교환 티켓과 " + itemMgr.sleepingGun[type].name + "아이템과 교환하였습니다.");
            }
            else
            {
                SelectedItem_img.sprite = itemMgr.sleepingGun[type].ItemImg;
                RankItemName_text.text = itemMgr.sleepingGun[type].name;
                SelectedItemCheck_Menu.SetActive(true);
            }
        }
        else if (category.Equals(1))
        {
            if (confirmed)
            {
                itemMgr.snack[type].numOfItem++;
                itemMgr.SetSNNumOfItem();
                TicketExchange_AS.Play();
                confirmed = false;
                SelectedItemCheck_Menu.SetActive(false);
                mainSceneMgr.WriteMessage("아이템 교환 티켓과 " + itemMgr.snack[type].name + "아이템과 교환하였습니다.");
            }
            else
            {
                SelectedItem_img.sprite = itemMgr.snack[type].ItemImg;
                RankItemName_text.text = itemMgr.snack[type].name;
                SelectedItemCheck_Menu.SetActive(true);
            }
        }
        else if (category.Equals(2))
        {
            if (confirmed)
            {
                itemMgr.glasses[type].numOfItem++;
                itemMgr.SetGLNumOfItem();
                TicketExchange_AS.Play();
                confirmed = false;
                SelectedItemCheck_Menu.SetActive(false);
                mainSceneMgr.WriteMessage("아이템 교환 티켓과 " + itemMgr.glasses[type].name + "아이템과 교환하였습니다.");
            }
            else
            {
                SelectedItem_img.sprite = itemMgr.glasses[type].ItemImg;
                RankItemName_text.text = itemMgr.glasses[type].name;
                SelectedItemCheck_Menu.SetActive(true);
            }
        }
    }
    public void ticketTest(int t)
    {
        switch(t)
        {
            case 0:
                RandomItemTicket_amount++;
                break;
            case 1:
                HighRankItemTicket_amount++;
                break;
            case 2:
                NormalItemTicket_amount++;
                break;
        }
    }
}
