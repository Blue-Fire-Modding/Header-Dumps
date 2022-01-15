#ifndef UE4SS_SDK_CreditsVoidMasterUI_HPP
#define UE4SS_SDK_CreditsVoidMasterUI_HPP

class UCreditsVoidMasterUI_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* FadeOut;
    UWidgetAnimation* FadeIn;
    UCanvasPanel* CanvasPanel_0;
    UImage* Image_69;
    UImage* Image_147;
    UImage* Image_331;
    UImage* Image_486;
    UImage* Image_1159;
    UScrollBox* ScrollBox_0;
    UImage* Wwise;
    FCreditsVoidMasterUI_CFinish Finish;
    void Finish();

    void Construct();
    void OnAnimationFinished(const UWidgetAnimation* Animation);
    void ExecuteUbergraph_CreditsVoidMasterUI(int32 EntryPoint, int32 CallFunc_PostEventAtLocation_ReturnValue, const UWidgetAnimation* K2Node_Event_Animation, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
    void Finish__DelegateSignature();
}

#endif
