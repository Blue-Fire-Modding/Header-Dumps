#ifndef UE4SS_SDK_VesselVon_Controller_HPP
#define UE4SS_SDK_VesselVon_Controller_HPP

class AVesselVon_Controller_C : ACinematic_Controller_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBillboardComponent* Billboard_0;
    AActor* TargetA;

    void OnNotifyEnd_399F308647A50C370FE2E6A92A87128D(FName NotifyName);
    void OnNotifyBegin_399F308647A50C370FE2E6A92A87128D(FName NotifyName);
    void OnInterrupted_399F308647A50C370FE2E6A92A87128D(FName NotifyName);
    void OnBlendOut_399F308647A50C370FE2E6A92A87128D(FName NotifyName);
    void OnCompleted_399F308647A50C370FE2E6A92A87128D(FName NotifyName);
    void End();
    void FIN();
    void TX0();
    void TX2();
    void TX3();
    void TX4();
    void TX5();
    void UmbraVesselSoul();
    void Quest();
    void SkipCutscene();
    void ReceiveBeginPlay();
    void StartCutscene();
    void TX 3B();
    void GiveStoneSound();
    void TX1();
    void ExecuteUbergraph_VesselVon_Controller(int32 EntryPoint, bool CallFunc_GetItem_Success, bool CallFunc_GetItem_SpecialPopUp, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName_4, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, FName Temp_name_Variable, Removed__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, float CallFunc_Cutscene_OutputPin, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const FTransform CallFunc_GetTransform_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, UNewItem_C* CallFunc_GetItemHUD_NewItemHud, FHitResult CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_1, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_2, FText CallFunc_MakeLiteralText_ReturnValue, const TArray<FText>& K2Node_MakeArray_Array_3, const TArray<FText>& K2Node_MakeArray_Array_4, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_5, const TArray<FText>& K2Node_MakeArray_Array_6, float CallFunc_Cutscene_OutputPin_1, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_7, const TArray<FText>& K2Node_MakeArray_Array_8, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue_1, OnMovieSceneSequencePlayerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, const TArray<FText>& K2Node_MakeArray_Array_9, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_10, const TArray<FText>& K2Node_MakeArray_Array_11, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_12, FText CallFunc_MakeLiteralText_ReturnValue_2, const TArray<FText>& K2Node_MakeArray_Array_13);
}

#endif
