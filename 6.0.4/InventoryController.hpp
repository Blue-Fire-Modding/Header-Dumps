#ifndef UE4SS_SDK_InventoryController_HPP
#define UE4SS_SDK_InventoryController_HPP

class AInventoryController_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    class UInventory_C* Inventory;
    bool Right;
    class APlayer_Character_BP_C* Player;
    TEnumAsByte<Directions::Type> Directions;
    bool RightSpin;
    bool TwmpSet;
    bool TimeFix;
    float SleepTime;
    class USleepMode_C* Sleep;

    void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_12(FKey Key);
    void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_11(FKey Key);
    void InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_10(FKey Key);
    void InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_9(FKey Key);
    void InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_8(FKey Key);
    void InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_7(FKey Key);
    void InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_6(FKey Key);
    void InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_5(FKey Key);
    void InpActEvt_AnyKey_K2Node_InputKeyEvent_4(FKey Key);
    void InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_3(FKey Key);
    void InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_2(FKey Key);
    void InpActEvt_Gamepad_LeftStick_Up_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_Gamepad_LeftStick_Up_K2Node_InputKeyEvent_0(FKey Key);
    void InpActEvt_Gamepad_Confirm_K2Node_InputActionEvent_23(FKey Key);
    void InpActEvt_PC_Confirm_K2Node_InputActionEvent_22(FKey Key);
    void InpActEvt_Generic_Player_Inventory_Spin_R_K2Node_InputActionEvent_21(FKey Key);
    void InpActEvt_Generic_Player_Inventory_Spin_R_K2Node_InputActionEvent_20(FKey Key);
    void InpActEvt_Generic_Player_Inventory_Spin_L_K2Node_InputActionEvent_19(FKey Key);
    void InpActEvt_Generic_Player_Inventory_Spin_L_K2Node_InputActionEvent_18(FKey Key);
    void InpActEvt_Gamepad_RightThumbstickRight_K2Node_InputActionEvent_17(FKey Key);
    void InpActEvt_Gamepad_RightThumbstickLeft_K2Node_InputActionEvent_16(FKey Key);
    void InpActEvt_Generic_Right_K2Node_InputActionEvent_15(FKey Key);
    void InpActEvt_Generic_Right_K2Node_InputActionEvent_14(FKey Key);
    void InpActEvt_Generic_Left_K2Node_InputActionEvent_13(FKey Key);
    void InpActEvt_Generic_Left_K2Node_InputActionEvent_12(FKey Key);
    void InpActEvt_Generic_Up_K2Node_InputActionEvent_11(FKey Key);
    void InpActEvt_Generic_Up_K2Node_InputActionEvent_10(FKey Key);
    void InpActEvt_Generic_Down_K2Node_InputActionEvent_9(FKey Key);
    void InpActEvt_Generic_Down_K2Node_InputActionEvent_8(FKey Key);
    void InpActEvt_Generic_Inventory_Tab_Change_R_K2Node_InputActionEvent_7(FKey Key);
    void InpActEvt_Generic_Inventory_Tab_Change_L_K2Node_InputActionEvent_6(FKey Key);
    void InpActEvt_Generic_Special_Pause_K2Node_InputActionEvent_5(FKey Key);
    void InpActEvt_Generic_Pause_K2Node_InputActionEvent_4(FKey Key);
    void InpActEvt_Gamepad_Back_K2Node_InputActionEvent_3(FKey Key);
    void InpActEvt_PC_Back_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_Gamepad_Interact_Shield_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_PC_Interact_K2Node_InputActionEvent_0(FKey Key);
    void SetMoveInputTimer();
    void ClearSetMoveInputTimer();
    void RightKey();
    void LeftKey();
    void UpKey();
    void DownKey();
    void InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0(float AxisValue);
    void InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_1(float AxisValue);
    void Rotate();
    void ExitPause(bool NoReturnInput, bool UnfreezeEnemies, bool ExitVoid);
    void InpAxisKeyEvt_Gamepad_LeftY_K2Node_InputAxisKeyEvent_3(float AxisValue);
    void AdjustPösA();
    void AdjustPosB();
    void StopScroll();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void StartTimerSleepPause();
    void RunSleep();
    void CloseGateForExitVoid();
    void ExecuteUbergraph_InventoryController(int32 EntryPoint);
};

#endif
