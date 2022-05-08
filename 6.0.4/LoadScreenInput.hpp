#ifndef UE4SS_SDK_LoadScreenInput_HPP
#define UE4SS_SDK_LoadScreenInput_HPP

class ALoadScreenInput_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    class ULoadScreen_C* LoadScreen;

    void InpActEvt_PC_Interact_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_Gamepad_Confirm_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_PC_Confirm_K2Node_InputActionEvent_0(FKey Key);
    void ExecuteUbergraph_LoadScreenInput(int32 EntryPoint);
};

#endif
