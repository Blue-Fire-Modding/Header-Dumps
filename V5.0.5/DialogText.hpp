#ifndef UE4SS_SDK_DialogText_HPP
#define UE4SS_SDK_DialogText_HPP

class UDialogText_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* TextBlock_99;
    FText EditorPreviewText;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_DialogText(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
}

#endif
