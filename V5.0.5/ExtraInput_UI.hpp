#ifndef UE4SS_SDK_ExtraInput_UI_HPP
#define UE4SS_SDK_ExtraInput_UI_HPP

class UExtraInput_UI_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Clicked;
    UWidgetAnimation* IdleAnim;
    UWidgetAnimation* Fade;
    UBorder* Border_0;
    UImage* Dash;
    UImage* Image_0;
    UImage* Image_175;
    UImage* Right;
    UTextBlock* Right_Command;
    UTextBlock* TextBlock_0;
    UImage* Third_Img;
    UTextBlock* Third_Text;
    TEnumAsByte<PlatformInput::Type> InputLeft;
    TEnumAsByte<PlatformInput::Type> InputRight;
    FText LeftText;
    FText RightText;
    FText ThirdText;
    TEnumAsByte<PlatformInput::Type> InputThird;
    int32 Inputs;

    void Remove(bool Click);
    void SetText(FText Right, FText Top, FText Bottom, FText Left);
    void CheckAndSetText(UTextBlock* Target, const FText& A, UImage* Target2);
    void Idle();
    void Construct();
    void SetPlatformIcon();
    void TempRemove();
    void TempReAdd();
    void ExecuteUbergraph_ExtraInput_UI(int32 EntryPoint, bool CallFunc_IsInViewport_ReturnValue, bool Temp_bool_Variable, PCGamepadChange__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FVector2D Temp_struct_Variable, FVector2D Temp_struct_Variable_1, bool Temp_bool_Variable_1, FVector2D Temp_struct_Variable_2, FVector2D Temp_struct_Variable_3, bool Temp_bool_Variable_2, FVector2D Temp_struct_Variable_4, FVector2D Temp_struct_Variable_5, RemoveUI__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, AddUI__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_CustomEvent_Click, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, FText K2Node_CustomEvent_Right, FText K2Node_CustomEvent_Top, FText K2Node_CustomEvent_Bottom, FText K2Node_CustomEvent_Left, FString CallFunc_Conv_TextToString_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue, FString CallFunc_ToLower_ReturnValue, UTextBlock* K2Node_CustomEvent_Target, const FText K2Node_CustomEvent_A, UImage* K2Node_CustomEvent_Target2, FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, APawn* CallFunc_GetPlayerPawn_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, UMaterialInstance* CallFunc_GetUIPlatform_UIMaterial, bool CallFunc_GetUIPlatform_NonSquareSize, FVector2D CallFunc_GetUIPlatform_Size, UMaterialInstance* CallFunc_GetUIPlatform_UIMaterial_1, bool CallFunc_GetUIPlatform_NonSquareSize_1, FVector2D CallFunc_GetUIPlatform_Size_1, FVector2D K2Node_Select_Default, FVector2D K2Node_Select_Default_1, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess_1, UMaterialInstance* CallFunc_GetUIPlatform_UIMaterial_2, bool CallFunc_GetUIPlatform_NonSquareSize_2, FVector2D CallFunc_GetUIPlatform_Size_2, FVector2D K2Node_Select_Default_2);
}

#endif
