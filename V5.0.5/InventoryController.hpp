#ifndef UE4SS_SDK_InventoryController_HPP
#define UE4SS_SDK_InventoryController_HPP

class AInventoryController_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* DefaultSceneRoot;
    UInventory_C* Inventory;
    bool Right;
    APlayer_Character_BP_C* Player;
    TEnumAsByte<Directions::Type> Directions;
    bool RightSpin;
    bool TwmpSet;
    bool TimeFix;
    float SleepTime;
    USleepMode_C* Sleep;

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
    void ExecuteUbergraph_InventoryController(int32 EntryPoint, FKey K2Node_InputActionEvent_Key_10, FKey Temp_struct_Variable, FKey K2Node_InputActionEvent_Key_9, bool CallFunc_Key_IsGamepadKey_ReturnValue, FKey K2Node_InputActionEvent_Key_8, FKey Temp_struct_Variable_1, FKey K2Node_InputActionEvent_Key_7, bool CallFunc_Key_IsGamepadKey_ReturnValue_1, FKey K2Node_InputActionEvent_Key_6, FKey K2Node_InputActionEvent_Key_5, FKey K2Node_InputActionEvent_Key_4, FKey K2Node_InputActionEvent_Key_3, FKey K2Node_InputActionEvent_Key_2, FKey K2Node_InputActionEvent_Key_1, FKey K2Node_InputActionEvent_Key, bool Temp_bool_Variable, bool Temp_bool_Variable_1, uint8 Temp_byte_Variable, bool Temp_bool_Variable_2, float Temp_float_Variable, bool Temp_bool_Variable_3, float Temp_float_Variable_1, bool Temp_bool_Variable_4, float Temp_float_Variable_2, bool Temp_bool_Variable_5, float Temp_float_Variable_3, bool Temp_bool_Variable_6, float Temp_float_Variable_4, USleepMode_C* CallFunc_Create_ReturnValue, bool Temp_bool_Variable_7, RemoveCall__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FKey Temp_struct_Variable_2, bool Temp_bool_Has_Been_Initd_Variable, FKey K2Node_InputKeyEvent_Key, FKey K2Node_InputKeyEvent_Key_1, bool Temp_bool_IsClosed_Variable, FKey Temp_struct_Variable_3, FKey K2Node_InputKeyEvent_Key_2, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, FKey K2Node_InputKeyEvent_Key_3, FKey K2Node_InputActionEvent_Key_11, float Temp_float_Variable_5, FKey Temp_struct_Variable_4, bool CallFunc_Key_IsGamepadKey_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsRobiValid_ReturnValue, float Temp_float_Variable_6, bool Temp_bool_Variable_8, FKey K2Node_InputActionEvent_Key_12, FKey K2Node_InputActionEvent_Key_13, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, FKey Temp_struct_Variable_5, bool CallFunc_Key_IsGamepadKey_ReturnValue_3, FKey K2Node_InputActionEvent_Key_14, FKey K2Node_InputActionEvent_Key_15, FKey K2Node_InputKeyEvent_Key_4, FKey Temp_struct_Variable_6, bool CallFunc_Key_IsGamepadKey_ReturnValue_4, FKey K2Node_InputActionEvent_Key_16, FKey K2Node_InputActionEvent_Key_17, FKey Temp_struct_Variable_7, bool CallFunc_IsRobiValid_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FKey K2Node_InputActionEvent_Key_18, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_IsRobiValid_ReturnValue_3, bool K2Node_Select_Default, uint8 K2Node_Select_Default_1, float K2Node_InputAxisKeyEvent_AxisValue_2, float K2Node_InputAxisKeyEvent_AxisValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_4, bool CallFunc_Greater_FloatFloat_ReturnValue, float K2Node_Select_Default_2, FRotator CallFunc_MakeRotator_ReturnValue, bool K2Node_CustomEvent_NoReturnInput, bool K2Node_CustomEvent_UnfreezeEnemies, bool K2Node_CustomEvent_ExitVoid, FHitResult CallFunc_K2_AddLocalRotation_SweepHitResult, float K2Node_InputAxisKeyEvent_AxisValue, FKey K2Node_InputKeyEvent_Key_5, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_IsRobiValid_ReturnValue_5, bool K2Node_SwitchEnum_CmpSuccess_1, FKey K2Node_InputKeyEvent_Key_6, FKey Temp_struct_Variable_8, FKey K2Node_InputActionEvent_Key_19, FKey K2Node_InputKeyEvent_Key_7, FKey K2Node_InputKeyEvent_Key_8, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, FKey Temp_struct_Variable_9, UPlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsInputKeyDown_ReturnValue, bool CallFunc_IsInputKeyDown_ReturnValue_1, bool CallFunc_IsInputKeyDown_ReturnValue_2, bool CallFunc_IsInputKeyDown_ReturnValue_3, bool Temp_bool_Has_Been_Initd_Variable_1, FKey Temp_struct_Variable_10, FKey K2Node_InputKeyEvent_Key_9, FKey K2Node_InputKeyEvent_Key_10, FKey Temp_struct_Variable_11, FKey K2Node_InputKeyEvent_Key_11, FKey K2Node_InputKeyEvent_Key_12, float Temp_float_Variable_7, float CallFunc_GetInputAxisValue_ReturnValue, float CallFunc_Abs_ReturnValue_1, float CallFunc_GetInputAxisValue_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_Abs_ReturnValue_2, bool Temp_bool_Variable_9, bool CallFunc_Greater_FloatFloat_ReturnValue_2, float Temp_float_Variable_8, float K2Node_Select_Default_3, bool CallFunc_Greater_FloatFloat_ReturnValue_3, bool Temp_bool_Variable_10, float K2Node_Select_Default_4, bool CallFunc_Greater_FloatFloat_ReturnValue_4, bool Temp_bool_IsClosed_Variable_1, FString Temp_string_Variable, FKey K2Node_InputActionEvent_Key_20, FString Temp_string_Variable_1, FString Temp_string_Variable_2, bool Temp_bool_Has_Been_Initd_Variable_2, float K2Node_Event_DeltaSeconds, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float K2Node_Select_Default_5, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, float K2Node_Select_Default_6, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue_3, float K2Node_Select_Default_7, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_1, float K2Node_Select_Default_8, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_2, FString Temp_string_Variable_3, float CallFunc_Divide_FloatFloat_ReturnValue_4, float K2Node_Select_Default_9, bool CallFunc_SetGamePaused_ReturnValue, bool CallFunc_SetGamePaused_ReturnValue_1, bool Temp_bool_IsClosed_Variable_2, uint8 Temp_byte_Variable_1, FString K2Node_Select_Default_10, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_3, float CallFunc_MakeLiteralFloat_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_6, bool CallFunc_IsInViewport_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_5, FKey K2Node_InputActionEvent_Key_21, float K2Node_Select_Default_11, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_4, FKey K2Node_InputActionEvent_Key_22, FKey K2Node_InputActionEvent_Key_23);
}

#endif
