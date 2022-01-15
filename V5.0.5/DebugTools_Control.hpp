#ifndef UE4SS_SDK_DebugTools_Control_HPP
#define UE4SS_SDK_DebugTools_Control_HPP

class ADebugTools_Control_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* DefaultSceneRoot;
    APlayer_Character_BP_C* Player;
    bool Up;
    FVector SavedPoint;
    UDebugTools_UI_C* DebugTools_UI;
    bool ShouldMoveUp;

    void InpActEvt_H_K2Node_InputKeyEvent_45(FKey Key);
    void InpActEvt_E_K2Node_InputKeyEvent_44(FKey Key);
    void InpActEvt_E_K2Node_InputKeyEvent_43(FKey Key);
    void InpActEvt_Q_K2Node_InputKeyEvent_42(FKey Key);
    void InpActEvt_Q_K2Node_InputKeyEvent_41(FKey Key);
    void InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_40(FKey Key);
    void InpActEvt_C_K2Node_InputKeyEvent_39(FKey Key);
    void InpActEvt_Escape_K2Node_InputKeyEvent_38(FKey Key);
    void InpActEvt_LeftControl_K2Node_InputKeyEvent_37(FKey Key);
    void InpActEvt_LeftAlt_K2Node_InputKeyEvent_36(FKey Key);
    void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_35(FKey Key);
    void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_34(FKey Key);
    void InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_33(FKey Key);
    void InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_32(FKey Key);
    void InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_31(FKey Key);
    void InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_30(FKey Key);
    void InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_29(FKey Key);
    void InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_28(FKey Key);
    void InpActEvt_Three_K2Node_InputKeyEvent_27(FKey Key);
    void InpActEvt_Three_K2Node_InputKeyEvent_26(FKey Key);
    void InpActEvt_Four_K2Node_InputKeyEvent_25(FKey Key);
    void InpActEvt_Four_K2Node_InputKeyEvent_24(FKey Key);
    void InpActEvt_One_K2Node_InputKeyEvent_23(FKey Key);
    void InpActEvt_Two_K2Node_InputKeyEvent_22(FKey Key);
    void InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_21(FKey Key);
    void InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_20(FKey Key);
    void InpActEvt_SpaceBar_K2Node_InputKeyEvent_19(FKey Key);
    void InpActEvt_Enter_K2Node_InputKeyEvent_18(FKey Key);
    void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_17(FKey Key);
    void InpActEvt_Down_K2Node_InputKeyEvent_16(FKey Key);
    void InpActEvt_Down_K2Node_InputKeyEvent_15(FKey Key);
    void InpActEvt_Up_K2Node_InputKeyEvent_14(FKey Key);
    void InpActEvt_Up_K2Node_InputKeyEvent_13(FKey Key);
    void InpActEvt_Left_K2Node_InputKeyEvent_12(FKey Key);
    void InpActEvt_Right_K2Node_InputKeyEvent_11(FKey Key);
    void InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_10(FKey Key);
    void InpActEvt_I_K2Node_InputKeyEvent_9(FKey Key);
    void InpActEvt_Generic_Pause_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_8(FKey Key);
    void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_7(FKey Key);
    void InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_6(FKey Key);
    void InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_5(FKey Key);
    void InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_4(FKey Key);
    void InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_3(FKey Key);
    void InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_2(FKey Key);
    void InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_0(FKey Key);
    void InpActEvt_Gamepad_Special_Pause_K2Node_InputActionEvent_0(FKey Key);
    void MovePlayerVertically();
    void ReceiveBeginPlay();
    void SetWarpPoint();
    void Initialize();
    void MoveDown();
    void MoveUp();
    void CloseTools();
    void ReceiveTick(float DeltaSeconds);
    void LifePlus(int32 1);
    void LifePlusRun();
    void InpAxisEvt_Generic_Motion_X_Axis_K2Node_InputAxisEvent_0(float AxisValue);
    void InpAxisEvt_Generic_Motion_Y_Axis_K2Node_InputAxisEvent_1(float AxisValue);
    void ExecuteUbergraph_DebugTools_Control(int32 EntryPoint, FKey K2Node_InputKeyEvent_Key_20, FKey K2Node_InputKeyEvent_Key_19, FKey K2Node_InputKeyEvent_Key_18, FKey K2Node_InputKeyEvent_Key_17, FKey K2Node_InputKeyEvent_Key_16, FKey K2Node_InputKeyEvent_Key_15, FKey Temp_struct_Variable, FKey K2Node_InputKeyEvent_Key_14, FKey K2Node_InputKeyEvent_Key_13, FKey Temp_struct_Variable_1, FKey K2Node_InputKeyEvent_Key_12, FKey K2Node_InputKeyEvent_Key_11, FKey K2Node_InputKeyEvent_Key_10, FKey K2Node_InputKeyEvent_Key_9, FKey K2Node_InputActionEvent_Key_1, FKey K2Node_InputKeyEvent_Key_8, FKey K2Node_InputKeyEvent_Key_7, FKey Temp_struct_Variable_2, FKey K2Node_InputKeyEvent_Key_6, FKey K2Node_InputKeyEvent_Key_5, FKey Temp_struct_Variable_3, FKey K2Node_InputKeyEvent_Key_4, FKey K2Node_InputKeyEvent_Key_3, FKey K2Node_InputKeyEvent_Key_2, FKey Temp_struct_Variable_4, FKey K2Node_InputKeyEvent_Key_1, FKey K2Node_InputKeyEvent_Key, FKey Temp_struct_Variable_5, FKey K2Node_InputActionEvent_Key, FKey Temp_struct_Variable_6, bool Temp_bool_Variable, UPlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, AActor* CallFunc_GetViewTarget_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, FKey K2Node_InputKeyEvent_Key_21, FRotator CallFunc_GetCameraRotation_ReturnValue, FKey K2Node_InputKeyEvent_Key_22, FKey K2Node_InputKeyEvent_Key_23, FKey Temp_struct_Variable_7, FKey K2Node_InputKeyEvent_Key_24, FKey K2Node_InputKeyEvent_Key_30, bool CallFunc_IsRobiValid_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_1, FKey K2Node_InputKeyEvent_Key_25, FKey K2Node_InputKeyEvent_Key_31, FKey Temp_struct_Variable_8, FKey K2Node_InputKeyEvent_Key_26, FKey K2Node_InputKeyEvent_Key_27, FKey Temp_struct_Variable_9, FKey K2Node_InputKeyEvent_Key_32, bool CallFunc_IsRobiValid_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, FKey K2Node_InputKeyEvent_Key_33, bool CallFunc_IsRobiValid_ReturnValue_3, bool CallFunc_EqualEqual_VectorVector_ReturnValue, FKey Temp_struct_Variable_10, FKey K2Node_InputKeyEvent_Key_34, bool CallFunc_IsRobiValid_ReturnValue_4, FKey K2Node_InputKeyEvent_Key_35, FKey K2Node_InputKeyEvent_Key_36, FKey K2Node_InputKeyEvent_Key_37, FKey K2Node_InputKeyEvent_Key_38, FKey K2Node_InputKeyEvent_Key_39, FKey K2Node_InputKeyEvent_Key_40, UDebugTools_UI_C* CallFunc_Create_ReturnValue, FKey Temp_struct_Variable_11, FKey K2Node_InputKeyEvent_Key_41, FKey K2Node_InputKeyEvent_Key_42, FKey Temp_struct_Variable_12, FKey K2Node_InputKeyEvent_Key_43, UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, FKey Temp_struct_Variable_13, int32 CallFunc_PostEventAtLocation_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_1, FKey K2Node_InputKeyEvent_Key_44, FKey K2Node_InputKeyEvent_Key_28, bool Temp_bool_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_1, FKey K2Node_InputKeyEvent_Key_45, bool Temp_bool_Variable_2, float K2Node_Event_DeltaSeconds, FRotator K2Node_Select_Default, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FVector CallFunc_GetRightVector_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, FVector CallFunc_Conv_RotatorToVector_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_2, FKey K2Node_InputKeyEvent_Key_29, int32 K2Node_CustomEvent_1, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_3, float K2Node_InputAxisEvent_AxisValue_1, float K2Node_Select_Default_1, float K2Node_InputAxisEvent_AxisValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue_5);
}

#endif
