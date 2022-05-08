#ifndef UE4SS_SDK_PickUpSpawn_HPP
#define UE4SS_SDK_PickUpSpawn_HPP

class APickUpSpawn_C : public APickup_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAkComponent* Play_Ore_Currency_Spawn_Bounce_0;
    int32 BounceSFX;
    TEnumAsByte<EPhysicalSurface> Surface;
    bool IsDestroying;
    class ATraceHandler_C* TraceHandler;
    class UPhysicalMaterial* CollisionPhysMat;

    void BndEvt__Collider_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveTraceForPickUp(bool Hit, TEnumAsByte<EPhysicalSurface> SurfaceType, FVector Vector);
    void ExecuteUbergraph_PickUpSpawn(int32 EntryPoint);
};

#endif
