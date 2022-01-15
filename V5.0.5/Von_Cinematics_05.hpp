#ifndef UE4SS_SDK_Von_Cinematics_05_HPP
#define UE4SS_SDK_Von_Cinematics_05_HPP

class AVon_Cinematics_05_C : UCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    UDecalComponent* Decal;
    UStaticMeshComponent* Sword1;
    UStaticMeshComponent* Sword;
    UVon_Cinematics_AnimBP_C* AnimBP;
    ALeaveTemple_Controller_C* Cutscene;
    ANPCBound_C* NPCBound;
    APlayer_Character_BP_C* Player;
    AActor* Target;
    ULevelSequencePlayer* Sequence;

    void OnNotifyEnd_5F47CA1A44A092591188309F6D2ADECB(FName NotifyName);
    void OnNotifyBegin_5F47CA1A44A092591188309F6D2ADECB(FName NotifyName);
    void OnInterrupted_5F47CA1A44A092591188309F6D2ADECB(FName NotifyName);
    void OnBlendOut_5F47CA1A44A092591188309F6D2ADECB(FName NotifyName);
    void OnCompleted_5F47CA1A44A092591188309F6D2ADECB(FName NotifyName);
    void VonAnim();
    void FinCutscene();
    void CreateBound();
    void End();
    void TX0();
    void TX2();
    void ReceiveBeginPlay();
    void endDialogue();
    void TX3();
    void TX4();
    void Play Von Cutscene();
    void TX5();
    void TX1();
    void ExecuteUbergraph_Von_Cinematics_05(int32 EntryPoint, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName Temp_name_Variable, OnMovieSceneSequencePlayerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_IsValid_ReturnValue, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, const FTransform CallFunc_GetTransform_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, ANPCBound_C* CallFunc_FinishSpawningActor_ReturnValue, float CallFunc_Cutscene_OutputPin, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, float CallFunc_Cutscene_OutputPin_1, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, const FTransform CallFunc_GetTransform_ReturnValue_1, const TArray<FText>& K2Node_MakeArray_Array, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FHitResult CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UVon_Cinematics_AnimBP_C* K2Node_DynamicCast_AsVon_Cinematics_Anim_BP, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsRobiValid_ReturnValue, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_1, const TArray<FText>& K2Node_MakeArray_Array_2, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_3, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_4, FText CallFunc_MakeLiteralText_ReturnValue, FName K2Node_CustomEvent_NotifyName_4, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_5, const TArray<FText>& K2Node_MakeArray_Array_6, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_7, const TArray<FText>& K2Node_MakeArray_Array_8, const TArray<FText>& K2Node_MakeArray_Array_9, const TArray<FText>& K2Node_MakeArray_Array_10, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_11, int32 CallFunc_PostEventAtLocation_ReturnValue);
}

#endif
