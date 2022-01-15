#ifndef UE4SS_SDK_VoidIntro_Controller_HPP
#define UE4SS_SDK_VoidIntro_Controller_HPP

class AVoidIntro_Controller_C : ACinematic_Controller_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBillboardComponent* Billboard_0;
    AActor* TargetA;

    void OnNotifyEnd_922F5F79461563E8DE14F080C91CAC84(FName NotifyName);
    void OnNotifyBegin_922F5F79461563E8DE14F080C91CAC84(FName NotifyName);
    void OnInterrupted_922F5F79461563E8DE14F080C91CAC84(FName NotifyName);
    void OnBlendOut_922F5F79461563E8DE14F080C91CAC84(FName NotifyName);
    void OnCompleted_922F5F79461563E8DE14F080C91CAC84(FName NotifyName);
    void OnNotifyEnd_1855E2864B2422B4B77E1ABE9C9D3CBA(FName NotifyName);
    void OnNotifyBegin_1855E2864B2422B4B77E1ABE9C9D3CBA(FName NotifyName);
    void OnInterrupted_1855E2864B2422B4B77E1ABE9C9D3CBA(FName NotifyName);
    void OnBlendOut_1855E2864B2422B4B77E1ABE9C9D3CBA(FName NotifyName);
    void OnCompleted_1855E2864B2422B4B77E1ABE9C9D3CBA(FName NotifyName);
    void TX1();
    void QuickEnd();
    void End();
    void TX2();
    void endDialogue();
    void TX3();
    void TX4();
    void StartCutscene();
    void UmbraAnim();
    void NameNPC();
    void VonTakeOff();
    void SkipCutscene();
    void ExecuteUbergraph_VoidIntro_Controller(int32 EntryPoint, FName K2Node_CustomEvent_NotifyName_9, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FName K2Node_CustomEvent_NotifyName_8, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName_7, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName_6, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName K2Node_CustomEvent_NotifyName_5, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FName Temp_name_Variable, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, FName K2Node_CustomEvent_NotifyName_4, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_8, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_9, FName Temp_name_Variable_1, const FTransform CallFunc_GetTransform_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, FHitResult CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, float CallFunc_Cutscene_OutputPin, const TArray<FText>& K2Node_MakeArray_Array, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_1, bool CallFunc_IsRobiValid_ReturnValue, const TArray<FText>& K2Node_MakeArray_Array_2, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_3, const TArray<FText>& K2Node_MakeArray_Array_4, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_5, float CallFunc_Cutscene_OutputPin_1, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_6, FText CallFunc_MakeLiteralText_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, OnMovieSceneSequencePlayerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_10, int32 CallFunc_PostEventAtLocation_ReturnValue, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const TArray<FText>& K2Node_MakeArray_Array_7, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_11);
}

#endif
