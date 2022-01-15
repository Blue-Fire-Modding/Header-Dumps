#ifndef UE4SS_SDK_LeaveTemple_Controller_HPP
#define UE4SS_SDK_LeaveTemple_Controller_HPP

class ALeaveTemple_Controller_C : ACinematic_Controller_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBillboardComponent* Billboard_0;
    AActor* TargetA;
    bool bUseMusicFix;
    FString MusicFixID;

    void OnNotifyEnd_C56BA4F44E061796FEAA799FD782EA6A(FName NotifyName);
    void OnNotifyBegin_C56BA4F44E061796FEAA799FD782EA6A(FName NotifyName);
    void OnInterrupted_C56BA4F44E061796FEAA799FD782EA6A(FName NotifyName);
    void OnBlendOut_C56BA4F44E061796FEAA799FD782EA6A(FName NotifyName);
    void OnCompleted_C56BA4F44E061796FEAA799FD782EA6A(FName NotifyName);
    void End();
    void FIN();
    void TX1();
    void TX2();
    void TX3();
    void TX4();
    void TX5();
    void TX6();
    void TX8();
    void StartCutscene();
    void TX9();
    void TX10();
    void GiveStoneSound();
    void UmbralookUp();
    void TX5B();
    void Quest();
    void Tutorial();
    void SkipCutscene();
    void Cutscene Begin Play Used();
    void ExecuteUbergraph_LeaveTemple_Controller(int32 EntryPoint, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName_4, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, FName Temp_name_Variable, Removed__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, FTransform CallFunc_MakeTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, Removed__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, UTutorialText_C* CallFunc_FinishSpawningActor_ReturnValue, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const FTransform CallFunc_GetTransform_ReturnValue, float CallFunc_Cutscene_OutputPin, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, UNewItem_C* CallFunc_GetItemHUD_NewItemHud, FHitResult CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_1, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_2, FText CallFunc_MakeLiteralText_ReturnValue, const TArray<FText>& K2Node_MakeArray_Array_3, const TArray<FText>& K2Node_MakeArray_Array_4, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_5, const TArray<FText>& K2Node_MakeArray_Array_6, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_7, const TArray<FText>& K2Node_MakeArray_Array_8, float CallFunc_Cutscene_OutputPin_1, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_9, const TArray<FText>& K2Node_MakeArray_Array_10, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_11, const TArray<FText>& K2Node_MakeArray_Array_12, int32 CallFunc_PostEventAtLocation_ReturnValue, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_13, const TArray<FText>& K2Node_MakeArray_Array_14, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_15, const TArray<FText>& K2Node_MakeArray_Array_16, OnMovieSceneSequencePlayerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_8, uint8 CallFunc_MakeLiteralByte_ReturnValue, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_17, const TArray<FText>& K2Node_MakeArray_Array_18, int32 CallFunc_PostEventAtLocation_ReturnValue_1, const TArray<FText>& K2Node_MakeArray_Array_19, FText CallFunc_MakeLiteralText_ReturnValue_1, bool CallFunc_GetItem_Success, bool CallFunc_GetItem_SpecialPopUp);
}

#endif
