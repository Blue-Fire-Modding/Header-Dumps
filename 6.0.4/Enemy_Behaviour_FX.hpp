#ifndef UE4SS_SDK_Enemy_Behaviour_FX_HPP
#define UE4SS_SDK_Enemy_Behaviour_FX_HPP

class UEnemy_Behaviour_FX_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeIn;
    class UImage* Image_0;

    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void TempRemove();
    void TempReAdd();
    void Construct();
    void ExecuteUbergraph_Enemy_Behaviour_FX(int32 EntryPoint);
};

#endif
