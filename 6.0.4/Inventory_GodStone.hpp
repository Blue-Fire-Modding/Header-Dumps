#ifndef UE4SS_SDK_Inventory_GodStone_HPP
#define UE4SS_SDK_Inventory_GodStone_HPP

class UInventory_GodStone_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Background;
    class UImage* Border;
    class UTextBlock* CollectedTime;
    class UImage* CounterImg;
    class UTextBlock* CounterTxt;
    class UTextBlock* GodStoneName;
    class USizeBox* SizeBox_0;
    class UTextBlock* TextBlock_3;
    bool IsDLC;
    bool IsChainsBreaking;

    void Collected(FText Name, bool Collected, FText Time, class UTexture2D* Texture, int32 Shards, bool IsDLC);
    void PreConstruct(bool IsDesignTime);
    void Selected();
    void Unselected();
    void ExecuteUbergraph_Inventory_GodStone(int32 EntryPoint);
};

#endif
