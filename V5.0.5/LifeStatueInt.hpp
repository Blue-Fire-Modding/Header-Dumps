#ifndef UE4SS_SDK_LifeStatueInt_HPP
#define UE4SS_SDK_LifeStatueInt_HPP

class ALifeStatueInt_C : AInteractionMaster_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool Possesed;
    ALifeStatue_C* Statue;
    UExtraInput_UI_C* InputUI;
    FVector Control Stick Direction;
    FVector InitialLocation;
    bool VMBuildMode;

    void InpActEvt_Gamepad_Emote_Menu_K2Node_InputActionEvent_6(FKey Key);
    void InpActEvt_PC_Emote_Menu_K2Node_InputActionEvent_5(FKey Key);
    void InpActEvt_Gamepad_Quick_Emote_K2Node_InputActionEvent_4(FKey Key);
    void InpActEvt_PC_Quick_Emote_K2Node_InputActionEvent_3(FKey Key);
    void InpActEvt_PC_Dash_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_Gamepad_Dash_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_T_K2Node_InputKeyEvent_0(FKey Key);
    void InpActEvt_Gamepad_Special_Pause_K2Node_InputActionEvent_0(FKey Key);
    void ReceiveBeginPlay();
    void InputOff();
    void InputOn();
    void InpAxisEvt_Generic_Motion_X_Axis_K2Node_InputAxisEvent_0(float AxisValue);
    void InpAxisEvt_Generic_Motion_Y_Axis_K2Node_InputAxisEvent_1(float AxisValue);
    void BeginOverlapEv();
    void WaterFall();
    void ForceUnposses();
    void PressButton();
    void ExecuteUbergraph_LifeStatueInt(int32 EntryPoint, FKey K2Node_InputKeyEvent_Key, FKey K2Node_InputActionEvent_Key, AActor* CallFunc_GetParentActor_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, UPlayerController* CallFunc_GetPlayerController_ReturnValue, FallWaterDeath__DelegateSignature K2Node_CreateDelegate_OutputDelegate, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, FKey K2Node_InputActionEvent_Key_1, FRotator CallFunc_GetCameraRotation_ReturnValue, FKey K2Node_InputActionEvent_Key_2, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FVector CallFunc_GetRightVector_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, FVector CallFunc_Conv_RotatorToVector_ReturnValue, FallWaterDeath__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, AActor* CallFunc_GetParentActor_ReturnValue_1, ULifeStatue_C* K2Node_DynamicCast_AsLife_Statue, bool K2Node_DynamicCast_bSuccess_1, FKey K2Node_InputActionEvent_Key_3, FKey K2Node_InputActionEvent_Key_4, FKey K2Node_InputActionEvent_Key_5, FKey K2Node_InputActionEvent_Key_6, InputOn__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, FVector CallFunc_MakeVector_ReturnValue, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, InputOff__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_Not_PreBool_ReturnValue, UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue_2, bool CallFunc_IsRobiValid_ReturnValue_3, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult_1, bool CallFunc_K2_SetActorLocation_ReturnValue_1, UExtraInput_UI_C* CallFunc_Create_ReturnValue, float K2Node_InputAxisEvent_AxisValue_1, float K2Node_InputAxisEvent_AxisValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, const FText Temp_text_Variable, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult_2, bool CallFunc_K2_SetActorLocation_ReturnValue_2, const FText Temp_text_Variable_1);
}

#endif
