using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class PhoneStore : MonoBehaviour {

    public CoinMgr coinMgr;
    public ItemMgr itemMgr;
    public DataManager dataManager;

    public Image Phone_image;
    public PhoneAttributes[] Phones;
    public int SelectedPhoneCode;
    public GameObject BuyCheck_Menu;

    public Text PhoneName_text;
    public Text PhonePrice_text;
    int temp_phoneNum;

    public GameObject Message;
    public Text Message_text;
    IEnumerator messageWait;

    void Start () {
		if(SceneManager.GetActiveScene().buildIndex.Equals(2))
        {
            Phone_image.sprite = Phones[SelectedPhoneCode].PhoneSprite;
        }
        else if(SceneManager.GetActiveScene().buildIndex.Equals(0))
        {
            SettingPhoneStore();
            SelectPhone(SelectedPhoneCode);
        }
	}

    public void SelectPhone(int kind)
    {
        if (Phones[kind].hasThisPhone)
        {
            Phones[SelectedPhoneCode].PhoneSelectedMark.SetActive(false);
            SelectedPhoneCode = kind;
            Phones[kind].PhoneSelectedMark.SetActive(true);
        }
        else
        {
            temp_phoneNum = kind;
            PhoneName_text.text = "폰 종류: " + Phones[temp_phoneNum].PhoneName;
            PhonePrice_text.text = "폰 가격: " + Phones[temp_phoneNum].PhonePrice + " Coin";
            BuyCheck_Menu.SetActive(true);
            if(BackkeyMgr.numOfOpenedMenus.Equals(2))
                BackkeyMgr.numOfOpenedMenus++;
        }
    }
    public void BuyPhone()
    {
        if (CoinMgr.Coin >= (ulong)Phones[temp_phoneNum].PhonePrice)
        {
            CoinMgr.Coin -= (ulong)Phones[temp_phoneNum].PhonePrice;
            coinMgr.setCoinText();
            Phones[temp_phoneNum].hasThisPhone = true;
            Phones[temp_phoneNum].PhonePrice_text.text = "선택하기";
            itemMgr.CoinSound_buy();
            CloseBuyCheckMenu();
            dataManager.SaveData();
        }
        else
        {
            WriteMessage("코인이 부족합니다.", 1.5f);
        }
    }

    public void SettingPhoneStore()
    {
        for (int i = 0; i < Phones.Length; i++)
        {
            if (Phones[i].hasThisPhone)
            {
                Phones[i].PhonePrice_text.text = "선택하기";
            }
            else
            {
                Phones[i].PhonePrice_text.text = Phones[i].PhonePrice + " Coin";
            }
        }
    }
    public void CloseBuyCheckMenu()
    {
        BuyCheck_Menu.SetActive(false);
        BackkeyMgr.numOfOpenedMenus--;
    }
    public void GetPhoneNum(int num)
    {
        temp_phoneNum = num;
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
public class PhoneAttributes
{
    public GameObject PhoneSelectedMark;
    public Sprite PhoneSprite;
    public Text PhonePrice_text;
    public string PhoneName;
    public int PhonePrice;
    public bool hasThisPhone;
}
