#ifndef UE4SS_SDK_DebugGamePorcentage_HPP
#define UE4SS_SDK_DebugGamePorcentage_HPP

class UDebugGamePorcentage_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* Chunk;
    UPercentDebug_C* PercentDebug;
    UPercentDebug_C* PercentDebug_70;
    UPercentDebug_C* PercentDebug_136;
    UPercentDebug_C* PercentDebug_179;
    UWrapBox* WrapBox_1;
    TArray<FString> All Levels;
    TArray<FString> Visible Levels;
    UBlueFire_Game_Instance_C* Game Instance;

    void Update(float Current, float Total, int32 CurrentInt);
    void Construct();
    void UpdatePercent();
    void ExecuteUbergraph_DebugGamePorcentage(int32 EntryPoint, UPercentDebug_C* CallFunc_Create_ReturnValue, UPanelSlot* CallFunc_AddChild_ReturnValue, int32 Temp_int_Array_Index_Variable, float K2Node_CustomEvent_current, float K2Node_CustomEvent_Total, int32 K2Node_CustomEvent_CurrentInt, int32 Temp_int_Loop_Counter_Variable, FString CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FString CallFunc_Conv_FloatToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, UGameInstance* CallFunc_GetGameInstance_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_2, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance, bool K2Node_DynamicCast_bSuccess, FString CallFunc_Concat_StrStr_ReturnValue_3, FString CallFunc_Concat_StrStr_ReturnValue_4, FText CallFunc_Conv_StringToText_ReturnValue, FString CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue);
}

#endif
