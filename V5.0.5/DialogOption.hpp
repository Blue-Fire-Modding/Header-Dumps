#ifndef UE4SS_SDK_DialogOption_HPP
#define UE4SS_SDK_DialogOption_HPP

class UDialogOption_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* SelectAnim;
    UWidgetAnimation* ConfirmAnim;
    UWidgetAnimation* GlowButton;
    UImage* Background;
    UImage* Image_125;
    UImage* Image_126;
    UImage* Image_208;
    UTextBlock* Number;
    UCanvasPanel* NumberInput;
    UImage* Ok;
    USizeBox* SizeBox_0;
    UWidgetSwitcher* Switch;
    UTextBlock* Text;
    FText Option;
    bool Amount;
    bool IsSelected;
    bool IsBack;

    void Unselected();
    void Selected();
    void Construct();
    void ChangeNumber(int32 N);
    void Confirm();
    void PreConstruct(bool IsDesignTime);
    void SetPlatformIcon();
    void ExecuteUbergraph_DialogOption(int32 EntryPoint, PCGamepadChange__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FText CallFunc_ToLower_Out, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, int32 K2Node_CustomEvent_N, FText CallFunc_Conv_IntToText_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, bool K2Node_Event_IsDesignTime, APawn* CallFunc_GetPlayerPawn_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, UMaterialInstance* CallFunc_GetUIPlatform_UIMaterial, bool CallFunc_GetUIPlatform_NonSquareSize, FVector2D CallFunc_GetUIPlatform_Size, UMaterialInstance* CallFunc_GetUIPlatform_UIMaterial_1, bool CallFunc_GetUIPlatform_NonSquareSize_1, FVector2D CallFunc_GetUIPlatform_Size_1);
}

#endif
