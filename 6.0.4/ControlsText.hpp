#ifndef UE4SS_SDK_ControlsText_HPP
#define UE4SS_SDK_ControlsText_HPP

class UControlsText_C : public UTextBlock
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool CanBeRemapped;
    int32 MoveLeftOrRightSum;
    TEnumAsByte<PlatformInput::Type> Action;
    int32 MoveDownSum;

    void Select();
    void Unselect();
    void ExecuteUbergraph_ControlsText(int32 EntryPoint);
};

#endif
