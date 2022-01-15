#ifndef UE4SS_SDK_BP_SanctuaryBase_WaterWays_HPP
#define UE4SS_SDK_BP_SanctuaryBase_WaterWays_HPP

class ABP_SanctuaryBase_WaterWays_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UArrowComponent* Arrow_Direction;
    UParticleSystemComponent* VFX;
    UBoxComponent* BoxSanctuary;
    UStaticMeshComponent* SanctuaryBase;
    UParticleSystemComponent* P_Shine_Sanctuary;
    UStaticMeshComponent* SM_SanctuaryStone;
    USkeletalMeshComponent* SK_SanctuaryStone;
    USceneComponent* DefaultSceneRoot;
    float Cutscene_Scale_BA384F80490AC4AF4B024DBBBD9A1E5B;
    TEnumAsByte<ETimelineDirection::Type> Cutscene__Direction_BA384F80490AC4AF4B024DBBBD9A1E5B;
    UTimelineComponent* Cutscene;
    bool Debug OpenDoor;
    ADoor_BP_C* Fence;
    ADoor_BP_C* Final Door;
    AActor* Camera;
    APlayer_Character_BP_C* Player;
    bool IsLast;
    FString ID;
    int32 Bases Opened;
    UPickUp_Action_UI_C* PickUpActionUI;
    UMaterialInstanceDynamic* Glow;
    bool IsFirst;
    AVon_Cinematics_05_C* Von Cinematic;

    void Cutscene__FinishedFunc();
    void Cutscene__UpdateFunc();
    void Cutscene__VFX Spawn__EventFunc();
    void OnNotifyEnd_A1DAB3764BD53862947E5D8AE8ADE240(FName NotifyName);
    void OnNotifyBegin_A1DAB3764BD53862947E5D8AE8ADE240(FName NotifyName);
    void OnInterrupted_A1DAB3764BD53862947E5D8AE8ADE240(FName NotifyName);
    void OnBlendOut_A1DAB3764BD53862947E5D8AE8ADE240(FName NotifyName);
    void OnCompleted_A1DAB3764BD53862947E5D8AE8ADE240(FName NotifyName);
    void InpActEvt_PC_Interact_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Gamepad_Interact_Shield_K2Node_InputActionEvent_0(FKey Key);
    void BndEvt__BoxSanctuary_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveBeginPlay();
    void Finish Cutscene();
    void FinishCamera();
    void Check State(bool IsBeginPlay);
    void Cutscene VFX();
    void BndEvt__BoxSanctuary_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnRemovePickupUI(bool bRemove);
    void ExecuteUbergraph_BP_SanctuaryBase_WaterWays(int32 EntryPoint, UPickUp_Action_UI_C* CallFunc_Create_ReturnValue, bool CallFunc_IsInViewport_ReturnValue, UMessage_PopUp_C* CallFunc_Create_ReturnValue_1, FKey K2Node_InputActionEvent_Key_1, FKey K2Node_InputActionEvent_Key, OnRemovePickupUI__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, OnMovieSceneSequencePlayerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Variable, FinishActivate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FVector CallFunc_Conv_FloatToVector_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, FName Temp_name_Variable, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, FName K2Node_CustomEvent_NotifyName_4, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, FName K2Node_CustomEvent_NotifyName, int32 Temp_int_Variable_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_HasItem_Success, int32 CallFunc_HasItem_ItemAmount, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, float CallFunc_Cutscene_OutputPin, FVector CallFunc_K2_GetComponentLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, UPlayerController* CallFunc_GetPlayerController_ReturnValue, UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, APawn* CallFunc_GetPlayerPawn_ReturnValue_2, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, float CallFunc_Cutscene_OutputPin_1, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, float CallFunc_Cutscene_OutputPin_2, float CallFunc_Cutscene_OutputPin_3, FString CallFunc_CheckState_Same_ID_1, bool CallFunc_CheckState_Used_1, FString CallFunc_CheckState_Same_ID_2, bool CallFunc_CheckState_Used_2, FString CallFunc_CheckState_Same_ID_3, bool CallFunc_CheckState_Used_3, FString CallFunc_CheckState_Same_ID_4, bool CallFunc_CheckState_Used_4, const FText Temp_text_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess_1, FName K2Node_CustomEvent_NotifyName_1, bool K2Node_CustomEvent_IsBeginPlay, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, int32 Temp_int_Variable_2, UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FRotator CallFunc_K2_GetComponentRotation_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FVector CallFunc_MakeVector_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue_1, FHitResult CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue_4, int32 CallFunc_PostEventAtLocation_ReturnValue_5, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool CallFunc_IsRobiValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, APawn* CallFunc_GetPlayerPawn_ReturnValue_3, FName K2Node_CustomEvent_NotifyName_2, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Variable_3, UPlayerController* CallFunc_GetPlayerController_ReturnValue_3, UPlayerController* CallFunc_GetPlayerController_ReturnValue_4, UPlayerController* CallFunc_GetPlayerController_ReturnValue_5, UPlayerController* CallFunc_GetPlayerController_ReturnValue_6, bool CallFunc_IsRobiValid_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_6, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, FString CallFunc_CheckState_Same_ID_5, bool CallFunc_CheckState_Used_5, int32 CallFunc_PostEventAtLocation_ReturnValue_7, int32 CallFunc_PostEventAtLocation_ReturnValue_8, bool CallFunc_IsRobiValid_ReturnValue_2, bool K2Node_CustomEvent_bRemove, bool CallFunc_IsRobiValid_ReturnValue_3, bool CallFunc_IsInViewport_ReturnValue_1);
}

#endif
