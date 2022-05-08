#ifndef UE4SS_SDK_ControlsUI_PS_HPP
#define UE4SS_SDK_ControlsUI_PS_HPP

class UControlsUI_PS_C : public UControlsUI_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* CanvasPanel_46;
    class UControlsText_C* ControlsText_C_383;
    class UControlsText_C* ControlsText_C_1308;
    class UControlsText_C* ControlsText_C_1471;
    class UControlsText_C* ControlsText_C_1867;
    class UControlsText_C* ControlsText_C_2100;
    class UTextBlock* Disclaimer;
    class UImage* Image_95;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void RefreshExtra();
    void ExecuteUbergraph_ControlsUI_PS(int32 EntryPoint);
};

#endif
