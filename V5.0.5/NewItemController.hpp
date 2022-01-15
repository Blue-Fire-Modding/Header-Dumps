#ifndef UE4SS_SDK_NewItemController_HPP
#define UE4SS_SDK_NewItemController_HPP

class ANewItemController_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* DefaultSceneRoot;
    UNewItem_C* NewItem;

    void InpActEvt_PC_Interact_K2Node_InputActionEvent_3(FKey Key);
    void InpActEvt_Gamepad_Interact_Shield_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_Gamepad_Confirm_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_PC_Confirm_K2Node_InputActionEvent_0(FKey Key);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_NewItemController(int32 EntryPoint, FKey K2Node_InputActionEvent_Key_3, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable_1, FKey K2Node_InputActionEvent_Key, FKey K2Node_InputActionEvent_Key_1, FKey K2Node_InputActionEvent_Key_2);
}

#endif
