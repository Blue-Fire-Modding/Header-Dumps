#ifndef UE4SS_SDK_LineWave_HPP
#define UE4SS_SDK_LineWave_HPP

class ALineWave_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* DefaultSceneRoot;
    float Timeline_0_Dissolve_15F8527542290EA14F16EF8D0905CA6B;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_15F8527542290EA14F16EF8D0905CA6B;
    class UTimelineComponent* Timeline_0;
    float Speed;
    float DieTimeout;
    float Wide;
    bool Is White;
    class UMaterialInstanceDynamic* Material;
    FLineWave_CDeactivate Deactivate;
    void Deactivate(class ALineWave_C* SelfRef);
    class UMaterialInterface* WaveMaterial;
    float Damage;
    bool UseTick;
    bool Dissolve;
    class UBlueFire_Game_Instance_C* GameInstance;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Play(FVector NewLocation, bool Custom Rotation, bool Custom Forward Vector, FVector Forward Vector, FRotator Rot);
    void Deactivate LineWave();
    void MoveTick();
    void ReceiveBeginPlay();
    void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_LineWave(int32 EntryPoint);
    void Deactivate__DelegateSignature(class ALineWave_C* SelfRef);
};

#endif
