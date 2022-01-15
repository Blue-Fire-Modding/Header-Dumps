#ifndef UE4SS_SDK_Global_Controller_HPP
#define UE4SS_SDK_Global_Controller_HPP

class AGlobal_Controller_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UDirectionalLightComponent* DirectionalLight;
    UExponentialHeightFogComponent* ExponentialHeightFog;
    UBillboardComponent* Billboard;
    UPostProcessComponent* PostProcess;
    float Timeline_0_Lerp_2890453349BB5BC5E77E1A8F1AE4C6BC;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_2890453349BB5BC5E77E1A8F1AE4C6BC;
    UTimelineComponent* Timeline_0;
    float FogChangeColor_Lerp_E824A45544EFF3BD8246DB8F176787D1;
    TEnumAsByte<ETimelineDirection::Type> FogChangeColor__Direction_E824A45544EFF3BD8246DB8F176787D1;
    UTimelineComponent* FogChangeColor;
    TArray<TEnumAsByte<Areas::Type>> DebugTestAreas;
    UMaterialInstanceDynamic* PPMaterial;
    bool Editor;
    bool ViewGamePercentage;
    bool Recorder Mode;
    bool UseNavMesh;
    bool IgnoreCommands;
    bool FullPlayer;
    bool Tutorials;
    FString CurrentFog;
    UBlueFireSaveGame_C* SaveGameObject;
    bool WallJump;
    bool DoubleJump;
    bool DownSmash;
    bool Dash;
    bool Attack;
    UBlueFire_Game_Instance_C* GameInstance;
    bool FireBall;
    bool Sprint;
    bool Grind;
    bool InfiniteStamina;
    float MasterTimeDilatation;
    bool Invinsible;
    FVector SavedEditorLocation;
    bool bLock;
    bool CustomPlayer;
    FGlobal_Controller_CPCGamepadChange PCGamepadChange;
    void PCGamepadChange();
    bool FreezeOnDebug;
    APlayer_Character_BP_C* Player;
    TArray<FName> VisibleLevels;
    bool AlreadyAddedLevel;
    bool LoadedLevel;
    FGlobal_Controller_CDoneLoadingLevels DoneLoadingLevels;
    void DoneLoadingLevels();
    TEnumAsByte<Areas::Type> CurrentArea;
    bool VoidLoaded;
    UAkAudioEvent* LastAreaMusic;
    bool SpinAttack;
    bool GraphicDebugOptionsConsole;
    bool FogVisible;
    int32 Shots;
    bool DebugMusic;
    bool DebugAmbiences_Deprecated;
    FLinearColor OriginalColor;
    FFogSettings Stoneheart;
    FFogSettings ArcaneTunnels;
    FFogSettings IceCavern;
    FFogSettings SandTemple;
    FFogSettings IronCaves;
    FFogSettings BlazeRiver;
    FFogSettings ShadowFortress;
    FFogSettings PenumbrasTemple;
    FFogSettings EyasForest;
    float OriginalFogDensity;
    float OriginalMaxOpacity;
    float OriginalStartDistance;
    float OriginalHeightFalloff;
    bool DemoTimeout;
    TEnumAsByte<Weapons::Type> Weapon;
    TEnumAsByte<Tunics::Type> Tunic;
    TArray<TEnumAsByte<Spirits::Type>> EquippedSpirits;
    int32 SpiritSlots;
    bool WaterDamage;
    bool HideFromEnemies;
    FSave_PlayerStats Stats;
    TArray<FName> AllLevels;
    int32 LevelLoadingIndex;
    int32 AttackUpgrades;
    int32 LevelUnloadingIndex;
    int32 MovementUpgrades;
    int32 DefenseUpgrades;
    TArray<TEnumAsByte<E_DailyQuest::Type>> DailyQuestsList;
    ATutorialText_C* Tutorial;
    TArray<FFogSettings> FogSettings;
    FFogSettings CheckPointFog;
    bool BlockStreaming;
    AAllVoids_Controller_C* AllVoidsController;
    AActor* PlayerStart;
    TArray<FName> EditorVisibleLevels;
    bool VisibleMethodON_LoadMethodOff;
    int32 LevelLoadingIndex2;
    TArray<FName> VisibleLevelsDebugLoad;
    AActor* UthasDemoStart;
    AActor* NuosStart;
    TEnumAsByte<StreamingChunks::Type> Chunk;
    TArray<FName> AllLevelsPermanent;
    FString AreaTravelString;
    FGlobal_Controller_CSpecialAreaTravel SpecialAreaTravel;
    void SpecialAreaTravel();
    FTransform Travel New Loc;
    FVector TempLocation;
    FGlobal_Controller_CStreamOut StreamOut;
    void StreamOut();
    TEnumAsByte<Areas::Type> LastArea;
    UDebugLevel_C* DebugLevel;
    int32 BeiraVesselIndex;
    bool ElevatorFindSuccess;
    ULoadScreen_C* LoadScreen;
    bool ShowingAreaIntro;
    FGlobal_Controller_CAreaIntroFinished AreaIntroFinished;
    void AreaIntroFinished();
    bool DebugToolsOn;
    bool TurnOffMusic;
    bool TurnOffAmbiences;
    UAreaIntro_C* AreaIntro;
    AActor* CreditsCam;
    UQuest_PopUp_C* Quest Popup;
    float SleepTime;
    AActor* PauseCam;
    FGlobal_Controller_CShowCredits ShowCredits;
    void ShowCredits();
    bool CanShowAreaIntro;
    UWarpUI_C* WarpUI;
    FGlobal_Controller_CRemoveUI RemoveUI;
    void RemoveUI();
    FGlobal_Controller_CAddUI AddUI;
    void AddUI();
    bool PlayingCredits;
    UDebugGamePorcentage_C* GamePorcentageUI;
    TArray<FName> AllLevelsSave;
    TEnumAsByte<StreamingChunks::Type> InitialChunck;
    bool DebugLoadLevels;
    UMessage_PopUp_C* MessasPopUpUI;
    UPCGamePadUI_C* PCGamePadUI;
    USleepMode_C* SleepModeUI;
    int32 LevelVisibleIndex;
    TEnumAsByte<StreamingChunks::Type> AreaTravelTemp_Chunck;
    bool AreaTravelTemp_AreaName;
    bool AreaTravelTemp_ShowAllLevels;
    bool AreaTravelTemp_OverrideSafeSpot;
    bool AreaTravelTemp_IsBeginPlay;
    bool AreaTravelTemp_Fade;
    bool AreaTravelTemp_SkipNormalRespawn;
    bool AreaTravelTemp_Debug;
    FTransform AreaTravelTemp_NewPlayerLoc;
    TArray<FName> AreaTravelTemp_VisibleLevels;
    bool RemoveLoadingFade;
    bool VoidDLCLevel;
    UVoidExit_C* VoidExitUI;
    bool EditorQuickPlay;
    bool QuickPlaySkip;
    bool ScreenshotMode;
    FGlobal_Controller_CLevelLoaded LevelLoaded;
    void LevelLoaded();
    UVoidExit_SealedLand_C* Void Exit SealedLand UI;
    ULevelSequence* CreditsSequence;
    FGlobal_Controller_CAnyKey AnyKey;
    void AnyKey();
    bool TempPaused;

    void GetPlayerStartTransform(FTransform& Transform, const FTransform CallFunc_GetTransform_ReturnValue);
    void Is Not Console(bool& Result, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool K2Node_Select_Default);
    void GetFogColor(uint8 Area, FLinearColor& NewParam, uint8 Temp_byte_Variable, FLinearColor Temp_struct_Variable, FLinearColor Temp_struct_Variable_1, FLinearColor Temp_struct_Variable_2, FLinearColor Temp_struct_Variable_3, FLinearColor Temp_struct_Variable_4, FLinearColor Temp_struct_Variable_5, FLinearColor Temp_struct_Variable_6, FLinearColor Temp_struct_Variable_7, FLinearColor Temp_struct_Variable_8, FLinearColor Temp_struct_Variable_9, FLinearColor Temp_struct_Variable_10, FLinearColor Temp_struct_Variable_11, FLinearColor Temp_struct_Variable_12, FLinearColor Temp_struct_Variable_13, FLinearColor Temp_struct_Variable_14, FLinearColor Temp_struct_Variable_15, FLinearColor Temp_struct_Variable_16, FLinearColor Temp_struct_Variable_17, FLinearColor Temp_struct_Variable_18, FLinearColor Temp_struct_Variable_19, FLinearColor Temp_struct_Variable_20, FLinearColor Temp_struct_Variable_21, FLinearColor Temp_struct_Variable_22, FLinearColor Temp_struct_Variable_23, FLinearColor Temp_struct_Variable_24, FLinearColor Temp_struct_Variable_25, FLinearColor Temp_struct_Variable_26, FLinearColor Temp_struct_Variable_27, FLinearColor Temp_struct_Variable_28, FLinearColor Temp_struct_Variable_29, FLinearColor Temp_struct_Variable_30, FLinearColor Temp_struct_Variable_31, FLinearColor Temp_struct_Variable_32, FLinearColor Temp_struct_Variable_33, FLinearColor Temp_struct_Variable_34, FLinearColor Temp_struct_Variable_35, FLinearColor K2Node_Select_Default);
    void GetLevelName(uint8 Index, FName& LevelName, uint8 Temp_byte_Variable, FName Temp_name_Variable, FName Temp_name_Variable_1, FName Temp_name_Variable_2, FName Temp_name_Variable_3, FName Temp_name_Variable_4, FName Temp_name_Variable_5, FName Temp_name_Variable_6, FName Temp_name_Variable_7, FName Temp_name_Variable_8, FName Temp_name_Variable_9, FName Temp_name_Variable_10, FName Temp_name_Variable_11, FName Temp_name_Variable_12, FName Temp_name_Variable_13, FName Temp_name_Variable_14, FName Temp_name_Variable_15, FName Temp_name_Variable_16, FName Temp_name_Variable_17, FName Temp_name_Variable_18, FName Temp_name_Variable_19, FName Temp_name_Variable_20, FName Temp_name_Variable_21, FName Temp_name_Variable_22, FName Temp_name_Variable_23, FName Temp_name_Variable_24, FName CallFunc_MakeLiteralName_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, FName CallFunc_MakeLiteralName_ReturnValue_2, FName CallFunc_MakeLiteralName_ReturnValue_3, FName CallFunc_MakeLiteralName_ReturnValue_4, FName CallFunc_MakeLiteralName_ReturnValue_5, FName CallFunc_MakeLiteralName_ReturnValue_6, FName CallFunc_MakeLiteralName_ReturnValue_7, FName CallFunc_MakeLiteralName_ReturnValue_8, FName K2Node_Select_Default);
    void UserConstructionScript(FString CallFunc_GetAreaFromChunk_Area, FRotator CallFunc_K2_GetComponentRotation_ReturnValue, FVector CallFunc_Conv_RotatorToVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FLinearColor CallFunc_MakeColor_ReturnValue);
    void FogChangeColor__FinishedFunc();
    void FogChangeColor__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OnNotifyEnd_B6A6CF574BA6CB23D77D6EA2EA0CE3A4(FName NotifyName);
    void OnNotifyBegin_B6A6CF574BA6CB23D77D6EA2EA0CE3A4(FName NotifyName);
    void OnInterrupted_B6A6CF574BA6CB23D77D6EA2EA0CE3A4(FName NotifyName);
    void OnBlendOut_B6A6CF574BA6CB23D77D6EA2EA0CE3A4(FName NotifyName);
    void OnCompleted_B6A6CF574BA6CB23D77D6EA2EA0CE3A4(FName NotifyName);
    void OnNotifyEnd_55B65EA047C47014606FE8BD881805BF(FName NotifyName);
    void OnNotifyBegin_55B65EA047C47014606FE8BD881805BF(FName NotifyName);
    void OnInterrupted_55B65EA047C47014606FE8BD881805BF(FName NotifyName);
    void OnBlendOut_55B65EA047C47014606FE8BD881805BF(FName NotifyName);
    void OnCompleted_55B65EA047C47014606FE8BD881805BF(FName NotifyName);
    void OnFailure_D9EECAA04BA716EFCEC8AB94A59F85B6();
    void OnSuccess_D9EECAA04BA716EFCEC8AB94A59F85B6();
    void OnFailure_BC2F8CEF4FAF939E19996C93B0A592EB(FName WrittenAchievementName, float WrittenProgress, int32 WrittenUserTag);
    void OnSuccess_BC2F8CEF4FAF939E19996C93B0A592EB(FName WrittenAchievementName, float WrittenProgress, int32 WrittenUserTag);
    void InpActEvt_AnyKey_K2Node_InputKeyEvent_0(FKey Key);
    void Play Credits(ULevelSequence* LevelSequence);
    void Credi();
    void StartCastleAmb();
    void Play Credits DLC VoidMaster();
    void StartCtuscene();
    void EndCutscene();
    void TextAllVoids();
    void TextAllVoids1();
    void TextAllVoids2();
    void TextAllVoids3();
    void TextAllVoids4();
    void UmbraAnim();
    void UmbraTunic();
    void UmbraAnimReset();
    void Void Load Screen();
    void QuestStatusUpdate(uint8 Quest Operation, uint8 Quest);
    void Force Remove QuestPopUp();
    void AddAchievement(uint8 Achievement);
    void XboxSetPostProcessChange(int32 Index);
    void StartWarp();
    void LoadDebugArea();
    void AddLevelToCurrentlyLoaded(const TArray<FName>& AreasToMakeVisible, bool Show);
    void DeathUnloadLevels();
    void RemoveLevelToCurrentlyLoaded(const TArray<FName>& Array);
    void VoidExitMakeLevelsVisible();
    void ClearLevelList();
    void LoadVoid(FName Void);
    void UnloadVoid();
    void EnterVoidLevelsHide();
    void LoadAllLevels();
    void ShowVisibleLevels();
    void Load(FName InName);
    void NextLevelLoad();
    void NextLevelUnload();
    void UnloadLevel(FName InName);
    void DebugLoadAll();
    void DebugReturnLoadAll();
    void TeleportToTempleEntrance(FString Origin);
    void PrevLoaded();
    void AreaTravel(uint8 NewChunk, bool Show Area Name, const TArray<FName>& VisibleLevels, const FTransform& NewPlayerLocation, bool Debug, FString String, bool SkipNormalRespawn, bool Fade, bool Is Begin Play, bool Override Safe Spot, bool ShowAllLevels, bool Save, bool Void Load Screen);
    void LoadNextArea();
    void Start();
    void CheckPointReload(uint8 Chunk, const TArray<FName>& VisibleLevels);
    void Retry Find Elevator();
    void RestartLoadFog();
    void VisibleNext(FName InName);
    void MakeNextLevelVisible();
    void SetPlayerToDestination();
    void NextLevelMakeVisible();
    void MakeVisible(FName InName);
    void GodStoneGrab(FText GodStoneName, bool MoveToLocation, FVector Location);
    void PlayerSuperFreeze();
    void AttackCamEffect();
    void PauseCallPCGamepadChange();
    void StartTimerSleep();
    void InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0(float AxisValue);
    void InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_1(float AxisValue);
    void ChangeStadiaController();
    void BindStadiaController();
    void NoSpaceInInventory();
    void GlobalAreaName();
    void ShowAreaName();
    void Remove AreaIntro();
    void Force Remove AreaIntro();
    void MoveFog();
    void ChangeFogColor(float PlayRate, FLinearColor NewColor);
    void RevertFogColor();
    void ChangeFogToCheckpoint(uint8 Area, bool Instant);
    void FogDeactivate();
    void FogActivate();
    void ChangeFogToString(bool Instant, FString Area, bool Construct, FString Origin);
    void ChangeFogColorStringTime(float PlayRate, FString String);
    void RevFog();
    void ReceiveBeginPlay();
    void Save(bool HiddenSave, bool Show HUD);
    void GamePercentAdd(float Percent, FString PercentageName, int32 PercentInt);
    void Timer();
    void addshots();
    void UpdateDebugLevel(const FName Void Name, const TArray<FName>& Custom Names);
    void ShowDebugLevel(bool Show);
    void BindApplicationDelegates();
    void Application Has Entered Foreground();
    void Application Has Reactivated();
    void Application Will Deactivate();
    void Application Will Enter Background();
    void OnXboxLogout();
    void Go to MainMenu();
    void RetryPlayerCast();
    void Save Credits(bool is DLC);
    void ExecuteUbergraph_Global_Controller(int32 EntryPoint, bool K2Node_CustomEvent_is_DLC, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsInViewport_ReturnValue, UMessage_PopUp_C* CallFunc_Create_ReturnValue, StadiaChangeController__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UAreaIntro_C* CallFunc_Create_ReturnValue_1, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FSave_PlayerAbilities K2Node_MakeStruct_Save_PlayerAbilities, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, UDebugLevel_C* CallFunc_Create_ReturnValue_2, UDebugGamePorcentage_C* CallFunc_Create_ReturnValue_3, UDebugGamePorcentage_C* CallFunc_Create_ReturnValue_4, const FTransform Temp_struct_Variable, UApplicationLifecycleComponent* CallFunc_AddComponent_ReturnValue, ApplicationLifetimeDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, ApplicationLifetimeDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, OnXboxLogout__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, UXboxLogout_C* CallFunc_Create_ReturnValue_5, Close__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, bool Temp_bool_Variable_6, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess_1, EmptyOnlineDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, int32 Temp_int_Array_Index_Variable, bool K2Node_SwitchInteger_CmpSuccess_2, bool K2Node_SwitchInteger_CmpSuccess_3, ULevelSequence* K2Node_CustomEvent_LevelSequence, FPostProcessSettings K2Node_MakeStruct_PostProcessSettings, int32 CallFunc_PostEventAtLocation_ReturnValue, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, ULevelStreaming* CallFunc_GetStreamingLevel_ReturnValue, UPlayerController* CallFunc_GetPlayerController_ReturnValue, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_2, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_3, TArray<UPostProcessVolume*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_4, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_5, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_4, TArray<UPostProcessVolume*>& CallFunc_GetAllActorsOfClass_OutActors_1, int32 CallFunc_Array_Length_ReturnValue_1, ULevelStreaming* CallFunc_GetStreamingLevel_ReturnValue_1, ULevelStreaming* CallFunc_GetStreamingLevel_ReturnValue_2, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_5, int32 CallFunc_PostEventAtLocation_ReturnValue_6, TArray<AStaticMeshActor*>& CallFunc_GetAllActorsOfClass_OutActors_2, int32 CallFunc_Array_Length_ReturnValue_2, uint8 Temp_byte_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess_4, UQuest_PopUp_C* CallFunc_Create_ReturnValue_6, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, FVector CallFunc_GetSocketLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_7, uint8 K2Node_CustomEvent_Quest_Operation, uint8 K2Node_CustomEvent_Quest, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsInViewport_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue_1, FName Temp_name_Variable, bool K2Node_SwitchInteger_CmpSuccess_5, uint8 K2Node_CustomEvent_Achievement, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, FName CallFunc_Conv_StringToName_ReturnValue, UAchievementQueryCallbackProxy* CallFunc_CacheAchievements_ReturnValue, UAchievementWriteCallbackProxy* CallFunc_WriteAchievementProgress_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool Temp_bool_Variable_7, int32 K2Node_CustomEvent_Index, float CallFunc_Divide_FloatFloat_ReturnValue, FName K2Node_CustomEvent_NotifyName, const TArray<FName>& K2Node_CustomEvent_AreasToMakeVisible, bool K2Node_CustomEvent_Show_1, FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue, const TArray<FName>& K2Node_CustomEvent_Array, int32 CallFunc_Array_Length_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_5, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, FName K2Node_CustomEvent_Void, int32 CallFunc_PostEventAtLocation_ReturnValue_8, int32 CallFunc_PostEventAtLocation_ReturnValue_9, int32 CallFunc_PostEventAtLocation_ReturnValue_10, int32 CallFunc_Array_Length_ReturnValue_6, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, FName K2Node_CustomEvent_NotifyName_1, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_7, FName K2Node_CustomEvent_InName_3, ULevelStreaming* CallFunc_GetStreamingLevel_ReturnValue_3, bool CallFunc_IsRobiValid_ReturnValue_2, bool CallFunc_IsLevelLoaded_ReturnValue, bool Temp_bool_Variable_8, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess_6, int32 CallFunc_Array_Length_ReturnValue_8, int32 Temp_int_Array_Index_Variable_1, FName CallFunc_Array_Get_Item_1, bool CallFunc_Array_RemoveItem_ReturnValue, ULevelStreaming* CallFunc_GetStreamingLevel_ReturnValue_4, FName K2Node_CustomEvent_InName_2, ULevelStreaming* CallFunc_GetStreamingLevel_ReturnValue_5, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue_3, bool CallFunc_IsLevelLoaded_ReturnValue_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_8, bool K2Node_SwitchInteger_CmpSuccess_7, int32 CallFunc_Array_Length_ReturnValue_9, int32 CallFunc_Array_Length_ReturnValue_10, int32 Temp_int_Array_Index_Variable_2, FName CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_11, ULevelStreaming* CallFunc_GetStreamingLevel_ReturnValue_6, bool CallFunc_IsRobiValid_ReturnValue_4, FString K2Node_CustomEvent_Origin_1, FName K2Node_CustomEvent_NotifyName_2, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, int32 CallFunc_PostEventAtLocation_ReturnValue_11, int32 CallFunc_PostEventAtLocation_ReturnValue_12, int32 CallFunc_PostEventAtLocation_ReturnValue_13, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, uint8 K2Node_CustomEvent_NewChunk, bool K2Node_CustomEvent_Show_Area_Name, const TArray<FName>& K2Node_CustomEvent_VisibleLevels_1, const FTransform K2Node_CustomEvent_NewPlayerLocation, bool K2Node_CustomEvent_Debug, FString K2Node_CustomEvent_String_1, bool K2Node_CustomEvent_SkipNormalRespawn, bool K2Node_CustomEvent_Fade, bool K2Node_CustomEvent_Is_Begin_Play, bool K2Node_CustomEvent_Override_Safe_Spot, bool K2Node_CustomEvent_ShowAllLevels, bool K2Node_CustomEvent_Save, bool K2Node_CustomEvent_Void_Load_Screen, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_9, FString CallFunc_GetAreaFromChunk_Area, uint8 K2Node_CustomEvent_Chunk, const TArray<FName>& K2Node_CustomEvent_VisibleLevels, USleepMode_C* CallFunc_Create_ReturnValue_7, int32 Temp_int_Array_Index_Variable_3, FName CallFunc_Array_Get_Item_3, bool CallFunc_Array_IsValidIndex_ReturnValue_2, ULevelStreaming* CallFunc_GetStreamingLevel_ReturnValue_7, bool CallFunc_IsRobiValid_ReturnValue_5, bool CallFunc_IsLevelVisible_ReturnValue, UPCGamePadUI_C* CallFunc_Create_ReturnValue_8, int32 CallFunc_PostEventAtLocation_ReturnValue_14, FKey K2Node_InputKeyEvent_Key, bool CallFunc_Key_IsGamepadKey_ReturnValue, TArray<UAreaTransition_Elevator_C*>& CallFunc_GetAllActorsOfClass_OutActors_3, int32 CallFunc_Array_Length_ReturnValue_12, bool CallFunc_Array_IsValidIndex_ReturnValue_3, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, FName CallFunc_Array_Get_Item_4, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_10, UPlayerController* CallFunc_GetPlayerController_ReturnValue_3, FSave_PlayerStats K2Node_MakeStruct_Save_PlayerStats, bool CallFunc_SetItem_Success, bool CallFunc_SetItem_SpecialPopUp, APawn* CallFunc_GetPlayerPawn_ReturnValue, const TArray<FName>& K2Node_MakeArray_Array, int32 CallFunc_PostEventAtLocation_ReturnValue_15, bool CallFunc_IsRobiValid_ReturnValue_6, int32 CallFunc_PostEventAtLocation_ReturnValue_16, int32 CallFunc_PostEventAtLocation_ReturnValue_17, int32 CallFunc_PostEventAtLocation_ReturnValue_18, int32 CallFunc_PostEventAtLocation_ReturnValue_19, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, const TArray<AActor*>& K2Node_MakeArray_Array_1, FHitResult CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, UVoidExit_SealedLand_C* CallFunc_Create_ReturnValue_9, FVector CallFunc_Add_VectorVector_ReturnValue_1, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FHitResult CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, FVector CallFunc_BreakTransform_Location_1, FRotator CallFunc_BreakTransform_Rotation_1, FVector CallFunc_BreakTransform_Scale_1, const TArray<FName>& K2Node_MakeArray_Array_2, FVector CallFunc_Conv_RotatorToVector_ReturnValue, const TArray<FName>& K2Node_MakeArray_Array_3, const TArray<FName>& K2Node_MakeArray_Array_4, const TArray<FName>& K2Node_MakeArray_Array_5, const TArray<FName>& K2Node_MakeArray_Array_6, const TArray<FName>& K2Node_MakeArray_Array_7, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_IsRobiValid_ReturnValue_7, bool CallFunc_IsRobiValid_ReturnValue_8, FName K2Node_CustomEvent_NotifyName_4, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue_1, FName K2Node_CustomEvent_InName_1, ULevelStreaming* CallFunc_GetStreamingLevel_ReturnValue_8, FName CallFunc_Array_Get_Item_5, bool CallFunc_IsRobiValid_ReturnValue_9, bool CallFunc_Less_IntInt_ReturnValue_4, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_11, int32 Temp_int_Array_Index_Variable_4, int32 CallFunc_Subtract_IntInt_ReturnValue_2, FName CallFunc_Array_Get_Item_6, ULevelStreaming* CallFunc_GetStreamingLevel_ReturnValue_9, bool CallFunc_IsRobiValid_ReturnValue_10, UPlayerController* CallFunc_GetPlayerController_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_7, FString CallFunc_GetAreaFromChunk_Area_1, int32 Temp_int_Array_Index_Variable_5, TArray<FName>& CallFunc_GetLevelsToLoadFromChunk_All_Levels, ULoadScreen_C* CallFunc_Create_ReturnValue_10, bool CallFunc_Is_Not_Console_Result, bool CallFunc_Is_Not_Console_Result_1, bool CallFunc_Is_Not_Console_Result_2, bool CallFunc_Is_Not_Console_Result_3, int32 Temp_int_Loop_Counter_Variable_4, bool CallFunc_Less_IntInt_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_4, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Is_Not_Console_Result_4, int32 CallFunc_Subtract_IntInt_ReturnValue_3, DoneLoadingLevels__DelegateSignature K2Node_CreateDelegate_OutputDelegate_12, int32 CallFunc_Clamp_ReturnValue, FName Temp_name_Variable_1, FName K2Node_CustomEvent_InName, DoneLoadingLevels__DelegateSignature K2Node_CreateDelegate_OutputDelegate_13, ULevelStreaming* CallFunc_GetStreamingLevel_ReturnValue_10, bool CallFunc_IsRobiValid_ReturnValue_11, ULevelStreaming* CallFunc_GetStreamingLevel_ReturnValue_11, FText K2Node_CustomEvent_GodStoneName, bool K2Node_CustomEvent_MoveToLocation, FVector K2Node_CustomEvent_Location, bool CallFunc_IsLevelLoaded_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_PlayAnimMontage_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_2, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_6, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult_1, bool CallFunc_K2_SetActorLocation_ReturnValue_1, FVector CallFunc_GetCameraLocation_ReturnValue, int32 Temp_int_Loop_Counter_Variable_5, FVector CallFunc_Subtract_VectorVector_ReturnValue_1, FVector CallFunc_Normal_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_6, FRotator CallFunc_Conv_VectorToRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, int32 CallFunc_Add_IntInt_ReturnValue_5, FRotator CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, FName K2Node_CustomEvent_NotifyName_5, bool CallFunc_SetGamePaused_ReturnValue, bool CallFunc_SetGamePaused_ReturnValue_1, float CallFunc_MakeLiteralFloat_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_20, int32 CallFunc_PostEventAtLocation_ReturnValue_21, DoneLoadingLevels__DelegateSignature K2Node_CreateDelegate_OutputDelegate_14, bool CallFunc_Not_PreBool_ReturnValue_1, float K2Node_InputAxisKeyEvent_AxisValue_1, float K2Node_InputAxisKeyEvent_AxisValue, int32 Temp_int_Array_Index_Variable_6, FName CallFunc_Array_Get_Item_7, ULevelStreaming* CallFunc_GetStreamingLevel_ReturnValue_12, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsRobiValid_ReturnValue_12, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, FName CallFunc_Array_Get_Item_8, bool CallFunc_Array_IsValidIndex_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool K2Node_Select_Default, uint8 K2Node_Select_Default_1, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_IsRobiValid_ReturnValue_13, bool CallFunc_BooleanAND_ReturnValue, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_15, int32 Temp_int_Loop_Counter_Variable_6, int32 CallFunc_Add_IntInt_ReturnValue_6, bool CallFunc_IsRobiValid_ReturnValue_14, FName K2Node_CustomEvent_NotifyName_6, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, FText CallFunc_GetChunkName_Name, int32 CallFunc_PostEventAtLocation_ReturnValue_22, bool CallFunc_IsRobiValid_ReturnValue_15, bool CallFunc_IsInViewport_ReturnValue_2, bool CallFunc_IsRobiValid_ReturnValue_16, bool CallFunc_IsInViewport_ReturnValue_3, APawn* CallFunc_GetPlayerPawn_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float K2Node_CustomEvent_PlayRate_1, FLinearColor K2Node_CustomEvent_NewColor, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_FInterpTo_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, uint8 K2Node_CustomEvent_Area_1, bool K2Node_CustomEvent_Instant_1, int32 Temp_int_Loop_Counter_Variable_7, FLinearColor CallFunc_LinearColorLerp_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_7, int32 CallFunc_Add_IntInt_ReturnValue_7, int32 Temp_int_Array_Index_Variable_7, FName CallFunc_Array_Get_Item_9, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, bool K2Node_CustomEvent_Instant, FString K2Node_CustomEvent_Area, bool K2Node_CustomEvent_Construct, FString K2Node_CustomEvent_Origin, float K2Node_CustomEvent_PlayRate, FString K2Node_CustomEvent_String, FFogSettings CallFunc_Array_Get_Item_10, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_16, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_2, float CallFunc_Lerp_ReturnValue_3, FLinearColor CallFunc_LinearColorLerp_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_13, UWarpUI_C* CallFunc_Create_ReturnValue_11, FFogSettings CallFunc_Array_Get_Item_11, int32 CallFunc_Array_Length_ReturnValue_14, bool CallFunc_Less_IntInt_ReturnValue_8, FVector CallFunc_MakeVector_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool Temp_bool_IsClosed_Variable, float CallFunc_Lerp_ReturnValue_4, float CallFunc_Lerp_ReturnValue_5, float CallFunc_Lerp_ReturnValue_6, float CallFunc_Lerp_ReturnValue_7, FName Temp_name_Variable_2, float Temp_float_Variable, APawn* CallFunc_GetPlayerPawn_ReturnValue_3, FVector CallFunc_K2_GetActorLocation_ReturnValue_5, int32 Temp_int_Loop_Counter_Variable_8, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_9, FVector CallFunc_MakeVector_ReturnValue_2, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_1, int32 CallFunc_Add_IntInt_ReturnValue_8, FName K2Node_CustomEvent_NotifyName_7, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_17, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UGameInstance* CallFunc_GetGameInstance_ReturnValue, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Variable_5, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_1, bool K2Node_CustomEvent_HiddenSave, bool K2Node_CustomEvent_Show_HUD, FName K2Node_CustomEvent_NotifyName_8, int32 Temp_int_Array_Index_Variable_8, AStaticMeshActor* CallFunc_Array_Get_Item_12, FString CallFunc_GetDisplayName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_18, bool K2Node_SwitchInteger_CmpSuccess_8, bool Temp_bool_True_if_break_was_hit_Variable_1, int32 Temp_int_Array_Index_Variable_9, FName CallFunc_Array_Get_Item_13, bool CallFunc_Array_Contains_ReturnValue_2, ULevelStreaming* CallFunc_GetStreamingLevel_ReturnValue_13, bool CallFunc_IsRobiValid_ReturnValue_17, bool CallFunc_Not_PreBool_ReturnValue_4, float K2Node_CustomEvent_Percent, FString K2Node_CustomEvent_PercentageName, int32 K2Node_CustomEvent_PercentInt, UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue, FSave_GameStats K2Node_MakeStruct_Save_GameStats, int32 Temp_int_Loop_Counter_Variable_9, bool CallFunc_Less_IntInt_ReturnValue_10, int32 CallFunc_Add_IntInt_ReturnValue_9, bool CallFunc_BooleanAND_ReturnValue_2, FName K2Node_CustomEvent_NotifyName_9, bool K2Node_SwitchInteger_CmpSuccess_9, int32 CallFunc_PostEventAtLocation_ReturnValue_23, TArray<AGlobal_Controller_C*>& CallFunc_GetAllActorsOfClass_OutActors_4, AGlobal_Controller_C* CallFunc_Array_Get_Item_14, bool CallFunc_Array_IsValidIndex_ReturnValue_5, FName K2Node_CustomEvent_WrittenAchievementName, float K2Node_CustomEvent_WrittenProgress, int32 K2Node_CustomEvent_WrittenUserTag, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_19, APawn* CallFunc_GetPlayerPawn_ReturnValue_4, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess_2, FSave_PlayerAbilities K2Node_MakeStruct_Save_PlayerAbilities_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, AchievementWriteDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_20, int32 K2Node_Select_Default_2, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess_10, int32 K2Node_Select_Default_3, FName K2Node_CustomEvent_WrittenAchievementName_1, float K2Node_CustomEvent_WrittenProgress_1, int32 K2Node_CustomEvent_WrittenUserTag_1, OnMovieSceneSequencePlayerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_21, AchievementWriteDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_22, FRotator CallFunc_K2_GetActorRotation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_6, bool K2Node_SwitchInteger_CmpSuccess_11, FTransform CallFunc_MakeTransform_ReturnValue, int32 Temp_int_Array_Index_Variable_10, UPostProcessVolume* CallFunc_Array_Get_Item_15, FString CallFunc_GetDisplayName_ReturnValue_1, bool K2Node_SwitchString_CmpSuccess, const TArray<FName>& K2Node_MakeArray_Array_8, const FName K2Node_CustomEvent_Void_Name, const TArray<FName>& K2Node_CustomEvent_Custom_Names, bool CallFunc_IsRobiValid_ReturnValue_18, bool K2Node_Select_Default_4, bool K2Node_CustomEvent_Show, int32 Temp_int_Loop_Counter_Variable_10, bool CallFunc_IsRobiValid_ReturnValue_19, bool CallFunc_Less_IntInt_ReturnValue_11, int32 CallFunc_Add_IntInt_ReturnValue_10, int32 Temp_int_Array_Index_Variable_11, UAreaTransition_Elevator_C* CallFunc_Array_Get_Item_16, bool CallFunc_EqualEqual_StrStr_ReturnValue_3, bool K2Node_SwitchEnum_CmpSuccess_1, FSave_PlayerStats K2Node_MakeStruct_Save_PlayerStats_1, FPlayer_Equipment K2Node_MakeStruct_Player_Equipment, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, bool K2Node_SwitchInteger_CmpSuccess_12, FPostProcessSettings K2Node_MakeStruct_PostProcessSettings_1, int32 CallFunc_PostEventAtLocation_ReturnValue_24, int32 CallFunc_PostEventAtLocation_ReturnValue_25, bool Temp_bool_True_if_break_was_hit_Variable_2, int32 Temp_int_Array_Index_Variable_12, UPostProcessVolume* CallFunc_Array_Get_Item_17, FString CallFunc_GetDisplayName_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_5, bool K2Node_SwitchString_CmpSuccess_1, bool CallFunc_IsRobiValid_ReturnValue_20, int32 Temp_int_Loop_Counter_Variable_11, bool CallFunc_Less_IntInt_ReturnValue_12, int32 CallFunc_Add_IntInt_ReturnValue_11, bool CallFunc_IsRobiValid_ReturnValue_21, bool K2Node_SwitchInteger_CmpSuccess_13, int32 Temp_int_Loop_Counter_Variable_12, bool CallFunc_Less_IntInt_ReturnValue_13, int32 CallFunc_Add_IntInt_ReturnValue_12, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_SetGamePaused_ReturnValue_2, bool CallFunc_Is_Xbox_Series_X_Result, float CallFunc_MakeLiteralFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, float K2Node_Select_Default_5, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_3, bool CallFunc_IsRobiValid_ReturnValue_22, EmptyOnlineDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_23, int32 CallFunc_Add_IntInt_ReturnValue_13, FSave_GameStats K2Node_MakeStruct_Save_GameStats_1, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_4, bool CallFunc_IsGamePaused_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_SetGamePaused_ReturnValue_3, FSave_GameStats K2Node_MakeStruct_Save_GameStats_2, FPostProcessSettings K2Node_MakeStruct_PostProcessSettings_2);
    void AnyKey__DelegateSignature();
    void LevelLoaded__DelegateSignature();
    void AddUI__DelegateSignature();
    void RemoveUI__DelegateSignature();
    void ShowCredits__DelegateSignature();
    void AreaIntroFinished__DelegateSignature();
    void StreamOut__DelegateSignature();
    void SpecialAreaTravel__DelegateSignature();
    void DoneLoadingLevels__DelegateSignature();
    void PCGamepadChange__DelegateSignature();
}

#endif
