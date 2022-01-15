#ifndef UE4SS_SDK_SkipCutscene_Controller_HPP
#define UE4SS_SDK_SkipCutscene_Controller_HPP

class ASkipCutscene_Controller_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* DefaultSceneRoot;
    USkipCutscene_Action_UI_C* SkipCutsceneUI;
    FSkipCutscene_Controller_CSkipCutscene SkipCutscene;
    void SkipCutscene();
    APlayer_Character_BP_C* Player;
    ULevelSequencePlayer* Current Sequence;

    void InpActEvt_PC_Back_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Gamepad_Back_K2Node_InputActionEvent_0(FKey Key);
    void Force Close();
    void ExecuteUbergraph_SkipCutscene_Controller(int32 EntryPoint, int32 CallFunc_PostEventAtLocation_ReturnValue, FKey K2Node_InputActionEvent_Key_1, FKey K2Node_InputActionEvent_Key, UPlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsInViewport_ReturnValue, float CallFunc_PlayAnimMontage_ReturnValue);
    void SkipCutscene__DelegateSignature();
}

#endif
