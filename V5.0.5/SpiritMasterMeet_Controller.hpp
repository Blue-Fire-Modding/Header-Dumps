#ifndef UE4SS_SDK_SpiritMasterMeet_Controller_HPP
#define UE4SS_SDK_SpiritMasterMeet_Controller_HPP

class ASpiritMasterMeet_Controller_C : ACinematic_Controller_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBillboardComponent* Billboard_0;
    AActor* TargetA;
    ANPC_SpiritHunter_C* NPC;

    void StartCutscene();
    void CustomEvent();
    void End();
    void TX1();
    void Umbra1();
    void TX2();
    void Cutscene Begin Play Used();
    void Show Spirit Hunter();
    void SkipCutscene();
    void ExecuteUbergraph_SpiritMasterMeet_Controller(int32 EntryPoint, OnMovieSceneSequencePlayerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, float CallFunc_Cutscene_OutputPin, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, float CallFunc_Cutscene_OutputPin_1, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, const TArray<FText>& K2Node_MakeArray_Array, const FTransform CallFunc_GetTransform_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_1, FHitResult CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue, const TArray<FText>& K2Node_MakeArray_Array_2, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_3, FText CallFunc_MakeLiteralText_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1);
}

#endif
