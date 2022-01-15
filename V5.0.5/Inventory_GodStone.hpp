#ifndef UE4SS_SDK_Inventory_GodStone_HPP
#define UE4SS_SDK_Inventory_GodStone_HPP

class UInventory_GodStone_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Background;
    UImage* Border;
    UTextBlock* CollectedTime;
    UImage* CounterImg;
    UTextBlock* CounterTxt;
    UTextBlock* GodStoneName;
    USizeBox* SizeBox_0;
    UTextBlock* TextBlock_3;
    bool IsDLC;
    bool IsChainsBreaking;

    void Collected(FText Name, bool Collected, FText Time, UTexture2D* Texture, int32 Shards, bool IsDLC);
    void PreConstruct(bool IsDesignTime);
    void Selected();
    void Unselected();
    void ExecuteUbergraph_Inventory_GodStone(int32 EntryPoint, bool Temp_bool_Variable, FText Temp_text_Variable, FText Temp_text_Variable_1, bool Temp_bool_Variable_1, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_2, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_3, FLinearColor Temp_struct_Variable, bool Temp_bool_Variable_4, FLinearColor Temp_struct_Variable_1, FLinearColor Temp_struct_Variable_2, bool Temp_bool_Variable_5, FString Temp_string_Variable, FString Temp_string_Variable_1, FText K2Node_CustomEvent_Name, bool K2Node_CustomEvent_Collected, FText K2Node_CustomEvent_Time, UTexture2D* K2Node_CustomEvent_Texture, int32 K2Node_CustomEvent_Shards, bool K2Node_CustomEvent_IsDLC, FString K2Node_Select_Default, FString CallFunc_Conv_IntToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FText K2Node_Select_Default_1, FText CallFunc_Conv_StringToText_ReturnValue, bool K2Node_Event_IsDesignTime, float K2Node_Select_Default_2, bool CallFunc_BooleanAND_ReturnValue, FLinearColor K2Node_Select_Default_3, FLinearColor K2Node_Select_Default_4, ESlateVisibility K2Node_Select_Default_5, FText CallFunc_Conv_StringToText_ReturnValue_1);
}

#endif
