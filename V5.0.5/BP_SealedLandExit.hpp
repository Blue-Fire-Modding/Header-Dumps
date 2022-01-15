#ifndef UE4SS_SDK_BP_SealedLandExit_HPP
#define UE4SS_SDK_BP_SealedLandExit_HPP

class ABP_SealedLandExit_C : AInteractionMaster_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UArrowComponent* Ghost Location;
    UArrowComponent* Arrow;
    UBoxComponent* Box_0;
    bool GoToBoss;
    AActor* NewLocation;
    UVoidExit_C* VoidExitUI;
    USkipCutscene_Action_UI_C* SkipCutsceneWidget;
    bool CanSkipCutscene;
    ULevelSequencePlayer* Current Sequence;
    ULevelSequence* LevelSequence;
    float LevelSequenceDuration;
    AOverrideListenerLocation_C* OverrideListenerController;
    bool IsPlayingCutscene;
    UAreaIntro_C* AreaIntro;
    bool Skip Cutscene;

    void InpActEvt_PC_Back_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Gamepad_Back_K2Node_InputActionEvent_0(FKey Key);
    void OnNotifyEnd_7AF28206424EB8CA222E07921364E51F(FName NotifyName);
    void OnNotifyBegin_7AF28206424EB8CA222E07921364E51F(FName NotifyName);
    void OnInterrupted_7AF28206424EB8CA222E07921364E51F(FName NotifyName);
    void OnBlendOut_7AF28206424EB8CA222E07921364E51F(FName NotifyName);
    void OnCompleted_7AF28206424EB8CA222E07921364E51F(FName NotifyName);
    void PressButton();
    void ReceiveBeginPlay();
    void Area Travel Boss();
    void SkipCutscene();
    void Play();
    void SequenceDurationEvent(const float& SequenceDurationMessage);
    void SealedLandCutscene();
    void AreaName();
    void Reset Door();
    void CustomEvent_0();
    void ExecuteUbergraph_BP_SealedLandExit(int32 EntryPoint, UVoidExit_C* CallFunc_Create_ReturnValue, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName Temp_name_Variable, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, Die__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, LevelLoaded__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, float CallFunc_PlayAnimMontage_ReturnValue, const TArray<FName>& K2Node_MakeArray_Array, FName K2Node_CustomEvent_NotifyName_4, const TArray<FName>& K2Node_MakeArray_Array_1, const TArray<FName>& K2Node_MakeArray_Array_2, const FTransform CallFunc_GetTransform_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FVector CallFunc_Conv_RotatorToVector_ReturnValue, OnMovieSceneSequencePlayerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, FHitResult CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, UPlayerController* CallFunc_GetPlayerController_ReturnValue, const TArray<AActor*>& K2Node_MakeArray_Array_3, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FHitResult CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, FVector CallFunc_Add_VectorVector_ReturnValue_1, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, USkipCutscene_Action_UI_C* CallFunc_Create_ReturnValue_1, UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, FKey K2Node_InputActionEvent_Key, bool CallFunc_IsRobiValid_ReturnValue, bool CallFunc_IsInViewport_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_1, float CallFunc_Cutscene_OutputPin, float CallFunc_PlayAnimMontage_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_2, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, bool CallFunc_IsPackagedForDistribution_ReturnValue, UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, FKey K2Node_InputActionEvent_Key_1, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, FFrameRate CallFunc_GetFrameRate_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_BreakFrameRate_Numerator, int32 CallFunc_BreakFrameRate_Denominator, float CallFunc_Conv_IntToFloat_ReturnValue, FQualifiedFrameTime CallFunc_GetDuration_ReturnValue, const float K2Node_CustomEvent_SequenceDurationMessage, FFrameNumber CallFunc_BreakQualifiedFrameTime_Frame, FFrameRate CallFunc_BreakQualifiedFrameTime_FrameRate, float CallFunc_BreakQualifiedFrameTime_SubFrame, int32 CallFunc_PostEventAtLocation_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue_4, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Cutscene_OutputPin_1, float CallFunc_Cutscene_OutputPin_2, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FRotator CallFunc_K2_GetComponentRotation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_Conv_RotatorToVector_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_5, int32 CallFunc_PostEvent_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, FString CallFunc_CheckState_Same_ID_1, bool CallFunc_CheckState_Used_1);
}

#endif
