#ifndef UE4SS_SDK_LifeStatueInt_HPP
#define UE4SS_SDK_LifeStatueInt_HPP

class ALifeStatueInt_C : public AInteractionMaster_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool Possesed;
    class ALifeStatue_C* Statue;
    class UExtraInput_UI_C* InputUI;
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
    void ExecuteUbergraph_LifeStatueInt(int32 EntryPoint);
};

#endif
