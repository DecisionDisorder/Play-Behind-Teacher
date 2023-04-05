using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class SnackStore : MonoBehaviour {
    
    public CoinMgr coinMgr;
    public SnackGameMgr snackGameMgr;
    public ItemMgr itemMgr;
    public DataManager dataManager;

    public Snack_buscuit[] Buscuits;
    public GameObject BuyCheck_Menu;
    public Image ImgInfo_img;
    public Text priceInfo_text;
    public Text nameInfo_text;

    public int selectedBuscuit;//인게임용
    
    public RectTransform[] snackBlack_rects;
    public Image[] snackInside_img;
    public GameObject[] snack_objs;
    public Image[] SnackSlots_img;
    public Image SnackOnDesk_img;
    public Sprite EquippedSlot_sprite;
    public Sprite UnEquippedSlot_sprite;

    public GameObject Message;
    public Text Message_text;
    IEnumerator messageWait;

    int selectedSnack;//상점용

    void Start () {
        if (SceneManager.GetActiveScene().buildIndex.Equals(0))
            SettingStore();
        else if (SceneManager.GetActiveScene().buildIndex.Equals(3))
        {
            SettingSnack();
            SettingText();
        }
	}
	void SettingStore()
    {
        for(int i = 1; i < Buscuits.Length; i++)
        {
            Buscuits[i].numOfbuscuits_text.text = "x" + Buscuits[i].numOfbuscuit;
            Buscuits[i].price_text.text = Buscuits[i].price + " Coin";
            Buscuits[i].effect_text.text = "+" + Buscuits[i].effect + "%/s";
        }
    }
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
    public void SetKind(int kind)
    {
        selectedSnack = kind;
    }
    public void OnBuy()
    {
        BuyMenuButton(1);
        if ((ulong)Buscuits[selectedSnack].price <= CoinMgr.Coin)
        {
            CoinMgr.Coin -= (ulong)Buscuits[selectedSnack].price;
            coinMgr.setCoinText();
            Buscuits[selectedSnack].numOfbuscuit++;
            if(Buscuits[selectedSnack].numOfbuscuit.Equals(1))
            {
                Buscuits[selectedSnack].snackCapacity = 75;
                Buscuits[selectedSnack].snackLeft = 10;
            }
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
    
    public void CalculateSnackLeft(int minus)
    {
        if(Buscuits[selectedBuscuit].snackLeft.Equals(10) && Buscuits[selectedBuscuit].snackCapacity.Equals(75) && selectedSnack != 0)
        {
            Buscuits[selectedBuscuit].numOfbuscuit--;
            Buscuits[selectedBuscuit].numOfbuscuits_text.text = "x" + Buscuits[selectedBuscuit].numOfbuscuit;

            if (Buscuits[selectedBuscuit].numOfbuscuit.Equals(0))
                Buscuits[selectedBuscuit].numOfbuscuits_text.color = Color.red;
            else
                Buscuits[selectedBuscuit].numOfbuscuits_text.color = Color.green;
        }

        Buscuits[selectedBuscuit].snackCapacity -= minus;
        snackBlack_rects[Buscuits[selectedBuscuit].snackLeft - 1].offsetMin = new Vector2(0, Buscuits[selectedBuscuit].snackCapacity);

        if (Buscuits[selectedBuscuit].snackCapacity <= 0)
        {
            snack_objs[Buscuits[selectedBuscuit].snackLeft - 1].SetActive(false);
            Buscuits[selectedBuscuit].snackLeft--;

            if (snackGameMgr.isMissionOn_EatSnack)//미션 조건 체크
                snackGameMgr.Mission_SnackEat();

            Buscuits[selectedBuscuit].snackCapacity = 75;
        }
        if(Buscuits[selectedBuscuit].snackLeft.Equals(0))
        {
            Buscuits[selectedBuscuit].numOfbuscuit--;
            SettingText();


            if(Buscuits[selectedBuscuit].numOfbuscuit <= 0)
            {
                if(selectedBuscuit != 0)
                    FindNextSnack();
            }

            Buscuits[selectedBuscuit].snackLeft = 10;

            for(int i = 0; i < snack_objs.Length; i++)
            {
                snack_objs[i].SetActive(true);
                snackBlack_rects[i].offsetMin = new Vector2(0, 75);
            }
        }
    }
    public void LoadSnackLeft()
    {
        if (Buscuits[selectedBuscuit].snackLeft.Equals(0))
            Buscuits[selectedBuscuit].snackLeft = 10;

        for(int i = 0; i < Buscuits[selectedBuscuit].snackLeft; i++)
        {
            snack_objs[i].SetActive(true);
        }

        if(Buscuits[selectedBuscuit].snackLeft != 10)
        {
            for(int i = Buscuits[selectedBuscuit].snackLeft; i < 10; i++)
            {
                snack_objs[i].SetActive(false);
            }
        }
        LoadSnackCapacity();
    }
    public void LoadSnackCapacity()
    {
        for(int i = 0; i < 10; i++)
        {
            snackBlack_rects[i].offsetMin = new Vector2(0, 75);
        }
        snackBlack_rects[Buscuits[selectedBuscuit].snackLeft-1].offsetMin = new Vector2(0, Buscuits[selectedBuscuit].snackCapacity);
    }
    void FindNextSnack()
    {
        SnackSlots_img[selectedBuscuit].sprite = UnEquippedSlot_sprite;
        SnackSlots_img[selectedBuscuit].type = Image.Type.Simple;
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
    void SettingSnack()
    {
        SnackOnDesk_img.sprite = Buscuits[selectedBuscuit].snackSprite;
        SnackSlots_img[selectedBuscuit].sprite = EquippedSlot_sprite;
        SnackSlots_img[selectedBuscuit].type = Image.Type.Simple;
        for(int i = 0; i < 10; i++)
        {
            snackInside_img[i].sprite = Buscuits[selectedBuscuit].snackInsideSprite;
        }
        LoadSnackLeft();
    }
    void SettingText()
    {
        for (int i = 1; i < Buscuits.Length; i++)
        {
            Buscuits[i].numOfbuscuits_text.text = "x" + Buscuits[i].numOfbuscuit;
            if (Buscuits[i].numOfbuscuit.Equals(0))
                Buscuits[i].numOfbuscuits_text.color = Color.red;
            else
                Buscuits[i].numOfbuscuits_text.color = Color.green;
        }
    }
    public void ChangeSnack(int kind)
    {
        if(!Buscuits[kind].numOfbuscuit.Equals(0) || kind.Equals(0))
        {
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
    public void WriteMessage(string message, float time = 1.2f)
    {
        messageWait = WaitforMessage(time);
        StopCoroutine(messageWait);

        Message.SetActive(true);
        Message_text.text = message;
        StartCoroutine(messageWait);
    }
    IEnumerator WaitforMessage(float time)
    {
        yield return new WaitForSeconds(time);

        Message.SetActive(false);
    }
}

[System.Serializable]
public class Snack_buscuit
{
    public string name;
    public int price;
    public int effect;
    public int numOfbuscuit;
    public int snackLeft;
    public int snackCapacity;
    //public int priceUp;
    public Sprite snackSprite;
    public Sprite snackInsideSprite;
    public Text price_text;
    public Text effect_text;
    public Text numOfbuscuits_text;
}