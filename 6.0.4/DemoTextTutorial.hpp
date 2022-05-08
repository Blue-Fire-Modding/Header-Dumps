#ifndef UE4SS_SDK_DemoTextTutorial_HPP
#define UE4SS_SDK_DemoTextTutorial_HPP

class UDemoTextTutorial_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Idle;
    class UWidgetAnimation* FadeIn;
    class UImage* Background;
    class UImage* Bar;
    class UCanvasPanel* CanvasPanel_0;
    class UImage* Image_512;
    class UTextBlock* Title;
    class UTutorialImage_C* TutorialImage;
    class UTutorialImage_C* TutorialImage_212;
    class UTutorialImage_C* TutorialImage_382;
    class UWrapBox* WrapBox_92;
    TEnumAsByte<TutorialList::Type> Type;
    class APlayer_Character_BP_C* Player;
    FDemoTextTutorial_CRemoved Removed;
    void Removed();
    TArray<FTutorialStructure> Array;

    void Play(TEnumAsByte<TutorialList::Type> Type);
    void PlayContinue(const TArray<FTutorialStructure>& Tut);
    void Remove();
    void updateButtons();
    void Refresh();
    void Construct();
    void ExecuteUbergraph_DemoTextTutorial(int32 EntryPoint);
    void Removed__DelegateSignature();
};

#endif
