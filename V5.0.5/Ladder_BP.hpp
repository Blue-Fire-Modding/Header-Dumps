#ifndef UE4SS_SDK_Ladder_BP_HPP
#define UE4SS_SDK_Ladder_BP_HPP

class ALadder_BP_C : AInteractionMaster_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBoxComponent* Box1;
    UArrowComponent* Arrow;
    bool Climbing;
    float ClimbSpeed;
    float ZTop;
    float ZBottom;
    UCurveFloat* Curve;

    void UserConstructionScript(FVector CallFunc_GetActorScale3D_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue);
    void OnNotifyEnd_84978A064A37662385C647B8A742FA5F(FName NotifyName);
    void OnNotifyBegin_84978A064A37662385C647B8A742FA5F(FName NotifyName);
    void OnInterrupted_84978A064A37662385C647B8A742FA5F(FName NotifyName);
    void OnBlendOut_84978A064A37662385C647B8A742FA5F(FName NotifyName);
    void OnCompleted_84978A064A37662385C647B8A742FA5F(FName NotifyName);
    void InpActEvt_PC_Interact_K2Node_InputActionEvent_5(FKey Key);
    void InpActEvt_Gamepad_Interact_Shield_K2Node_InputActionEvent_4(FKey Key);
    void InpActEvt_Gamepad_Jump_K2Node_InputActionEvent_3(FKey Key);
    void InpActEvt_PC_Jump_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_Gamepad_Emote_Menu_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_PC_Emote_Menu_K2Node_InputActionEvent_0(FKey Key);
    void ReceiveBeginPlay();
    void PressButton();
    void OverlapEndClean();
    void Hit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    void CheckLocationLimits();
    void InpAxisEvt_Generic_Motion_Y_Axis_K2Node_InputAxisEvent_0(float AxisValue);
    void Fall Water Death();
    void ExecuteUbergraph_Ladder_BP(int32 EntryPoint, FName K2Node_CustomEvent_NotifyName_2, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName Temp_name_Variable, FKey K2Node_InputActionEvent_Key_5, FKey K2Node_InputActionEvent_Key_4, FKey K2Node_InputActionEvent_Key_3, FKey K2Node_InputActionEvent_Key_2, FKey K2Node_InputActionEvent_Key_1, FallWaterDeath__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FKey K2Node_InputActionEvent_Key, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FVector CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, FVector CallFunc_MakeVector_ReturnValue, FHitResult CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, bool Temp_bool_IsClosed_Variable, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, FName K2Node_CustomEvent_NotifyName_3, UPlayerController* CallFunc_GetPlayerController_ReturnValue, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, AActor* K2Node_CustomEvent_SelfActor, AActor* K2Node_CustomEvent_OtherActor, FVector K2Node_CustomEvent_NormalImpulse, const FHitResult K2Node_CustomEvent_Hit, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, bool Temp_bool_IsClosed_Variable_1, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, float CallFunc_Abs_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool Temp_bool_Variable, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, bool Temp_bool_Has_Been_Initd_Variable_1, bool CallFunc_Less_FloatFloat_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_2, bool Temp_bool_IsClosed_Variable_2, FName K2Node_CustomEvent_NotifyName_4, bool Temp_bool_Variable_1, float K2Node_InputAxisEvent_AxisValue, ActorHitSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, float CallFunc_GetFloatValue_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_2, bool K2Node_Select_Default, bool CallFunc_Less_FloatFloat_ReturnValue_1);
}

#endif
