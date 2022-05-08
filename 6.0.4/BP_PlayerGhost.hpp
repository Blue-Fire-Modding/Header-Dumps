#ifndef UE4SS_SDK_BP_PlayerGhost_HPP
#define UE4SS_SDK_BP_PlayerGhost_HPP

class ABP_PlayerGhost_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAkComponent* Play_Spirit_Umbra_Loop;
    class UParticleSystemComponent* P_GodPresence_Ghost;
    class UStaticMeshComponent* Player_Pose_Birth_Mesh;
    class USphereComponent* Collision;
    class USceneComponent* DefaultSceneRoot;
    FST_PlayerGhost Data;

    void BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_PlayerGhost(int32 EntryPoint);
};

#endif
