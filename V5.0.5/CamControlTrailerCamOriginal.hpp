#ifndef UE4SS_SDK_CamControlTrailerCamOriginal_HPP
#define UE4SS_SDK_CamControlTrailerCamOriginal_HPP

class ACamControlTrailerCam_C : UCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    UCameraComponent* Camera;
    bool Pos;
    APlayer_Camera_Control_C* CamControl;
    float SpeedM;
    bool PositiveSpeed;
    FRotator NewRotation;
    UCamControlUI_C* UI;
    bool Fast;
    APlayer_Character_BP_C* Player;
    bool RecordMove;
    FVector Control Stick Direction;
    float Control Stick Intensity;
    float Vertical Movement Multiplier;

    void InpActEvt_C_K2Node_InputKeyEvent_21(FKey Key);
    void InpActEvt_C_K2Node_InputKeyEvent_20(FKey Key);
    void InpActEvt_Z_K2Node_InputKeyEvent_19(FKey Key);
    void InpActEvt_Z_K2Node_InputKeyEvent_18(FKey Key);
    void InpActEvt_Add_K2Node_InputKeyEvent_17(FKey Key);
    void InpActEvt_Add_K2Node_InputKeyEvent_16(FKey Key);
    void InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_15(FKey Key);
    void InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_14(FKey Key);
    void InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_13(FKey Key);
    void InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_12(FKey Key);
    void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_11(FKey Key);
    void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_10(FKey Key);
    void InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_9(FKey Key);
    void InpActEvt_Subtract_K2Node_InputKeyEvent_8(FKey Key);
    void InpActEvt_Subtract_K2Node_InputKeyEvent_7(FKey Key);
    void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_6(FKey Key);
    void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_5(FKey Key);
    void InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_4(FKey Key);
    void InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_3(FKey Key);
    void InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_2(FKey Key);
    void InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_Zero_K2Node_InputKeyEvent_0(FKey Key);
    void InpActEvt_PC_ChangeLockTarget_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Gamepad_ChangeLockTarget_K2Node_InputActionEvent_0(FKey Key);
    void ReceiveBeginPlay();
    void InpAxisEvt_Generic_Motion_X_Axis_K2Node_InputAxisEvent_5(float AxisValue);
    void InpAxisEvt_Generic_Motion_Y_Axis_K2Node_InputAxisEvent_6(float AxisValue);
    void InpAxisEvt_Generic_Cam_Y_Axis_K2Node_InputAxisEvent_7(float AxisValue);
    void InpAxisEvt_Generic_Cam_X_Axis_K2Node_InputAxisEvent_8(float AxisValue);
    void InpAxisEvt_Generic_Vertical_Movement2_K2Node_InputAxisEvent_9(float AxisValue);
    void ChangeSpeed();
    void ChangeFov();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveDestroyed();
    void ExecuteUbergraph_CamControlTrailerCam(int32 EntryPoint, FKey Temp_struct_Variable, float CallFunc_Add_FloatFloat_ReturnValue, FKey K2Node_InputKeyEvent_Key_13, FKey K2Node_InputKeyEvent_Key_12, FKey Temp_struct_Variable_1, bool Temp_bool_Variable, FKey K2Node_InputKeyEvent_Key_11, FKey K2Node_InputKeyEvent_Key_10, FKey Temp_struct_Variable_2, FKey K2Node_InputKeyEvent_Key_9, bool Temp_bool_Variable_1, FKey K2Node_InputKeyEvent_Key_8, FKey K2Node_InputKeyEvent_Key_7, FKey Temp_struct_Variable_3, float CallFunc_VSize_ReturnValue, FKey K2Node_InputKeyEvent_Key_6, FKey K2Node_InputKeyEvent_Key_5, FKey Temp_struct_Variable_4, FKey K2Node_InputKeyEvent_Key_4, FKey K2Node_InputKeyEvent_Key_3, FKey Temp_struct_Variable_5, FKey K2Node_InputKeyEvent_Key_2, FKey K2Node_InputKeyEvent_Key_1, FKey Temp_struct_Variable_6, FKey K2Node_InputKeyEvent_Key, FKey K2Node_InputActionEvent_Key_1, FKey K2Node_InputActionEvent_Key, bool Temp_bool_Variable_2, float Temp_float_Variable, FRotator CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_GetWorldDeltaSeconds_ReturnValue, FRotator CallFunc_RInterpTo_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, float K2Node_InputAxisEvent_AxisValue_4, float K2Node_InputAxisEvent_AxisValue_3, float K2Node_InputAxisEvent_AxisValue_2, float K2Node_InputAxisEvent_AxisValue_1, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, float K2Node_InputAxisEvent_AxisValue, FRotator CallFunc_MakeRotator_ReturnValue, FKey Temp_struct_Variable_7, FKey K2Node_InputKeyEvent_Key_16, FKey K2Node_InputKeyEvent_Key_17, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue_1, float K2Node_Select_Default, float CallFunc_Multiply_FloatFloat_ReturnValue, FKey Temp_struct_Variable_8, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, FKey K2Node_InputKeyEvent_Key_18, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_1, TArray<AGlobal_Controller_C*>& CallFunc_GetAllActorsOfClass_OutActors, FKey K2Node_InputKeyEvent_Key_14, AGlobal_Controller_C* CallFunc_Array_Get_Item, FText CallFunc_Conv_FloatToText_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_3, float CallFunc_FClamp_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_2, float CallFunc_MakeLiteralFloat_ReturnValue_2, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, FRotator CallFunc_K2_GetActorRotation_ReturnValue_1, float K2Node_Event_DeltaSeconds, float CallFunc_GetInputAxisValue_ReturnValue, float CallFunc_GetInputAxisValue_ReturnValue_1, UPlayerController* CallFunc_GetPlayerController_ReturnValue, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, FRotator CallFunc_GetCameraRotation_ReturnValue, FKey K2Node_InputKeyEvent_Key_19, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, FRotator CallFunc_MakeRotator_ReturnValue_1, FVector CallFunc_Conv_RotatorToVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_4, float CallFunc_Add_FloatFloat_ReturnValue_5, FVector CallFunc_GetRightVector_ReturnValue, float K2Node_Select_Default_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, FKey Temp_struct_Variable_9, FKey K2Node_InputKeyEvent_Key_20, FVector CallFunc_K2_GetActorLocation_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, FKey K2Node_InputKeyEvent_Key_21, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, AStaticMeshActor* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, UCamControlUI_C* CallFunc_Create_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_4, FKey K2Node_InputKeyEvent_Key_15, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float K2Node_Select_Default_2);
}

#endif
