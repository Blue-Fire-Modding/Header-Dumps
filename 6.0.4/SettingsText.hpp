#ifndef UE4SS_SDK_SettingsText_HPP
#define UE4SS_SDK_SettingsText_HPP

class USettingsText_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* UnselectAnim;
    class UTextBlock* Text;
    FText Box;
    int32 Size;
    bool Select;
    bool Deactivated;

    void PreConstruct(bool IsDesignTime);
    void SelectEv();
    void Unselect();
    void ExecuteUbergraph_SettingsText(int32 EntryPoint);
};

#endif
