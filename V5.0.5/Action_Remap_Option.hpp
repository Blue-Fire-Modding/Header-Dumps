#ifndef UE4SS_SDK_Action_Remap_Option_HPP
#define UE4SS_SDK_Action_Remap_Option_HPP

class UAction_Remap_Option_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* Action;
    UImage* Bar;
    UImage* Key;
    UImage* SeparatorBar;
    TEnumAsByte<PlatformInput::Type> Option_Action;
    bool CanBeRemapped;
    FText Note;
    bool PC;

    void Editing();
    void PreConstruct(bool IsDesignTime);
    void Selected();
    void Reset(UBlueFire_Game_Instance_C* BlueFireGameInstance);
    void Unselected();
    void ExecuteUbergraph_Action_Remap_Option(int32 EntryPoint, FText Temp_text_Variable, FText Temp_text_Variable_1, FText Temp_text_Variable_2, FText Temp_text_Variable_3, FText Temp_text_Variable_4, FText Temp_text_Variable_5, FText Temp_text_Variable_6, FText Temp_text_Variable_7, FText Temp_text_Variable_8, FText Temp_text_Variable_9, FText Temp_text_Variable_10, FText Temp_text_Variable_11, FText Temp_text_Variable_12, FText Temp_text_Variable_13, FText Temp_text_Variable_14, FText Temp_text_Variable_15, FText Temp_text_Variable_16, FText Temp_text_Variable_17, FText Temp_text_Variable_18, FText Temp_text_Variable_19, FText Temp_text_Variable_20, FText Temp_text_Variable_21, FText Temp_text_Variable_22, FText Temp_text_Variable_23, FText Temp_text_Variable_24, FText Temp_text_Variable_25, FText Temp_text_Variable_26, FText Temp_text_Variable_27, FText Temp_text_Variable_28, FText Temp_text_Variable_29, FText Temp_text_Variable_30, FText Temp_text_Variable_31, FText Temp_text_Variable_32, FText Temp_text_Variable_33, FText Temp_text_Variable_34, FText Temp_text_Variable_35, FText Temp_text_Variable_36, FText Temp_text_Variable_37, FText Temp_text_Variable_38, FText Temp_text_Variable_39, FText Temp_text_Variable_40, FText Temp_text_Variable_41, FText Temp_text_Variable_42, FText Temp_text_Variable_43, FText Temp_text_Variable_44, FText Temp_text_Variable_45, FText Temp_text_Variable_46, FText Temp_text_Variable_47, FText Temp_text_Variable_48, FText Temp_text_Variable_49, FText Temp_text_Variable_50, bool K2Node_Event_IsDesignTime, UBlueFire_Game_Instance_C* K2Node_CustomEvent_BlueFireGameInstance, UMaterialInstance* CallFunc_GetUIPlatformBasic_UIMaterial, bool CallFunc_GetUIPlatformBasic_NonSquareSize, FVector2D CallFunc_GetUIPlatformBasic_Size, bool CallFunc_IsRobiValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, uint8 Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, UGameInstance* CallFunc_GetGameInstance_ReturnValue, FText K2Node_Select_Default, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance, bool K2Node_DynamicCast_bSuccess, UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_1, UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance_2, bool K2Node_DynamicCast_bSuccess_2);
}

#endif
