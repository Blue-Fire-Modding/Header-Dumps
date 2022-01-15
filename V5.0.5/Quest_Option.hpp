#ifndef UE4SS_SDK_Quest_Option_HPP
#define UE4SS_SDK_Quest_Option_HPP

class UQuest_Option_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* Description;
    UImage* Image_0;
    UImage* Image_50;
    UImage* Image_115;
    UTextBlock* Name;
    USizeBox* SizeBox_0;
    TEnumAsByte<Quests::Type> Quest;
    FQuest_Struct QuestStruct;
    bool IsLocked;

    void Build(FSaveQuest_Struct QuestStruct);
    void Select();
    void Unselect();
    void Locked();
    void PreConstruct(bool IsDesignTime);
    void QuestCompletedUI(ESlateVisibility InVisibility);
    void ExecuteUbergraph_Quest_Option(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, FSaveQuest_Struct K2Node_CustomEvent_QuestStruct, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue, FQuest_Struct CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool K2Node_Event_IsDesignTime, FText CallFunc_MakeLiteralText_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1, ESlateVisibility K2Node_CustomEvent_InVisibility, FQuest_Struct K2Node_MakeStruct_Quest_Struct, FQuest_Struct K2Node_MakeStruct_Quest_Struct_1, FLinearColor CallFunc_SelectColor_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, FString CallFunc_Left_ReturnValue, int32 CallFunc_Len_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, FText K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1);
}

#endif
