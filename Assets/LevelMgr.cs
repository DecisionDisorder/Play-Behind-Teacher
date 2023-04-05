using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class LevelMgr : MonoBehaviour {

    public int Level;           //static? no static? // Player's Level
    public int Exp;             //Player's Exp
    public int AccumulatedExp;  //누적 경험치
    public int LevelUpExp;    //레벨업 요구 경험치
    public int availableStat;   //사용가능 스탯
    const int MaxLevel = 75;

    public Stat[] StatArr;

    public ItemMgr itemMgr;
    public MainSceneMgr mainSceneMgr;
    public InGameMgr inGameMgr;
    public DataManager dataManager;

    public GameObject Level_Menu;
    public Animation Level_MenuAni;
    public Text LvM_Exp_text;
    public Text LvM_Level_text;
    public Text LvM_AvailableStat_text;

    public Text Level_text;
    public Color[] LevelColors;
    public GameObject Badge_obj;
    public Text Badge_text;

    public GameObject Statup_Menu;
    public Text StatName_text;
    public Text StatExplain_text;
    public Text StatUpLevel_text;
    public Text StatUpExample_text;

    public GameObject expImg_fix;
    public GameObject LvM_ExpImg_fix;
    /* Gage UI */
    public int UI_GageValue;
    public Slider ExpGage_slider;
    public Slider LvM_ExpGage_slider;
    IEnumerator gagemoving;

    void Start()
    {
        ExpCalculate();
        if (SceneManager.GetActiveScene().buildIndex.Equals(0))
        {
            SetBadge();
        }
        SetLevelText();
    }

    public void LevelUp(ulong score = 0)//called only in game (now state)
    {
        if (LevelUpExp <= Exp)
        {
            if (Level < MaxLevel)
            {
                Exp -= LevelUpExp;
                Level++;
                availableStat++;
                if (Level < MaxLevel)
                {
                    StartGageMove(0, Exp, ExpGage_slider, score);
                }
                else
                {
                    StartGageMove(0, LevelUpExp, ExpGage_slider, score);//MAX Level Gage Ani
                }
                ExpCalculate();
                SetLvMExpText(score);
            }
        }
    }
    
    public void ProvideExp(ulong score)
    {
        int startExp = Exp;
        Exp += (int)(score * 0.1f);
        AccumulatedExp += (int)(score * 0.1f);
        SetLvMExpText(score);
        //LvM_Exp_text.text += " (+" + (int)(score * 0.1f) + "exp)";
        if (Level < MaxLevel)
            StartGageMove(startExp, Exp, ExpGage_slider, score);
        else
            StartGageMove(0, LevelUpExp, ExpGage_slider, score);//MAX Level Gage Ani
    }
    public void SetStatText(int kind)
    {
        if(kind.Equals(-1))
        {
            for (int i = 0; i < 5; i++)
            {
                SetStatText(i);
            }
        }
        else 
        {
            if (StatArr[kind].statAbility[1] < 0)//1레벨 이후부터는 모두 양/음 한방향으로 가기 때문에 1레벨의 수치 검사로 고정함
            {
                if(StatArr[kind].statLevel + 1 < StatArr[kind].statAbility.Length)
                {
                    StatArr[kind].nextLvEffect_text.text = StatArr[kind].statAbility[StatArr[kind].statLevel + 1] + "%";
                }
                else
                {
                    StatArr[kind].nextLvEffect_text.text = "(Max)";
                }
                StatArr[kind].presentEffect_text.text = StatArr[kind].statAbility[StatArr[kind].statLevel] + "%";
                StatArr[kind].presentLv_text.text = "" + StatArr[kind].statLevel;
            }
            else
            {
                if (StatArr[kind].statLevel + 1 < StatArr[kind].statAbility.Length)
                {
                    StatArr[kind].nextLvEffect_text.text = "+" + StatArr[kind].statAbility[StatArr[kind].statLevel + 1] + "%";
                }
                else
                {
                    StatArr[kind].nextLvEffect_text.text = "(Max)";
                }
                StatArr[kind].presentEffect_text.text = "+" + StatArr[kind].statAbility[StatArr[kind].statLevel] + "%";
                StatArr[kind].presentLv_text.text = "" + StatArr[kind].statLevel;
            }
        }
    }
    void ExpCalculate()
    {
        LevelUpExp = (int)(1.5712f * (Level + 1) * (Level + 1) + 14.373f * (Level + 1) + 84.155f);
    }

    public void FixExpPos()
    {
        //float posX = 360 - ExpGage_slider.fillRect.transform.localPosition.x;
        //Debug.Log(ExpGage_slider.fillRect.transform.localPosition.x);
        expImg_fix.transform.position = ExpGage_slider.transform.position;
    }
    public void LvM_FixExpPos()
    {
        //float posX = 200 - LvM_ExpGage_slider.fillRect.transform.localPosition.x;
        //Debug.Log(LvM_ExpGage_slider.fillRect.transform.localPosition.x);
        LvM_ExpImg_fix.transform.position = LvM_ExpGage_slider.transform.position;
    }

    public void SetItemAbility()
    {
        for (int i = 0; i < itemMgr.sleepingGun.Length; i++)
        {
            StatArr[4].ApplyAbility(ref itemMgr.sleepingGun[i].SleepingTime);
            StatArr[4].ApplyAbility(ref itemMgr.snack[i].RecoverEndurance);
            StatArr[4].ApplyAbility(ref itemMgr.glasses[i].timeUp);
        }
    }

    public void StartGageMove(int startValue, int endValue, Slider gage, ulong score = 0)//value: 
    {
        gage.maxValue = LevelUpExp * 10;
        if(gagemoving != null)
            StopCoroutine(gagemoving);
        gagemoving = GageMoving(startValue, endValue, gage, score);
        UI_GageValue = startValue * 10;
        StartCoroutine(gagemoving);
    }
    IEnumerator GageMoving(int startValue, int endValue, Slider gage, ulong score = 0)
    {
        yield return new WaitForEndOfFrame();

        UI_GageValue += (endValue - startValue) * 10 / 9 ;
        gage.value = UI_GageValue;
        //Debug.Log("name: " + gage.name + "/ startValue: " + startValue + "/ endValue: " + endValue + "/ UI_gageValue: " + UI_GageValue);

        if (endValue * 10 > UI_GageValue)
            StartCoroutine(GageMoving(startValue, endValue, gage, score));
        else
        {
            gage.value = endValue * 10;
            LevelUp(score);
        }

    }
    void SetLvMExpText(ulong score = 0)
    {
        if(Level < MaxLevel)
            LvM_Exp_text.text = Exp + "/" + LevelUpExp + "(" + 100 * Exp / LevelUpExp + "%)";
        else
            LvM_Exp_text.text = "0/0(MAX)";
        LvM_Level_text.text = "Lv." + Level;
        SetLevelColor(LvM_Level_text);
        if (SceneManager.GetActiveScene().buildIndex.Equals(0))
        {
            if (availableStat > 0)
                LvM_AvailableStat_text.text = "남은 능력치: <color=#3ADF00>" + availableStat + "p</color>";
            else
                LvM_AvailableStat_text.text = "남은 능력치: <color=red>" + availableStat + "p</color>";
        }
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
    void SetLevelText()
    {
        Level_text.text = "Lv." + Level;
        SetLevelColor(Level_text);
        if (Level < MaxLevel)
        {
            //Debug.Log(Exp);
            StartGageMove(0, Exp, ExpGage_slider);
        }
        else
            StartGageMove(0, LevelUpExp * 10, ExpGage_slider);
    }
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


    //----------------Stat Up Menu-----------------------

    int virtual_stat;
    int selectedKind;

    public void OpenStatUp(int kind)
    {
        selectedKind = kind;
        virtual_stat = StatArr[kind].statLevel;
        Statup_Menu.SetActive(true);
        BackkeyMgr.numOfOpenedMenus++;
        StatName_text.text = StatArr[kind].name;
        StatUpLevel_text.text = "" + StatArr[kind].statLevel;
        StatExplain_text.text = StatArr[kind].explain;
        SUM_SetExampleText();
    }

    public void AOC_StatUp(int select)//AOC: Apply OR Cancel
    {
        if(select.Equals(0)) //apply
        {
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
    public void UpDown_Stat(int select)
    {
        if(select.Equals(0)) //up
        {
            if(virtual_stat < StatArr[selectedKind].statAbility.Length - 1)
            {
                if (availableStat - (virtual_stat - StatArr[selectedKind].statLevel) > 0)
                {
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
        else //down
        {
            if(virtual_stat > StatArr[selectedKind].statLevel)
            {
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

    public void StatUp(int kind)
    {
        if (availableStat > 0)
        {
            if (StatArr[kind].statLevel < StatArr[kind].statAbility.Length - 1)
            {
                StatArr[kind].statLevel++;
                availableStat--;
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
    //-------------TEST----------------

    /*
    public GameObject Test_Menu;
    
    public void SetTestMenu(int k)
    {
        if(k.Equals(0))
        {
            Test_Menu.SetActive(true);
        }
        else
        {
            Test_Menu.SetActive(false);
        }
    }
    public void Test_LevelSetting(string lv)
    {
        int bfLv = Level;
        Level = int.Parse(lv);
        availableStat += Level - bfLv;
        ExpCalculate();
        SetLevelText();
        SetLvMExpText();
        LvM_ExpGage_slider.value = Exp * 10;
    }

    public void Test_ResetStat()
    {
        availableStat = Level;
        for (int i = 0; i < StatArr.Length; i++)
        {
            StatArr[i].statLevel = 0;
            SetStatText(i);
        }
        SetLvMExpText();
    }

    public void Test_SetStat(string st)
    {
        availableStat = int.Parse(st);
        SetStatText(-1);
        SetLvMExpText();
    }

    public void Test_SetExp(string exp)
    {
        Exp = int.Parse(exp);
        SetLevelText();
        SetLvMExpText();
        LvM_ExpGage_slider.value = Exp * 10;
    }*/
}

[System.Serializable]
public class Stat
{
    public string name;
    public int statLevel;     // Stat 레벨
    public int[] statAbility; // Stat 능력치
    public string explain;
    public Text presentEffect_text;
    public Text presentLv_text;
    public Text nextLvEffect_text;

    public void ShowAbility(int priorValue, int resultValue, ref string str)
    {
        string valueS = "";
        if ((resultValue - priorValue).Equals(0))
            valueS = "0";
        else
            valueS= string.Format("{0:#,###}", resultValue - priorValue);
        str += "(+" + valueS + ")";
    }

    public void ApplyAbility(ref int value)
    {
        float mul = 1 + (int)(statAbility[statLevel] * 0.01f);
        value = (int)(mul * value);
    }
    public void ApplyAbility(ref ulong value)
    {
        float mul = 1 + statAbility[statLevel] * 0.01f;
        value = (ulong)(mul * value);
    }
    public void ApplyAbility(ref float value)
    {
        value *= (1 + statAbility[statLevel] * 0.01f);
    }
}