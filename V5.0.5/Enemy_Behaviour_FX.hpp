#ifndef UE4SS_SDK_Enemy_Behaviour_FX_HPP
#define UE4SS_SDK_Enemy_Behaviour_FX_HPP

class UEnemy_Behaviour_FX_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* FadeIn;
    UImage* Image_0;

    void OnAnimationFinished(const UWidgetAnimation* Animation);
    void TempRemove();
    void TempReAdd();
    void Construct();
    void ExecuteUbergraph_Enemy_Behaviour_FX(int32 EntryPoint, APawn* CallFunc_GetPlayerPawn_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, RemoveUI__DelegateSignature K2Node_CreateDelegate_OutputDelegate, AddUI__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const UWidgetAnimation* K2Node_Event_Animation);
}

#endif
