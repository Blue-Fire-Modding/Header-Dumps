#ifndef UE4SS_SDK_Message_PopUp_HPP
#define UE4SS_SDK_Message_PopUp_HPP

class UMessage_PopUp_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Fade;
    UImage* Image_0;
    UTextBlock* TextBlock_48;
    FText Text;
    float Playback Speed;

    void Construct();
    void ReConstruct(FText InText, bool SkipReName);
    void OnAnimationFinished(const UWidgetAnimation* Animation);
    void TempRemove();
    void TempReAdd();
    void ExecuteUbergraph_Message_PopUp(int32 EntryPoint, APawn* CallFunc_GetPlayerPawn_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, RemoveUI__DelegateSignature K2Node_CreateDelegate_OutputDelegate, AddUI__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FText K2Node_CustomEvent_InText, bool K2Node_CustomEvent_SkipReName, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsInViewport_ReturnValue, const UWidgetAnimation* K2Node_Event_Animation, bool CallFunc_IsInViewport_ReturnValue_1);
}

#endif
