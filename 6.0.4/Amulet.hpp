#ifndef UE4SS_SDK_Amulet_HPP
#define UE4SS_SDK_Amulet_HPP

class UAmulet_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Unselect;
    class UWidgetAnimation* Equip;
    class UWidgetAnimation* SelectionIdle;
    class UScaleBox* Box;
    class UButton* Button_0;
    class UImage* Equipped;
    class UImage* ItemImage;
    class UImage* Selection;
    bool Valid;
    bool Select;
    bool On;
    bool IsEquipped;
    TEnumAsByte<Spirits::Type> Spirit;
    class UInventory_C* Inventory;

    void UpdateSpirit(const int32& ChildN, const TArray<TEnumAsByte<Spirits::Type>>& InventorySpirits, const TArray<TEnumAsByte<Spirits::Type>>& EquippedSpirits, class UInventory_C* Inventory);
    void Selected();
    void Unselected();
    void EquipItem();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_Amulet(int32 EntryPoint);
};

#endif
