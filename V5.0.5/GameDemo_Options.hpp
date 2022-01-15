#ifndef UE4SS_SDK_GameDemo_Options_HPP
#define UE4SS_SDK_GameDemo_Options_HPP

class UGameDemo_Options_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* SelectAnim;
    UImage* Back;
    UImage* Image_0;
    UImage* Image_337;
    UOverlay* Overlay_0;
    UTextBlock* Text;
    FText Title;
    bool Selected;
    bool NotAvailable;
    UMaterialInterface* Mat;

    void PreConstruct(bool IsDesignTime);
    void Select();
    void Unselect();
    void NoAvailableCall();
    void ExecuteUbergraph_GameDemo_Options(int32 EntryPoint, bool K2Node_Event_IsDesignTime, float CallFunc_GetAnimationCurrentTime_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
}

#endif
