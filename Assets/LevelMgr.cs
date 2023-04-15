using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

/// <summary>
/// 레벨 시스템 관리 클래스
/// </summary>
public class LevelMgr : MonoBehaviour {

    /// <summary>
    /// 플레이어의 레벨
    /// </summary>
    public int Level;
    /// <summary>
    /// 플레이어의 현재 경험치
    /// </summary>
    public int Exp;
    /// <summary>
    /// 플레이어의 누적 경험치
    /// </summary>
    public int AccumulatedExp;
    /// <summary>
    /// 레벨업 경험치 요구량
    /// </summary>
    public int LevelUpExp;
    /// <summary>
    /// 사용 가능한 스탯
    /// </summary>
    public int availableStat;
    /// <summary>
    /// 최대 레벨
    /// </summary>
    const int MaxLevel = 75;

    /// <summary>
    /// 스탯 데이터 배열
    /// </summary>
    public Stat[] StatArr;

    public ItemMgr itemMgr;
    public MainSceneMgr mainSceneMgr;
    public InGameMgr inGameMgr;
    public DataManager dataManager;

    /// <summary>
    /// 스탯 메뉴
    /// </summary>
    public GameObject Level_Menu;
    /// <summary>
    /// 스탯 메뉴 활성화 애니메이션
    /// </summary>
    public Animation Level_MenuAni;
    /// <summary>
    /// 스탯 메뉴의 경험치 표시 텍스트
    /// </summary>
    public Text LvM_Exp_text;
    /// <summary>
    /// 스탯 메뉴의 레벨 표시 텍스트
    /// </summary>
    public Text LvM_Level_text;
    /// <summary>
    /// 스탯 메뉴의 사용 가능한 스탯 텍스트
    /// </summary>
    public Text LvM_AvailableStat_text;

    /// <summary>
    /// 레벨 메인 텍스트
    /// </summary>
    public Text Level_text;
    /// <summary>
    /// 레벨별 색상
    /// </summary>
    public Color[] LevelColors;
    /// <summary>
    /// 스탯 미사용 알림 뱃지
    /// </summary>
    public GameObject Badge_obj;
    /// <summary>
    /// 뱃지에서 사용 가능한 스탯량 표시하는 텍스트
    /// </summary>
    public Text Badge_text;

    /// <summary>
    /// 스탯 증가 메뉴
    /// </summary>
    public GameObject Statup_Menu;
    /// <summary>
    /// 올릴 스탯의 이름 텍스트
    /// </summary>
    public Text StatName_text;
    /// <summary>
    /// 올릴 스탯의 설명 텍스트
    /// </summary>
    public Text StatExplain_text;
    /// <summary>
    /// 올릴 스탯의 레벨 텍스트
    /// </summary>
    public Text StatUpLevel_text;
    /// <summary>
    /// 올릴 스탯의 효과 예시 텍스트
    /// </summary>
    public Text StatUpExample_text;

    /// <summary>
    /// 경험치바 이미지 오브젝트
    /// </summary>
    public GameObject expImg_fix;
    /// <summary>
    /// 레벨 메뉴의 경험치바 이미지 오브젝트
    /// </summary>
    public GameObject LvM_ExpImg_fix;
    
    /// <summary>
    /// 경험치 바 게이지 값
    /// </summary>
    public int UI_GageValue;
    /// <summary>
    /// 경험치 바 슬라이더
    /// </summary>
    public Slider ExpGage_slider;
    /// <summary>
    /// 스탯 메뉴의 경험치 바 슬라이더
    /// </summary>
    public Slider LvM_ExpGage_slider;
    /// <summary>
    /// 게이지 증감 효과 코루틴
    /// </summary>
    IEnumerator gagemoving;

    void Start()
    {
        // 경험치 요구량 계산
        ExpCalculate();
        // 시작화면에서 뱃지 업데이트
        if (SceneManager.GetActiveScene().buildIndex.Equals(0))
        {
            SetBadge();
        }
        // 레벨 정보 업데이트
        SetLevelText();
    }

    /// <summary>
    /// 레벨업 처리
    /// </summary>
    /// <param name="score">게임 점수 결과</param>
    public void LevelUp(ulong score = 0)//called only in game (now state)
    {
        // 레벨업 조건 확인
        if (LevelUpExp <= Exp)
        {
            // 최대 레벨 확인
            if (Level < MaxLevel)
            {
                // 경험치 삭감
                Exp -= LevelUpExp;
                // 레벨 추가
                Level++;
                // 스탯 포인트 지급
                availableStat++;
                // 레벨업 이후 최대 레벨이 아닐 때의 게이지 효과
                if (Level < MaxLevel)
                {
                    StartGageMove(0, Exp, ExpGage_slider, score);
                }
                // 레벨업 이후 최대 레벨일 때의 게이지 효과
                else
                {
                    StartGageMove(0, LevelUpExp, ExpGage_slider, score);
                }
                // 경험치 요구량 계산
                ExpCalculate();
                // 레벨/경험치 텍스트 업데이트
                SetLvMExpText(score);
            }
        }
    }
    
    /// <summary>
    /// 경험치 지급
    /// </summary>
    /// <param name="score">게임 점수 결과</param>
    public void ProvideExp(ulong score)
    {
        // 지급 전 경험치
        int startExp = Exp;
        // 경험치 지급 (점수의 10%)
        Exp += (int)(score * 0.1f);
        // 누적 경험치 추가
        AccumulatedExp += (int)(score * 0.1f);
        // 경험치 UI 업데이트
        SetLvMExpText(score);
        
        // 게이지 증감 효과 적용
        if (Level < MaxLevel)
            StartGageMove(startExp, Exp, ExpGage_slider, score);
        else
            StartGageMove(0, LevelUpExp, ExpGage_slider, score);
    }
    /// <summary>
    /// 스탯 정보 업데이트
    /// </summary>
    /// <param name="kind">스탯 종류</param>
    public void SetStatText(int kind)
    {
        // -1일 때는 전체 업데이트
        if(kind.Equals(-1))
        {
            for (int i = 0; i < 5; i++)
            {
                SetStatText(i);
            }
        }
        // 그 외엔 개별 업데이트
        else 
        {
            // 능력치가 음수일 때 (1레벨 이후부터는 모두 양수/음수 한방향으로 가기 때문에 1레벨의 수치 검사로 고정함)
            if (StatArr[kind].statAbility[1] < 0)
            {
                // 최대 레벨 이내일 때의 텍스트 업데이트
                if(StatArr[kind].statLevel + 1 < StatArr[kind].statAbility.Length)
                {
                    StatArr[kind].nextLvEffect_text.text = StatArr[kind].statAbility[StatArr[kind].statLevel + 1] + "%";
                }
                // 최대 레벨일 때의 텍스트 업데이트
                else
                {
                    StatArr[kind].nextLvEffect_text.text = "(Max)";
                }
                // 스탯 효과 및 레벨 업데이트
                StatArr[kind].presentEffect_text.text = StatArr[kind].statAbility[StatArr[kind].statLevel] + "%";
                StatArr[kind].presentLv_text.text = "" + StatArr[kind].statLevel;
            }
            // 능력치가 양수일 때
            else
            {
                // 최대 레벨 이내일 때의 텍스트 업데이트
                if (StatArr[kind].statLevel + 1 < StatArr[kind].statAbility.Length)
                {
                    StatArr[kind].nextLvEffect_text.text = "+" + StatArr[kind].statAbility[StatArr[kind].statLevel + 1] + "%";
                }
                // 최대 레벨일 때의 텍스트 업데이트
                else
                {
                    StatArr[kind].nextLvEffect_text.text = "(Max)";
                }
                // 스탯 효과 및 레벨 업데이트
                StatArr[kind].presentEffect_text.text = "+" + StatArr[kind].statAbility[StatArr[kind].statLevel] + "%";
                StatArr[kind].presentLv_text.text = "" + StatArr[kind].statLevel;
            }
        }
    }

    /// <summary>
    /// 레벨업 경험치 요구량 계산
    /// </summary>
    void ExpCalculate()
    {
        LevelUpExp = (int)(1.5712f * (Level + 1) * (Level + 1) + 14.373f * (Level + 1) + 84.155f);
    }
    /// <summary>
    /// 메인 경험치 슬라이더에서의 이미지 위치 고정
    /// </summary>
    public void FixExpPos()
    {
        expImg_fix.transform.position = ExpGage_slider.transform.position;
    }
    /// <summary>
    /// 스탯 메뉴 경험치 슬라이더에서의 이미지 위치 고정
    /// </summary>
    public void LvM_FixExpPos()
    {
        LvM_ExpImg_fix.transform.position = LvM_ExpGage_slider.transform.position;
    }

    /// <summary>
    /// 스탯 능력치를 아이템 능력치에 적용
    /// </summary>
    public void SetItemAbility()
    {
        for (int i = 0; i < itemMgr.sleepingGun.Length; i++)
        {
            StatArr[4].ApplyAbility(ref itemMgr.sleepingGun[i].SleepingTime);
            StatArr[4].ApplyAbility(ref itemMgr.snack[i].RecoverEndurance);
            StatArr[4].ApplyAbility(ref itemMgr.glasses[i].timeUp);
        }
    }

    /// <summary>
    /// 경험치 게이지 증감 효과 시작
    /// </summary>
    /// <param name="startValue">시작 값</param>
    /// <param name="endValue">종료 값</param>
    /// <param name="gage">슬라이더</param>
    /// <param name="score">점수</param>
    public void StartGageMove(int startValue, int endValue, Slider gage, ulong score = 0)//value: 
    {
        gage.maxValue = LevelUpExp * 10;
        if(gagemoving != null)
            StopCoroutine(gagemoving);
        gagemoving = GageMoving(startValue, endValue, gage, score);
        UI_GageValue = startValue * 10;
        StartCoroutine(gagemoving);
    }
    /// <summary>
    /// 경험치 게이지 증감 효과 제어 코루틴
    /// </summary>
    /// <param name="startValue">시작 값</param>
    /// <param name="endValue">종료 값</param>
    /// <param name="gage">슬라이더</param>
    /// <param name="score">점수</param>
    IEnumerator GageMoving(int startValue, int endValue, Slider gage, ulong score = 0)
    {
        yield return new WaitForEndOfFrame();

        UI_GageValue += (endValue - startValue) * 10 / 9 ;
        gage.value = UI_GageValue;

        if (endValue * 10 > UI_GageValue)
            StartCoroutine(GageMoving(startValue, endValue, gage, score));
        else
        {
            gage.value = endValue * 10;
            LevelUp(score);
        }

    }
    /// <summary>
    /// 레벨 메뉴의 레벨, 경험치 및 스탯 정보 업데이트
    /// </summary>
    /// <param name="score"></param>
    void SetLvMExpText(ulong score = 0)
    {
        // 경험치 정보 업데이트
        if(Level < MaxLevel)
            LvM_Exp_text.text = Exp + "/" + LevelUpExp + "(" + 100 * Exp / LevelUpExp + "%)";
        else
            LvM_Exp_text.text = "0/0(MAX)";
        // 레벨 정보 업데이트
        LvM_Level_text.text = "Lv." + Level;
        SetLevelColor(LvM_Level_text);
        // 시작 화면에서 레벨 메뉴의 능력치 정보 업데이트
        if (SceneManager.GetActiveScene().buildIndex.Equals(0))
        {
            if (availableStat > 0)
                LvM_AvailableStat_text.text = "남은 능력치: <color=#3ADF00>" + availableStat + "p</color>";
            else
                LvM_AvailableStat_text.text = "남은 능력치: <color=red>" + availableStat + "p</color>";
        }
        // 게임 씬에서 경험치 정보 업데이트
        else
        {
            string expS = "";
            int expI = (int)(score * 0.1f);

            if (expI.Equals(0))
                expS = "0";
            else
                expS = string.Format("{0:#,###}", expI);

            LvM_Exp_text.text += " (+" + expS + "exp)";
        }
    }

    /// <summary>
    /// 레벨 정보 업데이트
    /// </summary>
    void SetLevelText()
    {
        Level_text.text = "Lv." + Level;
        SetLevelColor(Level_text);
        if (Level < MaxLevel)
        {
            StartGageMove(0, Exp, ExpGage_slider);
        }
        else
            StartGageMove(0, LevelUpExp * 10, ExpGage_slider);
    }
    /// <summary>
    /// 레벨 구간별 레벨 텍스트 색상 조절
    /// </summary>
    /// <param name="level_text">대상 텍스트</param>
    public void SetLevelColor(Text level_text)
    {
        if (Level <= 20)
        {
            level_text.color = LevelColors[0];
        }
        else if (Level <= 35)
        {
            level_text.color = LevelColors[1];
        }
        else if (Level <= 50)
        {
            level_text.color = LevelColors[2];
        }
        else if(Level <= 60)
        {
            level_text.color = LevelColors[3];
        }
        else if(Level <= 70)
        {
            level_text.color = LevelColors[4];
        }
        else
        {
            level_text.color = LevelColors[5];
        }
    }
    /// <summary>
    /// 사용 가능한 스탯 알림 설정
    /// </summary>
    void SetBadge()
    {
        if(availableStat > 0)
        {
            Badge_obj.SetActive(true);
            Badge_text.text = "" + availableStat;
        }
        else
        {
            Badge_obj.SetActive(false);
        }
    }
    /// <summary>
    /// 레벨 메뉴 제어 함수
    /// </summary>
    public void LevelMenuCon(int num)
    {
        switch(num)
        {
            case 0:
                if (BackkeyMgr.numOfOpenedMenus < 1)
                {
                    Level_Menu.SetActive(true);
                    Level_MenuAni.Play();
                    SetLvMExpText();
                    SetStatText(-1);
                    BackkeyMgr.numOfOpenedMenus++;
                    StartCoroutine(WaitforStartExpAni());
                }
                else
                {
                    mainSceneMgr.WriteMessage("동시에 다른 두개의 메뉴를 띄을 수 없습니다.");
                }
                break;
            case 1:
                inGameMgr.CloseMenu(Level_MenuAni,Level_Menu);
                BackkeyMgr.numOfOpenedMenus--;
                break;
        }
    }
    /// <summary>
    /// 경험치바 증감 효과 시작 대기 코루틴
    /// </summary>
    /// <returns></returns>
    IEnumerator WaitforStartExpAni()
    {
        while(Level_MenuAni.isPlaying)
        {
            yield return new WaitForEndOfFrame();
        }

        if(Level < MaxLevel)
            StartGageMove(0, Exp, LvM_ExpGage_slider);
        else
            StartGageMove(0, LevelUpExp * 10, LvM_ExpGage_slider);
    }


    
    #region 스탯 찍는 메뉴 관련
    /// <summary>
    /// 목표 스탯 레벨
    /// </summary>
    int virtual_stat;
    /// <summary>
    /// 선택한 스탯 종류
    /// </summary>
    int selectedKind;

    /// <summary>
    /// 스탯 찍는 메뉴 활성화
    /// </summary>
    /// <param name="kind">선택한 스탯 종류</param>
    public void OpenStatUp(int kind)
    {
        // 스탯 선택 및 레벨 초기화
        selectedKind = kind;
        virtual_stat = StatArr[kind].statLevel;
        // 메뉴 활성화
        Statup_Menu.SetActive(true);
        BackkeyMgr.numOfOpenedMenus++;
        // 선택한 스탯 정보 업데이트
        StatName_text.text = StatArr[kind].name;
        StatUpLevel_text.text = "" + StatArr[kind].statLevel;
        StatExplain_text.text = StatArr[kind].explain;
        SUM_SetExampleText();
    }

    /// <summary>
    /// 스탯 찍기 확인/취소 함수
    /// </summary>
    public void AOC_StatUp(int select)//AOC: Apply OR Cancel
    {
        if(select.Equals(0)) //apply
        {
            // 목표 스탯만큼 스탯 레벨 상승
            for (int i = StatArr[selectedKind].statLevel; i < virtual_stat; i++)
                StatUp(selectedKind);
            SetLvMExpText();
            dataManager.SaveData();
            Statup_Menu.SetActive(false);
            BackkeyMgr.numOfOpenedMenus--;
        }
        else //cancel
        {
            Statup_Menu.SetActive(false);
            BackkeyMgr.numOfOpenedMenus--;
        }
    }
    /// <summary>
    /// 목표 스탯 레벨 올리기/내리기
    /// </summary>
    /// <param name="select">올리기/내리기</param>
    public void UpDown_Stat(int select)
    {
        if(select.Equals(0)) // 올리기
        {
            // 목표 스탯이 최대 레벨 이하인지 확인
            if(virtual_stat < StatArr[selectedKind].statAbility.Length - 1)
            {
                // 스탯 보유량 확인 
                if (availableStat - (virtual_stat - StatArr[selectedKind].statLevel) > 0)
                {
                    // 목표 스탯 상승
                    virtual_stat++;
                    StatUpLevel_text.text = "" + virtual_stat;
                    SUM_SetExampleText();
                }
                else
                {
                    mainSceneMgr.WriteMessage("남은 스탯 포인트가 부족합니다.");
                }
            }
            else
            {
                mainSceneMgr.WriteMessage("최대 스탯 레벨 입니다.");
            }
        }
        else // 내리기
        {
            // 기존 스탯 레벨보다 높은지
            if(virtual_stat > StatArr[selectedKind].statLevel)
            {
                // 목표 스택 감소
                virtual_stat--;
                StatUpLevel_text.text = "" + virtual_stat;
                SUM_SetExampleText();
            }
            else
            {
                mainSceneMgr.WriteMessage("기존의 스탯 레벨보다 낮게 내릴 수 없습니다.");
            }
        }
    }

    /// <summary>
    /// 스탯 레벨 업 처리
    /// </summary>
    /// <param name="kind">스탯 종류</param>
    public void StatUp(int kind)
    {
        // 남은 스탯이 있는지 확인
        if (availableStat > 0)
        {
            // 최대 레벨을 넘지 않는지 확인
            if (StatArr[kind].statLevel < StatArr[kind].statAbility.Length - 1)
            {
                // 레벨 상승 처리
                StatArr[kind].statLevel++;
                // 남은 스탯 차감
                availableStat--;
                // 스탯 UI 업데이트
                SetStatText(kind);
                SetBadge();
            }
            else
            {
                mainSceneMgr.WriteMessage("최대 레벨입니다. 더이상 올릴 수 없습니다.");
            }
        }
        else
        {
            mainSceneMgr.WriteMessage("남은 능력치 포인트가 없습니다.");
        }
    }

    /// <summary>
    /// 스탯 능력치 상승 예시 텍스트 업데이트
    /// </summary>
    void SUM_SetExampleText()
    {
        if (StatArr[selectedKind].statLevel + 1 < StatArr[selectedKind].statAbility.Length)
        {
            StatUpExample_text.text = StatArr[selectedKind].statAbility[StatArr[selectedKind].statLevel] + "% → " + StatArr[selectedKind].statAbility[virtual_stat] + "%";
        }
        else
        {
            StatUpExample_text.text = StatArr[selectedKind].statAbility[StatArr[selectedKind].statLevel] + "% (Max)";
        }
    }
    #endregion
}

/// <summary>
/// 스탯 데이터 클래스
/// </summary>
[System.Serializable]
public class Stat
{
    /// <summary>
    /// 스탯 이름
    /// </summary>
    public string name;
    /// <summary>
    /// 스탯의 현재 레벨
    /// </summary>
    public int statLevel;
    /// <summary>
    /// 레벨별 스탯 능력치
    /// </summary>
    public int[] statAbility; 
    /// <summary>
    /// 스탯 설명
    /// </summary>
    public string explain;
    /// <summary>
    /// 스탯 효과 텍스트
    /// </summary>
    public Text presentEffect_text;
    /// <summary>
    /// 스탯 레벨 텍스트
    /// </summary>
    public Text presentLv_text;
    /// <summary>
    /// 스탯의 다음 레벨 효과 텍스트
    /// </summary>
    public Text nextLvEffect_text;

    /// <summary>
    /// 스탯 능력치 정보 포맷팅
    /// </summary>
    /// <param name="priorValue">이전 값</param>
    /// <param name="resultValue">결과 값</param>
    /// <param name="str">결과 문자열</param>
    public void ShowAbility(int priorValue, int resultValue, ref string str)
    {
        string valueS = "";
        if ((resultValue - priorValue).Equals(0))
            valueS = "0";
        else
            valueS= string.Format("{0:#,###}", resultValue - priorValue);
        str += "(+" + valueS + ")";
    }
    /// <summary>
    /// Int 타입의 능력치 배율 계산
    /// </summary>
    /// <param name="value">적용할 능력치</param>
    public void ApplyAbility(ref int value)
    {
        float mul = 1 + (int)(statAbility[statLevel] * 0.01f);
        value = (int)(mul * value);
    }
    /// <summary>
    /// Unsigned long 타입의 능력치 배율 계산
    /// </summary>
    /// <param name="value">적용할 능력치</param>
    public void ApplyAbility(ref ulong value)
    {
        float mul = 1 + statAbility[statLevel] * 0.01f;
        value = (ulong)(mul * value);
    }
    /// <summary>
    /// Float 타입의 능력치 배율 계산
    /// </summary>
    /// <param name="value">적용할 능력치</param>
    public void ApplyAbility(ref float value)
    {
        value *= (1 + statAbility[statLevel] * 0.01f);
    }
}