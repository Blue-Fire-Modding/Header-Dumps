#ifndef UE4SS_SDK_Mira_Intro_Controller_HPP
#define UE4SS_SDK_Mira_Intro_Controller_HPP

class AMira_Intro_Controller_C : ACinematic_Controller_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBillboardComponent* Billboard_0;
    AActor* TargetA;

    void OnNotifyEnd_71A33EE648D2716919D1ABAFDADCD38E(FName NotifyName);
    void OnNotifyBegin_71A33EE648D2716919D1ABAFDADCD38E(FName NotifyName);
    void OnInterrupted_71A33EE648D2716919D1ABAFDADCD38E(FName NotifyName);
    void OnBlendOut_71A33EE648D2716919D1ABAFDADCD38E(FName NotifyName);
    void OnCompleted_71A33EE648D2716919D1ABAFDADCD38E(FName NotifyName);
    void TX1();
    void TX2();
    void TX3();
    void StartCutscene();
    void End();
    void CustomEvent();
    void UmbraAnim();
    void SkipCutscene();
    void ExecuteUbergraph_Mira_Intro_Controller(int32 EntryPoint, OnMovieSceneSequencePlayerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName_4, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, FName Temp_name_Variable, const FTransform CallFunc_GetTransform_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FHitResult CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, float CallFunc_Cutscene_OutputPin, float CallFunc_Cutscene_OutputPin_1, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, const TArray<FText>& K2Node_MakeArray_Array_1, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue);
}

#endif
