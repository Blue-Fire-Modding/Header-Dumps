#ifndef UE4SS_SDK_ControlsUI_PS_HPP
#define UE4SS_SDK_ControlsUI_PS_HPP

class UControlsUI_PS_C : UControlsUI_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UCanvasPanel* CanvasPanel_46;
    UControlsText_C* ControlsText_C_383;
    UControlsText_C* ControlsText_C_1308;
    UControlsText_C* ControlsText_C_1471;
    UControlsText_C* ControlsText_C_1867;
    UTextBlock* Disclaimer;
    UImage* Image_95;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void RefreshExtra();
    void ExecuteUbergraph_ControlsUI_PS(int32 EntryPoint, FText CallFunc_MakeLiteralText_ReturnValue, FText Temp_text_Variable, FString CallFunc_Conv_TextToString_ReturnValue, FText Temp_text_Variable_1, bool Temp_bool_Variable, FText Temp_text_Variable_2, FText Temp_text_Variable_3, bool K2Node_Event_IsDesignTime, FText CallFunc_MakeLiteralText_ReturnValue_1, FText CallFunc_MakeLiteralText_ReturnValue_2, FString CallFunc_Conv_TextToString_ReturnValue_1, FString CallFunc_Conv_TextToString_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, bool Temp_bool_Variable_1, bool CallFunc_GetGameInstanceReference_Success, UBlueFire_Game_Instance_C* CallFunc_GetGameInstanceReference_GameInstance, FText CallFunc_MakeLiteralText_ReturnValue_3, bool CallFunc_CheckGameInstanceFailed_Result, FString CallFunc_Conv_TextToString_ReturnValue_3, FString CallFunc_SelectString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_2, FText CallFunc_Conv_StringToText_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_3, FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_CheckGameInstanceFailed_Result_1, bool CallFunc_CheckGameInstanceFailed_Result_2, FText K2Node_Select_Default, FText K2Node_Select_Default_1);
}

#endif
