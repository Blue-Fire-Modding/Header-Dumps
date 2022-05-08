#ifndef UE4SS_SDK_CamControlTrailerCamOriginal_HPP
#define UE4SS_SDK_CamControlTrailerCamOriginal_HPP

class ACamControlTrailerCam_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCameraComponent* Camera;
    bool Pos;
    class APlayer_Camera_Control_C* CamControl;
    float SpeedM;
    bool PositiveSpeed;
    FRotator NewRotation;
    class UCamControlUI_C* UI;
    bool Fast;
    class APlayer_Character_BP_C* Player;
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
    void ExecuteUbergraph_CamControlTrailerCam(int32 EntryPoint);
};

#endif
