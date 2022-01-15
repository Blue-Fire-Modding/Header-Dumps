#ifndef UE4SS_SDK_ControlsUI_ProSwitch_HPP
#define UE4SS_SDK_ControlsUI_ProSwitch_HPP

class UControlsUI_ProSwitch_C : UControlsUI_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UCanvasPanel* CanvasPanel_46;
    UControlsText_C* ControlsText_C_383;
    UControlsText_C* ControlsText_C_1308;
    UControlsText_C* ControlsText_C_1471;
    UTextBlock* Disclaimer;
    UImage* Image_95;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void RefreshExtra();
    void ExecuteUbergraph_ControlsUI_ProSwitch(int32 EntryPoint, bool CallFunc_GetGameInstanceReference_Success, UBlueFire_Game_Instance_C* CallFunc_GetGameInstanceReference_GameInstance, FText Temp_text_Variable, FText Temp_text_Variable_1, bool CallFunc_CheckGameInstanceFailed_Result, bool CallFunc_CheckGameInstanceFailed_Result_1, bool CallFunc_CheckGameInstanceFailed_Result_2, bool Temp_bool_Variable, FText Temp_text_Variable_2, FText Temp_text_Variable_3, bool K2Node_Event_IsDesignTime, FText K2Node_Select_Default, FText CallFunc_MakeLiteralText_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue_1, FString CallFunc_Conv_TextToString_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FString CallFunc_SelectString_ReturnValue, bool Temp_bool_Variable_1, FText CallFunc_Conv_StringToText_ReturnValue, FText K2Node_Select_Default_1);
}

#endif
