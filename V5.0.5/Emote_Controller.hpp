#ifndef UE4SS_SDK_Emote_Controller_HPP
#define UE4SS_SDK_Emote_Controller_HPP

class AEmote_Controller_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* DefaultSceneRoot;
    UEmotesUI_C* EmoteUI;
    bool Right;

    void InpActEvt_W_K2Node_InputKeyEvent_5(FKey Key);
    void InpActEvt_S_K2Node_InputKeyEvent_4(FKey Key);
    void InpActEvt_Four_K2Node_InputKeyEvent_3(FKey Key);
    void InpActEvt_Gamepad_Confirm_K2Node_InputActionEvent_23(FKey Key);
    void InpActEvt_Gamepad_Interact_Shield_K2Node_InputActionEvent_22(FKey Key);
    void InpActEvt_Gamepad_Back_K2Node_InputActionEvent_21(FKey Key);
    void InpActEvt_PC_Back_K2Node_InputActionEvent_20(FKey Key);
    void InpActEvt_Gamepad_Emote_Menu_K2Node_InputActionEvent_19(FKey Key);
    void InpActEvt_Gamepad_Emote_Menu_K2Node_InputActionEvent_18(FKey Key);
    void InpActEvt_Gamepad_Quick_Emote_K2Node_InputActionEvent_17(FKey Key);
    void InpActEvt_Gamepad_Restore_Health_K2Node_InputActionEvent_16(FKey Key);
    void InpActEvt_PC_Dash_K2Node_InputActionEvent_15(FKey Key);
    void InpActEvt_Gamepad_Dash_K2Node_InputActionEvent_14(FKey Key);
    void InpActEvt_PC_Shield_K2Node_InputActionEvent_13(FKey Key);
    void InpActEvt_Gamepad_Horizontal_Attack_K2Node_InputActionEvent_12(FKey Key);
    void InpActEvt_PC_Horizontal_Attack_K2Node_InputActionEvent_11(FKey Key);
    void InpActEvt_Gamepad_Vertical_Attack_K2Node_InputActionEvent_10(FKey Key);
    void InpActEvt_PC_Vertical_Attack_K2Node_InputActionEvent_9(FKey Key);
    void InpActEvt_PC_Restore_Health_K2Node_InputActionEvent_8(FKey Key);
    void InpActEvt_SpaceBar_K2Node_InputKeyEvent_2(FKey Key);
    void InpActEvt_Enter_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_Escape_K2Node_InputKeyEvent_0(FKey Key);
    void InpActEvt_Gamepad_Quick_Emote_K2Node_InputActionEvent_7(FKey Key);
    void InpActEvt_Gamepad_Quick_Emote_K2Node_InputActionEvent_6(FKey Key);
    void InpActEvt_Gamepad_CamMode_K2Node_InputActionEvent_5(FKey Key);
    void InpActEvt_PC_CamMode_K2Node_InputActionEvent_4(FKey Key);
    void InpActEvt_Generic_Left_K2Node_InputActionEvent_3(FKey Key);
    void InpActEvt_Generic_Left_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_Generic_Right_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Generic_Right_K2Node_InputActionEvent_0(FKey Key);
    void Delete();
    void ReceiveBeginPlay();
    void ClearMovement();
    void MoveT();
    void MoveTTimerStart();
    void InpAxisEvt_Generic_Motion_X_Axis_K2Node_InputAxisEvent_0(float AxisValue);
    void InpAxisEvt_Generic_Motion_Y_Axis_K2Node_InputAxisEvent_1(float AxisValue);
    void ExecuteUbergraph_Emote_Controller(int32 EntryPoint, float K2Node_InputAxisEvent_AxisValue, FKey K2Node_InputActionEvent_Key_3, FKey K2Node_InputActionEvent_Key_2, FKey Temp_struct_Variable, FKey K2Node_InputActionEvent_Key_1, FKey K2Node_InputActionEvent_Key, FKey Temp_struct_Variable_1, UPlayerController* CallFunc_GetPlayerController_ReturnValue, UEmoteSlot_C* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ByteByte_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, FKey K2Node_InputKeyEvent_Key, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, FKey K2Node_InputKeyEvent_Key_1, FKey K2Node_InputKeyEvent_Key_2, FKey K2Node_InputActionEvent_Key_8, bool Temp_bool_IsClosed_Variable, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, FKey K2Node_InputActionEvent_Key_9, FKey K2Node_InputActionEvent_Key_10, FKey K2Node_InputActionEvent_Key_11, FKey K2Node_InputActionEvent_Key_12, FKey K2Node_InputActionEvent_Key_13, FKey K2Node_InputActionEvent_Key_14, FKey K2Node_InputActionEvent_Key_15, FKey K2Node_InputActionEvent_Key_16, FKey K2Node_InputActionEvent_Key_17, FKey Temp_struct_Variable_2, FKey K2Node_InputActionEvent_Key_18, FKey K2Node_InputActionEvent_Key_19, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_1, FKey K2Node_InputActionEvent_Key_4, FKey K2Node_InputActionEvent_Key_5, FKey Temp_struct_Variable_3, int32 CallFunc_PostEventAtLocation_ReturnValue_3, FKey K2Node_InputActionEvent_Key_6, FKey K2Node_InputActionEvent_Key_7, FKey K2Node_InputActionEvent_Key_20, FKey K2Node_InputActionEvent_Key_21, FKey K2Node_InputActionEvent_Key_22, FKey K2Node_InputActionEvent_Key_23, FKey K2Node_InputKeyEvent_Key_3, FKey K2Node_InputKeyEvent_Key_4, FKey K2Node_InputKeyEvent_Key_5, float K2Node_InputAxisEvent_AxisValue_1, Die__DelegateSignature K2Node_CreateDelegate_OutputDelegate);
}

#endif
