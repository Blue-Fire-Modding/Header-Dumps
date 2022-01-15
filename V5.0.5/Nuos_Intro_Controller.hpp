#ifndef UE4SS_SDK_Nuos_Intro_Controller_HPP
#define UE4SS_SDK_Nuos_Intro_Controller_HPP

class ANuos_Intro_Controller_C : ACinematic_Controller_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBillboardComponent* Billboard_0;
    AActor* TargetA;
    ULevelSequence* Cutscene;

    void OnNotifyEnd_3746CD3048896AC2EEED7EB44EEC5654(FName NotifyName);
    void OnNotifyBegin_3746CD3048896AC2EEED7EB44EEC5654(FName NotifyName);
    void OnInterrupted_3746CD3048896AC2EEED7EB44EEC5654(FName NotifyName);
    void OnBlendOut_3746CD3048896AC2EEED7EB44EEC5654(FName NotifyName);
    void OnCompleted_3746CD3048896AC2EEED7EB44EEC5654(FName NotifyName);
    void OnNotifyEnd_87F776894D3F4B58625B17AD80A67A6D(FName NotifyName);
    void OnNotifyBegin_87F776894D3F4B58625B17AD80A67A6D(FName NotifyName);
    void OnInterrupted_87F776894D3F4B58625B17AD80A67A6D(FName NotifyName);
    void OnBlendOut_87F776894D3F4B58625B17AD80A67A6D(FName NotifyName);
    void OnCompleted_87F776894D3F4B58625B17AD80A67A6D(FName NotifyName);
    void End();
    void TX1();
    void TX2();
    void StartCutscene();
    void FIN();
    void TX3();
    void CustomEvent_1();
    void TX4();
    void CustomEvent_3();
    void TX5();
    void StartGodRaySound();
    void CustomEvent_5();
    void DemoEnd();
    void UmbraReaction();
    void Umbra1();
    void WwiseTrigger();
    void Umbra2();
    void Umbra3();
    void ReceiveBeginPlay();
    void SkipCutscene();
    void ExecuteUbergraph_Nuos_Intro_Controller(int32 EntryPoint, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UDemoEnd_C* CallFunc_Create_ReturnValue, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName_9, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName K2Node_CustomEvent_NotifyName_8, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FName K2Node_CustomEvent_NotifyName_7, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, FName K2Node_CustomEvent_NotifyName_6, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, FName K2Node_CustomEvent_NotifyName_5, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, FName Temp_name_Variable, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_8, FName K2Node_CustomEvent_NotifyName_4, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_9, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_10, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_11, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_12, FName Temp_name_Variable_1, float CallFunc_Cutscene_OutputPin, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const FTransform CallFunc_GetTransform_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FHitResult CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, float CallFunc_Cutscene_OutputPin_1, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_1, const TArray<FText>& K2Node_MakeArray_Array_2, const TArray<FText>& K2Node_MakeArray_Array_3, int32 CallFunc_PostEventAtLocation_ReturnValue, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_4, const TArray<FText>& K2Node_MakeArray_Array_5, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_6, const TArray<FText>& K2Node_MakeArray_Array_7, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_8, const TArray<FText>& K2Node_MakeArray_Array_9, FText CallFunc_MakeLiteralText_ReturnValue, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_2, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_13, int32 CallFunc_PostEventAtLocation_ReturnValue_1, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, OnMovieSceneSequencePlayerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_14, bool CallFunc_IsRobiValid_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1);
}

#endif
