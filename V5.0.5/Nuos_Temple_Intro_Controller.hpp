#ifndef UE4SS_SDK_Nuos_Temple_Intro_Controller_HPP
#define UE4SS_SDK_Nuos_Temple_Intro_Controller_HPP

class ANuos_Temple_Intro_Controller_C : ACinematic_Controller_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBillboardComponent* Billboard_0;
    AActor* TargetA;

    void End();
    void StartCutscene();
    void FIN();
    void TX1();
    void CustomEvent();
    void TX2();
    void CustomEvent_1();
    void TX3();
    void CustomEvent_2();
    void TX4();
    void Umbra();
    void GodRaySoundEnd();
    void ReceiveBeginPlay();
    void SkipCutscene();
    void GodRaySoundStart();
    void ExecuteUbergraph_Nuos_Temple_Intro_Controller(int32 EntryPoint, OnMovieSceneSequencePlayerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, float CallFunc_Cutscene_OutputPin, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const TArray<FText>& K2Node_MakeArray_Array, const FTransform CallFunc_GetTransform_ReturnValue, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FHitResult CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, float CallFunc_Cutscene_OutputPin_1, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_1, FText CallFunc_MakeLiteralText_ReturnValue, const TArray<FText>& K2Node_MakeArray_Array_2, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_3, const TArray<FText>& K2Node_MakeArray_Array_4, int32 CallFunc_PostEventAtLocation_ReturnValue, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_5, const TArray<FText>& K2Node_MakeArray_Array_6, int32 CallFunc_PostEventAtLocation_ReturnValue_1, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_7, int32 CallFunc_PostEventAtLocation_ReturnValue_2);
}

#endif
