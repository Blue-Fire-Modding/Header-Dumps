#ifndef UE4SS_SDK_SpiritCharge_HPP
#define UE4SS_SDK_SpiritCharge_HPP

class USpiritCharge_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anim;
    class UImage* Image_96;
    TEnumAsByte<Spirits::Type> Spirit;
    class UMaterialInstanceDynamic* Mat;

    void PreConstruct(bool IsDesignTime);
    void Set(TEnumAsByte<Spirits::Type> Spirit);
    void Charge();
    void RechargeEv(TEnumAsByte<Spirits::Type> Spirit, bool Use);
    void ExecuteUbergraph_SpiritCharge(int32 EntryPoint);
};

#endif
