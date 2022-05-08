#ifndef UE4SS_SDK_DialogOption_HPP
#define UE4SS_SDK_DialogOption_HPP

class UDialogOption_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* SelectAnim;
    class UWidgetAnimation* ConfirmAnim;
    class UWidgetAnimation* GlowButton;
    class UImage* Background;
    class UImage* Image_125;
    class UImage* Image_126;
    class UImage* Image_208;
    class UTextBlock* Number;
    class UCanvasPanel* NumberInput;
    class UImage* Ok;
    class USizeBox* SizeBox_0;
    class UWidgetSwitcher* Switch;
    class UTextBlock* Text;
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
    void ExecuteUbergraph_DialogOption(int32 EntryPoint);
};

#endif
