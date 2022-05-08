#ifndef UE4SS_SDK_Die_Bounds_HPP
#define UE4SS_SDK_Die_Bounds_HPP

class ADie_Bounds_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAkComponent* Ak1;
    class UAkComponent* Ak3;
    class UAkComponent* Ak2;
    class UAkComponent* Ak;
    class UStaticMeshComponent* Collider;
    class UStaticMeshComponent* Mesh;
    class USceneComponent* DefaultSceneRoot;
    TSubclassOf<class UDamageType> DamageType;
    class UParticleSystem* VFX;
    bool Launch Player - Deprecated;
    bool Custom;
    class AActor* Character;
    TEnumAsByte<E_DieBound_Sound::Type> SurfaceSoundDamage;
    bool UseAkComponents;
    float SetCustomOcclusionSound;
    bool UseReverbVolumes;
    float AkComponentScalingFactor;
    class UMaterialInterface* DisappearNewMat;
    class UMaterialInterface* DisappearOldMat0;
    class UMaterialInterface* DisappearOldMat1;
    bool Stage01Music;
    bool UsingComponents;
    bool InVoidMaker;
    class UAkAudioEvent* VMAkEvent;

    void Change Material(bool New Material);
    void Set New Material(class UMaterialInterface* Material);
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void Spawn VFX();
    void ReceiveBeginPlay();
    void ScalingFactor(class UAkComponent* Ak);
    void ExecuteUbergraph_Die_Bounds(int32 EntryPoint);
};

#endif
