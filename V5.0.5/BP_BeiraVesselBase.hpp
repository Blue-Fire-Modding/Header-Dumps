#ifndef UE4SS_SDK_BP_BeiraVesselBase_HPP
#define UE4SS_SDK_BP_BeiraVesselBase_HPP

class ABP_BeiraVesselBase_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UPointLightComponent* PointLight;
    UMaterialBillboardComponent* MaterialBillboard;
    UStaticMeshComponent* SpikedSphere;
    UParticleSystemComponent* P_SaveCheckpoint;
    UArrowComponent* Arrow_Direction;
    UParticleSystemComponent* VFX;
    UBoxComponent* BoxSanctuary;
    UStaticMeshComponent* SanctuaryBase;
    UParticleSystemComponent* P_Shine_Sanctuary;
    UStaticMeshComponent* SM_SanctuaryStone;
    USkeletalMeshComponent* SK_SanctuaryStone;
    USceneComponent* DefaultSceneRoot;
    float Timeline_0_Glow_131E84BB4A98AF5B2AEED0BC8EAC67A1;
    float Timeline_0_Blur_131E84BB4A98AF5B2AEED0BC8EAC67A1;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_131E84BB4A98AF5B2AEED0BC8EAC67A1;
    UTimelineComponent* Timeline_0;
    float Change_Vision_Timeline_Alpha_0E08124E4937F1577ED2178A3091E41C;
    TEnumAsByte<ETimelineDirection::Type> Change_Vision_Timeline__Direction_0E08124E4937F1577ED2178A3091E41C;
    UTimelineComponent* Change Vision Timeline;
    float Cutscene_Timeline_Scale_C4B7AA094AC028B33FEF6F98FAF3904C;
    TEnumAsByte<ETimelineDirection::Type> Cutscene_Timeline__Direction_C4B7AA094AC028B33FEF6F98FAF3904C;
    UTimelineComponent* Cutscene Timeline;
    bool Debug TriggerBase;
    APlayer_Character_BP_C* Player;
    int32 Index;
    FString ID;
    int32 Amount Shards;
    ULevelSequence* Cutscene;
    TArray<ABP_BeiraShards_C*> Beira Shards;
    UCounter_Vessel_C* CounterUI;
    UPickUp_Action_UI_C* PickUpActionUI;
    bool Activated;
    UMaterialInstanceDynamic* MatGlow;
    TArray<FName> LevelsToLoad;
    TArray<FName> LevelsToUnload;
    int32 Amount Bases Activated;
    ABP_BeiraPosts_C* BeiraPost;

    void UserConstructionScript(FString CallFunc_GetDisplayName_ReturnValue);
    void Cutscene Timeline__FinishedFunc();
    void Cutscene Timeline__UpdateFunc();
    void Cutscene Timeline__VFX Spawn__EventFunc();
    void Change Vision Timeline__FinishedFunc();
    void Change Vision Timeline__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OnNotifyEnd_1D1208C54F27D7207C26BAB7F8CAB9A1(FName NotifyName);
    void OnNotifyBegin_1D1208C54F27D7207C26BAB7F8CAB9A1(FName NotifyName);
    void OnInterrupted_1D1208C54F27D7207C26BAB7F8CAB9A1(FName NotifyName);
    void OnBlendOut_1D1208C54F27D7207C26BAB7F8CAB9A1(FName NotifyName);
    void OnCompleted_1D1208C54F27D7207C26BAB7F8CAB9A1(FName NotifyName);
    void OnNotifyEnd_901F79E74E86977C4716ED87B3E2DA19(FName NotifyName);
    void OnNotifyBegin_901F79E74E86977C4716ED87B3E2DA19(FName NotifyName);
    void OnInterrupted_901F79E74E86977C4716ED87B3E2DA19(FName NotifyName);
    void OnBlendOut_901F79E74E86977C4716ED87B3E2DA19(FName NotifyName);
    void OnCompleted_901F79E74E86977C4716ED87B3E2DA19(FName NotifyName);
    void InpActEvt_PC_Interact_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Gamepad_Interact_Shield_K2Node_InputActionEvent_0(FKey Key);
    void BndEvt__BoxSanctuary_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveBeginPlay();
    void FinishCamera();
    void Finish(bool Success);
    void Change Vision(bool Show);
    void Update Amount();
    void Reset();
    void Relocate Player();
    void RadialGlow();
    void BndEvt__BoxSanctuary_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void Empty Event();
    void Set State ();
    void Completed();
    void Update Quest();
    void OnRemovePickupUI(bool bRemove);
    void ExecuteUbergraph_BP_BeiraVesselBase(int32 EntryPoint, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName Temp_name_Variable, UPickUp_Action_UI_C* CallFunc_Create_ReturnValue, UMessage_PopUp_C* CallFunc_Create_ReturnValue_1, bool CallFunc_IsInViewport_ReturnValue, FKey K2Node_InputActionEvent_Key_1, FKey K2Node_InputActionEvent_Key, bool Temp_bool_Variable, FText Temp_text_Variable, FText Temp_text_Variable_1, UMessage_PopUp_C* CallFunc_Create_ReturnValue_2, UMessage_PopUp_C* CallFunc_Create_ReturnValue_3, bool Temp_bool_Variable_1, OnRemovePickupUI__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FText Temp_text_Variable_2, FText Temp_text_Variable_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, FName K2Node_CustomEvent_NotifyName_7, bool Temp_bool_Variable_2, bool CallFunc_Not_PreBool_ReturnValue, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, APawn* CallFunc_GetPlayerPawn_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, FName K2Node_CustomEvent_NotifyName_3, FName K2Node_CustomEvent_NotifyName_8, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, int32 Temp_int_Variable, FName K2Node_CustomEvent_NotifyName_9, FName K2Node_CustomEvent_NotifyName_4, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_8, int32 Temp_int_Array_Index_Variable, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_9, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_HasItem_Success, int32 CallFunc_HasItem_ItemAmount, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, float CallFunc_Cutscene_OutputPin, FVector CallFunc_K2_GetComponentLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, int32 Temp_int_Variable_1, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, bool CallFunc_IsValid_ReturnValue, float CallFunc_Cutscene_OutputPin_1, bool K2Node_CustomEvent_Success, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_CustomEvent_Show, ABP_BeiraShards_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const FText Temp_text_Variable_4, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_4, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue, float CallFunc_Cutscene_OutputPin_2, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, UCounter_Vessel_C* CallFunc_Create_ReturnValue_4, UPlayerController* CallFunc_GetPlayerController_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, FRotator CallFunc_K2_GetComponentRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, Cancel__DelegateSignature K2Node_CreateDelegate_OutputDelegate_10, FRotator CallFunc_MakeRotator_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue_1, FHitResult CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, float CallFunc_Cutscene_OutputPin_3, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, APawn* CallFunc_GetPlayerPawn_ReturnValue_2, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Variable_2, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool CallFunc_IsRobiValid_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, UPlayerController* CallFunc_GetPlayerController_ReturnValue_3, bool CallFunc_IsRobiValid_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, ABP_BeiraShards_C* CallFunc_Array_Get_Item_1, UpdateAmount__DelegateSignature K2Node_CreateDelegate_OutputDelegate_11, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_GetItem_Success, bool CallFunc_GetItem_SpecialPopUp, UPlayerController* CallFunc_GetPlayerController_ReturnValue_4, int32 CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_3, float CallFunc_Lerp_ReturnValue, OnMovieSceneSequencePlayerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_12, UPlayerController* CallFunc_GetPlayerController_ReturnValue_5, FText K2Node_Select_Default, int32 Temp_int_Variable_3, FVector CallFunc_Conv_FloatToVector_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_4, bool CallFunc_Array_IsValidIndex_ReturnValue, FName Temp_name_Variable_1, bool CallFunc_Array_IsValidIndex_ReturnValue_1, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, FString CallFunc_CheckState_Same_ID_1, bool CallFunc_CheckState_Used_1, FString CallFunc_CheckState_Same_ID_2, bool CallFunc_CheckState_Used_2, FString CallFunc_CheckState_Same_ID_3, bool CallFunc_CheckState_Used_3, FString CallFunc_CheckState_Same_ID_4, bool CallFunc_CheckState_Used_4, FName K2Node_CustomEvent_NotifyName_5, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_13, FString CallFunc_CheckState_Same_ID_5, bool CallFunc_CheckState_Used_5, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, FString CallFunc_Conv_IntToString_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FText CallFunc_MakeLiteralText_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_IsRobiValid_ReturnValue_3, FText CallFunc_Conv_StringToText_ReturnValue, int32 Temp_int_Variable_4, FName K2Node_CustomEvent_NotifyName_6, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, FText CallFunc_MakeLiteralText_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_5, int32 CallFunc_PostEventAtLocation_ReturnValue_6, int32 CallFunc_PostEventAtLocation_ReturnValue_7, bool CallFunc_IsRobiValid_ReturnValue_4, bool K2Node_CustomEvent_bRemove, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_IsRobiValid_ReturnValue_5, bool CallFunc_IsInViewport_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_5, FText K2Node_Select_Default_1);
}

#endif
