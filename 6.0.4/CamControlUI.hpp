#ifndef UE4SS_SDK_CamControlUI_HPP
#define UE4SS_SDK_CamControlUI_HPP

class UCamControlUI_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* 50;
    class UImage* Apply_Button;
    class UCanvasPanel* CanvasPanel_0;
    class UTextBlock* Filter;
    class UImage* Hide_Button;
    class UImage* Image_3;
    class UImage* Image_82;
    class UImage* Image_128;
    class UImage* Move_Button;
    class UImage* Move_Down_Button;
    class UImage* Move_Up_Button;
    class UImage* Pause_Button;
    class UImage* Rotate_Cam_Button;
    class UTextBlock* TextBlock_1;
    class UImage* Toggle_Filter_L_Button;
    class UImage* Toggle_Filter_R_Button;
    class UImage* Zoom_L_Button;
    class UImage* Zoom_R_Button;
    bool ScreenshotMode;

    void Show();
    void UpdateUI();
    void Hide();
    void UpdateCamSpeed(FText InText);
    void Construct();
    void InGame Filter(bool bIsOn);
    void VoidMakerCamera();
    void ExecuteUbergraph_CamControlUI(int32 EntryPoint);
};

#endif
