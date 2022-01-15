#ifndef UE4SS_SDK_PCGamepadConnect_HPP
#define UE4SS_SDK_PCGamepadConnect_HPP

class UPCGamepadConnect_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Fade;
    UImage* Icon;
    UImage* Image;
    UImage* Image_0;
    UImage* Image_110;
    UOverlay* Overlay;
    UOverlay* Overlay_0;
    UTextBlock* TextBlock_0;
    bool Connected;
    TEnumAsByte<Platform::Type> Platform;

    void Construct();
    void OnAnimationFinished(const UWidgetAnimation* Animation);
    void Refresh(bool Connected, uint8 Platform);
    void TempRemove();
    void TempReAdd();
    void ExecuteUbergraph_PCGamepadConnect(int32 EntryPoint, bool Temp_bool_Variable, FText Temp_text_Variable, FText Temp_text_Variable_1, RemoveUI__DelegateSignature K2Node_CreateDelegate_OutputDelegate, AddUI__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, uint8 Temp_byte_Variable, UTexture2D* Temp_object_Variable, UTexture2D* Temp_object_Variable_1, UTexture2D* Temp_object_Variable_2, UTexture2D* Temp_object_Variable_3, UTexture2D* Temp_object_Variable_4, UTexture2D* Temp_object_Variable_5, UTexture2D* Temp_object_Variable_6, UTexture2D* Temp_object_Variable_7, const UWidgetAnimation* K2Node_Event_Animation, bool K2Node_CustomEvent_Connected, uint8 K2Node_CustomEvent_Platform, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsInViewport_ReturnValue, FText K2Node_Select_Default, bool CallFunc_IsInViewport_ReturnValue_1, UGameInstance* CallFunc_GetGameInstance_ReturnValue, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance, bool K2Node_DynamicCast_bSuccess, UTexture2D* K2Node_Select_Default_1);
}

#endif
