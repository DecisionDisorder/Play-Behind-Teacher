using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

/// <summary>
/// 스마트폰 상점 관리 클래스
/// </summary>
public class PhoneStore : MonoBehaviour {

    public CoinMgr coinMgr;
    public ItemMgr itemMgr;
    public DataManager dataManager;

    /// <summary>
    /// 장착 중인 스마트폰의 이미지
    /// </summary>
    public Image Phone_image;
    /// <summary>
    /// 각 스마트폰의 프리셋 배열
    /// </summary>
    public PhoneAttributes[] Phones;
    /// <summary>
    /// 선택된 스마트폰 종류
    /// </summary>
    public int SelectedPhoneCode;
    /// <summary>
    /// 구매 확인 메뉴
    /// </summary>
    public GameObject BuyCheck_Menu;

    /// <summary>
    /// 스마트폰 이름 텍스트
    /// </summary>
    public Text PhoneName_text;
    /// <summary>
    /// 스마트폰 가격 텍스트
    /// </summary>
    public Text PhonePrice_text;
    /// <summary>
    /// (임시 변수) 구매 확인 중인 스마트폰 번호
    /// </summary>
    int temp_phoneNum;

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

    void Start () {
        // 카톡 게임에서의 스마트폰 이미지 스프라이트 설정
		if(SceneManager.GetActiveScene().buildIndex.Equals(2))
        {
            Phone_image.sprite = Phones[SelectedPhoneCode].PhoneSprite;
        }
        // 메인 씬에서의 폰 상점 설정
        else if(SceneManager.GetActiveScene().buildIndex.Equals(0))
        {
            SettingPhoneStore();
            SelectPhone(SelectedPhoneCode);
        }
	}

    /// <summary>
    /// 스마트폰 선택
    /// </summary>
    /// <param name="kind">스마트폰 종류</param>
    public void SelectPhone(int kind)
    {
        // 폰을 가지고 있는지 확인
        if (Phones[kind].hasThisPhone)
        {
            // 기존 스마트폰의 선택 UI 해제
            Phones[SelectedPhoneCode].PhoneSelectedMark.SetActive(false);
            // 선택한 스마트폰의 선택 UI 활성화
            SelectedPhoneCode = kind;
            Phones[kind].PhoneSelectedMark.SetActive(true);
        }
        else
        {
            // 구매 확인 메뉴 활성화
            temp_phoneNum = kind;
            PhoneName_text.text = "폰 종류: " + Phones[temp_phoneNum].PhoneName;
            PhonePrice_text.text = "폰 가격: " + Phones[temp_phoneNum].PhonePrice + " Coin";
            BuyCheck_Menu.SetActive(true);
            if(BackkeyMgr.numOfOpenedMenus.Equals(2))
                BackkeyMgr.numOfOpenedMenus++;
        }
    }
    /// <summary>
    /// 스마트폰 구매 처리
    /// </summary>
    public void BuyPhone()
    {
        // 코인 보유량 확인
        if (CoinMgr.Coin >= (ulong)Phones[temp_phoneNum].PhonePrice)
        {
            // 코인 차감
            CoinMgr.Coin -= (ulong)Phones[temp_phoneNum].PhonePrice;
            coinMgr.setCoinText();
            // 스마트폰 구매 처리
            Phones[temp_phoneNum].hasThisPhone = true;
            Phones[temp_phoneNum].PhonePrice_text.text = "선택하기";
            // UI 업데이트 및 저장
            itemMgr.CoinSound_buy();
            CloseBuyCheckMenu();
            dataManager.SaveData();
        }
        else
        {
            WriteMessage("코인이 부족합니다.", 1.5f);
        }
    }

    /// <summary>
    /// 스마트폰 상점 텍스트 설정
    /// </summary>
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
    /// <summary>
    /// 구매 확인 메뉴 닫기
    /// </summary>
    public void CloseBuyCheckMenu()
    {
        BuyCheck_Menu.SetActive(false);
        BackkeyMgr.numOfOpenedMenus--;
    }
    // 선택한 스마트폰 종류 설정
    public void GetPhoneNum(int num)
    {
        temp_phoneNum = num;
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
/// 스마트폰 관련 설정 프리셋
/// </summary>
[System.Serializable]
public class PhoneAttributes
{
    /// <summary>
    /// 선택됨을 보여주는 마크 오브젝트
    /// </summary>
    public GameObject PhoneSelectedMark;
    /// <summary>
    /// 스마트폰의 이미지 스프라이트
    /// </summary>
    public Sprite PhoneSprite;
    /// <summary>
    /// 스마트폰 상점에서의 가격 정보 텍스트
    /// </summary>
    public Text PhonePrice_text;
    /// <summary>
    /// 스마트폰 이름
    /// </summary>
    public string PhoneName;
    /// <summary>
    /// 스마트폰 가격
    /// </summary>
    public int PhonePrice;
    /// <summary>
    /// 스마트폰 보유 여부
    /// </summary>
    public bool hasThisPhone;
}
