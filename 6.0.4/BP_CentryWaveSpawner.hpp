#ifndef UE4SS_SDK_BP_CentryWaveSpawner_HPP
#define UE4SS_SDK_BP_CentryWaveSpawner_HPP

class ABP_CentryWaveSpawner_C : public AEnemy_Character_Parent_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* ScenePOI;
    class UAkComponent* Ak;
    class UBoxComponent* AreaDetection;
    class UArrowComponent* ArrowDirection;
    float Timeline_1_0_Dissolve_5D7B350846D21242054585B5EE0E4905;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1_0__Direction_5D7B350846D21242054585B5EE0E4905;
    class UTimelineComponent* Timeline_1_0;
    class UStaticMeshComponent* DebugComp;
    float Interval;
    float Speed;
    float Timeout;
    float WideSize;
    bool Circular;
    bool ShowHelp;
    float CircularDuration;
    float TimeOffset;
    TArray<class ALineWave_C*> DeactivatedWaves;
    TArray<class AWave_C*> DeactivatedWavesCircular;
    class UMaterialInterface* WaveMaterial;
    TArray<class AActor*> Waves;
    class UAkAudioEvent* WaveSpawnSound;
    class UParticleSystem* WaveSpawnEmitter;
    class UMaterialInstanceDynamic* New BodyMaterial;
    class UMaterialInstanceDynamic* Glow Material;

    void UserConstructionScript();
    void Timeline_1_0__FinishedFunc();
    void Timeline_1_0__UpdateFunc();
    void OnNotifyEnd_356737304E3B7676D4B8C6B3B032F369(FName NotifyName);
    void OnNotifyBegin_356737304E3B7676D4B8C6B3B032F369(FName NotifyName);
    void OnInterrupted_356737304E3B7676D4B8C6B3B032F369(FName NotifyName);
    void OnBlendOut_356737304E3B7676D4B8C6B3B032F369(FName NotifyName);
    void OnCompleted_356737304E3B7676D4B8C6B3B032F369(FName NotifyName);
    void OnNotifyEnd_A5F6CD9B48A6A8CC90A6D597A9815729(FName NotifyName);
    void OnNotifyBegin_A5F6CD9B48A6A8CC90A6D597A9815729(FName NotifyName);
    void OnInterrupted_A5F6CD9B48A6A8CC90A6D597A9815729(FName NotifyName);
    void OnBlendOut_A5F6CD9B48A6A8CC90A6D597A9815729(FName NotifyName);
    void OnCompleted_A5F6CD9B48A6A8CC90A6D597A9815729(FName NotifyName);
    void OnNotifyEnd_99280E48471439F123D823820DBDC2C1(FName NotifyName);
    void OnNotifyBegin_99280E48471439F123D823820DBDC2C1(FName NotifyName);
    void OnInterrupted_99280E48471439F123D823820DBDC2C1(FName NotifyName);
    void OnBlendOut_99280E48471439F123D823820DBDC2C1(FName NotifyName);
    void OnCompleted_99280E48471439F123D823820DBDC2C1(FName NotifyName);
    void Attack01(int32 Count, int32 Max Count, bool Use Custom Counter);
    void Attack03(int32 Count, int32 Max Count, bool Use Custom Counter);
    void Wave();
    void AddWave(class AWave_C* SelfRef);
    void AddLineWave(class ALineWave_C* SelfRef);
    void ReceiveBeginPlay();
    void ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
    void BndEvt__AreaDetection_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__AreaDetection_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void CheckPlayerDistance();
    void DontDestroyPawnSensing();
    void ExecuteUbergraph_BP_CentryWaveSpawner(int32 EntryPoint);
};

#endif
