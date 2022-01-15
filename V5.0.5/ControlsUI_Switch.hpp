#ifndef UE4SS_SDK_ControlsUI_Switch_HPP
#define UE4SS_SDK_ControlsUI_Switch_HPP

class UControlsUI_Switch_C : UControlsUI_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UCanvasPanel* CanvasPanel_46;
    UControlsText_C* ControlsText_C_383;
    UControlsText_C* ControlsText_C_1308;
    UControlsText_C* ControlsText_C_1471;
    UImage* Image_95;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void RefreshExtra();
    void ExecuteUbergraph_ControlsUI_Switch(int32 EntryPoint, bool CallFunc_GetGameInstanceReference_Success, UBlueFire_Game_Instance_C* CallFunc_GetGameInstanceReference_GameInstance, bool Temp_bool_Variable, FText Temp_text_Variable, bool CallFunc_CheckGameInstanceFailed_Result, bool CallFunc_CheckGameInstanceFailed_Result_1, bool CallFunc_CheckGameInstanceFailed_Result_2, FText Temp_text_Variable_1, bool Temp_bool_Variable_1, FText K2Node_Select_Default, FText Temp_text_Variable_2, FText Temp_text_Variable_3, FText K2Node_Select_Default_1, bool K2Node_Event_IsDesignTime, FText CallFunc_MakeLiteralText_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue_1, FString CallFunc_Conv_TextToString_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FString CallFunc_SelectString_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue);
}

#endif