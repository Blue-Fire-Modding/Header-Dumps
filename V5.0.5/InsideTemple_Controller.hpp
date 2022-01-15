#ifndef UE4SS_SDK_InsideTemple_Controller_HPP
#define UE4SS_SDK_InsideTemple_Controller_HPP

class AInsideTemple_Controller_C : ACinematic_Controller_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBillboardComponent* Billboard_0;
    AActor* TargetA;

    void Ability();
    void StopChimeSound();
    void End();
    void StartChimeSound();
    void FIN();
    void TX1();
    void TX2();
    void TX3();
    void StartCutscene();
    void TX4();
    void SkipCutscene();
    void ExecuteUbergraph_InsideTemple_Controller(int32 EntryPoint, OnMovieSceneSequencePlayerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_PostEventAtLocation_ReturnValue, const FTransform CallFunc_GetTransform_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, FHitResult CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, float CallFunc_Cutscene_OutputPin, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, float CallFunc_Cutscene_OutputPin_1, int32 CallFunc_PostEventAtLocation_ReturnValue_1);
}

#endif
