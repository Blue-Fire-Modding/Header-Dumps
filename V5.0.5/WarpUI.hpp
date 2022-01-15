#ifndef UE4SS_SDK_WarpUI_HPP
#define UE4SS_SDK_WarpUI_HPP

class UWarpUI_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Image_69;
    UImage* Image_86;
    UImage* Image_161;
    USelectCommands_C* SelectCommands;
    UWarpOption_C* WarpOption;
    UWarpOption_C* WarpOption_39;
    UWarpOption_C* WarpOption_77;
    UWarpOption_C* WarpOption_93;
    UWarpOption_C* WarpOption_174;
    UWarpOption_C* WarpOption_367;
    UWarpOption_C* WarpOption_842;
    UWarpOption_C* WarpOption_VoidGate;
    UWrapBox* WrapBox_99;
    int32 Index;
    APlayer_Character_BP_C* Player;
    UBlueFire_Game_Instance_C* GameInstance;
    TArray<FString> Options;
    TArray<UWarpOption_C*> CheckPointOptions;
    AWarpUIController_C* Controller;
    bool HasCheckpoint;
    TArray<TEnumAsByte<CheckPoints::Type>> CheckPointsArray;
    TArray<FName> TempVisibleAreas;
    FWarpUI_CRemove Call Remove Call;
    void Remove Call();

    void SetCheckpoints();
    void MoveSelection(const bool Down, bool RefreshOnly);
    void Construct();
    void PCGamepadChange(uint8 Platform);
    void Confirm();
    void Back();
    void Remove();
    void ExitWarp();
    void ExecuteUbergraph_WarpUI(int32 EntryPoint, int32 CallFunc_PostEventAtLocation_ReturnValue, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, uint8 Temp_byte_Variable_2, uint8 Temp_byte_Variable_3, uint8 Temp_byte_Variable_4, uint8 Temp_byte_Variable_5, uint8 Temp_byte_Variable_6, uint8 Temp_byte_Variable_7, uint8 Temp_byte_Variable_8, uint8 Temp_byte_Variable_9, uint8 Temp_byte_Variable_10, uint8 Temp_byte_Variable_11, uint8 Temp_byte_Variable_12, uint8 Temp_byte_Variable_13, uint8 Temp_byte_Variable_14, uint8 Temp_byte_Variable_15, uint8 Temp_byte_Variable_16, uint8 Temp_byte_Variable_17, uint8 Temp_byte_Variable_18, uint8 Temp_byte_Variable_19, UMessage_PopUp_C* CallFunc_Create_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_1, const bool K2Node_CustomEvent_Down, bool K2Node_CustomEvent_RefreshOnly, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, UGameInstance* CallFunc_GetGameInstance_ReturnValue, int32 Temp_int_Loop_Counter_Variable, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue_1, APawn* CallFunc_GetPlayerPawn_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_3, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess_1, uint8 K2Node_CustomEvent_Platform, int32 CallFunc_PostEventAtLocation_ReturnValue_4, bool Temp_bool_Variable_2, bool CallFunc_Not_PreBool_ReturnValue_2, int32 CallFunc_GetChildrenCount_ReturnValue, uint8 CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, AWarpUIController_C* CallFunc_FinishSpawningActor_ReturnValue, int32 Temp_int_Variable_1, UWidget* CallFunc_GetChildAt_ReturnValue, UWarpOption_C* K2Node_DynamicCast_AsWarp_Option, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Variable_2, UWidget* CallFunc_GetChildAt_ReturnValue_1, const FText Temp_text_Variable, UWarpOption_C* K2Node_DynamicCast_AsWarp_Option_1, bool K2Node_DynamicCast_bSuccess_3, UWidget* CallFunc_GetChildAt_ReturnValue_2, FTransform CallFunc_MakeTransform_ReturnValue_1, UWarpOption_C* K2Node_DynamicCast_AsWarp_Option_2, bool K2Node_DynamicCast_bSuccess_4, uint8 K2Node_Select_Default, TArray<FName>& CallFunc_GetVisibleAreasFromCheckpoint_Visible_Areas, uint8 K2Node_Select_Default_1, FCheckpointInformation K2Node_MakeStruct_CheckpointInformation, FSave_WorldStats K2Node_MakeStruct_Save_WorldStats, int32 Temp_int_Variable_3, int32 K2Node_Select_Default_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_GetChildrenCount_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_5, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1);
    void Remove Call__DelegateSignature();
}

#endif
