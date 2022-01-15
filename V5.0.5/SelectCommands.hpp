#ifndef UE4SS_SDK_SelectCommands_HPP
#define UE4SS_SDK_SelectCommands_HPP

class USelectCommands_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBorder* Border_0;
    UImage* FirstImage;
    UTextBlock* FirstText;
    UHorizontalBox* HorizontalBox_206;
    UImage* SecondImage;
    UTextBlock* SecondText;
    UImage* ThirdImage;
    UTextBlock* ThirdText;
    FText SecondTex;
    FText FirstTex;
    int32 Amount;
    FText ThirdTex;
    TEnumAsByte<PlatformInput::Type> FirstInput;
    TEnumAsByte<PlatformInput::Type> SecondInput;
    TEnumAsByte<PlatformInput::Type> ThirdInput;
    UBlueFire_Game_Instance_C* BlueFireGameInstance;

    void PreConstruct(bool IsDesignTime);
    void Build();
    void Construct();
    void SetOpacity(float Opacity1, float Opacity2, float Opacity3);
    void Adjust(int32 Amount, uint8 FirstInput, FText FirstTex, uint8 SecondInput, FText SecondTex);
    void MyVoidsR();
    void ExecuteUbergraph_SelectCommands(int32 EntryPoint, bool Temp_bool_Variable, FVector2D Temp_struct_Variable, FVector2D Temp_struct_Variable_1, bool K2Node_Event_IsDesignTime, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, UGameInstance* CallFunc_GetGameInstance_ReturnValue, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasChild_ReturnValue, UPanelSlot* CallFunc_AddChild_ReturnValue, UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot, bool K2Node_DynamicCast_bSuccess_1, UPanelSlot* CallFunc_AddChild_ReturnValue_1, UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot_1, bool K2Node_DynamicCast_bSuccess_2, FVector2D Temp_struct_Variable_2, FVector2D Temp_struct_Variable_3, bool Temp_bool_Variable_1, UMaterialInstance* CallFunc_GetUIPlatformBasic_UIMaterial, bool CallFunc_GetUIPlatformBasic_NonSquareSize, FVector2D CallFunc_GetUIPlatformBasic_Size, UMaterialInstance* CallFunc_GetUIPlatformBasic_UIMaterial_1, bool CallFunc_GetUIPlatformBasic_NonSquareSize_1, FVector2D CallFunc_GetUIPlatformBasic_Size_1, FVector2D K2Node_Select_Default, FVector2D K2Node_Select_Default_1, float K2Node_CustomEvent_Opacity1, float K2Node_CustomEvent_Opacity2, float K2Node_CustomEvent_Opacity3, UMaterialInstance* CallFunc_GetUIPlatformBasic_UIMaterial_2, bool CallFunc_GetUIPlatformBasic_NonSquareSize_2, FVector2D CallFunc_GetUIPlatformBasic_Size_2, int32 K2Node_CustomEvent_Amount, uint8 K2Node_CustomEvent_FirstInput, FText K2Node_CustomEvent_FirstTex, uint8 K2Node_CustomEvent_SecondInput, FText K2Node_CustomEvent_SecondTex, FMargin K2Node_MakeStruct_Margin);
}

#endif
