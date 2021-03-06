#ifndef UE4SS_SDK_BlueFire_Game_Instance_HPP
#define UE4SS_SDK_BlueFire_Game_Instance_HPP

class UBlueFire_Game_Instance_C : public UBFGameInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FSave_GameSettings GameSettings;
    FSave_Settings Settings;
    FSave_PlayerAbilities PlayerAbilities;
    FSave_PlayerStats PlayerStats;
    FSave_GameStats GameStats;
    FSave_WorldStats WorldStats;
    FSave_System System;
    bool PlatformIsStadia;
    FString Version;
    TEnumAsByte<Platform::Type> Platform;
    TEnumAsByte<E_SubPlatforms::Type> SubPlatform;
    TArray<FInventory> Shop0-Mork;
    TArray<FInventory> Shop1-Onrom;
    TArray<FInventory> Shop2-SpiritHunter;
    TArray<FInventory> Shop3-Ari;
    TArray<FInventory> Shop4-Poti;
    TArray<FInventory> Shop5-POI;
    TArray<FInventory> Shop6-NA;
    TArray<TEnumAsByte<Items::Type>> AlreadyPickedUpItems;
    FPlayer_Equipment PlayerEquipment;
    bool GameStarted;
    TArray<TEnumAsByte<E_Emotes::Type>> Emotes;
    TArray<TEnumAsByte<E_DailyQuest::Type>> Today DailyQuests;
    FDateTime LastPlayDay;
    int32 Selected Emote;
    FBuilding_Inventory_Stats Building_Inventory_Stats;
    TArray<FDressing_Pak> DressingSaves;
    TArray<FSaveQuest_Struct> Quests;
    int32 Demo;
    int32 DebugMode;
    bool DemoMode;
    FString Filename;
    FST_PlayerGhost PlayerGhost;
    TArray<FInventory> Shop7-Nilo;
    bool HasBeatenGame;
    bool Brutal Mode Activated;
    TEnumAsByte<Platform::Type> StadiaPreKeyboard;
    bool UniversalHasBeatenGame;
    bool UseSpeedTimer;
    class UPCGamepadConnect_C* GamepadUI;
    FBlueFire_Game_Instance_COnXboxSetUserName OnXboxSetUserName;
    void OnXboxSetUserName();
    bool IsControllerConnected;
    int32 ControllerIndex;
    int32 UserIndex;
    class UXboxGamepadConnect_C* GamepadXboxUI;
    FBlueFire_Game_Instance_COnXboxLogout OnXboxLogout;
    void OnXboxLogout();
    FBlueFire_Game_Instance_COnXboxChangeUser OnXboxChangeUser;
    void OnXboxChangeUser();
    FBlueFire_Game_Instance_CAddUI AddUI;
    void AddUI();
    FBlueFire_Game_Instance_CRemoveUI RemoveUI;
    void RemoveUI();
    TEnumAsByte<KeyboardType::Type> KeyboardType;
    TArray<FKey> PC_RemapBlockedKeys;
    TArray<FName> PC_Default_KeysToMap;
    TArray<FKey> PC_Default_KeysToMapKeys;
    float SpeedTimerTick;
    FString SpeedTimerSlotName;
    bool HaveDLC_VoidMaster;
    bool HasBeatedDLC_VoidMaster;
    bool IsQA_VoidOfSorrows;
    FString VoidMakerVersion;
    bool Has_VoidMaker;
    bool OpenMasterVoidMakerMode;
    FBlueFire_Game_Instance_CStadiaChangeController StadiaChangeController;
    void StadiaChangeController();
    bool StadiaDefaultInput;
    FString SpeedTimerLastSlotName;
    TMap<class FName, class FST_AxisMapping> AxisMappings;
    TMap<class FName, class FST_ActionMapping> ActionMappings;
    TArray<bool> bMakerTutorials;
    bool VMHideShortCuts;
    int32 BossDeaths;
    bool IsGOGLogged;
    FBlueFire_Game_Instance_COnGOGLogin OnGOGLogin;
    void OnGOGLogin(bool IsLogged);
    int32 WeaponsCount;
    int32 TunicsCount;
    class UObject* VMMongoPool;
    FString VMMongoDBConnection String;
    FString VMFoundLevel;
    FString VMTagsQuery;
    bool VMZoomInverted;
    FString VMThumbnailPath;
    bool VoidMakerStandalone;
    FBlueFire_Game_Instance_CLevelUpdated LevelUpdated;
    void LevelUpdated();
    FString FavoriteSearchString;
    TArray<FString> VoidNamesBannedWords;
    FBlueFire_Game_Instance_CVoidInserted VoidInserted;
    void VoidInserted();
    FBlueFire_Game_Instance_CVMImageRead VMImageRead;
    void VMImageRead(FString ImageString);
    FBlueFire_Game_Instance_CVMSearchBar VMSearchBar;
    void VMSearchBar(FString BsonString);
    FBlueFire_Game_Instance_CVMBsonRead VMBsonRead;
    void VMBsonRead(FString BsonString);
    FBlueFire_Game_Instance_CVMSearchCompleted VMSearchCompleted;
    void VMSearchCompleted(FString MatchIds);
    FBlueFire_Game_Instance_CVMQueryFailed VMQueryFailed;
    void VMQueryFailed();
    FBlueFire_Game_Instance_CVMUserNewRecordAdded VMUserNewRecordAdded;
    void VMUserNewRecordAdded();
    FBlueFire_Game_Instance_CVMCreatorFound VMCreatorFound;
    void VMCreatorFound(FString CreatorJSON);
    FBlueFire_Game_Instance_CVMGetWorldRecordSuccess VMGetWorldRecordSuccess;
    void VMGetWorldRecordSuccess(float WorldRecord);
    FBlueFire_Game_Instance_CVMVoidUpdated VMVoidUpdated;
    void VMVoidUpdated();
    FBlueFire_Game_Instance_CVMCoinsUpdated VMCoinsUpdated;
    void VMCoinsUpdated();
    FBlueFire_Game_Instance_CVMGotNews VMGotNews;
    void VMGotNews(FString AllNews);
    FBlueFire_Game_Instance_CVMDeleteLevel VMDeleteLevel;
    void VMDeleteLevel();
    FBlueFire_Game_Instance_CVMQueryFinished VMQueryFinished;
    void VMQueryFinished();
    FBlueFire_Game_Instance_CVMRatingRetrieved VMRatingRetrieved;
    void VMRatingRetrieved(FString LevelCommunityInfo);
    FBlueFire_Game_Instance_CVMDownloadLevel VMDownloadLevel;
    void VMDownloadLevel(FString BsonString);
    TArray<FString> SearchIds;
    TArray<FString> NewVar_0;
    bool IsCreditsCompleted;
    bool IsCreditsDLCCompleted;
    FBlueFire_Game_Instance_CDatabaseConnected DatabaseConnected;
    void DatabaseConnected(bool Failed);
    bool bIsConnectedToDB;
    bool UseRobiDatabase;
    bool bIsTeyonBuild;
    bool IncludesZhAndKo;
    bool IncludesJa;
    TEnumAsByte<E_LanguageBehaviour::Type> LanguageBehaviour;
    FString DefaultLanguage;
    FString TempNewsIds;
    bool Wait;
    bool Invert Enter Button;

    FString Get Online ID();
    FString GetBlueFireLanguageByIndex(int32 Index);
    void GetBlueFireLanguage(FString& Language String, int32& Language Index);
    void ActivateTeyonMode();
    void SetArrayOfAllIdNames(FString AllIds, FString StringToCompare, FString& SearchIds);
    void CanPlatformTriggerAchievements(bool& Success);
    void CheckMapName(FString MapnName, bool& InvalidName);
    void Check State ID(FString ID, bool& Used);
    void Is Xbox Series X(bool& Result, int32& Index);
    void Get Xbox Amount Users Logged(int32& Amount Users Logged);
    void Get Xbox Force Login(bool& Force Login);
    void Get Xbox User Is Logged(bool& IsLogged);
    void Get Xbox User Name(FString& User Name);
    void Completed_8943EB0049BFC8602B4DF99B3C453C10(class USaveGame* SaveGame, bool bSuccess);
    void OnFailure_044C2AD343A56A0371CA8DA9DD808AC4(FName WrittenAchievementName, float WrittenProgress, int32 WrittenUserTag);
    void OnSuccess_044C2AD343A56A0371CA8DA9DD808AC4(FName WrittenAchievementName, float WrittenProgress, int32 WrittenUserTag);
    void AddToSuccessCounter(FString VoidID);
    void AddToLevelCounter(FString VoidID);
    void GetWorldRecord(FString LevelId);
    void BossDeath();
    void ResetBossDeath();
    void GA SendEvent(TEnumAsByte<GameAnalytics::Type> GA Selector, FString String, float Value);
    void SetUserNewBestTime(bool NewVoid, FString UserId, FString VoidID, float NewTime, int32 Position);
    void UpdateUserCoins(FString UserId, int32 NewAmount);
    void SetNewWorldRecordTime(FString VoidID, FString UserId, float NewTime);
    void ChangeToRobiDatabase();
    void ReconnectToDB();
    void GA Session();
    void DisconnectedFromDB();
    void UpdateProfileIndex(FString ID, int32 NewIndex);
    void SearchCreator(FString Creator OnlineID);
    void SearchBarMore(const TArray<FString>& SearchIds, int32 PageNum);
    void SearchByStrings(FString SearchString);
    void SearchIfBanned(FString MongoId);
    void EnemyKilled();
    void GA ParryCount();
    void SearchBannedWords();
    void SearchMyFavorites(const TArray<FString>& MyFavoritesId, int32 PageNum);
    void SearchOneIdUpdate(FString ID);
    void SearchByNewest(int32 PageNum);
    void GetBulkImages(FString LevelIdOne, FString LevelIdTwo, FString LevelIdThree);
    void GetOneimage(FString LevelId);
    void SearchPopularCreator();
    void SearchByPlatformID(FString PlatformID);
    void Get WeaponCount();
    void Get TunicsCount();
    void UpdateLevel(FString ID, FString NewBSon);
    void DeleteLevel(FString ID);
    void InsertCreator(FString CreatorString);
    void SearchPopularThisMonth();
    void SearchByGamemode(int32 GameMode);
    void SearchTopRated(int32 PageNum);
    void SearchByUsername(const FString Username);
    void SearchByTags(const TArray<uint8>& NewParam);
    void SearchByOneLevelName(FString LevelName);
    void SearchOneId(FString VoidID);
    void ProgressionEvent(uint8 Status, FString Progression01);
    void SearchByIsFeatured(int32 PageNum);
    void DesignEvent(FString EventId, float Value);
    void InsertLevelAndThumbnail(FString LevelString, FString ThumbnailString);
    void GASendBlueFireSteamClicked();
    void GOG Login();
    void ConnectToDatabase();
    void UpdateKeyboardType(int32 KeyboardType);
    void AnyKeyPress(FKey Key);
    void StadiaStatCall(int32 Event);
    void XboxShowLoginUI(bool Is Switch Profile);
    void XboxSetUserName();
    void XboxLogin();
    void Xbox Logout Menu();
    void NativeOnLoginUICloseEvent(int32 LocalPlayerNum);
    void OnPlayerLoginStatusChanged(EBPLoginStatus PreviousStatus, EBPLoginStatus NewStatus);
    void NativeOnControllerPairingEvent(int32 ControllerIndex, int32 NewUserId, int32 OldUserId);
    void OnControllerConnectedEvent(int32 UserId, int32 ControllerId);
    void OnControllerDisconectedEvent(int32 UserId, int32 ControllerId);
    void GA Time(FString VoidName, float Time);
    void GetNews(const TArray<int32>& ReadIds);
    void Set Gamepad Control(int32 Controller);
    void SearchCreatorByName();
    void UpdateLevelWithThumbnailImage(FString ID, FString ThumbnailURL);
    void RetrieveVoidRating(FString UserId, FString LevelName);
    void QueryFinished();
    void QueueSearchFavorites();
    void UpdateVoidsUploaded(bool Increment, FString UserId);
    void UpdateJoinedDate(FString UserId, FString UpdateDate);
    void AddNewBadge(FString UserId, FString BadgeName);
    void Async Save Game(class USaveGame* SaveGameObject, FString SlotName, const int32 UserIndex);
    void ChangeController(int32 InputPin);
    void SearchUserByID(FString UserId);
    void Set Achievement(FString Stat);
    void ExecuteUbergraph_BlueFire_Game_Instance(int32 EntryPoint);
    void VMRatingRetrieved__DelegateSignature(FString LevelCommunityInfo);
    void VMQueryFinished__DelegateSignature();
    void VMGotNews__DelegateSignature(FString AllNews);
    void VMCoinsUpdated__DelegateSignature();
    void VMVoidUpdated__DelegateSignature();
    void VMGetWorldRecordSuccess__DelegateSignature(float WorldRecord);
    void VMUserNewRecordAdded__DelegateSignature();
    void VMQueryFailed__DelegateSignature();
    void VMCreatorFound__DelegateSignature(FString CreatorJSON);
    void DatabaseConnected__DelegateSignature(bool Failed);
    void VMSearchCompleted__DelegateSignature(FString MatchIds);
    void VMSearchBar__DelegateSignature(FString BsonString);
    void VMDeleteLevel__DelegateSignature();
    void VMDownloadLevel__DelegateSignature(FString BsonString);
    void VoidInserted__DelegateSignature();
    void LevelUpdated__DelegateSignature();
    void VMImageRead__DelegateSignature(FString ImageString);
    void VMBsonRead__DelegateSignature(FString BsonString);
    void OnGOGLogin__DelegateSignature(bool IsLogged);
    void StadiaChangeController__DelegateSignature();
    void RemoveUI__DelegateSignature();
    void AddUI__DelegateSignature();
    void OnXboxChangeUser__DelegateSignature();
    void OnXboxLogout__DelegateSignature();
    void OnXboxSetUserName__DelegateSignature();
};

#endif
