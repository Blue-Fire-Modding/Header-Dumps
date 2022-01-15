#ifndef UE4SS_SDK_PCGamePadUI_HPP
#define UE4SS_SDK_PCGamePadUI_HPP

class UPCGamePadUI_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Fade;
    UImage* Icon;
    UImage* Image;
    UImage* Image_0;
    UImage* Image_110;
    UOverlay* Overlay;
    UOverlay* Overlay_0;
    UTextBlock* TextBlock_1;
    TEnumAsByte<Platform::Type> Platform;

    void Construct();
    void OnAnimationFinished(const UWidgetAnimation* Animation);
    void Refresh(uint8 Platform);
    void TempRemove();
    void TempReAdd();
    void Check Is In Viewport();
    void ExecuteUbergraph_PCGamePadUI(int32 EntryPoint, uint8 Temp_byte_Variable, FText Temp_text_Variable, uint8 Temp_byte_Variable_1, UTexture2D* Temp_object_Variable, UTexture2D* Temp_object_Variable_1, UTexture2D* Temp_object_Variable_2, UTexture2D* Temp_object_Variable_3, UTexture2D* Temp_object_Variable_4, UTexture2D* Temp_object_Variable_5, UTexture2D* Temp_object_Variable_6, UTexture2D* Temp_object_Variable_7, RemoveUI__DelegateSignature K2Node_CreateDelegate_OutputDelegate, AddUI__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, const UWidgetAnimation* K2Node_Event_Animation, uint8 K2Node_CustomEvent_Platform, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsInViewport_ReturnValue, UTexture2D* K2Node_Select_Default, FText CallFunc_MakeLiteralText_ReturnValue, FText K2Node_Select_Default_1, bool CallFunc_IsInViewport_ReturnValue_1, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsInViewport_ReturnValue_2, UGameInstance* CallFunc_GetGameInstance_ReturnValue, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance, bool K2Node_DynamicCast_bSuccess);
}

#endif
