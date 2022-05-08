#ifndef UE4SS_SDK_Player_AttackWave_HPP
#define UE4SS_SDK_Player_AttackWave_HPP

class APlayer_AttackWave_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    TArray<class AActor*> HitActors;
    float Damage;
    FVector Dir;
    bool Left;
    int32 AttackDire;
    bool recoil;
    bool Downwards;
    bool DownSmash;
    class APlayer_Character_BP_C* Player;
    bool Bounce;
    class UParticleSystemComponent* Em;
    TEnumAsByte<EPhysicalSurface> Surface;
    TEnumAsByte<EPhysicalSurface> SurfaceB;
    TArray<FHitStruct> HitArray;

    void AttackExecute(bool Downwards, FVector Dir, float Damage, int32 AttackDire, bool DownSmash, bool AerialAttack, float BounceHeight, float Range);
    void SetSurfaceSoundType(TEnumAsByte<EPhysicalSurface> SurfaceType);
    void Reset();
    void End(bool CompleteKill);
    void ContinueAttack();
    void Attack Clear Timer();
    void ReceiveHandlerA(bool Hit);
    void ReceiveAttackB(bool Hit, FVector ImpactPoint);
    void ReceiveAttackC(bool Hit);
    void ReceiveHandlerAttackA(bool Hit, FVector HitLocation, FVector HitImpactNormal, FVector TraceEnd);
    void ReceiveHandlerAttackB(bool Hit, FVector HitLocation, FVector HitImpactNormal, FVector TraceEnd);
    void ReceiveHandlerAttackC(bool Hit, FVector Vector, const TArray<FHitResult>& HitResult);
    void ExecuteUbergraph_Player_AttackWave(int32 EntryPoint);
};

#endif
