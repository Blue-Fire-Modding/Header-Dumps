#ifndef UE4SS_SDK_AreaTransition_Elevator_HPP
#define UE4SS_SDK_AreaTransition_Elevator_HPP

class AAreaTransition_Elevator_C : public AInteractionMaster_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* TargetPosIndicator1;
    class UBoxComponent* Box1;
    class UAkComponent* AkClose;
    class UAkComponent* AkOpen;
    class UArrowComponent* Arrow_Direction;
    class UChildActorComponent* ChildActor;
    class USkeletalMeshComponent* SM_Elevator_Door_SkelMesh;
    class UAkComponent* Ak;
    float Move_Alpha_F29FC58245A289BA1525E2A766CD41D7;
    TEnumAsByte<ETimelineDirection::Type> Move__Direction_F29FC58245A289BA1525E2A766CD41D7;
    class UTimelineComponent* Move;
    class AActor* Camera;
    bool Start Bottom;
    float PlayRate;
    float Distance;
    float InitialZ;
    bool PlayerInside;
    bool Moving;
    bool MovingDown;
    bool Active;
    bool ActivatedFromStart;
    TEnumAsByte<StreamingChunks::Type> CurrentChunk;
    TEnumAsByte<StreamingChunks::Type> NewChunk;
    FTransform NewLoc;
    TArray<FName> VisibleLevels;
    bool IsSpecialRespawn;
    bool Start HUD;
    FVector Player Offset;
    FAreaTransition_Elevator_CTriggerPlayer TriggerPlayer;
    void TriggerPlayer();
    class UAkAudioEvent* TravelSound;
    FString Elevator ID;
    EDetachmentRule Detach Scale Rule;
    EAttachmentRule Attach Scale Rule;
    class UAkAudioEvent* TravelSoundGo;
    class UAkAudioEvent* TravelSoundArrive;
    class UAkAudioEvent* AudioHitArrived;
    class UAkAudioEvent* ElevatorLoopSound;
    class UAkAudioEvent* StopElevatorLoopSound;
    bool PreLoadTravel;
    bool Show Area Name;
    TArray<class UMaterialInterface*> Materials;
    class UStaticMesh* NewMesh;
    class UStaticMesh* OriginalMesh;
    bool SwitchMesh;

    void UserConstructionScript();
    void Move__FinishedFunc();
    void Move__UpdateFunc();
    void Move__AudioHit__EventFunc();
    void ReceiveBeginPlay();
    void PressButton();
    void Fix();
    void SetText();
    void StartElevatorSound();
    void Animation(bool Open, bool Instant);
    void End();
    void SpecialRespawn();
    void Special Press Button();
    void Restart();
    void OverlapEndClean();
    void BeginOverlapEv();
    void Change Mesh(bool Set Original);
    void ExecuteUbergraph_AreaTransition_Elevator(int32 EntryPoint);
    void TriggerPlayer__DelegateSignature();
};

#endif
