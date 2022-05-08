#ifndef UE4SS_SDK_InventoryActionList_HPP
#define UE4SS_SDK_InventoryActionList_HPP

class UInventoryActionList_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UInventoryActionListOption_C* Option00;
    class UInventoryActionListOption_C* Option01;
    class UInventoryActionListOption_C* Option02;
    class UWrapBox* WrapBox_0;
    int32 Length;
    int32 SelectedOption;

    void Set(const TArray<FText>& Options);
    void ReceiveMovement(const bool Down, bool RefreshOnly, class AInventoryController_C* InventoryController);
    void ExecuteUbergraph_InventoryActionList(int32 EntryPoint);
};

#endif
