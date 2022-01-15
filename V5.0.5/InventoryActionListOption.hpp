#ifndef UE4SS_SDK_InventoryActionListOption_HPP
#define UE4SS_SDK_InventoryActionListOption_HPP

class UInventoryActionListOption_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Image_0;
    UImage* Image_2;
    UTextBlock* TextBlock_1;

    void SetText(FText InText);
    void Selected();
    void Unselected();
    void ExecuteUbergraph_InventoryActionListOption(int32 EntryPoint, FText K2Node_CustomEvent_InText);
}

#endif
