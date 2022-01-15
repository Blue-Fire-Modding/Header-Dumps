#ifndef UE4SS_SDK_PickUp_Action_UI_HPP
#define UE4SS_SDK_PickUp_Action_UI_HPP

class UPickUp_Action_UI_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Clicked;
    UWidgetAnimation* IdleAnim;
    UWidgetAnimation* Fade;
    UImage* ActionInput;
    UTextBlock* ActionText;
    UImage* Background;
    UHorizontalBox* HorizontalBox_0;
    UOverlay* Overlay_0;

    void Construct();
    void Remove(bool Click);
    void SetText(FText Action);
    void CheckAndSetText(UTextBlock* Target, const FText& A, UImage* Target2);
    void Idle();
    void SetPlatformIcon();
    void TempRemove();
    void TempReAdd();
    void ExecuteUbergraph_PickUp_Action_UI(int32 EntryPoint, bool CallFunc_IsInViewport_ReturnValue, PCGamepadChange__DelegateSignature K2Node_CreateDelegate_OutputDelegate, RemoveUI__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, AddUI__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_CustomEvent_Click, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, FText K2Node_CustomEvent_Action, FString CallFunc_Conv_TextToString_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, UTextBlock* K2Node_CustomEvent_Target, const FText K2Node_CustomEvent_A, UImage* K2Node_CustomEvent_Target2, bool CallFunc_EqualEqual_TextText_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, APawn* CallFunc_GetPlayerPawn_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, UMaterialInstance* CallFunc_GetUIPlatform_UIMaterial, bool CallFunc_GetUIPlatform_NonSquareSize, FVector2D CallFunc_GetUIPlatform_Size, int32 CallFunc_PostEventAtLocation_ReturnValue);
}

#endif
