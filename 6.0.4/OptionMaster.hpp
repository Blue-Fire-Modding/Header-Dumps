#ifndef UE4SS_SDK_OptionMaster_HPP
#define UE4SS_SDK_OptionMaster_HPP

class UOptionMaster_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* SelectedIdle;
    class UImage* Arrow_L;
    class UImage* Arrow_R;
    class UImage* Image_0;
    class UTextBlock* OptionText;
    class UTextBlock* Setting;
    class USlider* SliderBar;
    class UWidgetSwitcher* WidgetSwitcher_0;
    TArray<FString> Options;
    int32 Index;
    TArray<FString> OptionsCommands;
    float SlideBarValue;
    TEnumAsByte<Options::Type> CommandType;
    class UBlueFire_Game_Instance_C* GameInstance;
    FOptionMaster_CRefreshAll RefreshAll;
    void RefreshAll();
    bool Clickable;
    FOptionMaster_CTimer Timer;
    void Timer(bool SpeedTimer);
    FOptionMaster_CCallVoidMakerTutorialRestart CallVoidMakerTutorialRestart;
    void CallVoidMakerTutorialRestart(bool On);
    FOptionMaster_CCallVoidMakerHideShortCuts CallVoidMakerHideShortCuts;
    void CallVoidMakerHideShortCuts(bool Hide);
    FText Description;
    bool bIsReconstruct;

    void Command();
    void SliderBarLimits(float A, bool Minis-1);
    void RemoveArrows();
    void Run();
    void Unselected();
    void Selected();
    void ReConstruct OptionMaster();
    void SetSlideBarValue();
    void PreConstruct(bool IsDesignTime);
    void ChangeSetting(bool Right);
    void ResetSliderLimitSFX(bool IsTop);
    void ExecuteUbergraph_OptionMaster(int32 EntryPoint);
    void CallVoidMakerHideShortCuts__DelegateSignature(bool Hide);
    void CallVoidMakerTutorialRestart__DelegateSignature(bool On);
    void Timer__DelegateSignature(bool SpeedTimer);
    void RefreshAll__DelegateSignature();
};

#endif
