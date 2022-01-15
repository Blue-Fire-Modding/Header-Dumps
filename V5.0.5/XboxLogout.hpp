#ifndef UE4SS_SDK_XboxLogout_HPP
#define UE4SS_SDK_XboxLogout_HPP

class UXboxLogout_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Image_0;
    UImage* Image_110;
    UOverlay* Overlay_0;
    UTextBlock* TextBlock_0;
    FXboxLogout_CClose Close;
    void Close();
    float Delay;

    void Construct();
    void ExecuteUbergraph_XboxLogout(int32 EntryPoint);
    void Close__DelegateSignature();
}

#endif
