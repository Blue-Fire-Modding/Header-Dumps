#ifndef UE4SS_SDK_PCGamepadConnect_HPP
#define UE4SS_SDK_PCGamepadConnect_HPP

class UPCGamepadConnect_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Fade;
    class UImage* Icon;
    class UImage* Image;
    class UImage* Image_0;
    class UImage* Image_110;
    class UOverlay* Overlay;
    class UOverlay* Overlay_0;
    class UTextBlock* TextBlock_0;
    bool Connected;
    TEnumAsByte<Platform::Type> Platform;

    void Construct();
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void Refresh(bool Connected, TEnumAsByte<Platform::Type> Platform);
    void TempRemove();
    void TempReAdd();
    void ExecuteUbergraph_PCGamepadConnect(int32 EntryPoint);
};

#endif
