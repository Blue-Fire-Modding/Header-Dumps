#ifndef UE4SS_SDK_WarpUIController_HPP
#define UE4SS_SDK_WarpUIController_HPP

class AWarpUIController_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    class UWarpUI_C* WarpUI;
    bool Right;
    class APlayer_Character_BP_C* Player;
    TEnumAsByte<Directions::Type> Directions;
    bool RightSpin;
    bool TwmpSet;
    bool TimeFix;
    bool Input;

    void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_4(FKey Key);
    void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_3(FKey Key);
    void InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_2(FKey Key);
    void InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_AnyKey_K2Node_InputKeyEvent_0(FKey Key);
    void InpActEvt_Gamepad_Confirm_K2Node_InputActionEvent_17(FKey Key);
    void InpActEvt_PC_Confirm_K2Node_InputActionEvent_16(FKey Key);
    void InpActEvt_Gamepad_Back_K2Node_InputActionEvent_15(FKey Key);
    void InpActEvt_PC_Back_K2Node_InputActionEvent_14(FKey Key);
    void InpActEvt_Generic_Pause_K2Node_InputActionEvent_13(FKey Key);
    void InpActEvt_Generic_Special_Pause_K2Node_InputActionEvent_12(FKey Key);
    void InpActEvt_Generic_Up_K2Node_InputActionEvent_11(FKey Key);
    void InpActEvt_Generic_Up_K2Node_InputActionEvent_10(FKey Key);
    void InpActEvt_Generic_Down_K2Node_InputActionEvent_9(FKey Key);
    void InpActEvt_Generic_Down_K2Node_InputActionEvent_8(FKey Key);
    void InpActEvt_Gamepad_Quick_Emote_K2Node_InputActionEvent_7(FKey Key);
    void InpActEvt_PC_Quick_Emote_K2Node_InputActionEvent_6(FKey Key);
    void InpActEvt_PC_Interact_K2Node_InputActionEvent_5(FKey Key);
    void InpActEvt_Gamepad_Interact_Shield_K2Node_InputActionEvent_4(FKey Key);
    void InpActEvt_PC_Sprint_K2Node_InputActionEvent_3(FKey Key);
    void InpActEvt_Gamepad_Sprint_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_Gamepad_Emote_Menu_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_PC_Emote_Menu_K2Node_InputActionEvent_0(FKey Key);
    void UpKey();
    void DownKey();
    void ClearSetMoveInputTimer();
    void SetMoveInputTimer();
    void ExitPause();
    void Empty();
    void ReceiveBeginPlay();
    void InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0(float AxisValue);
    void InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_1(float AxisValue);
    void ExecuteUbergraph_WarpUIController(int32 EntryPoint);
};

#endif
