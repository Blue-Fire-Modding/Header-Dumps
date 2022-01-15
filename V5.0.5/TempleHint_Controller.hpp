#ifndef UE4SS_SDK_TempleHint_Controller_HPP
#define UE4SS_SDK_TempleHint_Controller_HPP

class ATempleHint_Controller_C : ACinematic_Controller_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    AActor* TargetA;
    ADoor_BP_C* Door Graveyard;
    ADoor_BP_C* Door Fire Fall;

    void StartGodRaySound();
    void EndGodRaySound();
    void StartCutscene();
    void End();
    void UmbraAnim();
    void UmbraAnimEnd();
    void CutsceneDoorGraveyard();
    void CutsceneDoorFireFall();
    void SkipCutscene();
    void ExecuteUbergraph_TempleHint_Controller(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, float CallFunc_Cutscene_OutputPin, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, bool Temp_bool_IsClosed_Variable, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, float CallFunc_Cutscene_OutputPin_1, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, OnMovieSceneSequencePlayerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, bool Temp_bool_IsClosed_Variable_1);
}

#endif
