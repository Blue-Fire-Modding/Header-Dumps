#ifndef UE4SS_SDK_Master_DUPL_1_HPP
#define UE4SS_SDK_Master_DUPL_1_HPP

class AMaster_C : ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Timeline_0_Float_CF3254E640CCA812D852279F23873BF5;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_CF3254E640CCA812D852279F23873BF5;
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
    AGlobal_Controller_C* Global_Controller_2_ExecuteUbergraph_Master_RefProperty;
    AIntroGlass_C* IntroGlass_2_ExecuteUbergraph_Master_RefProperty;
    APlayerStart* PlayerStart_1_ExecuteUbergraph_Master_RefProperty;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ShowTutorials();
    void HideTutorials();
    void EndIntro();
    void DisableCam();
    void MasterLevelTracker();
    void ResetDemo();
    void ReceiveBeginPlay();
    void Play();
    void DoneLoading();
    void LoadDemoIntro();
    void ReceiveEndPlay(uint8 EndPlayReason);
    void DemoTimeout();
    void DemoTimeoutCall();
    void WarningDemoTimeout();
    void CheckForCameraView();
    void GameIntro();
    void DemoUthas();
    void CustomEvent_0();
    void AdjustTargetArm();
    void ExecuteUbergraph_Master(int32 EntryPoint, ULevelStreaming* CallFunc_GetStreamingLevel_ReturnValue, ULevelStreaming* CallFunc_GetStreamingLevel_ReturnValue_1, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, TArray<UTutorialText_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue_4, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, float CallFunc_Lerp_ReturnValue, Break__DelegateSignature K2Node_CreateDelegate_OutputDelegate, const TArray<FName>& K2Node_MakeArray_Array, uint8 CallFunc_MakeLiteralByte_ReturnValue, UBlueFireSaveGame_C* CallFunc_CreateSaveGameObject_ReturnValue, UGameInstance* CallFunc_GetGameInstance_ReturnValue, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance, bool K2Node_DynamicCast_bSuccess, UPlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_ApplyDamage_ReturnValue, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, APawn* CallFunc_GetPlayerPawn_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess_1, UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsRobiValid_ReturnValue, UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, FSave_GameStats K2Node_MakeStruct_Save_GameStats, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor_1, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue_1, TArray<FName>& K2Node_MakeArray_Array_1, FSave_PlayerAbilities K2Node_MakeStruct_Save_PlayerAbilities, int32 CallFunc_PostEventAtLocation_ReturnValue_5, uint8 K2Node_Event_EndPlayReason, int32 CallFunc_PostEventAtLocation_ReturnValue_6, UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, DoneLoadingLevels__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_1, OnMovieSceneSequencePlayerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FRotator CallFunc_K2_GetActorRotation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UPlayerController* CallFunc_GetPlayerController_ReturnValue_3, FHitResult CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess, UPlayerController* CallFunc_GetPlayerController_ReturnValue_4, TArray<uint8>& K2Node_MakeArray_Array_2, TArray<uint8>& K2Node_MakeArray_Array_3, TArray<FGodStone_Structure>& K2Node_MakeArray_Array_4, TArray<FBossSoul>& K2Node_MakeArray_Array_5, TArray<uint8>& K2Node_MakeArray_Array_6, TArray<uint8>& K2Node_MakeArray_Array_7, TArray<uint8>& K2Node_MakeArray_Array_8, TArray<uint8>& K2Node_MakeArray_Array_9, FPlayer_Equipment K2Node_MakeStruct_Player_Equipment, UExtraInput_UI_C* CallFunc_Create_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_7, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_8, TArray<AGlobal_Controller_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, AGlobal_Controller_C* CallFunc_Array_Get_Item, FInventory K2Node_MakeStruct_Inventory, uint8 CallFunc_GetChunkFromCheckpoint_Chunk, int32 CallFunc_MakeLiteralInt_ReturnValue, FInventory K2Node_MakeStruct_Inventory_1, FInventory K2Node_MakeStruct_Inventory_2, TArray<FInventory>& K2Node_MakeArray_Array_10, TArray<FInventory>& K2Node_MakeArray_Array_11, FSave_PlayerStats K2Node_MakeStruct_Save_PlayerStats, bool CallFunc_IsRobiValid_ReturnValue_1, OnMovieSceneSequencePlayerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, UPlayerController* CallFunc_GetPlayerController_ReturnValue_5, int32 CallFunc_PostEventAtLocation_ReturnValue_9, APawn* CallFunc_GetPlayerPawn_ReturnValue_2, FRotator CallFunc_K2_GetActorRotation_ReturnValue_1, FRotator CallFunc_GetControlRotation_ReturnValue, FRotator CallFunc_NormalizedDeltaRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, float CallFunc_Abs_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, FString Temp_string_Variable, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, const FText Temp_text_Variable, const FText Temp_text_Variable_1, FString Temp_string_Variable_1, int32 Temp_int_Array_Index_Variable, UTutorialText_C* CallFunc_Array_Get_Item_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, FString K2Node_Select_Default, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_2);
}

#endif
