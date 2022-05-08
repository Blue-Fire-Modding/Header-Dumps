#ifndef UE4SS_SDK_Message_PopUp_HPP
#define UE4SS_SDK_Message_PopUp_HPP

class UMessage_PopUp_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Fade;
    class UImage* Image_0;
    class UTextBlock* TextBlock_48;
    FText Text;
    float Playback Speed;

    void Construct();
    void ReConstruct(FText InText, bool SkipReName);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void TempRemove();
    void TempReAdd();
    void ExecuteUbergraph_Message_PopUp(int32 EntryPoint);
};

#endif
