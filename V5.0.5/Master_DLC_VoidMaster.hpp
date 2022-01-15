#ifndef UE4SS_SDK_Master_DLC_VoidMaster_HPP
#define UE4SS_SDK_Master_DLC_VoidMaster_HPP

class AMaster_DLC_VoidMaster_C : ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Timeline_0_Float_3E31A81A45F1CFC155B173850D75F2C5;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_3E31A81A45F1CFC155B173850D75F2C5;
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
    AGlobal_Controller_C* Global_Controller_2_ExecuteUbergraph_Master_DLC_VoidMaster_RefProperty;
    AIntroGlass_C* IntroGlass_2_ExecuteUbergraph_Master_DLC_VoidMaster_RefProperty;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void DisableCam();
    void CustomEvent_0();
    void MasterLevelTracker();
    void ShowTutorials();
    void HideTutorials();
    void EndIntro();
    void Play();
    void ResetDemo();
    void ReceiveBeginPlay();
    void DoneLoading();
    void LoadDemoIntro();
    void ReceiveEndPlay(uint8 EndPlayReason);
    void DemoTimeout();
    void DemoTimeoutCall();
    void WarningDemoTimeout();
    void CheckForCameraView();
    void GameIntro();
    void DemoUthas();
    void AdjustTargetArm();
    void ExecuteUbergraph_Master_DLC_VoidMaster(int32 EntryPoint, uint8 CallFunc_MakeLiteralByte_ReturnValue, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, TArray<UTutorialText_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, ULevelStreaming* CallFunc_GetStreamingLevel_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, ULevelStreaming* CallFunc_GetStreamingLevel_ReturnValue_1, APawn* CallFunc_GetPlayerPawn_ReturnValue, float CallFunc_Lerp_ReturnValue, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue_4, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, UPlayerController* CallFunc_GetPlayerController_ReturnValue, const TArray<FName>& K2Node_MakeArray_Array, UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, UBlueFireSaveGame_C* CallFunc_CreateSaveGameObject_ReturnValue, UGameInstance* CallFunc_GetGameInstance_ReturnValue, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor_1, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue_1, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance, bool K2Node_DynamicCast_bSuccess, FSave_GameStats K2Node_MakeStruct_Save_GameStats, const TArray<FName>& K2Node_MakeArray_Array_1, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, FSave_PlayerAbilities K2Node_MakeStruct_Save_PlayerAbilities, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess_1, UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsRobiValid_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_PostEventAtLocation_ReturnValue_5, int32 CallFunc_PostEventAtLocation_ReturnValue_6, DoneLoadingLevels__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_PostEventAtLocation_ReturnValue_7, uint8 K2Node_Event_EndPlayReason, int32 CallFunc_PostEventAtLocation_ReturnValue_8, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_1, UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, OnMovieSceneSequencePlayerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_IsRobiValid_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess_1, UPlayerController* CallFunc_GetPlayerController_ReturnValue_3, TArray<uint8>& K2Node_MakeArray_Array_2, TArray<uint8>& K2Node_MakeArray_Array_3, TArray<FGodStone_Structure>& K2Node_MakeArray_Array_4, TArray<FBossSoul>& K2Node_MakeArray_Array_5, TArray<uint8>& K2Node_MakeArray_Array_6, TArray<uint8>& K2Node_MakeArray_Array_7, TArray<uint8>& K2Node_MakeArray_Array_8, TArray<uint8>& K2Node_MakeArray_Array_9, UPlayerController* CallFunc_GetPlayerController_ReturnValue_4, FPlayer_Equipment K2Node_MakeStruct_Player_Equipment, OnMovieSceneSequencePlayerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FRotator CallFunc_K2_GetActorRotation_ReturnValue, FRotator CallFunc_GetControlRotation_ReturnValue, FRotator CallFunc_NormalizedDeltaRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, float CallFunc_Abs_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, TArray<AGlobal_Controller_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, AGlobal_Controller_C* CallFunc_Array_Get_Item, FSave_WorldStats K2Node_MakeStruct_Save_WorldStats, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, uint8 CallFunc_GetChunkFromCheckpoint_Chunk, FInventory K2Node_MakeStruct_Inventory, int32 CallFunc_MakeLiteralInt_ReturnValue, FInventory K2Node_MakeStruct_Inventory_1, TArray<FInventory>& K2Node_MakeArray_Array_10, FInventory K2Node_MakeStruct_Inventory_2, FString Temp_string_Variable, TArray<FInventory>& K2Node_MakeArray_Array_11, FSave_PlayerStats K2Node_MakeStruct_Save_PlayerStats, FTransform CallFunc_GetPlayerStartTransform_Transform, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FHitResult CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, FString Temp_string_Variable_1, UPlayerController* CallFunc_GetPlayerController_ReturnValue_5, bool Temp_bool_Variable, APawn* CallFunc_GetPlayerPawn_ReturnValue_2, FString K2Node_Select_Default, uint8 CallFunc_GetChunkFromCheckpoint_Chunk_1, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_9, const FText Temp_text_Variable, float CallFunc_ApplyDamage_ReturnValue, const FText Temp_text_Variable_1, int32 Temp_int_Array_Index_Variable, UTutorialText_C* CallFunc_Array_Get_Item_1, int32 Temp_int_Loop_Counter_Variable, Break__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UExtraInput_UI_C* CallFunc_Create_ReturnValue);
}

#endif
