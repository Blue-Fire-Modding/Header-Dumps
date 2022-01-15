#ifndef UE4SS_SDK_InventoryActionList_HPP
#define UE4SS_SDK_InventoryActionList_HPP

class UInventoryActionList_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UInventoryActionListOption_C* Option00;
    UInventoryActionListOption_C* Option01;
    UInventoryActionListOption_C* Option02;
    UWrapBox* WrapBox_0;
    int32 Length;
    int32 SelectedOption;

    void Set(const TArray<FText>& Options);
    void ReceiveMovement(const bool Down, bool RefreshOnly, AInventoryController_C* InventoryController);
    void ExecuteUbergraph_InventoryActionList(int32 EntryPoint, int32 Temp_int_Variable, bool Temp_bool_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const TArray<FText>& K2Node_CustomEvent_Options, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable_5, int32 Temp_int_Variable_6, FText CallFunc_Array_Get_Item, UWidget* K2Node_Select_Default, UInventoryActionListOption_C* K2Node_Select_Default_1, UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const bool K2Node_CustomEvent_Down, bool K2Node_CustomEvent_RefreshOnly, AInventoryController_C* K2Node_CustomEvent_InventoryController, int32 K2Node_Select_Default_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, UInventoryActionListOption_C* K2Node_Select_Default_3, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1);
}

#endif
