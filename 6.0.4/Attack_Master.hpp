#ifndef UE4SS_SDK_Attack_Master_HPP
#define UE4SS_SDK_Attack_Master_HPP

class AAttack_Master_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    float Damage;
    float ReleaseTime;
    float Speed;
    float Duration;
    class AEnemy_Character_Parent_C* Parent;
    float MaxDieOutTime;
    bool MaxDieOut;

    void ReceiveBeginPlay();
    void Release();
    void Cancel();
    void Explode();
    void FadeOut();
    void TickRotToPlayer();
    void CustomBeginPlay();
    void ExecuteUbergraph_Attack_Master(int32 EntryPoint);
};

#endif
