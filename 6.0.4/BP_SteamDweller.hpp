#ifndef UE4SS_SDK_BP_SteamDweller_HPP
#define UE4SS_SDK_BP_SteamDweller_HPP

class ABP_SteamDweller_C : public AEnemy_Character_Parent_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SM_Sword_Col_01;
    class USceneComponent* ScenePOI;
    class UArrowComponent* Arrow Forward;
    class UParticleSystemComponent* P_SlashHorizontal;
    class UArrowComponent* Arrow_Horizontal;
    class UParticleSystemComponent* P_SlashVertical;
    class UArrowComponent* Arrow_Vertical;
    class UStaticMeshComponent* Sword;
    float Timeline_1_0_Dissolve_7ABF53FB487D524BBA9627A716D0A7AA;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1_0__Direction_7ABF53FB487D524BBA9627A716D0A7AA;
    class UTimelineComponent* Timeline_1_0;
    FVector MoveBackDire_0;
    FVector MoveBackOriginal_0;
    FVector Floor Offset;
    class UParticleSystemComponent* Floor Shadow Particle;
    class URoadDweller_AnimBp_C* Anim;
    bool isHit;
    TEnumAsByte<E_RoadDweller::Type> Behaviour_0;
    float RecoveryTime;
    class UMaterialInstanceDynamic* New BodyMaterial;
    float Attack Distance;
    int32 WwiseIndex;
    class UMaterialInstanceDynamic* New Body Material2;

    void UserConstructionScript();
    void Timeline_1_0__FinishedFunc();
    void Timeline_1_0__UpdateFunc();
    void OnNotifyEnd_D7A06317403B35B8CCD0D99A226869B0(FName NotifyName);
    void OnNotifyBegin_D7A06317403B35B8CCD0D99A226869B0(FName NotifyName);
    void OnInterrupted_D7A06317403B35B8CCD0D99A226869B0(FName NotifyName);
    void OnBlendOut_D7A06317403B35B8CCD0D99A226869B0(FName NotifyName);
    void OnCompleted_D7A06317403B35B8CCD0D99A226869B0(FName NotifyName);
    void OnNotifyEnd_E10D61A940983401AD4D35B6F106F923(FName NotifyName);
    void OnNotifyBegin_E10D61A940983401AD4D35B6F106F923(FName NotifyName);
    void OnInterrupted_E10D61A940983401AD4D35B6F106F923(FName NotifyName);
    void OnBlendOut_E10D61A940983401AD4D35B6F106F923(FName NotifyName);
    void OnCompleted_E10D61A940983401AD4D35B6F106F923(FName NotifyName);
    void OnNotifyEnd_10962C734E10606EF118C080ACC352B7(FName NotifyName);
    void OnNotifyBegin_10962C734E10606EF118C080ACC352B7(FName NotifyName);
    void OnInterrupted_10962C734E10606EF118C080ACC352B7(FName NotifyName);
    void OnBlendOut_10962C734E10606EF118C080ACC352B7(FName NotifyName);
    void OnCompleted_10962C734E10606EF118C080ACC352B7(FName NotifyName);
    void OnNotifyEnd_FA6FE17444B0DB71A3327E83F7C8322E(FName NotifyName);
    void OnNotifyBegin_FA6FE17444B0DB71A3327E83F7C8322E(FName NotifyName);
    void OnInterrupted_FA6FE17444B0DB71A3327E83F7C8322E(FName NotifyName);
    void OnBlendOut_FA6FE17444B0DB71A3327E83F7C8322E(FName NotifyName);
    void OnCompleted_FA6FE17444B0DB71A3327E83F7C8322E(FName NotifyName);
    void Attack01(int32 Count, int32 Max Count, bool Use Custom Counter);
    void PlayerDamage(class AActor* Actor);
    void TurnDamageSwordOn(bool On);
    void BndEvt__SM_Sword_Col_01_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void MoveIn();
    void ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
    void ReceiveBeginPlay();
    void Decal();
    void PerformAttackDash();
    void Attack02(int32 Count, int32 Max Count, bool Use Custom Counter);
    void Start Agro(bool Start);
    void Call Parry();
    void PerformAttackArea();
    void ExecuteUbergraph_BP_SteamDweller(int32 EntryPoint);
};

#endif
