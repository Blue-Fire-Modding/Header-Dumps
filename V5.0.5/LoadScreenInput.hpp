#ifndef UE4SS_SDK_LoadScreenInput_HPP
#define UE4SS_SDK_LoadScreenInput_HPP

class ALoadScreenInput_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* DefaultSceneRoot;
    ULoadScreen_C* LoadScreen;

    void InpActEvt_PC_Interact_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_Gamepad_Confirm_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_PC_Confirm_K2Node_InputActionEvent_0(FKey Key);
    void ExecuteUbergraph_LoadScreenInput(int32 EntryPoint, FKey K2Node_InputActionEvent_Key_2, FKey K2Node_InputActionEvent_Key, FKey K2Node_InputActionEvent_Key_1);
}

#endif
