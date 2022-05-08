#ifndef UE4SS_SDK_Wave_HPP
#define UE4SS_SDK_Wave_HPP

class AWave_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* WaveMesh;
    class USceneComponent* DefaultSceneRoot;
    float Dissolve_Dissolve_02092BD04226B7A879D22E83B1BFD19A;
    TEnumAsByte<ETimelineDirection::Type> Dissolve__Direction_02092BD04226B7A879D22E83B1BFD19A;
    class UTimelineComponent* Dissolve;
    float Expand_Dissolve_DBC59CA34352729BC3EC548C736EA22D;
    float Expand_Glow_DBC59CA34352729BC3EC548C736EA22D;
    float Expand_Scale_DBC59CA34352729BC3EC548C736EA22D;
    TEnumAsByte<ETimelineDirection::Type> Expand__Direction_DBC59CA34352729BC3EC548C736EA22D;
    class UTimelineComponent* Expand;
    float Duration;
    float Size;
    class UCurveFloat* CurveFade;
    FWave_CDeactivate Deactivate;
    void Deactivate(class AWave_C* SelfRef);
    class UMaterialInstanceDynamic* Material;
    float Damage;
    bool Is White;
    class UMaterialInterface* WaveMaterial;
    bool Tick;
    bool HasDissolve;
    class APlayer_Character_BP_C* Player;
    class UBlueFire_Game_Instance_C* GameInstance;

    void Expand__FinishedFunc();
    void Expand__UpdateFunc();
    void Dissolve__FinishedFunc();
    void Dissolve__UpdateFunc();
    void ReceiveTick(float DeltaSeconds);
    void CustomEvent(FVector NewLocation, bool Custom Rotation, bool Custom Forward Vector, FVector Forward Vector);
    void Deactivate LineWave();
    void MoveTick();
    void Play(FVector New Location, FRotator NewRotation);
    void CustomEvent_2(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void DissolveEvent();
    void ExecuteUbergraph_Wave(int32 EntryPoint);
    void Deactivate__DelegateSignature(class AWave_C* SelfRef);
};

#endif
