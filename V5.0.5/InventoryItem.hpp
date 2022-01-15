#ifndef UE4SS_SDK_InventoryItem_HPP
#define UE4SS_SDK_InventoryItem_HPP

class UInventoryItem_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Unselect;
    UWidgetAnimation* Equip;
    UWidgetAnimation* SelectionIdle;
    UTextBlock* Amount;
    UTextBlock* Amount_1;
    UImage* AttackArrow;
    UScaleBox* Box;
    UImage* Equipped;
    UImage* Frame;
    UImage* Frame_1;
    UHorizontalBox* HorizontalBox_144;
    UImage* ItemImage;
    UImage* nbACK;
    UOverlay* Overlay_123;
    UOverlay* Overlay_274;
    UImage* Selection;
    UImage* SpecialKeyItemFunction;
    TEnumAsByte<Items::Type> Item;
    bool Valid;
    bool Select;
    TEnumAsByte<Tunics::Type> Tunic;
    TEnumAsByte<Weapons::Type> Sword;

    void EquipItem();
    void PreConstruct(bool IsDesignTime);
    void Unselected();
    void Update(FInventory Item, bool Valid, bool Equipped, uint8 Tunic, uint8 Type, uint8 Sword, bool GrayedOut);
    void Selected();
    void ExecuteUbergraph_InventoryItem(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, UMaterialInterface* Temp_object_Variable, bool Temp_bool_Variable_2, UMaterialInterface* Temp_object_Variable_1, bool Temp_bool_Variable_3, UTexture2D* Temp_object_Variable_2, UTexture2D* Temp_object_Variable_3, ESlateVisibility Temp_byte_Variable, FText CallFunc_Conv_StringToText_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, bool K2Node_Event_IsDesignTime, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool Temp_bool_Variable_4, FText CallFunc_Conv_StringToText_ReturnValue_1, bool Temp_bool_Variable_5, FText CallFunc_Conv_StringToText_ReturnValue_2, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, bool Temp_bool_Variable_6, FInventory K2Node_CustomEvent_Item, bool K2Node_CustomEvent_Valid, bool K2Node_CustomEvent_Equipped, uint8 K2Node_CustomEvent_Tunic, uint8 K2Node_CustomEvent_Type, uint8 K2Node_CustomEvent_Sword, bool K2Node_CustomEvent_GrayedOut, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, FWeaponsInfo CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, FName CallFunc_Conv_StringToName_ReturnValue_1, FTunicsInfo CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, FText CallFunc_Conv_IntToText_ReturnValue, UMaterialInterface* K2Node_Select_Default, UMaterialInterface* K2Node_Select_Default_1, ESlateVisibility K2Node_Select_Default_2, ESlateVisibility K2Node_Select_Default_3, bool CallFunc_LessEqual_IntInt_ReturnValue, FString CallFunc_Conv_IntToString_ReturnValue, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2, FText CallFunc_Conv_StringToText_ReturnValue_3, FName CallFunc_Conv_StringToName_ReturnValue_2, FItem CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, UTexture2D* K2Node_Select_Default_4, FText K2Node_Select_Default_5, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, UMaterialInterface* Temp_object_Variable_4, UMaterialInterface* K2Node_Select_Default_6, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1);
}

#endif
