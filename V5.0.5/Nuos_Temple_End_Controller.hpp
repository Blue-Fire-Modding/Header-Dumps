#ifndef UE4SS_SDK_Nuos_Temple_End_Controller_HPP
#define UE4SS_SDK_Nuos_Temple_End_Controller_HPP

class ANuos_Temple_End_Controller_C : ACinematic_Controller_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBillboardComponent* Billboard_0;
    AActor* TargetA;
    AActor* Target Teleport;
    ANPC_GodNuos_C* GodSkelMesh;
    UGods_AnimBP_C* GodAnimBP;
    TArray<FName> Levels Visible;
    TArray<FName> Levels Invisible;
    FName Current Level;

    void OnNotifyEnd_6F8E27284C51B6BF3C2EE5A06AFE2E14(FName NotifyName);
    void OnNotifyBegin_6F8E27284C51B6BF3C2EE5A06AFE2E14(FName NotifyName);
    void OnInterrupted_6F8E27284C51B6BF3C2EE5A06AFE2E14(FName NotifyName);
    void OnBlendOut_6F8E27284C51B6BF3C2EE5A06AFE2E14(FName NotifyName);
    void OnCompleted_6F8E27284C51B6BF3C2EE5A06AFE2E14(FName NotifyName);
    void OnNotifyEnd_245C2E754839A1CEC7E2E9AF1A792359(FName NotifyName);
    void OnNotifyBegin_245C2E754839A1CEC7E2E9AF1A792359(FName NotifyName);
    void OnInterrupted_245C2E754839A1CEC7E2E9AF1A792359(FName NotifyName);
    void OnBlendOut_245C2E754839A1CEC7E2E9AF1A792359(FName NotifyName);
    void OnCompleted_245C2E754839A1CEC7E2E9AF1A792359(FName NotifyName);
    void End();
    void Con();
    void endDialogue();
    void TX1();
    void TX2();
    void TX4();
    void StartCutscene();
    void TX3B();
    void NuosAppear();
    void TX5();
    void TX6();
    void NuosBuildingShake();
    void TX7();
    void EndGodRaySound();
    void NuosDisappearSound();
    void StartGodRaySound();
    void NuosAppearSound();
    void NuosEndSound();
    void TX8();
    void EndAnim();
    void SkipCutscene();
    void ExecuteUbergraph_Nuos_Temple_End_Controller(int32 EntryPoint, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName_9, FName K2Node_CustomEvent_NotifyName_8, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName_7, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName K2Node_CustomEvent_NotifyName_6, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FName K2Node_CustomEvent_NotifyName_5, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, FName Temp_name_Variable, FName K2Node_CustomEvent_NotifyName_4, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_8, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_9, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_10, FName Temp_name_Variable_1, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_11, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, const FTransform CallFunc_GetTransform_ReturnValue, UNewItem_C* CallFunc_GetItemHUD_NewItemHud, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FHitResult CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, float CallFunc_Cutscene_OutputPin, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_1, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_2, const TArray<FText>& K2Node_MakeArray_Array_3, const TArray<FText>& K2Node_MakeArray_Array_4, const TArray<FText>& K2Node_MakeArray_Array_5, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_6, const TArray<FText>& K2Node_MakeArray_Array_7, OnMovieSceneSequencePlayerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_12, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UGods_AnimBP_C* K2Node_DynamicCast_AsGods_Anim_BP, bool K2Node_DynamicCast_bSuccess, const TArray<FText>& K2Node_MakeArray_Array_8, int32 CallFunc_PostEventAtLocation_ReturnValue, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_9, const TArray<FText>& K2Node_MakeArray_Array_10, int32 CallFunc_PostEventAtLocation_ReturnValue_1, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_11, int32 CallFunc_PostEventAtLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue_4, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_5, int32 CallFunc_PostEventAtLocation_ReturnValue_6, const TArray<FText>& K2Node_MakeArray_Array_12, int32 CallFunc_PostEventAtLocation_ReturnValue_7, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_13, FText CallFunc_MakeLiteralText_ReturnValue, Removed__DelegateSignature K2Node_CreateDelegate_OutputDelegate_13, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_8, float CallFunc_Cutscene_OutputPin_1, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, UPlayerController* CallFunc_GetPlayerController_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue, const FTransform CallFunc_GetTransform_ReturnValue_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FVector CallFunc_BreakTransform_Location_1, FRotator CallFunc_BreakTransform_Rotation_1, FVector CallFunc_BreakTransform_Scale_1, FRotator CallFunc_MakeRotator_ReturnValue, FHitResult CallFunc_K2_SetActorLocationAndRotation_SweepHitResult_1, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue_1, const TArray<FName>& K2Node_MakeArray_Array_14, bool CallFunc_GetItem_Success, bool CallFunc_GetItem_SpecialPopUp, int32 CallFunc_PostEventAtLocation_ReturnValue_9);
}

#endif
