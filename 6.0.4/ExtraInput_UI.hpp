#ifndef UE4SS_SDK_ExtraInput_UI_HPP
#define UE4SS_SDK_ExtraInput_UI_HPP

class UExtraInput_UI_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Clicked;
    class UWidgetAnimation* IdleAnim;
    class UWidgetAnimation* Fade;
    class UBorder* Border_0;
    class UImage* Dash;
    class UImage* Image_0;
    class UImage* Image_175;
    class UImage* Right;
    class UTextBlock* Right_Command;
    class UTextBlock* TextBlock_0;
    class UImage* Third_Img;
    class UTextBlock* Third_Text;
    TEnumAsByte<PlatformInput::Type> InputLeft;
    TEnumAsByte<PlatformInput::Type> InputRight;
    FText LeftText;
    FText RightText;
    FText ThirdText;
    TEnumAsByte<PlatformInput::Type> InputThird;
    int32 Inputs;

    void Remove(bool Click);
    void SetText(FText Right, FText Top, FText Bottom, FText Left);
    void CheckAndSetText(class UTextBlock* Target, const FText& A, class UImage* Target2);
    void Idle();
    void Construct();
    void SetPlatformIcon();
    void TempRemove();
    void TempReAdd();
    void ExecuteUbergraph_ExtraInput_UI(int32 EntryPoint);
};

#endif
