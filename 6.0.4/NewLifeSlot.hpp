#ifndef UE4SS_SDK_NewLifeSlot_HPP
#define UE4SS_SDK_NewLifeSlot_HPP

class UNewLifeSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* ConsumeItem;
    class UWidgetAnimation* ChangeItemAnim;
    class UWidgetAnimation* AimCharge;
    class UWidgetAnimation* AimIdle;
    class UWidgetAnimation* LifeVFX;
    class UWidgetAnimation* RegenAnim;
    class UWidgetAnimation* FadeHUD;
    class UWidgetAnimation* CollectCurrency;
    class UWidgetAnimation* ChargeSpecialMove;
    class UWidgetAnimation* Hit;
    class UWidgetAnimation* Target;
    class UWrapBox* LifeBox;
    class ULifePoint_C* LifePoint;
    class ULifePoint_C* LifePoint_1;
    class ULifePoint_C* LifePoint_2;
    class ULifePoint_C* LifePoint_3;
    class ULifePoint_C* LifePoint_4;
    class ULifePoint_C* LifePoint_5;
    class ULifePoint_C* LifePoint_6;
    class ULifePoint_C* LifePoint_7;
    class ULifePoint_C* LifePoint_8;
    class ULifePoint_C* LifePoint_9;
    class ULifePoint_C* LifePoint_10;
    class ULifePoint_C* LifePoint_11;
    class ULifePoint_C* LifePoint_12;
    class ULifePoint_C* LifePoint_13;
    class ULifePoint_C* LifePoint_14;
    class ULifePoint_C* LifePoint_15;
    class ULifePoint_C* LifePoint_16;
    class ULifePoint_C* LifePoint_17;
    class ULifePoint_C* LifePoint_74;
    class ULifePoint_C* LifePoint_176;
    class UBorder* MainBorder;
    class APlayer_Character_BP_C* Player;
    class UMaterialInstanceDynamic* LifeMat;
    class UBlueFire_Game_Instance_C* GameInstance;
    bool Hidden;
    float RagePercent;
    class UMaterialInstanceDynamic* RageBarMat;
    float LifePercent;
    float LifeLerpPercent;
    float RageLerpPercent;
    int32 TempHealth;
    bool Animate;
    TArray<class ULifePoint_C*> LifeSlots;
    bool LifeReduce;
    int32 PreviousHealth;
    bool AddLife;

    float Get_Rage_Percent_0();
    void UpdateLifeHud(bool Animate, bool ChangeSlotCount, bool AddLife);
    void Regen();
    void HealthSlotsRun(bool FirstRun);
    void UpdateSlotCount();
    void Remove();
    void Construct();
    void HideHUD();
    void ShowHUD();
    void ConsumeItemPlay();
    void ExecuteUbergraph_NewLifeSlot(int32 EntryPoint);
};

#endif
