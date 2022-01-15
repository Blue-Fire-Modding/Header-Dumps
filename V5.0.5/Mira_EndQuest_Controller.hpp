#ifndef UE4SS_SDK_Mira_EndQuest_Controller_HPP
#define UE4SS_SDK_Mira_EndQuest_Controller_HPP

class AMira_EndQuest_Controller_C : ACinematic_Controller_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBillboardComponent* Billboard_0;
    AActor* TargetA;
    bool bLocked;

    void End();
    void CustomEvent_1();
    void TX1();
    void TX2();
    void StartCutscene();
    void SkipCutscene();
    void ExecuteUbergraph_Mira_EndQuest_Controller(int32 EntryPoint, OnMovieSceneSequencePlayerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, float CallFunc_Cutscene_OutputPin, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const FTransform CallFunc_GetTransform_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FHitResult CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, float CallFunc_Cutscene_OutputPin_1, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_1, const TArray<FText>& K2Node_MakeArray_Array_2, const TArray<FText>& K2Node_MakeArray_Array_3, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, FString CallFunc_CheckState_Same_ID_1, bool CallFunc_CheckState_Used_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
}

#endif
