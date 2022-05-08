#ifndef UE4SS_SDK_VoidExit_HPP
#define UE4SS_SDK_VoidExit_HPP

class UVoidExit_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Fade_Icon;
    class UWidgetAnimation* Fade_Background;
    class UImage* Background;
    class UImage* Image_41;
    bool AddLife;
    float Delay;

    void Construct();
    void Loaded();
    void End();
    void Start();
    void ExecuteUbergraph_VoidExit(int32 EntryPoint);
};

#endif
