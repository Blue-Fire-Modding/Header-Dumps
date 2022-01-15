#ifndef UE4SS_SDK_FileSelect_HPP
#define UE4SS_SDK_FileSelect_HPP

class UFileSelect_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Beira;
    UTextBlock* Currency;
    UImage* DarkVon;
    UImage* DifficultyImg;
    UTextBlock* FileIndex;
    UWrapBox* FireGuardianJournalWrapBox;
    UImage* GameWin;
    UImage* Image_0;
    UImage* Image_221;
    UTextBlock* Location;
    UCanvasPanel* Newslot;
    UImage* Nuos;
    UTextBlock* Percentage;
    UImage* Queen;
    UImage* Samael;
    UImage* SanctuaryStone;
    UImage* Sirion;
    UTextBlock* TextBlock_115;
    UTextBlock* TimeElapsed;
    UImage* Uthas;
    UImage* Voids;
    UWidgetSwitcher* WidgetSwitcher_1;
    int32 Percent;

    void IsEmpty(bool& Empty, UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
    void RemoveMainEvent(const FString ItemToFind, UWidget* Target);
    void CustomConstruct(int32 Index, UBlueFireSaveGame_C* SaveObject);
    void SetIndex(int32 Index);
    void NoExistSaveFile(int32 inInt);
    void ExecuteUbergraph_FileSelect(int32 EntryPoint, int32 Temp_int_Variable, UTexture2D* Temp_object_Variable, UTexture2D* Temp_object_Variable_1, UTexture2D* Temp_object_Variable_2, bool Temp_bool_Variable, bool Temp_bool_Variable_1, const FString K2Node_CustomEvent_ItemToFind, UWidget* K2Node_CustomEvent_Target, int32 K2Node_CustomEvent_Index_1, UBlueFireSaveGame_C* K2Node_CustomEvent_SaveObject, bool Temp_bool_Variable_2, FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, FString CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, TArray<FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, FString CallFunc_Array_Get_Item, FString CallFunc_Array_Get_Item_1, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue_3, FString CallFunc_Concat_StrStr_ReturnValue_4, FString CallFunc_Array_Get_Item_2, FString CallFunc_Array_Get_Item_3, FString CallFunc_Concat_StrStr_ReturnValue_5, FString CallFunc_Concat_StrStr_ReturnValue_6, FString CallFunc_Concat_StrStr_ReturnValue_7, FString CallFunc_Concat_StrStr_ReturnValue_8, FString CallFunc_Array_Get_Item_4, FString CallFunc_Concat_StrStr_ReturnValue_9, bool CallFunc_EqualEqual_IntInt_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_10, FString CallFunc_Concat_StrStr_ReturnValue_11, FString K2Node_Select_Default, FString CallFunc_Conv_FloatToString_ReturnValue, FString K2Node_Select_Default_1, TArray<FString>& CallFunc_ParseIntoArray_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_12, FString CallFunc_Array_Get_Item_5, FString CallFunc_Array_Get_Item_6, FString CallFunc_Concat_StrStr_ReturnValue_13, TArray<FString>& CallFunc_GetCharacterArrayFromString_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue, FString CallFunc_Array_Get_Item_7, FString CallFunc_Array_Get_Item_8, FString CallFunc_Concat_StrStr_ReturnValue_14, FString CallFunc_Concat_StrStr_ReturnValue_15, float CallFunc_Divide_FloatFloat_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_16, float CallFunc_Divide_FloatFloat_ReturnValue_1, FString K2Node_Select_Default_2, int32 CallFunc_FFloor_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, FString CallFunc_Conv_IntToString_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_17, int32 CallFunc_FFloor_ReturnValue_1, FString CallFunc_Conv_IntToString_ReturnValue_2, FText CallFunc_Conv_StringToText_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_18, FString CallFunc_Concat_StrStr_ReturnValue_19, FText CallFunc_Conv_StringToText_ReturnValue_2, FText CallFunc_Conv_IntToText_ReturnValue_1, UTexture2D* K2Node_Select_Default_3, int32 K2Node_CustomEvent_Index, int32 K2Node_CustomEvent_InInt, FText CallFunc_Conv_IntToText_ReturnValue_2);
}

#endif
