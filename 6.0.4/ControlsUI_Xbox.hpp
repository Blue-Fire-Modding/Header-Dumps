#ifndef UE4SS_SDK_ControlsUI_Xbox_HPP
#define UE4SS_SDK_ControlsUI_Xbox_HPP

class UControlsUI_Xbox_C : public UControlsUI_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* CanvasPanel_46;
    class UControlsText_C* ControlsText_C_383;
    class UControlsText_C* ControlsText_C_1308;
    class UControlsText_C* ControlsText_C_1471;
    class UControlsText_C* ControlsText_C_1867;
    class UTextBlock* Disclaimer;
    class UImage* Image_95;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void RefreshExtra();
    void ExecuteUbergraph_ControlsUI_Xbox(int32 EntryPoint);
};

#endif
