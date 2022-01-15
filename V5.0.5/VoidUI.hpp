#ifndef UE4SS_SDK_VoidUI_HPP
#define UE4SS_SDK_VoidUI_HPP

class UVoidUI_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Fade;
    UTextBlock* ActionText;
    UImage* Background;
    UCanvasPanel* CanvasPanel_0;
    UTextBlock* Completed;
    UHorizontalBox* HorizontalBox_0;
    UHorizontalBox* HorizontalBox_4;
    UImage* Image_1;
    UImage* Image_2;
    UImage* Image_3;
    UImage* Image_4;
    UImage* Image_5;
    UImage* Image_75;
    UOverlay* Overlay_0;
    UTextBlock* TextBlock_2;
    UImage* VoidPreview;

    void SetVoidGateUI(int32 Difficulty, FLinearColor DifficultyColor, bool Done, FText VoidName, UTexture2D* Texture);
    void FadeOut();
    void Rem();
    void Construct();
    void TempRemove();
    void TempReAdd();
    void ExecuteUbergraph_VoidUI(int32 EntryPoint, APawn* CallFunc_GetPlayerPawn_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, RemoveUI__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, AddUI__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, float Temp_float_Variable, float Temp_float_Variable_1, int32 K2Node_CustomEvent_Difficulty, FLinearColor K2Node_CustomEvent_DifficultyColor, bool K2Node_CustomEvent_Done, FText K2Node_CustomEvent_VoidName, UTexture2D* K2Node_CustomEvent_Texture, float K2Node_Select_Default, int32 CallFunc_Subtract_IntInt_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, int32 Temp_int_Variable, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_SelectFloat_ReturnValue, UWidget* CallFunc_GetChildAt_ReturnValue, FLinearColor K2Node_MakeStruct_LinearColor, UImage* K2Node_DynamicCast_AsImage, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsInViewport_ReturnValue);
}

#endif
