#ifndef UE4SS_SDK_ShopItemWBP_HPP
#define UE4SS_SDK_ShopItemWBP_HPP

class UShopItemWBP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* Amount;
    class UTextBlock* Cost;
    class UImage* Image_5;
    class UImage* Image_124;
    class UImage* Image_199;
    class UImage* ItemFrame;
    class UImage* ItemImage;
    class UTextBlock* Name;
    class UImage* SimpleGlow;

    void Selected();
    void Unselected();
    void NotFound();
    void SetItemInfo(class UMaterialInterface* Material, FText Name);
    void Update(FInventory Item);
    void ExecuteUbergraph_ShopItemWBP(int32 EntryPoint);
};

#endif
