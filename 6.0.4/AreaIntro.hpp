#ifndef UE4SS_SDK_AreaIntro_HPP
#define UE4SS_SDK_AreaIntro_HPP

class UAreaIntro_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Text;
    class UImage* Image_50;
    class UOverlay* Overlay_0;
    class UTextBlock* TextBlock_0;
    class UTextBlock* TextBlock_8;
    FAreaIntro_CFinished Finished;
    void Finished();

    void Construct();
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void Name(FText Area Name, bool Void);
    void Replay();
    void Force Finish();
    void TempRemove();
    void TempReAdd();
    void ExecuteUbergraph_AreaIntro(int32 EntryPoint);
    void Finished__DelegateSignature();
};

#endif
