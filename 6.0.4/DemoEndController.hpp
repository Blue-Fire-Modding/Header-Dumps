#ifndef UE4SS_SDK_DemoEndController_HPP
#define UE4SS_SDK_DemoEndController_HPP

class ADemoEndController_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    bool DemoPartOne;

    void InpActEvt_PC_Interact_K2Node_InputActionEvent_7(FKey Key);
    void InpActEvt_Gamepad_Interact_Shield_K2Node_InputActionEvent_6(FKey Key);
    void InpActEvt_Gamepad_Confirm_K2Node_InputActionEvent_5(FKey Key);
    void InpActEvt_PC_Confirm_K2Node_InputActionEvent_4(FKey Key);
    void InpActEvt_Gamepad_Back_K2Node_InputActionEvent_3(FKey Key);
    void InpActEvt_PC_Back_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_Generic_Pause_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Generic_Special_Pause_K2Node_InputActionEvent_0(FKey Key);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_DemoEndController(int32 EntryPoint);
};

#endif
