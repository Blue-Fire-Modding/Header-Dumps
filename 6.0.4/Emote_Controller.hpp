#ifndef UE4SS_SDK_Emote_Controller_HPP
#define UE4SS_SDK_Emote_Controller_HPP

class AEmote_Controller_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    class UEmotesUI_C* EmoteUI;
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
    void ExecuteUbergraph_Emote_Controller(int32 EntryPoint);
};

#endif
