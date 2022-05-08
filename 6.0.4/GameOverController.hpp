#ifndef UE4SS_SDK_GameOverController_HPP
#define UE4SS_SDK_GameOverController_HPP

class AGameOverController_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    class UDeathHud_C* DeathHud;
    bool SelectedPlay;
    class UBlueFireSaveGame_C* SaveGameObject;
    bool Right;
    bool Up;

    void InpActEvt_PC_Interact_K2Node_InputActionEvent_8(FKey Key);
    void InpActEvt_Gamepad_Interact_Shield_K2Node_InputActionEvent_7(FKey Key);
    void InpActEvt_Gamepad_Confirm_K2Node_InputActionEvent_6(FKey Key);
    void InpActEvt_PC_Confirm_K2Node_InputActionEvent_5(FKey Key);
    void InpActEvt_Generic_Pause_K2Node_InputActionEvent_4(FKey Key);
    void InpActEvt_Gamepad_Emote_Menu_K2Node_InputActionEvent_3(FKey Key);
    void InpActEvt_Gamepad_Quick_Emote_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_PC_Emote_Menu_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_PC_Quick_Emote_K2Node_InputActionEvent_0(FKey Key);
    void ReceiveBeginPlay();
    void Activate();
    void ExecuteUbergraph_GameOverController(int32 EntryPoint);
};

#endif
