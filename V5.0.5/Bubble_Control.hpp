#ifndef UE4SS_SDK_Bubble_Control_HPP
#define UE4SS_SDK_Bubble_Control_HPP

class ABubble_Control_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* DefaultSceneRoot;
    float MoveDash_Alpha_693A861442E5178E0AA9A2821DA346DD;
    TEnumAsByte<ETimelineDirection::Type> MoveDash__Direction_693A861442E5178E0AA9A2821DA346DD;
    UTimelineComponent* MoveDash;
    ABubble_C* BubbleCont;
    APlayer_Character_BP_C* Player;
    bool Dash;
    FVector StartLocation;
    FVector EndLocation;
    FVector Dire;

    void PlayerHaveSprint(bool& Result);
    void MoveDash__FinishedFunc();
    void MoveDash__UpdateFunc();
    void InpActEvt_Gamepad_Horizontal_Attack_K2Node_InputActionEvent_11(FKey Key);
    void InpActEvt_PC_Horizontal_Attack_K2Node_InputActionEvent_10(FKey Key);
    void InpActEvt_Gamepad_Jump_K2Node_InputActionEvent_9(FKey Key);
    void InpActEvt_PC_Jump_K2Node_InputActionEvent_8(FKey Key);
    void InpActEvt_Gamepad_Dash_K2Node_InputActionEvent_7(FKey Key);
    void InpActEvt_PC_Dash_K2Node_InputActionEvent_6(FKey Key);
    void InpActEvt_Gamepad_Sprint_K2Node_InputActionEvent_5(FKey Key);
    void InpActEvt_PC_Sprint_K2Node_InputActionEvent_4(FKey Key);
    void InpActEvt_Gamepad_Quick_Emote_K2Node_InputActionEvent_3(FKey Key);
    void InpActEvt_PC_Quick_Emote_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_Gamepad_Emote_Menu_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_PC_Emote_Menu_K2Node_InputActionEvent_0(FKey Key);
    void DashTimer();
    void InpAxisEvt_Generic_Motion_X_Axis_K2Node_InputAxisEvent_0(float AxisValue);
    void InpAxisEvt_Generic_Motion_Y_Axis_K2Node_InputAxisEvent_1(float AxisValue);
    void ExecuteUbergraph_Bubble_Control(int32 EntryPoint, FKey K2Node_InputActionEvent_Key_4, FVector CallFunc_K2_GetActorLocation_ReturnValue, FKey K2Node_InputActionEvent_Key_5, int32 CallFunc_PostEventAtLocation_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FKey K2Node_InputActionEvent_Key, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_MakeVector_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, FKey K2Node_InputActionEvent_Key_6, FKey K2Node_InputActionEvent_Key_7, bool Temp_bool_IsClosed_Variable, FKey K2Node_InputActionEvent_Key_8, float K2Node_InputAxisEvent_AxisValue_1, float K2Node_InputAxisEvent_AxisValue, FKey K2Node_InputActionEvent_Key_9, FKey K2Node_InputActionEvent_Key_10, FKey K2Node_InputActionEvent_Key_11, FKey K2Node_InputActionEvent_Key_1, FVector CallFunc_VLerp_ReturnValue, FKey K2Node_InputActionEvent_Key_2, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, FKey K2Node_InputActionEvent_Key_3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_PlayerHaveSprint_Result);
}

#endif
