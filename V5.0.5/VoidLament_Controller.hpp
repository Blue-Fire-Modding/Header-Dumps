#ifndef UE4SS_SDK_VoidLament_Controller_HPP
#define UE4SS_SDK_VoidLament_Controller_HPP

class AVoidLament_Controller_C : ACinematic_Controller_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBillboardComponent* Billboard_0;
    AActor* TargetA;

    void OnNotifyEnd_30A3C6F445970CDE104043ABC2ED3396(FName NotifyName);
    void OnNotifyBegin_30A3C6F445970CDE104043ABC2ED3396(FName NotifyName);
    void OnInterrupted_30A3C6F445970CDE104043ABC2ED3396(FName NotifyName);
    void OnBlendOut_30A3C6F445970CDE104043ABC2ED3396(FName NotifyName);
    void OnCompleted_30A3C6F445970CDE104043ABC2ED3396(FName NotifyName);
    void TX1();
    void End();
    void QuickEnd();
    void StartCutscene();
    void VonTakeOff();
    void endDialogue();
    void SkipCutscene();
    void TX3();
    void TX4();
    void TX5();
    void TX6();
    void TX7();
    void TX8();
    void TX9();
    void UmbraLook();
    void TX6B();
    void TX0();
    void EndLoop();
    void JumpLoop();
    void ExecuteUbergraph_VoidLament_Controller(int32 EntryPoint, FName K2Node_CustomEvent_NotifyName_4, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FName Temp_name_Variable, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const FTransform CallFunc_GetTransform_ReturnValue, bool Temp_bool_IsClosed_Variable, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FHitResult CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, OnMovieSceneSequencePlayerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, float CallFunc_Cutscene_OutputPin, const TArray<FText>& K2Node_MakeArray_Array, int32 CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_1, const TArray<FText>& K2Node_MakeArray_Array_2, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_3, FText CallFunc_MakeLiteralText_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, float CallFunc_Cutscene_OutputPin_1, const TArray<FText>& K2Node_MakeArray_Array_4, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_5, const TArray<FText>& K2Node_MakeArray_Array_6, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_7, const TArray<FText>& K2Node_MakeArray_Array_8, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_9, const TArray<FText>& K2Node_MakeArray_Array_10, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_11, const TArray<FText>& K2Node_MakeArray_Array_12, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_13, const TArray<FText>& K2Node_MakeArray_Array_14, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_15, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, const TArray<FText>& K2Node_MakeArray_Array_16, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_17, const TArray<FText>& K2Node_MakeArray_Array_18, bool Temp_bool_Has_Been_Initd_Variable, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_19, bool K2Node_SwitchInteger_CmpSuccess_1, bool CallFunc_JumpToMarkedFrame_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, bool CallFunc_JumpToMarkedFrame_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2);
}

#endif
