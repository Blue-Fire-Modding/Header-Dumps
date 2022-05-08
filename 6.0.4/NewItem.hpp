#ifndef UE4SS_SDK_NewItem_HPP
#define UE4SS_SDK_NewItem_HPP

class UNewItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Fade;
    class UWidgetAnimation* Idle;
    class UWidgetAnimation* Intro;
    class UTextBlock* Amount;
    class UImage* Background;
    class UBorder* Border_82;
    class UTextBlock* Description;
    class UImage* DescriptionBar;
    class UImage* Glow;
    class UImage* Image_127;
    class UImage* Item;
    class UTextBlock* Name;
    class UImage* Ok;
    class USpacer* Spacer_0;
    class UTextBlock* TextBlock_78;
    FNewItem_CRemoved Removed;
    void Removed();
    bool HasPickup;

    void Out();
    void PlayNewItem(FText InText, class UMaterialInterface* Material_Image, FText Description, const TArray<FItemEffectInfo>& Stats, const bool ShowStats, TEnumAsByte<InventoryItemType::Type> InventoryItemType, bool KeyItem, const TArray<class UAkAudioEvent*>& AkEvent, int32 Amount);
    void Construct();
    void UpdateUI();
    void ExecuteUbergraph_NewItem(int32 EntryPoint);
    void Removed__DelegateSignature();
};

#endif
