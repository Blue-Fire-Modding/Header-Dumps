#ifndef UE4SS_SDK_Menu_ConfirmationBox_HPP
#define UE4SS_SDK_Menu_ConfirmationBox_HPP

class UMenu_ConfirmationBox_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Select;
    UImage* Image_0;
    UImage* Image_58;
    UImage* Image_59;
    UOverlay* Overlay_0;
    UTextBlock* TextBlock_0;
    FText Text;
    bool IsSelected;

    void Selected();
    void Unselected();
    void SetText(FText InText);
    void PreConstruct(bool IsDesignTime);
    void ResetText();
    void ExecuteUbergraph_Menu_ConfirmationBox(int32 EntryPoint, FText K2Node_CustomEvent_InText, bool K2Node_Event_IsDesignTime, float CallFunc_GetAnimationCurrentTime_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
}

#endif
