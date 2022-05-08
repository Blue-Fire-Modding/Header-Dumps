#ifndef UE4SS_SDK_InventoryActionListOption_HPP
#define UE4SS_SDK_InventoryActionListOption_HPP

class UInventoryActionListOption_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Idle;
    class UImage* Image_0;
    class UImage* Image_2;
    class USizeBox* SizeBox_0;
    class UTextBlock* TextBlock_1;
    FText PreConstructText;
    bool IsVM;

    void Selected();
    void Unselected();
    void PreConstruct(bool IsDesignTime);
    void SetText(FText InText);
    void ExecuteUbergraph_InventoryActionListOption(int32 EntryPoint);
};

#endif
