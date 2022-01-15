#ifndef UE4SS_SDK_ScreenShotToolController_HPP
#define UE4SS_SDK_ScreenShotToolController_HPP

class AScreenShotToolController_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneCaptureComponent2D* Camera2DLowRes;
    USceneCaptureComponent2D* Camera2D;
    USceneComponent* DefaultSceneRoot;
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
    FTransform CameraLoc;
    ARecordCam_C* RecordCam;
    bool bIsInThumbnailMode;
    AStaticMeshActor* Bounds;
    FScreenShotToolController_CGetTexture GetTexture;
    void GetTexture(UTextureRenderTarget2D* FullResTexture, FString FullResFilename, UTextureRenderTarget2D* LowResTexture, FString LowResFilename);
    FTransform ThumbnailTransform;

    void InpActEvt_Add_K2Node_InputKeyEvent_14(FKey Key);
    void InpActEvt_Add_K2Node_InputKeyEvent_13(FKey Key);
    void InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_12(FKey Key);
    void InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_11(FKey Key);
    void InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_10(FKey Key);
    void InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_9(FKey Key);
    void InpActEvt_PC_Pause_K2Node_InputActionEvent_26(FKey Key);
    void InpActEvt_Escape_K2Node_InputKeyEvent_8(FKey Key);
    void InpActEvt_PC_Back_K2Node_InputActionEvent_25(FKey Key);
    void InpActEvt_MainMenuConfirm_K2Node_InputActionEvent_24(FKey Key);
    void InpActEvt_PC_Shield_K2Node_InputActionEvent_23(FKey Key);
    void InpActEvt_PC_Sprint_K2Node_InputActionEvent_22(FKey Key);
    void InpActEvt_Gamepad_Sprint_K2Node_InputActionEvent_21(FKey Key);
    void InpActEvt_PC_Dash_K2Node_InputActionEvent_20(FKey Key);
    void InpActEvt_Gamepad_Dash_K2Node_InputActionEvent_19(FKey Key);
    void InpActEvt_Gamepad_Lock_K2Node_InputActionEvent_18(FKey Key);
    void InpActEvt_PC_Lock_K2Node_InputActionEvent_17(FKey Key);
    void InpActEvt_PC_Emote_Menu_K2Node_InputActionEvent_16(FKey Key);
    void InpActEvt_Gamepad_Emote_Menu_K2Node_InputActionEvent_15(FKey Key);
    void InpActEvt_PC_Restore_Health_K2Node_InputActionEvent_14(FKey Key);
    void InpActEvt_Gamepad_Restore_Health_K2Node_InputActionEvent_13(FKey Key);
    void InpActEvt_PC_Quick_Emote_K2Node_InputActionEvent_12(FKey Key);
    void InpActEvt_Gamepad_Quick_Emote_K2Node_InputActionEvent_11(FKey Key);
    void InpActEvt_Generic_Special_Pause_K2Node_InputActionEvent_10(FKey Key);
    void InpActEvt_PC_Vertical_Attack_K2Node_InputActionEvent_9(FKey Key);
    void InpActEvt_PC_Interact_K2Node_InputActionEvent_8(FKey Key);
    void InpActEvt_Gamepad_Interact_Shield_K2Node_InputActionEvent_7(FKey Key);
    void InpActEvt_Gamepad_Vertical_Attack_K2Node_InputActionEvent_6(FKey Key);
    void InpActEvt_Gamepad_Pause_K2Node_InputActionEvent_5(FKey Key);
    void InpActEvt_H_K2Node_InputKeyEvent_7(FKey Key);
    void InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_6(FKey Key);
    void InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_5(FKey Key);
    void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_4(FKey Key);
    void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_3(FKey Key);
    void InpActEvt_Generic_ScreenShot_Fov+_K2Node_InputActionEvent_4(FKey Key);
    void InpActEvt_Generic_ScreenShot_Fov+_K2Node_InputActionEvent_3(FKey Key);
    void InpActEvt_Generic_ScreenShot_Fov-_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_Generic_ScreenShot_Fov-_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Subtract_K2Node_InputKeyEvent_2(FKey Key);
    void InpActEvt_Subtract_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_Zero_K2Node_InputKeyEvent_0(FKey Key);
    void InpActEvt_PC_Confirm_K2Node_InputActionEvent_0(FKey Key);
    void InpAxisEvt_Generic_Motion_X_Axis_K2Node_InputAxisEvent_5(float AxisValue);
    void InpAxisEvt_Generic_Motion_Y_Axis_K2Node_InputAxisEvent_6(float AxisValue);
    void InpAxisEvt_Generic_Cam_Y_Axis_K2Node_InputAxisEvent_7(float AxisValue);
    void InpAxisEvt_Generic_Vertical_Movement2_K2Node_InputAxisEvent_9(float AxisValue);
    void ChangeFov();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveDestroyed();
    void ReceiveBeginPlay();
    void ChangeSpeed();
    void InpAxisEvt_Generic_Motion_Y_Axis_K2Node_InputAxisEvent_2(float AxisValue);
    void InpAxisEvt_Generic_Motion_X_Axis_K2Node_InputAxisEvent_3(float AxisValue);
    void ReceiveEndPlay(uint8 EndPlayReason);
    void VoidMakerSettings();
    void InpAxisKeyEvt_Gamepad_RightTriggerAxis_K2Node_InputAxisKeyEvent_1(float AxisValue);
    void InpAxisKeyEvt_Gamepad_LeftTriggerAxis_K2Node_InputAxisKeyEvent_0(float AxisValue);
    void Automatic(FTransform StartTransform);
    void ExecuteUbergraph_ScreenShotToolController(int32 EntryPoint, FKey K2Node_InputActionEvent_Key_5, FKey K2Node_InputKeyEvent_Key_7, FKey K2Node_InputKeyEvent_Key_6, FKey K2Node_InputKeyEvent_Key_5, FKey Temp_struct_Variable, FKey K2Node_InputKeyEvent_Key_4, FKey K2Node_InputKeyEvent_Key_3, FKey Temp_struct_Variable_1, bool CallFunc_IsValid_ReturnValue, FKey K2Node_InputActionEvent_Key_4, FKey K2Node_InputActionEvent_Key_3, FKey Temp_struct_Variable_2, FKey K2Node_InputActionEvent_Key_2, FKey K2Node_InputActionEvent_Key_1, FKey Temp_struct_Variable_3, bool CallFunc_IsValid_ReturnValue_1, FKey K2Node_InputKeyEvent_Key_2, FKey K2Node_InputKeyEvent_Key_1, FKey Temp_struct_Variable_4, FKey K2Node_InputKeyEvent_Key, bool Temp_bool_Variable, FKey K2Node_InputActionEvent_Key, float K2Node_InputAxisEvent_AxisValue_5, float K2Node_InputAxisEvent_AxisValue_4, float K2Node_InputAxisEvent_AxisValue_3, float K2Node_InputAxisEvent_AxisValue_2, float CallFunc_Multiply_IntFloat_ReturnValue, FKey K2Node_InputActionEvent_Key_16, FKey K2Node_InputActionEvent_Key_17, FKey K2Node_InputActionEvent_Key_18, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue_1, FKey K2Node_InputActionEvent_Key_19, FKey K2Node_InputActionEvent_Key_20, float K2Node_Event_DeltaSeconds, float CallFunc_GetInputAxisValue_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_GetInputAxisValue_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, UPlayerController* CallFunc_GetPlayerController_ReturnValue, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, FRotator CallFunc_GetCameraRotation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, FTransform CallFunc_MakeTransform_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, FVector CallFunc_Conv_RotatorToVector_ReturnValue, AStaticMeshActor* CallFunc_FinishSpawningActor_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, FVector CallFunc_GetRightVector_ReturnValue, FKey K2Node_InputActionEvent_Key_21, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, FKey K2Node_InputActionEvent_Key_22, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue_1, URecordCam_C* CallFunc_FinishSpawningActor_ReturnValue_1, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FKey K2Node_InputActionEvent_Key_6, FKey K2Node_InputActionEvent_Key_7, FKey K2Node_InputActionEvent_Key_8, FKey K2Node_InputActionEvent_Key_9, FKey K2Node_InputActionEvent_Key_23, UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, FKey K2Node_InputActionEvent_Key_24, FText CallFunc_Conv_FloatToText_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FKey K2Node_InputActionEvent_Key_10, float CallFunc_GetInputAxisValue_ReturnValue_2, UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_1, FRotator CallFunc_MakeRotator_ReturnValue_1, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, UPlayerController* CallFunc_GetPlayerController_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, FKey K2Node_InputActionEvent_Key_25, FKey K2Node_InputKeyEvent_Key_8, FKey K2Node_InputActionEvent_Key_26, bool CallFunc_K2_SetActorRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, float K2Node_InputAxisEvent_AxisValue_1, float K2Node_InputAxisEvent_AxisValue, UCamControlUI_C* CallFunc_Create_ReturnValue, float CallFunc_VSize_ReturnValue, bool Temp_bool_Variable_1, float K2Node_Select_Default, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue, FKey K2Node_InputActionEvent_Key_11, float CallFunc_Add_FloatFloat_ReturnValue_2, FKey K2Node_InputActionEvent_Key_12, float CallFunc_FClamp_ReturnValue, FKey Temp_struct_Variable_5, FKey K2Node_InputKeyEvent_Key_9, FKey K2Node_InputKeyEvent_Key_10, FKey Temp_struct_Variable_6, FKey K2Node_InputKeyEvent_Key_11, FKey K2Node_InputActionEvent_Key_13, FKey K2Node_InputKeyEvent_Key_12, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_2, uint8 K2Node_Event_EndPlayReason, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_3, FKey K2Node_InputActionEvent_Key_14, float CallFunc_MakeLiteralFloat_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, FKey Temp_struct_Variable_7, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_4, bool Temp_bool_Variable_2, bool CallFunc_Not_PreBool_ReturnValue, TArray<AGlobal_Controller_C*>& CallFunc_GetAllActorsOfClass_OutActors, FKey K2Node_InputActionEvent_Key_15, AGlobal_Controller_C* CallFunc_Array_Get_Item, FKey K2Node_InputKeyEvent_Key_13, float K2Node_InputAxisKeyEvent_AxisValue_1, float K2Node_InputAxisKeyEvent_AxisValue, float K2Node_Select_Default_1, float CallFunc_FClamp_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_1, FTransform K2Node_CustomEvent_StartTransform, FKey K2Node_InputKeyEvent_Key_14);
    void GetTexture__DelegateSignature(UTextureRenderTarget2D* FullResTexture, FString FullResFilename, UTextureRenderTarget2D* LowResTexture, FString LowResFilename);
}

#endif
