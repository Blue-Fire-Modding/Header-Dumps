#ifndef UE4SS_SDK_GameOverController_HPP
#define UE4SS_SDK_GameOverController_HPP

class AGameOverController_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* DefaultSceneRoot;
    UDeathHud_C* DeathHud;
    bool SelectedPlay;
    UBlueFireSaveGame_C* SaveGameObject;
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
    void ExecuteUbergraph_GameOverController(int32 EntryPoint, FKey K2Node_InputActionEvent_Key_8, bool CallFunc_IsRobiValid_ReturnValue, UPlayerController* CallFunc_GetPlayerController_ReturnValue, FKey K2Node_InputActionEvent_Key, FKey K2Node_InputActionEvent_Key_1, FKey K2Node_InputActionEvent_Key_2, FKey K2Node_InputActionEvent_Key_3, FKey K2Node_InputActionEvent_Key_4, FKey K2Node_InputActionEvent_Key_5, FKey K2Node_InputActionEvent_Key_6, FKey K2Node_InputActionEvent_Key_7);
}

#endif
