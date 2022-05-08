#ifndef UE4SS_SDK_SkipCutscene_Controller_HPP
#define UE4SS_SDK_SkipCutscene_Controller_HPP

class ASkipCutscene_Controller_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    class USkipCutscene_Action_UI_C* SkipCutsceneUI;
    FSkipCutscene_Controller_CSkipCutscene SkipCutscene;
    void SkipCutscene();
    class APlayer_Character_BP_C* Player;
    class ULevelSequencePlayer* Current Sequence;

    void InpActEvt_PC_Back_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Gamepad_Back_K2Node_InputActionEvent_0(FKey Key);
    void Force Close();
    void ExecuteUbergraph_SkipCutscene_Controller(int32 EntryPoint);
    void SkipCutscene__DelegateSignature();
};

#endif
