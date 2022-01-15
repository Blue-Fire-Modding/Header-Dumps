#ifndef UE4SS_SDK_DebugLevel_HPP
#define UE4SS_SDK_DebugLevel_HPP

class UDebugLevel_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* Chunk;
    UTextBlock* VisibleLevels;
    TArray<FString> All Levels;
    TArray<FString> Visible Levels;

    void Update(const uint8 Chunk, const FName Void Name, const TArray<FName>& Custom Names);
    void ExecuteUbergraph_DebugLevel(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, const uint8 K2Node_CustomEvent_Chunk, const FName K2Node_CustomEvent_Void_Name, const TArray<FName>& K2Node_CustomEvent_Custom_Names, FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue, TArray<FString>& K2Node_MakeArray_Array, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue_3, FString CallFunc_Concat_StrStr_ReturnValue_4, FString CallFunc_Concat_StrStr_ReturnValue_5, TArray<FName>& CallFunc_GetLevelsToLoadFromChunk_All_Levels, FString CallFunc_Concat_StrStr_ReturnValue_6, int32 CallFunc_Array_Length_ReturnValue_1, FText CallFunc_Conv_StringToText_ReturnValue, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_3, FString CallFunc_JoinStringArray_ReturnValue, FString CallFunc_JoinStringArray_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_7, FString CallFunc_Concat_StrStr_ReturnValue_8, TArray<FName>& CallFunc_GetAllStreamingLevels_All_Streaming_Levels, FString CallFunc_Concat_StrStr_ReturnValue_9, FName CallFunc_Array_Get_Item_1, FString CallFunc_Concat_StrStr_ReturnValue_10, ULevelStreaming* CallFunc_GetStreamingLevel_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_3, FString CallFunc_JoinStringArray_ReturnValue_2, FName CallFunc_Array_Get_Item_2, FString CallFunc_Concat_StrStr_ReturnValue_11, FString CallFunc_Conv_NameToString_ReturnValue_3, FText CallFunc_Conv_StringToText_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<FName>& CallFunc_GetAllStreamingLevels_All_Streaming_Levels_1, FName CallFunc_Array_Get_Item_3, ULevelStreaming* CallFunc_GetStreamingLevel_ReturnValue_1, FString CallFunc_Conv_NameToString_ReturnValue_4, bool CallFunc_IsRobiValid_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3);
}

#endif