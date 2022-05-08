#ifndef UE4SS_SDK_NewWind_BP_HPP
#define UE4SS_SDK_NewWind_BP_HPP

class ANewWind_BP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* WindParticles1;
    class UStaticMeshComponent* WindNew;
    class UAkComponent* AkThrow;
    class UAkComponent* AkLoop;
    class UStaticMeshComponent* FloorOpening;
    class UBoxComponent* Box;
    class UArrowComponent* Arrow;
    class USceneComponent* DefaultSceneRoot;
    float Distance;
    float Cooldown;
    bool Active;
    class UMaterialInstanceDynamic* SourceMat;

    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Loop();
    void Toggle(bool A);
    void ReceiveBeginPlay();
    void SetMoreWind();
    void ExecuteUbergraph_NewWind_BP(int32 EntryPoint);
};

#endif
