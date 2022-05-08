#ifndef UE4SS_SDK_ItemName_HPP
#define UE4SS_SDK_ItemName_HPP

class UItemName_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Background;
    class UImage* Image_177;
    class UTextBlock* Name;
    TEnumAsByte<Items::Type> Item;
    class UWidgetAnimation* Fade;

    void Remove();
    void Set(FText InText, bool Notify);
    void ShowPopUp();
    void Hide();
    void App();
    void TempRemove();
    void TempReAdd();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_ItemName(int32 EntryPoint);
};

#endif
