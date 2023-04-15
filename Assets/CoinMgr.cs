using UnityEngine;
using System.Collections;
using UnityEngine.UI;

/// <summary>
/// 코인 시스템 관리 클래스
/// </summary>
public class CoinMgr : MonoBehaviour {

    /// <summary>
    /// 코인 보유량
    /// </summary>
    public static ulong Coin;
    /// <summary>
    /// 누적 코인 획득량
    /// </summary>
    public static ulong accumulatedCoins;
    /// <summary>
    /// 보유중인 코인 표시 텍스트
    /// </summary>
    public Text[] numOfCoin_text;
    /// <summary>
    /// 추가된 코인 텍스트
    /// </summary>
    public Text AddedCoin_text;
    /// <summary>
    /// 획득한 코인
    /// </summary>
    public int addedCoin;

    public LevelMgr levelMgr;

    void Start()
    {
        setCoinText();
    }
    /// <summary>
    /// 메인씬 리로드 시에 호출되는 함수
    /// </summary>
    public void ReloadStart()
    {
        Start();
    }
    /// <summary>
    /// 코인 텍스트 업데이트
    /// </summary>
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
    /// <summary>
    /// 게임 플레이 보상 지급
    /// </summary>
    /// <param name="playtime">플레이 시간</param>
    /// <returns>코인 획득량</returns>
    public int GetReward(int playtime)
    {
        int reward = playtime * 2;
        levelMgr.StatArr[1].ApplyAbility(ref reward);
        accumulatedCoins += (ulong)reward;
        return reward;
    }
    /// <summary>
    /// 획득한 코인 업데이트
    /// </summary>
    /// <param name="addcoin">획득한 코인</param>
    public void SetAddedCoin(int addcoin)
    {
        addedCoin += addcoin;
        AddedCoin_text.text = "+" + addedCoin;
    }
    /// <summary>
    /// 획득한 코인 초기화
    /// </summary>
    public void ResetAddedCoin()
    {
        addedCoin = 0;
        AddedCoin_text.text = "+" + addedCoin;
    }
    /// <summary>
    /// (테스트옹) 코인 지급
    /// </summary>
    public void AddCoin_test()
    {
        Coin += 100000;
        setCoinText();
    }
}
