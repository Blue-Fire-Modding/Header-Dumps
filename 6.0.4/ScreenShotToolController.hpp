#ifndef UE4SS_SDK_ScreenShotToolController_HPP
#define UE4SS_SDK_ScreenShotToolController_HPP

class AScreenShotToolController_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneCaptureComponent2D* Camera2DLowRes;
    class USceneCaptureComponent2D* Camera2D;
    class USceneComponent* DefaultSceneRoot;
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
    FTransform CameraLoc;
    class ARecordCam_C* RecordCam;
    bool bIsInThumbnailMode;
    class AStaticMeshActor* Bounds;
    FScreenShotToolController_CGetTexture GetTexture;
    void GetTexture(class UTextureRenderTarget2D* FullResTexture, FString FullResFilename, class UTextureRenderTarget2D* LowResTexture, FString LowResFilename);
    FTransform ThumbnailTransform;

    void InpActEvt_Subtract_K2Node_InputKeyEvent_14(FKey Key);
    void InpActEvt_Subtract_K2Node_InputKeyEvent_13(FKey Key);
    void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_12(FKey Key);
    void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_11(FKey Key);
    void InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_10(FKey Key);
    void InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_9(FKey Key);
    void InpActEvt_Add_K2Node_InputKeyEvent_8(FKey Key);
    void InpActEvt_Add_K2Node_InputKeyEvent_7(FKey Key);
    void InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_6(FKey Key);
    void InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_5(FKey Key);
    void InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_4(FKey Key);
    void InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_3(FKey Key);
    void InpActEvt_Zero_K2Node_InputKeyEvent_2(FKey Key);
    void InpActEvt_PC_Pause_K2Node_InputActionEvent_27(FKey Key);
    void InpActEvt_Escape_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_PC_Back_K2Node_InputActionEvent_26(FKey Key);
    void InpActEvt_MainMenuConfirm_K2Node_InputActionEvent_25(FKey Key);
    void InpActEvt_PC_Shield_K2Node_InputActionEvent_24(FKey Key);
    void InpActEvt_PC_Sprint_K2Node_InputActionEvent_23(FKey Key);
    void InpActEvt_Gamepad_Sprint_K2Node_InputActionEvent_22(FKey Key);
    void InpActEvt_PC_Dash_K2Node_InputActionEvent_21(FKey Key);
    void InpActEvt_Gamepad_Dash_K2Node_InputActionEvent_20(FKey Key);
    void InpActEvt_Gamepad_Lock_K2Node_InputActionEvent_19(FKey Key);
    void InpActEvt_PC_Lock_K2Node_InputActionEvent_18(FKey Key);
    void InpActEvt_PC_Emote_Menu_K2Node_InputActionEvent_17(FKey Key);
    void InpActEvt_Gamepad_Emote_Menu_K2Node_InputActionEvent_16(FKey Key);
    void InpActEvt_PC_Restore_Health_K2Node_InputActionEvent_15(FKey Key);
    void InpActEvt_Gamepad_Restore_Health_K2Node_InputActionEvent_14(FKey Key);
    void InpActEvt_PC_Quick_Emote_K2Node_InputActionEvent_13(FKey Key);
    void InpActEvt_Gamepad_Quick_Emote_K2Node_InputActionEvent_12(FKey Key);
    void InpActEvt_Generic_Special_Pause_K2Node_InputActionEvent_11(FKey Key);
    void InpActEvt_PC_Vertical_Attack_K2Node_InputActionEvent_10(FKey Key);
    void InpActEvt_PC_Interact_K2Node_InputActionEvent_9(FKey Key);
    void InpActEvt_Gamepad_Interact_Shield_K2Node_InputActionEvent_8(FKey Key);
    void InpActEvt_Gamepad_Vertical_Attack_K2Node_InputActionEvent_7(FKey Key);
    void InpActEvt_Gamepad_Pause_K2Node_InputActionEvent_6(FKey Key);
    void InpActEvt_H_K2Node_InputKeyEvent_0(FKey Key);
    void InpActEvt_Generic_ScreenShot_Fov+_K2Node_InputActionEvent_5(FKey Key);
    void InpActEvt_Generic_ScreenShot_Fov+_K2Node_InputActionEvent_4(FKey Key);
    void InpActEvt_Generic_ScreenShot_Fov-_K2Node_InputActionEvent_3(FKey Key);
    void InpActEvt_Generic_ScreenShot_Fov-_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_PC_Confirm_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Gamepad_Confirm_K2Node_InputActionEvent_0(FKey Key);
    void ChangeSpeed();
    void ReceiveBeginPlay();
    void InpAxisEvt_Generic_Cam_Y_Axis_K2Node_InputAxisEvent_7(float AxisValue);
    void InpAxisEvt_Generic_Vertical_Movement2_K2Node_InputAxisEvent_9(float AxisValue);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveDestroyed();
    void ChangeFov();
    void InpAxisEvt_Generic_Motion_Y_Axis_K2Node_InputAxisEvent_2(float AxisValue);
    void InpAxisEvt_Generic_Motion_X_Axis_K2Node_InputAxisEvent_3(float AxisValue);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void VoidMakerSettings();
    void Automatic(FTransform StartTransform);
    void ExecuteUbergraph_ScreenShotToolController(int32 EntryPoint);
    void GetTexture__DelegateSignature(class UTextureRenderTarget2D* FullResTexture, FString FullResFilename, class UTextureRenderTarget2D* LowResTexture, FString LowResFilename);
};

#endif
