#ifndef UE4SS_SDK_Counter_HPP
#define UE4SS_SDK_Counter_HPP

class UCounter_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeHUD;
    class UBorder* Border_13;
    class UImage* CounterImg;
    class UTextBlock* CounterTxt;
    class UImage* Image_98;
    FCounter_CCounterUpdate CounterUpdate;
    void CounterUpdate();
    bool Hidden;

    void UpdateImageCounter(class UMaterialInterface* Material);
    void HideHUD();
    void ShowHUD();
    void Construct();
    void Re Construct();
    void TempRemove();
    void TempReAdd();
    void UpdateValue(int32 Amount, bool Has Total, int32 Total);
    void ExecuteUbergraph_Counter(int32 EntryPoint);
    void CounterUpdate__DelegateSignature();
};

#endif
