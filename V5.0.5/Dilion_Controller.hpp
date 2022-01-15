#ifndef UE4SS_SDK_Dilion_Controller_HPP
#define UE4SS_SDK_Dilion_Controller_HPP

class ADilion_Controller_C : ACinematic_Controller_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBillboardComponent* Billboard_0;
    AActor* TargetA;

    void End();
    void FIN();
    void CustomEvent();
    void TX1();
    void TX2();
    void TX1B();
    void TX_images();
    void StartCutscene();
    void CustomEvent_2();
    void CustomEvent_3();
    void CustomEvent_4();
    void CustomEvent_5();
    void SkipCutscene();
    void ExecuteUbergraph_Dilion_Controller(int32 EntryPoint, OnMovieSceneSequencePlayerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, float CallFunc_Cutscene_OutputPin, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const FTransform CallFunc_GetTransform_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FHitResult CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_1, const TArray<FText>& K2Node_MakeArray_Array_2, const TArray<FText>& K2Node_MakeArray_Array_3, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_4, const TArray<FText>& K2Node_MakeArray_Array_5, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_2, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_3, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_6, float CallFunc_Cutscene_OutputPin_1, UNewItem_C* CallFunc_GetItemHUD_NewItemHud, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_GetItem_Success, bool CallFunc_GetItem_SpecialPopUp, int32 CallFunc_PostEventAtLocation_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue, const TArray<FText>& K2Node_MakeArray_Array_7, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_8, const TArray<FText>& K2Node_MakeArray_Array_9, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_10, const TArray<FText>& K2Node_MakeArray_Array_11, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_12, const TArray<FText>& K2Node_MakeArray_Array_13);
}

#endif
