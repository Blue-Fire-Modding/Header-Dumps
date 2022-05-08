#ifndef UE4SS_SDK_DeathHud_HPP
#define UE4SS_SDK_DeathHud_HPP

class UDeathHud_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Fade_Activate;
    class UWidgetAnimation* Idle;
    class UWidgetAnimation* Fade;
    class UImage* Image_27;
    class UImage* Image_135;
    FDeathHud_CRestart Restart;
    void Restart();
    class AGameOverController_C* GameOverController;

    void Construct();
    void Remove();
    void CallRestart();
    void ActivateDeathHud();
    void ReBuild();
    void IdleAnim();
    void ExecuteUbergraph_DeathHud(int32 EntryPoint);
    void Restart__DelegateSignature();
};

#endif
