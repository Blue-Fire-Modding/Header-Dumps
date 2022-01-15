#ifndef UE4SS_SDK_BlueFireHud_HPP
#define UE4SS_SDK_BlueFireHud_HPP

class ABlueFireHud_C : AHUD
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* DefaultSceneRoot;
    UBlueFire_Game_Instance_C* GameInstance;
    FString Text;

    void Set Void Debugger(bool bEnable, UBlueFire_Game_Instance_C* Game Instance);
    void ReceiveDrawHUD(int32 SizeX, int32 SizeY);
    void ExecuteUbergraph_BlueFireHud(int32 EntryPoint, int32 Temp_int_Variable, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_CustomEvent_bEnable, UBlueFire_Game_Instance_C* K2Node_CustomEvent_Game_Instance, FGodStone_Structure CallFunc_Array_Get_Item, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2, FText CallFunc_Conv_BoolToText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_3, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_4, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, int32 K2Node_Event_SizeX, int32 K2Node_Event_SizeY, FString CallFunc_Concat_StrStr_ReturnValue);
}

#endif
