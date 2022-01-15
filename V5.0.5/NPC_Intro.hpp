#ifndef UE4SS_SDK_NPC_Intro_HPP
#define UE4SS_SDK_NPC_Intro_HPP

class UNPC_Intro_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Text;
    UImage* Image_50;
    UTextBlock* NPCName;
    UOverlay* Overlay_0;
    UTextBlock* SubTitleText;
    FText NameNPC;
    FText Subtitle;

    void Construct();
    void OnAnimationFinished(const UWidgetAnimation* Animation);
    void TempRemove();
    void TempReAdd();
    void ExecuteUbergraph_NPC_Intro(int32 EntryPoint, APawn* CallFunc_GetPlayerPawn_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, RemoveUI__DelegateSignature K2Node_CreateDelegate_OutputDelegate, AddUI__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, const UWidgetAnimation* K2Node_Event_Animation, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsInViewport_ReturnValue);
}

#endif
