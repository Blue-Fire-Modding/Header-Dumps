#ifndef UE4SS_SDK_UthasHint_Controller_HPP
#define UE4SS_SDK_UthasHint_Controller_HPP

class AUthasHint_Controller_C : ACinematic_Controller_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    ADoor_BP_C* Door Temple Gardens;

    void StartGodRaySound();
    void EndGodRaySound();
    void StartCutscene();
    void End();
    void UmbraAnim();
    void UmbraAnimEnd();
    void CutsceneDoorTempleGardens();
    void SkipCutscene();
    void ExecuteUbergraph_UthasHint_Controller(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, float CallFunc_Cutscene_OutputPin, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, float CallFunc_Cutscene_OutputPin_1, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, OnMovieSceneSequencePlayerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FString CallFunc_CheckState_Same_ID_1, bool CallFunc_CheckState_Used_1);
}

#endif
