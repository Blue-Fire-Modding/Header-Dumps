#ifndef UE4SS_SDK_Action_Remap_Option_HPP
#define UE4SS_SDK_Action_Remap_Option_HPP

class UAction_Remap_Option_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* Action;
    class UImage* Bar;
    class UImage* Key;
    class UImage* SeparatorBar;
    TEnumAsByte<PlatformInput::Type> Option_Action;
    bool CanBeRemapped;
    FText Note;
    bool PC;
    class UBlueFire_Game_Instance_C* GameInstance;

    void Editing();
    void PreConstruct(bool IsDesignTime);
    void Selected();
    void Reset(class UBlueFire_Game_Instance_C* BlueFireGameInstance);
    void Unselected();
    void ExecuteUbergraph_Action_Remap_Option(int32 EntryPoint);
};

#endif
