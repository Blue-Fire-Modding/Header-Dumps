#ifndef UE4SS_SDK_AllVoids_Controller_HPP
#define UE4SS_SDK_AllVoids_Controller_HPP

class AAllVoids_Controller_C : ACinematic_Controller_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Blink_Blink_F34596D74C6665671A393EB5CD259991;
    TEnumAsByte<ETimelineDirection::Type> Blink__Direction_F34596D74C6665671A393EB5CD259991;
    UTimelineComponent* Blink;
    AActor* TargetA;
    float Eyes power;
    FAllVoids_Controller_CFinishIntroCutscene FinishIntroCutscene;
    void FinishIntroCutscene();
    ULevelSequencePlayer* Sequence;
    AGlobal_Controller_C* Global Controller;

    void Blink__FinishedFunc();
    void Blink__UpdateFunc();
    void OnNotifyEnd_A701861F42511FD961D56E9284DA1991(FName NotifyName);
    void OnNotifyBegin_A701861F42511FD961D56E9284DA1991(FName NotifyName);
    void OnInterrupted_A701861F42511FD961D56E9284DA1991(FName NotifyName);
    void OnBlendOut_A701861F42511FD961D56E9284DA1991(FName NotifyName);
    void OnCompleted_A701861F42511FD961D56E9284DA1991(FName NotifyName);
    void OnNotifyEnd_6824A750451DB8E5691BF494C7868E7B(FName NotifyName);
    void OnNotifyBegin_6824A750451DB8E5691BF494C7868E7B(FName NotifyName);
    void OnInterrupted_6824A750451DB8E5691BF494C7868E7B(FName NotifyName);
    void OnBlendOut_6824A750451DB8E5691BF494C7868E7B(FName NotifyName);
    void OnCompleted_6824A750451DB8E5691BF494C7868E7B(FName NotifyName);
    void Cutscene Umbra Anim();
    void Cutscene Umbra Tunic();
    void Cutscene Void Load Screen();
    void StartCutscene();
    void Cutscene TextAllVoids 4();
    void TX3();
    void Continue();
    void EndEvent();
    void Cutscene TextAllVoids 3();
    void Cutscene TextAllVoids 2();
    void Cutscene TextAllVoids 1();
    void FIN();
    void TX1();
    void TX2();
    void TX4();
    void TX5();
    void UmbraAnim();
    void UmbraBlink();
    void UmbraSleep();
    void UmbraWakeUp();
    void Cutscene TextAllVoids 0();
    void UmbraTunic();
    void GodChimeStart();
    void GodChimeEnd();
    void SkipCutscene();
    void Cutscene CallFinish();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_AllVoids_Controller(int32 EntryPoint, int32 CallFunc_PostEventAtLocation_ReturnValue, FName K2Node_CustomEvent_NotifyName_9, FName K2Node_CustomEvent_NotifyName_8, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FName K2Node_CustomEvent_NotifyName_7, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName_6, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName_5, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName Temp_name_Variable, FName K2Node_CustomEvent_NotifyName_4, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_8, FName Temp_name_Variable_1, float CallFunc_Cutscene_OutputPin, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_9, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_1, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_2, const TArray<FText>& K2Node_MakeArray_Array_3, const TArray<FText>& K2Node_MakeArray_Array_4, const TArray<FText>& K2Node_MakeArray_Array_5, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_6, const TArray<FText>& K2Node_MakeArray_Array_7, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_10, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_8, const TArray<FText>& K2Node_MakeArray_Array_9, OnMovieSceneSequencePlayerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_11, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, FVector CallFunc_GetSocketLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue_4, int32 CallFunc_PostEventAtLocation_ReturnValue_5, int32 CallFunc_PostEventAtLocation_ReturnValue_6, int32 CallFunc_PostEventAtLocation_ReturnValue_7, TArray<AGlobal_Controller_C*>& CallFunc_GetAllActorsOfClass_OutActors, AGlobal_Controller_C* CallFunc_Array_Get_Item);
    void FinishIntroCutscene__DelegateSignature();
}

#endif
