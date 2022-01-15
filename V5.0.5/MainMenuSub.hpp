#ifndef UE4SS_SDK_MainMenuSub_HPP
#define UE4SS_SDK_MainMenuSub_HPP

class AMainMenuSub_C : ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBlueFire_Game_Instance_C* BlueFireGameInstance;
    int32 Index;
    TArray<FString> OptionsCommands;
    FMainMenuSub_CCallPCGamepadSwitch CallPCGamepadSwitch;
    void CallPCGamepadSwitch();
    UPCGamePadUI_C* ControlUI;
    bool IgnoreFirst;
    UGameIntro_C* GameIntroUI;
    bool SaveGameExist;
    USaveGame* SaveGame;
    int32 Language Index;
    FString Language String;
    AGameMenuController_C* GameMenuController_2_ExecuteUbergraph_MainMenuSub_RefProperty;

    void Is PS4 or Xbox(bool& Result, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
    void InpActEvt_AnyKey_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_Nine_K2Node_InputKeyEvent_0(FKey Key);
    void Completed_89A2B5A247FDDF3E4BF0D7B96F3F6F45(USaveGame* SaveGame, bool bSuccess);
    void Completed_A29928B44AE942E5A63270AAA7B2E68B(USaveGame* SaveGame, bool bSuccess);
    void KeyCheck(const FKey& Key);
    void ReceiveEndPlay(uint8 EndPlayReason);
    void SetLanguage();
    void InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0(float AxisValue);
    void InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_1(float AxisValue);
    void UpdateMenuHUD();
    void OpenSettingsSave();
    void BackFromSettings();
    void FinishIntro();
    void ChangeStadiaController();
    void BindStadiaController();
    void ReceiveBeginPlay();
    void ApplySettings(bool Graphics);
    void Command();
    void ExecuteUbergraph_MainMenuSub(int32 EntryPoint, bool Temp_bool_Variable, const FKey K2Node_CustomEvent_Key, bool CallFunc_Key_IsGamepadKey_ReturnValue, float Temp_float_Variable, bool CallFunc_IsPackagedForDistribution_ReturnValue, float Temp_float_Variable_1, FString CallFunc_Concat_StrStr_ReturnValue, uint8 K2Node_Event_EndPlayReason, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsRobiValid_ReturnValue, FSave_GameSettings K2Node_MakeStruct_Save_GameSettings, bool K2Node_SwitchEnum_CmpSuccess_1, float Temp_float_Variable_2, float Temp_float_Variable_3, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, float K2Node_InputAxisKeyEvent_AxisValue_1, float K2Node_InputAxisKeyEvent_AxisValue, UGameInstance* CallFunc_GetGameInstance_ReturnValue, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_1, bool Temp_bool_Variable_1, bool CallFunc_IsRobiValid_ReturnValue_1, FKey K2Node_InputKeyEvent_Key_1, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Get_Language_Index_Index, int32 CallFunc_GetBlueFireLanguageBasic_Index, FString CallFunc_GetBlueFireLanguageBasic_Language, UBlueFireSaveGame_C* CallFunc_CreateSaveGameObject_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, bool Temp_bool_Variable_2, UPCGamePadUI_C* CallFunc_Create_ReturnValue, USaveGame* Temp_object_Variable, bool CallFunc_IsRobiValid_ReturnValue_2, bool Temp_bool_Variable_3, USaveGame* K2Node_CustomEvent_SaveGame, bool K2Node_CustomEvent_bSuccess, OnAsyncHandleSaveGame__DelegateSignature K2Node_CreateDelegate_OutputDelegate, USaveGame* Temp_object_Variable_1, UBlueFireSaveGame_C* CallFunc_CreateSaveGameObject_ReturnValue_1, USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, UAsyncActionHandleSaveGame* CallFunc_AsyncLoadGameFromSlot_ReturnValue, bool CallFunc_SaveGameToSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_DoesSaveGameExist_ReturnValue, bool Temp_bool_Variable_4, bool CallFunc_Get_Xbox_Force_Login_Force_Login, USaveGame* K2Node_CustomEvent_SaveGame_1, bool K2Node_CustomEvent_bSuccess_1, OnAsyncHandleSaveGame__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_Is_PS4_or_Xbox_Result, StadiaChangeController__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_Is_PS4_or_Xbox_Result_1, bool CallFunc_Is_PS4_or_Xbox_Result_2, bool CallFunc_Is_PS4_or_Xbox_Result_3, UBlueFireSaveGame_C* K2Node_DynamicCast_AsBlue_Fire_Save_Game, bool K2Node_DynamicCast_bSuccess_2, bool Temp_bool_Has_Been_Initd_Variable, Finish__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, bool Temp_bool_Variable_5, bool CallFunc_Is_PS4_or_Xbox_Result_4, bool K2Node_Select_Default, UAsyncActionHandleSaveGame* CallFunc_AsyncLoadGameFromSlot_ReturnValue_1, UBlueFireSaveGame_C* K2Node_DynamicCast_AsBlue_Fire_Save_Game_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_SaveGameToSlot_ReturnValue_1, USaveGame* CallFunc_LoadGameFromSlot_ReturnValue_1, bool Temp_bool_IsClosed_Variable, UGameIntro_C* CallFunc_Create_ReturnValue_1, SaveSettings__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FSave_GameSettings K2Node_MakeStruct_Save_GameSettings_1, UGameMenu_C* CallFunc_Create_ReturnValue_2, bool CallFunc_SetCurrentLanguage_ReturnValue, UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, TArray<FString>& K2Node_MakeArray_Array, bool K2Node_CustomEvent_Graphics, TArray<FString>& K2Node_MakeArray_Array_1, TArray<FString>& K2Node_MakeArray_Array_2, TArray<FString>& K2Node_MakeArray_Array_3, TArray<FString>& K2Node_MakeArray_Array_4, TArray<FString>& K2Node_MakeArray_Array_5, TArray<FString>& K2Node_MakeArray_Array_6, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 K2Node_Select_Default_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float K2Node_Select_Default_2, FString CallFunc_Get_Language_String_String, FString K2Node_Select_Default_3, bool CallFunc_SetCurrentLanguage_ReturnValue_1, CallPCGamepadSwitch__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, FKey K2Node_InputKeyEvent_Key, uint8 Temp_byte_Variable, FString CallFunc_Array_Get_Item, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, uint8 K2Node_Select_Default_4, bool K2Node_Select_Default_5);
    void CallPCGamepadSwitch__DelegateSignature();
}

#endif
