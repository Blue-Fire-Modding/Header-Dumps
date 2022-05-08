#ifndef UE4SS_SDK_InventoryItem_HPP
#define UE4SS_SDK_InventoryItem_HPP

class UInventoryItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Unselect;
    class UWidgetAnimation* Equip;
    class UWidgetAnimation* SelectionIdle;
    class UTextBlock* Amount;
    class UTextBlock* Amount_1;
    class UImage* AttackArrow;
    class UScaleBox* Box;
    class UImage* Equipped;
    class UImage* Frame;
    class UImage* Frame_1;
    class UHorizontalBox* HorizontalBox_144;
    class UImage* ItemImage;
    class UImage* nbACK;
    class UOverlay* Overlay_123;
    class UOverlay* Overlay_274;
    class UImage* Selection;
    class UImage* SpecialKeyItemFunction;
    TEnumAsByte<Items::Type> Item;
    bool Valid;
    bool Select;
    TEnumAsByte<Tunics::Type> Tunic;
    TEnumAsByte<Weapons::Type> Sword;

    void EquipItem();
    void PreConstruct(bool IsDesignTime);
    void Unselected();
    void Update(FInventory Item, bool Valid, bool Equipped, TEnumAsByte<Tunics::Type> Tunic, TEnumAsByte<InventoryItemType::Type> Type, TEnumAsByte<Weapons::Type> Sword, bool GrayedOut);
    void Selected();
    void ExecuteUbergraph_InventoryItem(int32 EntryPoint);
};

#endif
