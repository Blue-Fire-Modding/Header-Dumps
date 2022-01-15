#ifndef UE4SS_SDK_Amulet_HPP
#define UE4SS_SDK_Amulet_HPP

class UAmulet_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Unselect;
    UWidgetAnimation* Equip;
    UWidgetAnimation* SelectionIdle;
    UScaleBox* Box;
    UButton* Button_0;
    UImage* Equipped;
    UImage* ItemImage;
    UImage* Selection;
    bool Valid;
    bool Select;
    bool On;
    bool IsEquipped;
    TEnumAsByte<Spirits::Type> Spirit;
    UInventory_C* Inventory;

    void UpdateSpirit(const int32& ChildN, const TArray<uint8>& InventorySpirits, const TArray<uint8>& EquippedSpirits, UInventory_C* Inventory);
    void Selected();
    void Unselected();
    void EquipItem();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_Amulet(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_1, int32 Temp_int_Variable, uint8 Temp_byte_Variable_2, uint8 Temp_byte_Variable_3, uint8 Temp_byte_Variable_4, uint8 Temp_byte_Variable_5, uint8 Temp_byte_Variable_6, uint8 Temp_byte_Variable_7, uint8 Temp_byte_Variable_8, uint8 Temp_byte_Variable_9, uint8 Temp_byte_Variable_10, uint8 Temp_byte_Variable_11, uint8 Temp_byte_Variable_12, uint8 Temp_byte_Variable_13, uint8 Temp_byte_Variable_14, uint8 Temp_byte_Variable_15, uint8 Temp_byte_Variable_16, uint8 Temp_byte_Variable_17, uint8 Temp_byte_Variable_18, uint8 Temp_byte_Variable_19, uint8 Temp_byte_Variable_20, uint8 Temp_byte_Variable_21, uint8 Temp_byte_Variable_22, uint8 Temp_byte_Variable_23, uint8 Temp_byte_Variable_24, uint8 Temp_byte_Variable_25, uint8 Temp_byte_Variable_26, uint8 Temp_byte_Variable_27, uint8 Temp_byte_Variable_28, uint8 Temp_byte_Variable_29, uint8 Temp_byte_Variable_30, uint8 Temp_byte_Variable_31, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, ESlateVisibility Temp_byte_Variable_32, int32 CallFunc_Add_IntInt_ReturnValue, const int32 K2Node_CustomEvent_ChildN, const TArray<uint8>& K2Node_CustomEvent_InventorySpirits, const TArray<uint8>& K2Node_CustomEvent_EquippedSpirits, UInventory_C* K2Node_CustomEvent_Inventory, uint8 CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, uint8 K2Node_Select_Default, bool Temp_bool_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float CallFunc_GetAnimationCurrentTime_ReturnValue, bool K2Node_Event_IsDesignTime, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, bool Temp_bool_Variable_2, int32 Temp_int_Array_Index_Variable_1, UMaterialInterface* Temp_object_Variable, uint8 CallFunc_Array_Get_Item_1, ESlateVisibility K2Node_Select_Default_1, ESlateVisibility K2Node_Select_Default_2, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue, FSpiritsInfo CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool Temp_bool_True_if_break_was_hit_Variable_1, UMaterialInterface* K2Node_Select_Default_3, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1);
}

#endif
