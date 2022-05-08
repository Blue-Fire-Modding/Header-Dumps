#ifndef UE4SS_SDK_VoidExit_SealedLand_HPP
#define UE4SS_SDK_VoidExit_SealedLand_HPP

class UVoidExit_SealedLand_C : public UUserWidget
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
    void ExecuteUbergraph_VoidExit_SealedLand(int32 EntryPoint);
};

#endif
