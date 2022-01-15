#ifndef UE4SS_SDK_BP_TeleportToEntrance_HPP
#define UE4SS_SDK_BP_TeleportToEntrance_HPP

class ABP_TeleportToEntrance_C : AInteractionMaster_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UParticleSystemComponent* P_BossPortal;
    FBP_TeleportToEntrance_CTeleport Teleport;
    void Teleport();
    FString Origin;
    bool StartActivated;

    void PressButton();
    void Show(FVector Location);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_TeleportToEntrance(int32 EntryPoint, int32 CallFunc_PostEventAtLocation_ReturnValue, float CallFunc_Cutscene_OutputPin, UPlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_PlayAnimMontage_ReturnValue, FVector K2Node_CustomEvent_Location, int32 CallFunc_PostEventAtLocation_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1);
    void Teleport__DelegateSignature();
}

#endif
