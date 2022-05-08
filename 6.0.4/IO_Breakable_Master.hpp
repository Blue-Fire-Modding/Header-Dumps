#ifndef UE4SS_SDK_IO_Breakable_Master_HPP
#define UE4SS_SDK_IO_Breakable_Master_HPP

class AIO_Breakable_Master_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* ScenePOI;
    class UBillboardComponent* VFX_Spawn;
    class UStaticMeshComponent* StaticMesh;
    float SoundSize;
    int32 Hits;
    class UStaticMesh* Mesh_00;
    class UStaticMesh* Mesh_01;
    class UStaticMesh* Mesh_02;
    class UStaticMesh* Mesh_03;
    class UParticleSystem* VFX;
    class UAkAudioEvent* Sound;
    bool Persistent;
    FString ID;
    int32 Mesh;
    float DropChance;
    bool ResetOnHit;
    int32 MaxCurrencyDrops;
    int32 MinCurrencyDrops;
    class UAkAudioEvent* Sound2;
    float DropHeightOffset;
    FVector VFX Scale;
    class UAkAudioEvent* Sound0;
    float Item Chance;
    int32 BreakableId;
    int32 OriginalAmountOfHits;
    bool DontDestroyPOI;
    class APlayer_Character_BP_C* PlayerCharacter;
    bool IsInVoidMaker;

    void UserConstructionScript();
    void DropLoot();
    void ReceiveBeginPlay();
    void Reset();
    void ResetExecute();
    void Damage();
    void SetMesh();
    void ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
    void Custom Construction();
    void VMReset();
    void ExecuteUbergraph_IO_Breakable_Master(int32 EntryPoint);
};

#endif
