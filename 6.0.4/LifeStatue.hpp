#ifndef UE4SS_SDK_LifeStatue_HPP
#define UE4SS_SDK_LifeStatue_HPP

class ALifeStatue_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDecalComponent* Decal;
    class UStaticMeshComponent* A01_MinerShrine;
    class UChildActorComponent* ChildActor;
    class UMaterialInstanceDynamic* Glow Material;
    class UMaterialInstanceDynamic* Material_Stone;
    class UMaterialInstanceDynamic* Material Glow;

    void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void VFX Glow(bool Show);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_LifeStatue(int32 EntryPoint);
};

#endif
