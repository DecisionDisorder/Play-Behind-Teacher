using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

/// <summary>
/// 아이템 뽑기 티켓 관리 시스템 클래스
/// </summary>
public class TicketMgr : MonoBehaviour
{
    public ItemMgr itemMgr;
    public MainSceneMgr mainSceneMgr;
    public InGameMgr inGameMgr;
    public DataManager dataManager;

    /// <summary>
    /// 아이템 랜덤 뽑기 티켓 보유량
    /// </summary>
    public int RandomItemTicket_amount;
    /// <summary>
    /// 아이템 랜덤 뽑기 메뉴
    /// </summary>
    public GameObject RandomItem_Menu;
    /// <summary>
    /// 아이템 랜덤 뽑기 버튼
    /// </summary>
    public Button OpenRT_button;
    /// <summary>
    /// 아이템 뽑기 리셋(확인) 버튼
    /// </summary>
    public GameObject Reset_button;
    /// <summary>
    /// 고급 아이템 등장 효과 오브젝트
    /// </summary>
    public GameObject lightEffect;
    /// <summary>
    /// 랜덤 아이템 메뉴 활성화 애니메이션
    /// </summary>
    public Animation RandomItem_MenuAni;
    /// <summary>
    /// 아이템 뽑기 애니메이션
    /// </summary>
    public Animation OpenRandomItem_ani;
    /// <summary>
    /// 아이템 등장 애니메이션
    /// </summary>
    public Animation ItemAppear_ani;
    /// <summary>
    /// 아이템 이름 등장 애니메이션
    /// </summary>
    public Animation ItemNameAppear_ani;
    /// <summary>
    /// 아이템 랜덤 뽑기 효과음
    /// </summary>
    public AudioSource RandomTicket_AS;
    /// <summary>
    /// 랜덤 뽑기 결과 이미지
    /// </summary>
    public Image RandomResult_img;
    /// <summary>
    /// 랜덤 뽑기 결과 아이템 이름 텍스트
    /// </summary>
    public Text ItemNameResult_text;
    /// <summary>
    /// 랜덤 티켓 개수 표시 텍스트
    /// </summary>
    public Text numOfRT_Text;
    /// <summary>
    /// 고급 아이템 결과 텍스트 색상
    /// </summary>
    public Color HighItem_color;
    /// <summary>
    /// 일반 아이템 결과 텍스트 색상
    /// </summary>
    public Color Normal_color;

    /// <summary>
    /// 일반 아이템 교환 티켓 수량
    /// </summary>
    public int NormalItemTicket_amount;
    /// <summary>
    /// 일반 아이템 교환 티켓 수량 표시 텍스트 배열
    /// </summary>
    public Text[] numOfNI_texts;

    /// <summary>
    /// 고급 아이템 교환 티켓 수량
    /// </summary>
    public int HighRankItemTicket_amount;
    /// <summary>
    /// 고급 아이템 교환 티켓 수량 표시 텍스트 배열
    /// </summary>
    public Text[] numOfHI_texts;

    /// <summary>
    /// 아이템 교환 효과음
    /// </summary>
    public AudioSource TicketExchange_AS;

    /// <summary>
    /// 아이템 교환처 메뉴
    /// </summary>
    public GameObject rankTicket_Menu;
    /// <summary>
    /// 아이템 교환처 메뉴 활성화 애니메이션
    /// </summary>
    public Animation rankTicket_MenuAni;
    /// <summary>
    /// 선택된 아이템 이미지
    /// </summary>
    public Image SelectedItem_img;
    /// <summary>
    /// 선택된 아이템 이름 텍스트
    /// </summary>
    public Text RankItemName_text;

    /// <summary>
    /// 일반 아이템 교환 메뉴
    /// </summary>
    public GameObject NormalTicket_Menu;
    /// <summary>
    /// 고급 아이템 교환 메뉴
    /// </summary>
    public GameObject HighTicket_Menu;
    /// <summary>
    /// 교환할 아이템 확인 메뉴
    /// </summary>
    public GameObject SelectedItemCheck_Menu;

    /// <summary>
    /// 효과음이 출력되었는지 여부
    /// </summary>
    private bool soundPrinted = false;

    /// <summary>
    /// (아이템 교환권) 아이템 선택 확인 했는지 여부
    /// </summary>
    private bool confirmed;
    /// <summary>
    /// (아이템 교환권) 일반 아이템 교환권인지 여부
    /// </summary>
    private bool isnormal;
    /// <summary>
    /// (아이템 교환권) 선택한 아이템 종류
    /// </summary>
    private int kind_item;

    /// <summary>
    /// 티켓 관련 메뉴 제어 함수
    /// </summary>
    public void MenusControl(int k)
    {
        switch(k)
        {
            case 0: // 랜덤 티켓 메뉴 열기
                BackkeyMgr.numOfOpenedMenus++;
                numOfRT_Text.text = "티켓 수: " + RandomItemTicket_amount;
                RandomItem_MenuAni.Play();
                RandomItem_Menu.SetActive(true);
                break;
            case 1: // 랜덤 티켓 메뉴 닫기
                if (BackkeyMgr.backEnabled)
                {
                    BackkeyMgr.numOfOpenedMenus--;
                    inGameMgr.CloseMenu(RandomItem_MenuAni, RandomItem_Menu);
                }
                else
                {
                    mainSceneMgr.WriteMessage("티켓 오픈중에는 메뉴를 종료 할 수 없습니다.");
                }
                break;
            case 2: // 아이템 교환처 열기 
                BackkeyMgr.numOfOpenedMenus++;
                SetText_Normal();
                SetText_HighRank();
                rankTicket_MenuAni.Play();
                rankTicket_Menu.SetActive(true);
                break;
            case 3: // 아이템 교환처 닫기
                BackkeyMgr.numOfOpenedMenus--;
                inGameMgr.CloseMenu(rankTicket_MenuAni, rankTicket_Menu);
                break;
            case 4: // 일반 아이템 교환 메뉴 열기
                BackkeyMgr.numOfOpenedMenus++;
                NormalTicket_Menu.SetActive(true);
                break;
            case 5: // 일반 아이템 교환 메뉴 닫기
                BackkeyMgr.numOfOpenedMenus--;
                NormalTicket_Menu.SetActive(false);
                break;
            case 6: // 고급 아이템 교환 메뉴 열기
                BackkeyMgr.numOfOpenedMenus++;
                HighTicket_Menu.SetActive(true);
                break;
            case 7: // 고급 아이템 교환 메뉴 닫기
                BackkeyMgr.numOfOpenedMenus--;
                HighTicket_Menu.SetActive(false);
                break;
        }
    }

    /// <summary>
    /// 랜덤 아이템 티켓 개봉
    /// </summary>
    public void OpenRandomItem()
    {
        bool isHigh = false;
        // 티켓 수량 확인
        if (RandomItemTicket_amount > 0)
        {
            // 뒤로가기(메뉴 닫기)가 불가능 하도록 설정
            BackkeyMgr.backEnabled = false;
            // 뽑기 버튼 비활성화
            OpenRT_button.enabled = false;
            // 아이템 종류(일반, 고급)를 확률에 따라 선택
            AllocateRandomItem(ref isHigh);
            // 고급 아이템 전환 효과
            if (isHigh)
                OpenRandomItem_ani.CrossFade("TicketOpen(High)");
            else
                OpenRandomItem_ani.Play();
            // 애니메이션 효과 종료 대기
            StartCoroutine(WaitRandomItemAni());
            // 티켓 수량 차감
            RandomItemTicket_amount--;
            numOfRT_Text.text = "티켓 수: " + RandomItemTicket_amount;
        }
        else
        {
            mainSceneMgr.WriteMessage("랜덤 아이템 티켓이 없습니다.");
        }
    }
    /// <summary>
    /// 랜덤 아이템 티켓 개봉 애니메이션 대기 코루틴
    /// </summary>
    IEnumerator WaitRandomItemAni() 
    {
        // 티켓을 열고있는 애니메이션이 재생 중인 동안 대기
        while (OpenRandomItem_ani.IsPlaying("TicketOpen") || OpenRandomItem_ani.IsPlaying("TicketOpen(High)"))
        {
            yield return new WaitForEndOfFrame();
            // 일정 시간 후에 티켓 개봉 효과음 재생
            if ((OpenRandomItem_ani["TicketOpen"].time > 0.92f || OpenRandomItem_ani["TicketOpen(High)"].time > 0.92f) && !soundPrinted)
            {
                RandomTicket_AS.Play();
                soundPrinted = true;
            }
                
        }
        soundPrinted = false;
        // 아이템 등장 효과 재생
        ItemAppear_ani.Play();
        ItemNameAppear_ani.Play();
        StartCoroutine(WaitOpenRTEnd());
        // 확인 버튼 활성화
        Reset_button.SetActive(true);
    }
    /// <summary>
    /// 아이템 등장 효과 애니메이션 종료 대기 코루틴
    /// </summary>
    IEnumerator WaitOpenRTEnd()
    {
        while(ItemAppear_ani.IsPlaying("ItemAppear"))
        {
            yield return new WaitForEndOfFrame();
        }

        // 뒤로가기 키 원상 복구 및 데이터 저장
        BackkeyMgr.backEnabled = true;
        dataManager.SaveData();
    }
    /// <summary>
    /// 랜덤 아이템 확률에 따른 랜덤 지정
    /// </summary>
    /// <param name="isHigh">고급 아이템인지 여부</param>
    public void AllocateRandomItem(ref bool isHigh) 
    {
        int r = Random.Range(0,100);
        int bonusAdd;

        // 20%의 확률로 고급 아이템 지정
        if(r < 20)
        {
            isHigh = true;
            bonusAdd = 2;
            ItemNameResult_text.color = HighItem_color;
        }
        // 그 외의 경우에는 일반 아이템으로 지정
        else
        {
            isHigh = false;
            bonusAdd = 0;
            ItemNameResult_text.color = Normal_color;
        }

        // 아이템 종류 선정
        int rI = Random.Range(0, 3);
        if (rI.Equals(0)) // 수면총 종류 결정 및 지급 처리
        {
            int rk = Random.Range(0, 2);
            itemMgr.sleepingGun[bonusAdd + rk].numOfItem++;
            RandomResult_img.sprite = itemMgr.sleepingGun[bonusAdd + rk].ItemImg;
            ItemNameResult_text.text = itemMgr.sleepingGun[bonusAdd + rk].name;
            itemMgr.SetSGNumOfItem();
        }
        else if (rI.Equals(1)) // 간식 종류 결정 및 지급 처리
        {
            int rk = Random.Range(0, 2);
            itemMgr.snack[bonusAdd + rk].numOfItem++;
            RandomResult_img.sprite = itemMgr.snack[bonusAdd + rk].ItemImg;
            ItemNameResult_text.text = itemMgr.snack[bonusAdd + rk].name;
            itemMgr.SetSNNumOfItem();
        }
        else if (rI.Equals(2)) // 안경 종류 결정 및 지급 처리
        {
            int rk = Random.Range(0, 2);
            itemMgr.glasses[bonusAdd + rk].numOfItem++;
            RandomResult_img.sprite = itemMgr.glasses[bonusAdd + rk].ItemImg;
            ItemNameResult_text.text = itemMgr.glasses[bonusAdd + rk].name;
            itemMgr.SetGLNumOfItem();
        }
    }
    /// <summary>
    /// 랜덤 아이템 뽑기 UI 초기화
    /// </summary>
    public void ResetRandomTicket()
    {
        ItemAppear_ani.Stop();
        RandomResult_img.color = new Vector4(1, 1, 1, 0);
        OpenRandomItem_ani["TicketOpen"].normalizedTime = 0;
        ItemNameAppear_ani["ItemNameAppear"].normalizedTime = 0;
        OpenRandomItem_ani.Play();
        ItemNameAppear_ani.Play();
        Reset_button.SetActive(false);
        OpenRT_button.enabled = true;
        lightEffect.SetActive(false);
        StartCoroutine(ResetRandomTicket_cor());
    }
    /// <summary>
    /// 랜덤 아이템 애니메이션 초기화 대기 코루틴
    /// </summary>
    IEnumerator ResetRandomTicket_cor() 
    {
        yield return new WaitForSeconds(0.01f);
        OpenRandomItem_ani.Stop();
        ItemNameAppear_ani.Stop();
    }

    /// <summary>
    /// 티켓과 교환할 일반 아이템 교환 고르기
    /// </summary>
    /// <param name="kind">선택한 아이템 종류</param>
    public void ChooseNormalItem(int kind)
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
    /// <summary>
    /// 티켓과 교환할 고급 아이템 고르기
    /// </summary>
    /// <param name="kind">선택한 아이템 종류</param>
    public void ChooseHighRankItem(int kind)
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
    /// <summary>
    /// 일반 아이템 교환 티켓 개수 텍스트 업데이트
    /// </summary>
    public void SetText_Normal()
    {
        for(int i = 0; i < numOfNI_texts.Length; i++)
        {
            numOfNI_texts[i].text = NormalItemTicket_amount+"개";
        }
    }
    /// <summary>
    /// 고급 아이템 교환 티켓 개수 텍스트 업데이트
    /// </summary>
    public void SetText_HighRank()
    {
        for (int i = 0; i < numOfHI_texts.Length; i++)
        {
            numOfHI_texts[i].text = HighRankItemTicket_amount+ "개";
        }
    }
    /// <summary>
    /// 교환할 아이템 선택 확인
    /// </summary>
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
    /// <summary>
    /// 교환할 아이템 선택 취소
    /// </summary>
    public void CancelItemSelect()
    {
        SelectedItemCheck_Menu.SetActive(false);
    }
    /// <summary>
    /// 아이템 교환권으로 아이템 지급
    /// </summary>
    /// <param name="category">아이템 종류</param>
    /// <param name="type">세부 아이템 번호</param>
    public void OfferItems(int category, int type)
    {
        // 수면총 아이템
        if (category.Equals(0))
        {
            // 확인한 경우, 선택한 수면총 아이템 지급
            if (confirmed)
            {
                itemMgr.sleepingGun[type].numOfItem++;
                itemMgr.SetSGNumOfItem();
                TicketExchange_AS.Play();
                confirmed = false;
                SelectedItemCheck_Menu.SetActive(false);
                mainSceneMgr.WriteMessage("아이템 교환 티켓과 " + itemMgr.sleepingGun[type].name + "아이템과 교환하였습니다.");
            }
            // 확인하기 전일 때, 메뉴 업데이트 후 활성화
            else
            {
                SelectedItem_img.sprite = itemMgr.sleepingGun[type].ItemImg;
                RankItemName_text.text = itemMgr.sleepingGun[type].name;
                SelectedItemCheck_Menu.SetActive(true);
            }
        }
        // 간식 아이템
        else if (category.Equals(1))
        {
            // 확인한 경우, 선택한 간식 아이템 지급
            if (confirmed)
            {
                itemMgr.snack[type].numOfItem++;
                itemMgr.SetSNNumOfItem();
                TicketExchange_AS.Play();
                confirmed = false;
                SelectedItemCheck_Menu.SetActive(false);
                mainSceneMgr.WriteMessage("아이템 교환 티켓과 " + itemMgr.snack[type].name + "아이템과 교환하였습니다.");
            }
            // 확인하기 전일 때, 메뉴 업데이트 후 활성화
            else
            {
                SelectedItem_img.sprite = itemMgr.snack[type].ItemImg;
                RankItemName_text.text = itemMgr.snack[type].name;
                SelectedItemCheck_Menu.SetActive(true);
            }
        }
        // 안경 아이템
        else if (category.Equals(2))
        {
            // 확인한 경우, 선택한 안경 아이템 지급
            if (confirmed)
            {
                itemMgr.glasses[type].numOfItem++;
                itemMgr.SetGLNumOfItem();
                TicketExchange_AS.Play();
                confirmed = false;
                SelectedItemCheck_Menu.SetActive(false);
                mainSceneMgr.WriteMessage("아이템 교환 티켓과 " + itemMgr.glasses[type].name + "아이템과 교환하였습니다.");
            }
            // 확인하기 전일 때, 메뉴 업데이트 후 활성화
            else
            {
                SelectedItem_img.sprite = itemMgr.glasses[type].ItemImg;
                RankItemName_text.text = itemMgr.glasses[type].name;
                SelectedItemCheck_Menu.SetActive(true);
            }
        }
    }
    /// <summary>
    /// 티켓 테스트 함수
    /// </summary>
    /// <param name="t"></param>
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
