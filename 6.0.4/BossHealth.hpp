#ifndef UE4SS_SDK_BossHealth_HPP
#define UE4SS_SDK_BossHealth_HPP

class UBossHealth_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeIn;
    class UCanvasPanel* CanvasPanel_5;
    class UImage* LifeFXBar;
    class UTextBlock* NameTxt;
    class UMaterialInstanceDynamic* LifeBarMat;
    float Percent;
    float LerpPercent;
    bool IsHeal;

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void SetHealth(float Health, float Max Health);
    void Set Name(const FText& Name);
    void Fade();
    void Construct();
    void Change Bar Size(float Size X);
    void SetMaxHeal(bool Show, float Health, float Max Health);
    void ExecuteUbergraph_BossHealth(int32 EntryPoint);
};

#endif
