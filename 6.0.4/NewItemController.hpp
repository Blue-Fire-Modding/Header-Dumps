#ifndef UE4SS_SDK_NewItemController_HPP
#define UE4SS_SDK_NewItemController_HPP

class ANewItemController_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    class UNewItem_C* NewItem;

    void InpActEvt_PC_Interact_K2Node_InputActionEvent_3(FKey Key);
    void InpActEvt_Gamepad_Interact_Shield_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_Gamepad_Confirm_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_PC_Confirm_K2Node_InputActionEvent_0(FKey Key);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_NewItemController(int32 EntryPoint);
};

#endif
