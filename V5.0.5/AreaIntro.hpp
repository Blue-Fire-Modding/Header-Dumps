#ifndef UE4SS_SDK_AreaIntro_HPP
#define UE4SS_SDK_AreaIntro_HPP

class UAreaIntro_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Text;
    UImage* Image_50;
    UOverlay* Overlay_0;
    UTextBlock* TextBlock_0;
    UTextBlock* TextBlock_8;
    FAreaIntro_CFinished Finished;
    void Finished();

    void Construct();
    void OnAnimationFinished(const UWidgetAnimation* Animation);
    void Name(FText Area Name, bool Void);
    void Replay();
    void Force Finish();
    void TempRemove();
    void TempReAdd();
    void ExecuteUbergraph_AreaIntro(int32 EntryPoint, RemoveUI__DelegateSignature K2Node_CreateDelegate_OutputDelegate, AddUI__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, const UWidgetAnimation* K2Node_Event_Animation, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FText K2Node_CustomEvent_Area_Name, bool K2Node_CustomEvent_Void, FText CallFunc_MakeLiteralText_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_IsInViewport_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
    void Finished__DelegateSignature();
}

#endif
