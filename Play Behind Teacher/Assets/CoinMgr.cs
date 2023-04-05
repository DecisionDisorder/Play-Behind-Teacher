using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class CoinMgr : MonoBehaviour {

    public static ulong Coin;
    public static ulong accumulatedCoins;
    public Text[] numOfCoin_text;
    public Text AddedCoin_text;
    public int addedCoin;

    public LevelMgr levelMgr;

    void Start()
    {
        setCoinText();
    }
    public void ReloadStart()
    {
        Start();
    }
    public void setCoinText()
    {
        string coin;
        if (Coin != 0)
            coin = string.Format("{0:#,###}", Coin);
        else
            coin = "0";
        for(int i = 0; i < numOfCoin_text.Length; i++)
            numOfCoin_text[i].text = "x " + coin;
    }
    public int GetReward(int playtime)
    {
        int reward = playtime * 2;
        levelMgr.StatArr[1].ApplyAbility(ref reward);
        accumulatedCoins += (ulong)reward;
        return reward;
    }
    public void SetAddedCoin(int addcoin)
    {
        addedCoin += addcoin;
        AddedCoin_text.text = "+" + addedCoin;
    }
    public void ResetAddedCoin()
    {
        addedCoin = 0;
        AddedCoin_text.text = "+" + addedCoin;
    }
    public void AddCoin_test()
    {
        Coin += 100000;
        setCoinText();
    }
}
