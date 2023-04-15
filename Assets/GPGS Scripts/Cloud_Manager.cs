using UnityEngine;
using System.Collections;
using GooglePlayGames;
using GooglePlayGames.BasicApi;
using GooglePlayGames.BasicApi.SavedGame;
using System;

/// <summary>
/// 구글 클라우드 저장 시스템 관리 클래스
/// </summary>
public static class Cloud_Manager
{ 
    /// <summary>
    /// 바이트 배열로 변환된 게임 데이터
    /// </summary>
    public static byte[] GameData;

    /// <summary>
    /// 구글 플레이 플랫폼 초기화
    /// </summary>
    public static void Init()
    {
        PlayGamesClientConfiguration config = new PlayGamesClientConfiguration.Builder().EnableSavedGames().Build();
        PlayGamesPlatform.InitializeInstance(config);
    }
    
    /// <summary>
    /// 로그인 여부 확인
    /// </summary>
    public static bool CheckLogin()
    {
        return Social.localUser.authenticated;
    }

    
    /// <summary>
    /// 클라우드에 게임 저장 시작
    /// </summary>
    public static void SaveToCloud()
    {
        // 로그인이 안되었으면 실패처리
        if (!CheckLogin()) 
        {
            BackUpDataMgr.condition_log += "구글 로그인에 실패했습니다..ㅠㅠ\n";
            BackUpDataMgr.Logining = false;
            BackUpDataMgr.LoginSuccess = false;
            BackUpDataMgr.isCloudProcessing = false;
            return;
        }
        // 게임 데이터 파일이름 지정
        BackUpDataMgr.condition_log += "게임 데이터 저장 기능 시작~!!\n";
        OpenSavedGame("PlayBehindTeacher_GameSave", true);

    }

    /// <summary>
    /// 게임 파일 열기
    /// </summary>
    /// <param name="filename">파일 이름</param>
    /// <param name="bSave">저장인지 여부</param>
    static void OpenSavedGame(string filename, bool bSave)
    {
        ISavedGameClient savedGameClient = PlayGamesPlatform.Instance.SavedGame;
        
        // 저장 시작
        if (bSave)
            savedGameClient.OpenWithAutomaticConflictResolution(filename, DataSource.ReadCacheOrNetwork, ConflictResolutionStrategy.UseLongestPlaytime, OnSavedGameOpenedToSave); 
        // 불러오기 시작
        else
            savedGameClient.OpenWithAutomaticConflictResolution(filename, DataSource.ReadCacheOrNetwork, ConflictResolutionStrategy.UseLongestPlaytime, OnSavedGameOpenedToRead); 

    }
    
    /// <summary>
    /// 게임 파일을 open한 이후에 저장 시작 콜백함수
    /// </summary>
    /// <param name="status">상태</param>
    /// <param name="game">게임 메타 데이터</param>
    static void OnSavedGameOpenedToSave(SavedGameRequestStatus status, ISavedGameMetadata game)
    {
        // 게임 파일 열기를 성공했으면
        if (status == SavedGameRequestStatus.Success)
        {
            // 파일이 준비되어 실제 게임 저장을 수행
            BackUpDataMgr.condition_log += "현재 저장을 하고있습니다. 시간이 좀 걸릴 수 있으니 조금만 기다려주세요!\n";

            // 데이터를 바이트 배열로 직렬화 후 넣음
            SaveGame(game, GameData, DateTime.Now.TimeOfDay);
        }
        // 실패했을 때의 로그를 남기고 프로세스 종료
        else
        {
            BackUpDataMgr.condition_log += "게임 데이터 파일 열기에 실패했습니다..\n";
            BackUpDataMgr.isCloudProcessing = false;
        }
    }

    /// <summary>
    /// 게임 데이터 저장
    /// </summary>
    /// <param name="game">게임 메타 데이터</param>
    /// <param name="savedData">게임 데이터</param>
    /// <param name="totalPlaytime">플레이 시간</param>
    static void SaveGame(ISavedGameMetadata game, byte[] savedData, TimeSpan totalPlaytime)
    {
        ISavedGameClient savedGameClient = PlayGamesPlatform.Instance.SavedGame;
        SavedGameMetadataUpdate.Builder builder = new SavedGameMetadataUpdate.Builder();
        builder = builder.WithUpdatedPlayedTime(totalPlaytime).WithUpdatedDescription("Saved game at " + DateTime.Now);
        SavedGameMetadataUpdate updatedMetadata = builder.Build();
        savedGameClient.CommitUpdate(game, updatedMetadata, savedData, OnSavedGameWritten);
    }

    /// <summary>
    /// 게임 저장 결과 콜백
    /// </summary>
    /// <param name="status">저장 결과</param>
    /// <param name="game">게임 메타 데이터</param>
    static void OnSavedGameWritten(SavedGameRequestStatus status, ISavedGameMetadata game)
    {
        // 성공했을 때의 표기
        if (status == SavedGameRequestStatus.Success)
        {
            BackUpDataMgr.condition_log += "게임 데이터 저장에 성공했습니다!\n";
            BackUpDataMgr.isCloudProcessing = false;
        }
        // 실패했을 때의 표기
        else
        {
            BackUpDataMgr.condition_log += "게임 데이터 저장에 실패했습니다 ㅠㅠ\n";
            BackUpDataMgr.isCloudProcessing = false;
        }
    }

    /// <summary>
    /// 클라우드로부터 파일 불러오기 시작
    /// </summary>
    public static void LoadFromCloud()
    {
        // 로그인이 안되었으면 실패처리
        if (!CheckLogin())
        {
            BackUpDataMgr.condition_log += "구글 로그인을 실패했습니다..\n";
            BackUpDataMgr.Logining = false;
            BackUpDataMgr.LoginSuccess = false;
            BackUpDataMgr.isCloudProcessing = false;
            return;
        }

        BackUpDataMgr.condition_log += "게임 데이터 불러오기 기능 시작!!\n";

        // 불러올 게임 데이터 파일이름 지정
        OpenSavedGame("PlayBehindTeacher_GameSave", false);

    }

    /// <summary>
    /// 클라우드 데이터를 읽을 준비가 되었을 때의 콜백 함수
    /// </summary>
    /// <param name="status">처리 결과</param>
    /// <param name="game">게임 메타 데이터</param>
    static void OnSavedGameOpenedToRead(SavedGameRequestStatus status, ISavedGameMetadata game)
    {
        // 성공 시, 불러오기 시작
        if (status == SavedGameRequestStatus.Success)
        {
            BackUpDataMgr.condition_log += "게임 데이터 파일 로딩 성공~!\n";
            LoadGameData(game);
        }
        // 실패 시, 로그를 남기고 프로세스 종료
        else
        {
            BackUpDataMgr.condition_log += "게임 데이터 파일 파일 열기 실패...ㅠㅠ\n";
            BackUpDataMgr.isCloudProcessing = false;
        }

    }

    /// <summary>
    /// 게임 데이터 불러오기
    /// </summary>
    /// <param name="game"></param>
    static void LoadGameData(ISavedGameMetadata game)
    {
        ISavedGameClient savedGameClient = PlayGamesPlatform.Instance.SavedGame;

        savedGameClient.ReadBinaryData(game, OnSavedGameDataRead);
    }

    /// <summary>
    /// 게임 데이터를 모두 읽어왔을 때의 콜백 함수
    /// </summary>
    /// <param name="status">처리 결과</param>
    /// <param name="data">불러온 게임 데이터</param>
    static void OnSavedGameDataRead(SavedGameRequestStatus status, byte[] data)
    {
        // 성공했을 때
        if (status == SavedGameRequestStatus.Success)
        {
            // 바이트 배열의 게임 데이터를 복사 후 프로세스 종료
            GameData = data;
            BackUpDataMgr.condition_log += "데이터 불러오기 성공!\n";
            BackUpDataMgr.isCloudProcessing = false;
        }
        // 실패했을 때 로그 남기고 프로세스 종료
        else
        { 
            BackUpDataMgr.condition_log += "데이터 불러오기 실패...\n";
            BackUpDataMgr.isCloudProcessing = false;
        }

    }

}
