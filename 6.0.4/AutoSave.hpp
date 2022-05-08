#ifndef UE4SS_SDK_AutoSave_HPP
#define UE4SS_SDK_AutoSave_HPP

class UAutoSave_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Appear;
    class UImage* Image_0;
    class UImage* Image_123;
    class UTextBlock* TextBlock_33;

    void Construct();
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void ExecuteUbergraph_AutoSave(int32 EntryPoint);
};

#endif
