#ifndef UE4SS_SDK_RustCityVon_Controller_HPP
#define UE4SS_SDK_RustCityVon_Controller_HPP

class ARustCityVon_Controller_C : ACinematic_Controller_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBillboardComponent* Billboard_0;
    AActor* Target;

    void OnNotifyEnd_E791CBC542C25083EE92AB96A4ADD82F(FName NotifyName);
    void OnNotifyBegin_E791CBC542C25083EE92AB96A4ADD82F(FName NotifyName);
    void OnInterrupted_E791CBC542C25083EE92AB96A4ADD82F(FName NotifyName);
    void OnBlendOut_E791CBC542C25083EE92AB96A4ADD82F(FName NotifyName);
    void OnCompleted_E791CBC542C25083EE92AB96A4ADD82F(FName NotifyName);
    void OnNotifyEnd_A606CCC8431CE7B94B5AFCB5C202D2A1(FName NotifyName);
    void OnNotifyBegin_A606CCC8431CE7B94B5AFCB5C202D2A1(FName NotifyName);
    void OnInterrupted_A606CCC8431CE7B94B5AFCB5C202D2A1(FName NotifyName);
    void OnBlendOut_A606CCC8431CE7B94B5AFCB5C202D2A1(FName NotifyName);
    void OnCompleted_A606CCC8431CE7B94B5AFCB5C202D2A1(FName NotifyName);
    void End();
    void FIN();
    void TX0();
    void TX2();
    void TX3();
    void TX4();
    void UmbraAnim();
    void SkipCutscene();
    void ReceiveBeginPlay();
    void StartCutscene();
    void GiveStoneSound();
    void TX1();
    void UmbralookUp();
    void ExecuteUbergraph_RustCityVon_Controller(int32 EntryPoint, bool CallFunc_GetItem_Success, bool CallFunc_GetItem_SpecialPopUp, FName K2Node_CustomEvent_NotifyName_9, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FName K2Node_CustomEvent_NotifyName_8, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName_7, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName_6, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName K2Node_CustomEvent_NotifyName_5, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FName Temp_name_Variable, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, FName K2Node_CustomEvent_NotifyName_4, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_8, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_9, FName Temp_name_Variable_1, float CallFunc_Cutscene_OutputPin, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const FTransform CallFunc_GetTransform_ReturnValue, UNewItem_C* CallFunc_GetItemHUD_NewItemHud, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FHitResult CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_1, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_2, FText CallFunc_MakeLiteralText_ReturnValue, const TArray<FText>& K2Node_MakeArray_Array_3, const TArray<FText>& K2Node_MakeArray_Array_4, float CallFunc_Cutscene_OutputPin_1, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_5, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_10, OnMovieSceneSequencePlayerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_11, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue_1, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_6, FText CallFunc_MakeLiteralText_ReturnValue_2, const TArray<FText>& K2Node_MakeArray_Array_7, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const TArray<FText>& K2Node_MakeArray_Array_8, const TArray<FText>& K2Node_MakeArray_Array_9);
}

#endif
