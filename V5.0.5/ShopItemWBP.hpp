#ifndef UE4SS_SDK_ShopItemWBP_HPP
#define UE4SS_SDK_ShopItemWBP_HPP

class UShopItemWBP_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* Amount;
    UTextBlock* Cost;
    UImage* Image_5;
    UImage* Image_124;
    UImage* Image_199;
    UImage* ItemFrame;
    UImage* ItemImage;
    UTextBlock* Name;
    UImage* SimpleGlow;

    void Selected();
    void Unselected();
    void NotFound();
    void SetItemInfo(UMaterialInterface* Material, FText Name);
    void Update(FInventory Item);
    void ExecuteUbergraph_ShopItemWBP(int32 EntryPoint, UMaterialInterface* K2Node_CustomEvent_Material, FText K2Node_CustomEvent_Name, FText Temp_text_Variable, FInventory K2Node_CustomEvent_Item, FText CallFunc_Conv_IntToText_ReturnValue, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, FSpiritsInfo CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue_1, FWeaponsInfo CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2, FName CallFunc_Conv_StringToName_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, FTunicsInfo CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue_1, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_3, bool Temp_bool_Variable, FName CallFunc_Conv_StringToName_ReturnValue_3, FItem CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, FText K2Node_Select_Default);
}

#endif
