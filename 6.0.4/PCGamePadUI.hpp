#ifndef UE4SS_SDK_PCGamePadUI_HPP
#define UE4SS_SDK_PCGamePadUI_HPP

class UPCGamePadUI_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Fade;
    class UImage* Icon;
    class UImage* Image;
    class UImage* Image_0;
    class UImage* Image_110;
    class UOverlay* Overlay;
    class UOverlay* Overlay_0;
    class UTextBlock* TextBlock_1;
    TEnumAsByte<Platform::Type> Platform;

    void Construct();
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void Refresh(TEnumAsByte<Platform::Type> Platform);
    void TempRemove();
    void TempReAdd();
    void Check Is In Viewport();
    void ExecuteUbergraph_PCGamePadUI(int32 EntryPoint);
};

#endif
