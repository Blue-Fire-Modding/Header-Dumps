#ifndef UE4SS_SDK_SkipCutscene_Action_UI_HPP
#define UE4SS_SDK_SkipCutscene_Action_UI_HPP

class USkipCutscene_Action_UI_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Fade;
    class UWidgetAnimation* Show;
    class UImage* ActionInput;
    class UTextBlock* ActionText;
    class UImage* Background;
    class UHorizontalBox* HorizontalBox_0;
    class UOverlay* Overlay_0;
    TEnumAsByte<PlatformInput::Type> Action;
    bool CreateController;
    class ASkipCutscene_Controller_C* Controller;
    class ULevelSequencePlayer* CurrentSequence;

    void Construct();
    void Remove();
    void SetPlatformIcon();
    void Set Text Skip Cutscene(bool Skip Cutscene);
    void Replay();
    void ExecuteUbergraph_SkipCutscene_Action_UI(int32 EntryPoint);
};

#endif
