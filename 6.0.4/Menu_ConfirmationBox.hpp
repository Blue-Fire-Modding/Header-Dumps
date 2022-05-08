#ifndef UE4SS_SDK_Menu_ConfirmationBox_HPP
#define UE4SS_SDK_Menu_ConfirmationBox_HPP

class UMenu_ConfirmationBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Select;
    class UImage* Image_0;
    class UImage* Image_58;
    class UImage* Image_59;
    class UOverlay* Overlay_0;
    class UTextBlock* TextBlock_0;
    FText Text;
    bool IsSelected;

    void Selected(bool Instant);
    void Unselected(bool Instant);
    void SetText(FText InText);
    void PreConstruct(bool IsDesignTime);
    void ResetText();
    void ForceUnselect();
    void ExecuteUbergraph_Menu_ConfirmationBox(int32 EntryPoint);
};

#endif
