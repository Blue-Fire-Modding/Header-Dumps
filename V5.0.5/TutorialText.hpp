#ifndef UE4SS_SDK_TutorialText_HPP
#define UE4SS_SDK_TutorialText_HPP

class ATutorialText_C : AInteractionMaster_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UParticleSystemComponent* ParticleSystem;
    UDecalComponent* Decal;
    bool FreezePlayer;
    TEnumAsByte<TutorialList::Type> Tutorial;
    bool OpenOnSpawn;
    bool TutOpen;
    FTutorialText_CRemoved Removed;
    void Removed();
    FString ID_Tutorial;
    bool OpenOnlyOnce;
    bool HideUthasNoDemo;
    bool CloseByDie;
    UDemoTextTutorial_C* DemoTextTutorial;

    void UserConstructionScript(FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue);
    void PressButton();
    void Die();
    void SpawnOpen(FString ID);
    void ReceiveBeginPlay();
    void VFX Show(bool Show);
    void Take Hit();
    void ExecuteUbergraph_TutorialText(int32 EntryPoint, UPlayerController* CallFunc_GetPlayerController_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, TakeHit__DelegateSignature K2Node_CreateDelegate_OutputDelegate, Die__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, FString K2Node_CustomEvent_Id, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, APawn* CallFunc_GetPlayerPawn_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, FString CallFunc_CheckState_Same_ID_1, bool CallFunc_CheckState_Used_1, bool K2Node_CustomEvent_Show, UDemoTextTutorial_C* CallFunc_Create_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
    void Removed__DelegateSignature();
}

#endif
