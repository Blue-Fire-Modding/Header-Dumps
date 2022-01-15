#ifndef UE4SS_SDK_Attack_Master_HPP
#define UE4SS_SDK_Attack_Master_HPP

class AAttack_Master_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* DefaultSceneRoot;
    float Damage;
    float ReleaseTime;
    float Speed;
    float Duration;
    AEnemy_Character_Parent_C* Parent;
    float MaxDieOutTime;
    bool MaxDieOut;

    void ReceiveBeginPlay();
    void Release();
    void Cancel();
    void Explode();
    void FadeOut();
    void TickRotToPlayer();
    void CustomBeginPlay();
    void ExecuteUbergraph_Attack_Master(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FRotator CallFunc_FindLookAtRotation_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue);
}

#endif
