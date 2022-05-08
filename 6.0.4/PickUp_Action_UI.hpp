#ifndef UE4SS_SDK_PickUp_Action_UI_HPP
#define UE4SS_SDK_PickUp_Action_UI_HPP

class UPickUp_Action_UI_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Clicked;
    class UWidgetAnimation* IdleAnim;
    class UWidgetAnimation* Fade;
    class UImage* ActionInput;
    class UTextBlock* ActionText;
    class UImage* Background;
    class UHorizontalBox* HorizontalBox_0;
    class UOverlay* Overlay_0;

    void Construct();
    void Remove(bool Click);
    void SetText(FText Action);
    void CheckAndSetText(class UTextBlock* Target, const FText& A, class UImage* Target2);
    void Idle();
    void SetPlatformIcon();
    void TempRemove();
    void TempReAdd();
    void ExecuteUbergraph_PickUp_Action_UI(int32 EntryPoint);
};

#endif
