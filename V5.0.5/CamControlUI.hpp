#ifndef UE4SS_SDK_CamControlUI_HPP
#define UE4SS_SDK_CamControlUI_HPP

class UCamControlUI_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* 50;
    UImage* Apply_Button;
    UCanvasPanel* CanvasPanel_0;
    UTextBlock* Filter;
    UImage* Hide_Button;
    UImage* Image_3;
    UImage* Image_82;
    UImage* Image_128;
    UImage* Move_Button;
    UImage* Move_Down_Button;
    UImage* Move_Up_Button;
    UImage* Pause_Button;
    UImage* Rotate_Cam_Button;
    UTextBlock* TextBlock_1;
    UImage* Toggle_Filter_L_Button;
    UImage* Toggle_Filter_R_Button;
    UImage* Zoom_L_Button;
    UImage* Zoom_R_Button;

    void Show();
    void UpdateUI();
    void Hide();
    void UpdateCamSpeed(FText InText);
    void Construct();
    void InGame Filter(bool bIsOn);
    void VoidMakerCamera();
    void ExecuteUbergraph_CamControlUI(int32 EntryPoint, UMaterialInterface* Temp_object_Variable, uint8 Temp_byte_Variable, UMaterialInterface* Temp_object_Variable_1, UMaterialInterface* Temp_object_Variable_2, UMaterialInterface* Temp_object_Variable_3, uint8 Temp_byte_Variable_1, UMaterialInterface* Temp_object_Variable_4, UMaterialInterface* Temp_object_Variable_5, UMaterialInterface* Temp_object_Variable_6, uint8 Temp_byte_Variable_2, UMaterialInterface* Temp_object_Variable_7, UMaterialInterface* Temp_object_Variable_8, UMaterialInterface* Temp_object_Variable_9, UMaterialInterface* Temp_object_Variable_10, UMaterialInterface* Temp_object_Variable_11, UMaterialInterface* Temp_object_Variable_12, UMaterialInterface* Temp_object_Variable_13, UMaterialInterface* Temp_object_Variable_14, uint8 Temp_byte_Variable_3, UMaterialInterface* Temp_object_Variable_15, UMaterialInterface* Temp_object_Variable_16, UMaterialInterface* Temp_object_Variable_17, UMaterialInterface* Temp_object_Variable_18, UMaterialInterface* Temp_object_Variable_19, UMaterialInterface* Temp_object_Variable_20, UMaterialInterface* Temp_object_Variable_21, UMaterialInterface* Temp_object_Variable_22, bool Temp_bool_Variable, APawn* CallFunc_GetPlayerPawn_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, UMaterialInstance* CallFunc_GetUIPlatform_UIMaterial, bool CallFunc_GetUIPlatform_NonSquareSize, FVector2D CallFunc_GetUIPlatform_Size, UMaterialInterface* K2Node_Select_Default, UMaterialInstance* CallFunc_GetUIPlatform_UIMaterial_1, bool CallFunc_GetUIPlatform_NonSquareSize_1, FVector2D CallFunc_GetUIPlatform_Size_1, UMaterialInstance* CallFunc_GetUIPlatform_UIMaterial_2, bool CallFunc_GetUIPlatform_NonSquareSize_2, FVector2D CallFunc_GetUIPlatform_Size_2, UMaterialInstance* CallFunc_GetUIPlatform_UIMaterial_3, bool CallFunc_GetUIPlatform_NonSquareSize_3, FVector2D CallFunc_GetUIPlatform_Size_3, UMaterialInstance* CallFunc_GetUIPlatform_UIMaterial_4, bool CallFunc_GetUIPlatform_NonSquareSize_4, FVector2D CallFunc_GetUIPlatform_Size_4, UMaterialInstance* CallFunc_GetUIPlatform_UIMaterial_5, bool CallFunc_GetUIPlatform_NonSquareSize_5, FVector2D CallFunc_GetUIPlatform_Size_5, UMaterialInterface* K2Node_Select_Default_1, UMaterialInstance* CallFunc_GetUIPlatform_UIMaterial_6, bool CallFunc_GetUIPlatform_NonSquareSize_6, FVector2D CallFunc_GetUIPlatform_Size_6, UMaterialInstance* CallFunc_GetUIPlatform_UIMaterial_7, bool CallFunc_GetUIPlatform_NonSquareSize_7, FVector2D CallFunc_GetUIPlatform_Size_7, UMaterialInstance* CallFunc_GetUIPlatform_UIMaterial_8, bool CallFunc_GetUIPlatform_NonSquareSize_8, FVector2D CallFunc_GetUIPlatform_Size_8, UMaterialInterface* K2Node_Select_Default_2, UMaterialInterface* K2Node_Select_Default_3, UMaterialInstance* CallFunc_GetUIPlatform_UIMaterial_9, bool CallFunc_GetUIPlatform_NonSquareSize_9, FVector2D CallFunc_GetUIPlatform_Size_9, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, UMaterialInterface* Temp_object_Variable_23, UMaterialInterface* Temp_object_Variable_24, uint8 Temp_byte_Variable_4, UMaterialInterface* K2Node_Select_Default_4, UMaterialInterface* Temp_object_Variable_25, UMaterialInterface* Temp_object_Variable_26, UMaterialInterface* Temp_object_Variable_27, uint8 Temp_byte_Variable_5, UMaterialInterface* Temp_object_Variable_28, UMaterialInterface* K2Node_Select_Default_5, UMaterialInterface* Temp_object_Variable_29, UMaterialInterface* Temp_object_Variable_30, uint8 Temp_byte_Variable_6, FText K2Node_CustomEvent_InText, UMaterialInterface* K2Node_Select_Default_6, PCGamepadChange__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_bIsOn, FText CallFunc_MakeLiteralText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FText CallFunc_MakeLiteralText_ReturnValue_1, FText CallFunc_MakeLiteralText_ReturnValue_2, FText K2Node_Select_Default_7, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
}

#endif
