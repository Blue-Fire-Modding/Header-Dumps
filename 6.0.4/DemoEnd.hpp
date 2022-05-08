#ifndef UE4SS_SDK_DemoEnd_HPP
#define UE4SS_SDK_DemoEnd_HPP

class UDemoEnd_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Return;
    class UWidgetAnimation* Fade;
    class UCanvasPanel* CanvasPanel_0;
    class UTextBlock* DemoMain;
    class UTextBlock* Description;

    void Construct();
    void ExecuteUbergraph_DemoEnd(int32 EntryPoint);
};

#endif
