#ifndef UE4SS_SDK_WarpUIController_HPP
#define UE4SS_SDK_WarpUIController_HPP

class AWarpUIController_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* DefaultSceneRoot;
    UWarpUI_C* WarpUI;
    bool Right;
    APlayer_Character_BP_C* Player;
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
    void ExecuteUbergraph_WarpUIController(int32 EntryPoint, FKey K2Node_InputActionEvent_Key_6, FKey K2Node_InputActionEvent_Key_5, FKey K2Node_InputActionEvent_Key_4, FKey K2Node_InputActionEvent_Key_3, FKey K2Node_InputActionEvent_Key_2, FKey K2Node_InputActionEvent_Key_1, FKey K2Node_InputActionEvent_Key, bool Temp_bool_Variable, float Temp_float_Variable, bool Temp_bool_Variable_1, float Temp_float_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, uint8 Temp_byte_Variable, FKey K2Node_InputActionEvent_Key_13, FKey K2Node_InputActionEvent_Key_7, FKey Temp_struct_Variable, FKey K2Node_InputActionEvent_Key_14, bool CallFunc_Key_IsGamepadKey_ReturnValue, FKey K2Node_InputActionEvent_Key_8, FKey K2Node_InputActionEvent_Key_9, FKey K2Node_InputActionEvent_Key_15, FKey K2Node_InputActionEvent_Key_16, FKey K2Node_InputActionEvent_Key_17, FKey K2Node_InputKeyEvent_Key, FKey Temp_struct_Variable_1, bool CallFunc_Key_IsGamepadKey_ReturnValue_1, bool CallFunc_Key_IsGamepadKey_ReturnValue_2, FKey Temp_struct_Variable_2, FKey K2Node_InputKeyEvent_Key_1, FKey K2Node_InputKeyEvent_Key_2, FKey Temp_struct_Variable_3, float CallFunc_GetInputAxisValue_ReturnValue, FKey K2Node_InputKeyEvent_Key_3, float CallFunc_Abs_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, FKey K2Node_InputKeyEvent_Key_4, FString Temp_string_Variable, FString Temp_string_Variable_1, FString Temp_string_Variable_2, float CallFunc_Divide_FloatFloat_ReturnValue, float K2Node_Select_Default, float CallFunc_Divide_FloatFloat_ReturnValue_1, FString Temp_string_Variable_3, float K2Node_Select_Default_1, FKey K2Node_InputActionEvent_Key_10, FKey K2Node_InputActionEvent_Key_11, uint8 Temp_byte_Variable_1, bool Temp_bool_Has_Been_Initd_Variable, FString K2Node_Select_Default_2, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_1, FKey K2Node_InputActionEvent_Key_12, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool K2Node_Select_Default_3, uint8 K2Node_Select_Default_4, float K2Node_InputAxisKeyEvent_AxisValue_1, float K2Node_InputAxisKeyEvent_AxisValue, bool Temp_bool_IsClosed_Variable, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1);
}

#endif
