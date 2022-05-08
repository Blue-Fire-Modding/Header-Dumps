#ifndef UE4SS_SDK_XboxLogout_HPP
#define UE4SS_SDK_XboxLogout_HPP

class UXboxLogout_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_0;
    class UImage* Image_110;
    class UOverlay* Overlay_0;
    class UTextBlock* TextBlock_0;
    FXboxLogout_CClose Close;
    void Close();
    float Delay;

    void Construct();
    void ExecuteUbergraph_XboxLogout(int32 EntryPoint);
    void Close__DelegateSignature();
};

#endif
