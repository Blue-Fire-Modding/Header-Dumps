#ifndef UE4SS_SDK_LifePoint_HPP
#define UE4SS_SDK_LifePoint_HPP

class ULifePoint_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* VFXScale;
    class UWidgetAnimation* Scale;
    class UWidgetAnimation* Last;
    class UImage* BackGlow;
    class UImage* LifeImage;
    class UImage* VFX;
    class UMaterialInstanceDynamic* Material;
    bool HolyBlessing;
    FLifePoint_CRemove Remove;
    void Remove();

    void Empty(bool Effect);
    void Full(bool Effect);
    void current(float Value, bool Effect);
    void SetExtra();
    void Construct();
    void UpdateAnim(int32 Fill);
    void EffectSlot(bool On, float Percent, float Direction);
    void Play Anim Scale();
    void ExecuteUbergraph_LifePoint(int32 EntryPoint);
    void Remove__DelegateSignature();
};

#endif
