#ifndef UE4SS_SDK_Master_Void_Maker_HPP
#define UE4SS_SDK_Master_Void_Maker_HPP

class AMaster_Void_Maker_C : ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Timeline_0_Float_3689F29E4EC4B4D07BCABF9C6817E6EE;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_3689F29E4EC4B4D07BCABF9C6817E6EE;
    UTimelineComponent* Timeline_0;
    int32 ResetCounter;
    FString IntroSceneID;
    APlayer_Character_BP_C* Player;
    UBlueFire_Game_Instance_C* GameInstance;
    int32 DPadCounter;
    ULoadScreen_C* LoadScreen;
    bool Tutorial Find Success;
    bool ShowTutorial;
    UExtraInput_UI_C* ExtraInput;
    AGlobal_Controller_C* Global_Controller_2_ExecuteUbergraph_Master_Void_Maker_RefProperty;
    AIntroGlass_C* IntroGlass_2_ExecuteUbergraph_Master_Void_Maker_RefProperty;
    APlayerStart* PlayerStart_1_ExecuteUbergraph_Master_Void_Maker_RefProperty;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ShowTutorials();
    void HideTutorials();
    void CustomEvent_0();
    void EndIntro();
    void DisableCam();
    void ResetDemo();
    void ReceiveBeginPlay();
    void Play();
    void LoadDemoIntro();
    void ReceiveEndPlay(uint8 EndPlayReason);
    void DemoTimeout();
    void DemoTimeoutCall();
    void WarningDemoTimeout();
    void CheckForCameraView();
    void DoneLoading();
    void GameIntro();
    void DemoUthas();
    void MasterLevelTracker();
    void AdjustTargetArm();
    void ExecuteUbergraph_Master_Void_Maker(int32 EntryPoint, bool Temp_bool_Variable, ULevelStreaming* CallFunc_GetStreamingLevel_ReturnValue, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, float CallFunc_Lerp_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue_4, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, const TArray<FName>& K2Node_MakeArray_Array, UBlueFireSaveGame_C* CallFunc_CreateSaveGameObject_ReturnValue, UGameInstance* CallFunc_GetGameInstance_ReturnValue, ULevelStreaming* CallFunc_GetStreamingLevel_ReturnValue_1, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance, bool K2Node_DynamicCast_bSuccess, DoneLoadingLevels__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UPlayerController* CallFunc_GetPlayerController_ReturnValue, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_2, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FSave_GameStats K2Node_MakeStruct_Save_GameStats, APawn* CallFunc_GetPlayerPawn_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_ApplyDamage_ReturnValue, UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsRobiValid_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, FSave_PlayerAbilities K2Node_MakeStruct_Save_PlayerAbilities, UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, OnMovieSceneSequencePlayerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_PostEventAtLocation_ReturnValue_5, uint8 K2Node_Event_EndPlayReason, int32 CallFunc_PostEventAtLocation_ReturnValue_6, UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, UPlayerController* CallFunc_GetPlayerController_ReturnValue_3, FRotator CallFunc_K2_GetActorRotation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FHitResult CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, UExtraInput_UI_C* CallFunc_Create_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess_1, UPlayerController* CallFunc_GetPlayerController_ReturnValue_4, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor_1, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue_1, TArray<uint8>& K2Node_MakeArray_Array_1, TArray<uint8>& K2Node_MakeArray_Array_2, TArray<FGodStone_Structure>& K2Node_MakeArray_Array_3, TArray<FBossSoul>& K2Node_MakeArray_Array_4, TArray<uint8>& K2Node_MakeArray_Array_5, TArray<uint8>& K2Node_MakeArray_Array_6, TArray<uint8>& K2Node_MakeArray_Array_7, TArray<uint8>& K2Node_MakeArray_Array_8, FPlayer_Equipment K2Node_MakeStruct_Player_Equipment, TArray<FName>& K2Node_MakeArray_Array_9, int32 CallFunc_PostEventAtLocation_ReturnValue_7, uint8 CallFunc_GetChunkFromCheckpoint_Chunk, TArray<AGlobal_Controller_C*>& CallFunc_GetAllActorsOfClass_OutActors, FInventory K2Node_MakeStruct_Inventory, AGlobal_Controller_C* CallFunc_Array_Get_Item, int32 CallFunc_MakeLiteralInt_ReturnValue, FInventory K2Node_MakeStruct_Inventory_1, FInventory K2Node_MakeStruct_Inventory_2, TArray<FInventory>& K2Node_MakeArray_Array_10, TArray<FInventory>& K2Node_MakeArray_Array_11, FSave_PlayerStats K2Node_MakeStruct_Save_PlayerStats, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_8, int32 CallFunc_PostEventAtLocation_ReturnValue_9, bool CallFunc_IsRobiValid_ReturnValue_1, FString CallFunc_Conv_BoolToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, OnMovieSceneSequencePlayerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, Break__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FRotator CallFunc_K2_GetActorRotation_ReturnValue_1, FRotator CallFunc_GetControlRotation_ReturnValue, FRotator CallFunc_NormalizedDeltaRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, float CallFunc_Abs_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, TArray<UTutorialText_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, const FText Temp_text_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, const FText Temp_text_Variable_1, FString Temp_string_Variable, int32 Temp_int_Array_Index_Variable, UTutorialText_C* CallFunc_Array_Get_Item_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FString Temp_string_Variable_1, FString K2Node_Select_Default, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_2);
}

#endif
