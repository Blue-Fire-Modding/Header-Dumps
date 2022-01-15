#ifndef UE4SS_SDK_GameMenuController_HPP
#define UE4SS_SDK_GameMenuController_HPP

class AGameMenuController_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UMediaSoundComponent* MediaSound;
    USceneComponent* DefaultSceneRoot;
    float FadeTimeline_Sun_6DAFEE8F4E548469CDD1178F8187EB82;
    TEnumAsByte<ETimelineDirection::Type> FadeTimeline__Direction_6DAFEE8F4E548469CDD1178F8187EB82;
    UTimelineComponent* FadeTimeline;
    UGameMenu_C* GameMenu;
    bool SelectedPlay;
    UBlueFireSaveGame_C* SaveGameObject;
    bool Right;
    bool Up;
    FString DemoBuildVersion;
    FString BuildVersion;
    bool NewGame;
    bool Demo;
    bool TrailerOn;
    bool SkipIntroScreens;
    UBlueFire_Game_Instance_C* GameInstance;
    AStaticMeshActor* Sun;
    UMaterialInstanceDynamic* SunMaterial;
    FGameMenuController_CSaveSettings SaveSettings;
    void SaveSettings();
    bool MasterLoaded;
    UObject* LevelMaster;
    bool SaveGameExist;
    USaveGame* SaveGame;
    USaveGame* TempOptionGame;

    void Is PS4 or Xbox(bool& Result, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
    void FadeTimeline__FinishedFunc();
    void FadeTimeline__UpdateFunc();
    void InpActEvt_DeleteSaveSlot_K2Node_InputActionEvent_12(FKey Key);
    void InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_6(FKey Key);
    void InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_5(FKey Key);
    void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_4(FKey Key);
    void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_3(FKey Key);
    void InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_2(FKey Key);
    void InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_AnyKey_K2Node_InputKeyEvent_0(FKey Key);
    void InpActEvt_Gamepad_Confirm_K2Node_InputActionEvent_11(FKey Key);
    void InpActEvt_PC_Confirm_K2Node_InputActionEvent_10(FKey Key);
    void InpActEvt_Generic_Left_K2Node_InputActionEvent_9(FKey Key);
    void InpActEvt_Generic_Right_K2Node_InputActionEvent_8(FKey Key);
    void InpActEvt_Generic_Down_K2Node_InputActionEvent_7(FKey Key);
    void InpActEvt_Generic_Down_K2Node_InputActionEvent_6(FKey Key);
    void InpActEvt_Generic_Up_K2Node_InputActionEvent_5(FKey Key);
    void InpActEvt_Generic_Up_K2Node_InputActionEvent_4(FKey Key);
    void InpActEvt_PC_Back_K2Node_InputActionEvent_3(FKey Key);
    void InpActEvt_Gamepad_Back_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_PC_Interact_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Gamepad_Special_Pause_K2Node_InputActionEvent_0(FKey Key);
    void OnLoaded_5106C1734EE783986C84129805CC72ED(UObject* Loaded);
    void Completed_3E3B256E434E472499772286EE6D7E27(USaveGame* SaveGame, bool bSuccess);
    void Completed_FD327A2844E9BCDB5CFC04BF84BC3573(USaveGame* SaveGame, bool bSuccess);
    void Xbox Logout();
    void ChangeSelection(bool Up, uint8 Direction);
    void Active();
    void ReceiveBeginPlay();
    void CreateSaveGameObject();
    void DownKey();
    void UpKey();
    void SetMoveInputTimer();
    void ClearSetMoveInputTimer();
    void Xbox Change User();
    void StartGame();
    void Xbox Set User Name();
    void Xbox Bind Events();
    void StartNewGame(int32 DemoPart);
    void InpAxisEvt_Generic_Motion_X_Axis_K2Node_InputAxisEvent_1(float AxisValue);
    void CancelWrite();
    void FadeSun(bool FadeIn);
    void PS4 Retry Master();
    void LaunchURL Discord();
    void ExecuteUbergraph_GameMenuController(int32 EntryPoint, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, OnAsyncHandleSaveGame__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, USaveGame* K2Node_CustomEvent_SaveGame_1, bool K2Node_CustomEvent_bSuccess_1, bool Temp_bool_Variable, USaveGame* Temp_object_Variable, bool Temp_bool_Variable_1, SoftObjectProperty Temp_softobject_Variable, SoftObjectProperty Temp_softobject_Variable_1, bool Temp_bool_Variable_2, FName Temp_name_Variable, FName Temp_name_Variable_1, bool Temp_bool_Variable_3, FString Temp_string_Variable, bool Temp_bool_Variable_4, FString Temp_string_Variable_1, uint8 Temp_byte_Variable, FString Temp_string_Variable_2, FString Temp_string_Variable_3, FString Temp_string_Variable_4, OnAsyncHandleSaveGame__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, USaveGame* K2Node_CustomEvent_SaveGame, bool K2Node_CustomEvent_bSuccess, bool Temp_bool_Variable_5, USaveGame* Temp_object_Variable_1, bool Temp_bool_Variable_6, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool CallFunc_IsRobiValid_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool K2Node_CustomEvent_Up, uint8 K2Node_CustomEvent_Direction, UPlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess, OnXboxChangeUser__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, bool K2Node_SwitchInteger_CmpSuccess_1, bool CallFunc_IsRobiValid_ReturnValue_2, bool K2Node_SwitchInteger_CmpSuccess_2, bool K2Node_SwitchInteger_CmpSuccess_3, bool K2Node_SwitchInteger_CmpSuccess_4, bool K2Node_SwitchInteger_CmpSuccess_5, bool K2Node_SwitchInteger_CmpSuccess_6, bool Temp_bool_IsClosed_Variable, bool K2Node_SwitchInteger_CmpSuccess_7, bool CallFunc_IsRobiValid_ReturnValue_3, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, int32 Temp_int_Variable_2, bool K2Node_SwitchInteger_CmpSuccess_8, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsRobiValid_ReturnValue_4, int32 Temp_int_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue, FString CallFunc_Conv_IntToString_ReturnValue, UObject* Temp_object_Variable_2, FString CallFunc_Concat_StrStr_ReturnValue, FSave_System K2Node_MakeStruct_Save_System, FSave_System K2Node_MakeStruct_Save_System_1, bool CallFunc_IsRobiValid_ReturnValue_5, int32 K2Node_Select_Default, UObject* K2Node_CustomEvent_Loaded, bool K2Node_SwitchInteger_CmpSuccess_9, bool K2Node_SwitchInteger_CmpSuccess_10, int32 Temp_int_Variable_4, UGameInstance* CallFunc_GetGameInstance_ReturnValue, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_IntInt_ReturnValue_1, bool Temp_bool_Variable_7, bool CallFunc_IsRobiValid_ReturnValue_6, UBlueFireSaveGame_C* CallFunc_CreateSaveGameObject_ReturnValue, UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_1, FSave_WorldStats K2Node_MakeStruct_Save_WorldStats, FString Temp_string_Variable_5, FString Temp_string_Variable_6, bool Temp_bool_Variable_8, int32 CallFunc_GetXboxType_ReturnValue, FString CallFunc_Conv_IntToString_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, FString K2Node_Select_Default_1, int32 Temp_int_Variable_5, int32 Temp_int_Variable_6, int32 Temp_int_Variable_7, int32 K2Node_CustomEvent_DemoPart, bool K2Node_SwitchInteger_CmpSuccess_11, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 Temp_int_Variable_8, FKey K2Node_InputActionEvent_Key, uint8 Temp_byte_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<uint8>& K2Node_MakeArray_Array, TArray<uint8>& K2Node_MakeArray_Array_1, TArray<uint8>& K2Node_MakeArray_Array_2, TArray<uint8>& K2Node_MakeArray_Array_3, TArray<FBossSoul>& K2Node_MakeArray_Array_4, FPlayer_Equipment K2Node_MakeStruct_Player_Equipment, TArray<FGodStone_Structure>& K2Node_MakeArray_Array_5, TArray<uint8>& K2Node_MakeArray_Array_6, uint8 Temp_byte_Variable_2, UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance_2, bool K2Node_DynamicCast_bSuccess_2, bool Temp_bool_Variable_9, UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, uint8 K2Node_Select_Default_2, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance_3, bool K2Node_DynamicCast_bSuccess_3, UGameInstance* CallFunc_GetGameInstance_ReturnValue_4, UGameInstance* CallFunc_GetGameInstance_ReturnValue_5, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance_4, bool K2Node_DynamicCast_bSuccess_4, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance_5, bool K2Node_DynamicCast_bSuccess_5, TArray<uint8>& K2Node_MakeArray_Array_7, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue_4, int32 CallFunc_PostEventAtLocation_ReturnValue_5, FKey K2Node_InputActionEvent_Key_1, int32 Temp_int_Variable_9, float K2Node_InputAxisEvent_AxisValue, float CallFunc_GetInputAxisValue_ReturnValue, float CallFunc_GetInputAxisValue_ReturnValue_1, float CallFunc_Abs_ReturnValue, float CallFunc_Abs_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, int32 Temp_int_Variable_10, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Variable_11, UGameInstance* CallFunc_GetGameInstance_ReturnValue_6, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance_6, bool K2Node_DynamicCast_bSuccess_6, FKey K2Node_InputActionEvent_Key_2, int32 Temp_int_Variable_12, int32 Temp_int_Variable_13, int32 K2Node_Select_Default_3, bool Temp_bool_IsClosed_Variable_1, FKey K2Node_InputActionEvent_Key_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, FKey K2Node_InputActionEvent_Key_12, FString Temp_string_Variable_7, int32 CallFunc_PostEventAtLocation_ReturnValue_6, int32 CallFunc_PostEventAtLocation_ReturnValue_7, FText CallFunc_GetText_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, FKey Temp_struct_Variable, int32 CallFunc_PostEventAtLocation_ReturnValue_8, bool K2Node_CustomEvent_FadeIn, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, FInventory K2Node_MakeStruct_Inventory, TArray<FInventory>& K2Node_MakeArray_Array_8, int32 CallFunc_MakeLiteralInt_ReturnValue, FInventory K2Node_MakeStruct_Inventory_1, TArray<FInventory>& K2Node_MakeArray_Array_9, FSave_PlayerStats K2Node_MakeStruct_Save_PlayerStats, FString K2Node_Select_Default_4, FKey K2Node_InputActionEvent_Key_4, FSave_WorldStats K2Node_MakeStruct_Save_WorldStats_1, int32 CallFunc_PostEventAtLocation_ReturnValue_9, FString Temp_string_Variable_8, int32 CallFunc_PostEventAtLocation_ReturnValue_10, FKey K2Node_InputActionEvent_Key_5, bool CallFunc_IsRobiValid_ReturnValue_7, FString CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess_12, FString CallFunc_Concat_StrStr_ReturnValue_4, UAsyncActionHandleSaveGame* CallFunc_AsyncLoadGameFromSlot_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, bool CallFunc_DoesSaveGameExist_ReturnValue, FKey Temp_struct_Variable_1, FKey K2Node_InputActionEvent_Key_6, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_Variable_10, FString K2Node_Select_Default_5, int32 CallFunc_PostEventAtLocation_ReturnValue_11, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_1, FKey K2Node_InputActionEvent_Key_7, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue, FKey K2Node_InputActionEvent_Key_8, FKey K2Node_InputActionEvent_Key_9, bool CallFunc_Key_IsGamepadKey_ReturnValue, bool CallFunc_Key_IsGamepadKey_ReturnValue_1, FKey K2Node_InputActionEvent_Key_10, FKey K2Node_InputActionEvent_Key_11, int32 CallFunc_PostEventAtLocation_ReturnValue_12, bool CallFunc_IsRobiValid_ReturnValue_8, OnXboxLogout__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, SoftObjectProperty K2Node_Select_Default_6, FSave_PlayerAbilities K2Node_MakeStruct_Save_PlayerAbilities, FName K2Node_Select_Default_7, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool CallFunc_Is_PS4_or_Xbox_Result, bool CallFunc_Not_PreBool_ReturnValue, FKey K2Node_InputKeyEvent_Key, bool CallFunc_Is_PS4_or_Xbox_Result_1, UBlueFireSaveGame_C* K2Node_DynamicCast_AsBlue_Fire_Save_Game, bool K2Node_DynamicCast_bSuccess_7, FSave_WorldStats K2Node_MakeStruct_Save_WorldStats_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, OnAssetLoaded__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, float CallFunc_Multiply_FloatFloat_ReturnValue, FString CallFunc_GetPlatformName_ReturnValue, int32 CallFunc_FCeil_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_5, int32 K2Node_Select_Default_8, FString CallFunc_Concat_StrStr_ReturnValue_6, FSave_GameStats K2Node_MakeStruct_Save_GameStats, FKey Temp_struct_Variable_2, int32 CallFunc_PostEventAtLocation_ReturnValue_13, int32 CallFunc_PostEventAtLocation_ReturnValue_14, FKey K2Node_InputKeyEvent_Key_1, FString CallFunc_MakeLiteralString_ReturnValue, FString CallFunc_MakeLiteralString_ReturnValue_1, FKey K2Node_InputKeyEvent_Key_2, FString K2Node_Select_Default_9, FString CallFunc_Concat_StrStr_ReturnValue_7, FKey Temp_struct_Variable_3, FKey K2Node_InputKeyEvent_Key_3, FKey K2Node_InputKeyEvent_Key_4, UWidget* CallFunc_GetChildAt_ReturnValue, UFileSelect_C* K2Node_DynamicCast_AsFile_Select, bool K2Node_DynamicCast_bSuccess_8, bool CallFunc_IsEmpty_Empty, UWidget* CallFunc_GetChildAt_ReturnValue_1, UGameMenuTitle_C* K2Node_DynamicCast_AsGame_Menu_Title, bool K2Node_DynamicCast_bSuccess_9, UWidget* CallFunc_GetChildAt_ReturnValue_2, bool K2Node_SwitchString_CmpSuccess, UFileSelect_C* K2Node_DynamicCast_AsFile_Select_1, bool K2Node_DynamicCast_bSuccess_10, bool CallFunc_IsEmpty_Empty_1, bool CallFunc_IsRobiValid_ReturnValue_9, FKey K2Node_InputKeyEvent_Key_5, FKey K2Node_InputKeyEvent_Key_6, bool CallFunc_Is_PS4_or_Xbox_Result_2, OnXboxSetUserName__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, int32 CallFunc_Add_IntInt_ReturnValue_2, FString CallFunc_Conv_IntToString_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue_8, FString CallFunc_GetDefaultLanguage_ReturnValue, UAsyncActionHandleSaveGame* CallFunc_AsyncLoadGameFromSlot_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_9, FString K2Node_Select_Default_10, FString CallFunc_Concat_StrStr_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_11, USaveGame* CallFunc_LoadGameFromSlot_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_15, int32 CallFunc_PostEventAtLocation_ReturnValue_16, int32 CallFunc_PostEventAtLocation_ReturnValue_17, int32 CallFunc_PostEventAtLocation_ReturnValue_18);
    void SaveSettings__DelegateSignature();
}

#endif
