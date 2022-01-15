#ifndef UE4SS_SDK_MainDialogController_HPP
#define UE4SS_SDK_MainDialogController_HPP

class AMainDialogController_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* DefaultSceneRoot;
    UMainDialogWB_C* MainDialogUI;
    FMainDialogController_CWaitDone WaitDone;
    void WaitDone();

    void InpActEvt_MainMenuConfirm_K2Node_InputActionEvent_33(FKey Key);
    void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_9(FKey Key);
    void InpActEvt_PC_Interact_K2Node_InputActionEvent_32(FKey Key);
    void InpActEvt_Gamepad_Interact_Shield_K2Node_InputActionEvent_31(FKey Key);
    void InpActEvt_Gamepad_Confirm_K2Node_InputActionEvent_30(FKey Key);
    void InpActEvt_PC_Confirm_K2Node_InputActionEvent_29(FKey Key);
    void InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_8(FKey Key);
    void InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_7(FKey Key);
    void InpActEvt_Generic_Up_K2Node_InputActionEvent_28(FKey Key);
    void InpActEvt_Generic_Up_K2Node_InputActionEvent_27(FKey Key);
    void InpActEvt_Generic_Down_K2Node_InputActionEvent_26(FKey Key);
    void InpActEvt_Generic_Down_K2Node_InputActionEvent_25(FKey Key);
    void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_6(FKey Key);
    void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_5(FKey Key);
    void InpActEvt_Gamepad_RightThumbstickLeft_K2Node_InputActionEvent_24(FKey Key);
    void InpActEvt_Gamepad_RightThumbstickRight_K2Node_InputActionEvent_23(FKey Key);
    void InpActEvt_Generic_Pause_K2Node_InputActionEvent_22(FKey Key);
    void InpActEvt_Gamepad_Back_K2Node_InputActionEvent_21(FKey Key);
    void InpActEvt_PC_Back_K2Node_InputActionEvent_20(FKey Key);
    void InpActEvt_Generic_Right_K2Node_InputActionEvent_19(FKey Key);
    void InpActEvt_Generic_Right_K2Node_InputActionEvent_18(FKey Key);
    void InpActEvt_Generic_Left_K2Node_InputActionEvent_17(FKey Key);
    void InpActEvt_Generic_Left_K2Node_InputActionEvent_16(FKey Key);
    void InpActEvt_PC_Shield_K2Node_InputActionEvent_15(FKey Key);
    void InpActEvt_PC_Sprint_K2Node_InputActionEvent_14(FKey Key);
    void InpActEvt_Gamepad_Sprint_K2Node_InputActionEvent_13(FKey Key);
    void InpActEvt_PC_Dash_K2Node_InputActionEvent_12(FKey Key);
    void InpActEvt_Gamepad_Dash_K2Node_InputActionEvent_11(FKey Key);
    void InpActEvt_Gamepad_Lock_K2Node_InputActionEvent_10(FKey Key);
    void InpActEvt_PC_Lock_K2Node_InputActionEvent_9(FKey Key);
    void InpActEvt_PC_Emote_Menu_K2Node_InputActionEvent_8(FKey Key);
    void InpActEvt_Gamepad_Emote_Menu_K2Node_InputActionEvent_7(FKey Key);
    void InpActEvt_PC_Restore_Health_K2Node_InputActionEvent_6(FKey Key);
    void InpActEvt_Gamepad_Restore_Health_K2Node_InputActionEvent_5(FKey Key);
    void InpActEvt_PC_Quick_Emote_K2Node_InputActionEvent_4(FKey Key);
    void InpActEvt_Gamepad_Quick_Emote_K2Node_InputActionEvent_3(FKey Key);
    void InpActEvt_Generic_Special_Pause_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_PC_Vertical_Attack_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_4(FKey Key);
    void InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_3(FKey Key);
    void InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_2(FKey Key);
    void InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_Gamepad_Vertical_Attack_K2Node_InputActionEvent_0(FKey Key);
    void InpActEvt_C_K2Node_InputKeyEvent_0(FKey Key);
    void AutoSideMovementR();
    void AutoSideMovementL();
    void ClearTimers();
    void AutoMovementU();
    void AutoMovementD();
    void AutoSideMovementRTrigger();
    void AutoSideMovementLTrigger();
    void AutoMovementDTrigger();
    void AutoMovementUTrigger();
    void InpAxisEvt_Generic_Motion_Y_Axis_K2Node_InputAxisEvent_2(float AxisValue);
    void InpAxisEvt_Generic_Motion_X_Axis_K2Node_InputAxisEvent_3(float AxisValue);
    void ExecuteUbergraph_MainDialogController(int32 EntryPoint, FKey K2Node_InputActionEvent_Key_33, FKey K2Node_InputActionEvent_Key_12, FKey K2Node_InputActionEvent_Key_11, FKey K2Node_InputActionEvent_Key_10, FKey K2Node_InputActionEvent_Key_9, FKey K2Node_InputActionEvent_Key_8, FKey K2Node_InputActionEvent_Key_7, FKey K2Node_InputActionEvent_Key_6, FKey K2Node_InputActionEvent_Key_5, FKey K2Node_InputActionEvent_Key_4, FKey K2Node_InputActionEvent_Key_3, FKey K2Node_InputActionEvent_Key_2, FKey K2Node_InputActionEvent_Key_1, FKey K2Node_InputKeyEvent_Key_4, FKey K2Node_InputKeyEvent_Key_3, FKey Temp_struct_Variable, FKey K2Node_InputKeyEvent_Key_2, FKey K2Node_InputKeyEvent_Key_1, FKey Temp_struct_Variable_1, FKey K2Node_InputActionEvent_Key, FKey K2Node_InputKeyEvent_Key, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, FKey K2Node_InputActionEvent_Key_14, FKey K2Node_InputActionEvent_Key_15, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_2, bool Temp_bool_IsClosed_Variable_1, FKey Temp_struct_Variable_2, FKey K2Node_InputActionEvent_Key_16, FKey K2Node_InputActionEvent_Key_13, bool Temp_bool_IsClosed_Variable_2, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_1, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_2, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_3, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_4, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_5, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_6, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_7, FKey K2Node_InputActionEvent_Key_17, bool Temp_bool_Has_Been_Initd_Variable_3, bool Temp_bool_Has_Been_Initd_Variable_4, bool Temp_bool_IsClosed_Variable_3, FKey Temp_struct_Variable_3, bool Temp_bool_IsClosed_Variable_4, FKey K2Node_InputActionEvent_Key_18, FKey K2Node_InputActionEvent_Key_19, FKey K2Node_InputActionEvent_Key_20, FKey K2Node_InputActionEvent_Key_21, FKey K2Node_InputActionEvent_Key_22, FKey K2Node_InputActionEvent_Key_23, FKey K2Node_InputActionEvent_Key_24, FKey Temp_struct_Variable_4, FKey K2Node_InputKeyEvent_Key_5, FKey K2Node_InputKeyEvent_Key_6, FKey Temp_struct_Variable_5, FKey K2Node_InputActionEvent_Key_25, FKey K2Node_InputActionEvent_Key_26, FKey Temp_struct_Variable_6, FKey K2Node_InputActionEvent_Key_27, FKey K2Node_InputActionEvent_Key_28, float K2Node_InputAxisEvent_AxisValue_1, float K2Node_InputAxisEvent_AxisValue, FKey Temp_struct_Variable_7, FKey K2Node_InputKeyEvent_Key_7, FKey K2Node_InputKeyEvent_Key_8, FKey K2Node_InputActionEvent_Key_29, FKey K2Node_InputActionEvent_Key_30, FKey K2Node_InputActionEvent_Key_31, FKey K2Node_InputActionEvent_Key_32, FKey K2Node_InputKeyEvent_Key_9);
    void WaitDone__DelegateSignature();
}

#endif
