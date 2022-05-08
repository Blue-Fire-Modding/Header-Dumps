#ifndef UE4SS_SDK_Moving_Path_Actor_Loop_HPP
#define UE4SS_SDK_Moving_Path_Actor_Loop_HPP

class AMoving_Path_Actor_Loop_C : public AMechanics_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAkComponent* AkGoUp;
    class UAkComponent* AkLoop;
    class UAkComponent* AkGoDown;
    class UStaticMeshComponent* Cube;
    class UBillboardComponent* Billboard;
    class AMoving_Path_Spline_C* Path;
    float Distance;
    float Speed;
    float DelayTime_Start;
    bool SwitchDirection;
    float DelayTime_End;
    float Pos;
    bool Loop;
    bool AutoStart;
    class AActor* Child;
    float ActorPreviousZ;
    float Time;
    bool UseTimeToMove;
    float CurrentTime;
    bool ChangeMesh;
    class UStaticMesh* Mesh;
    class UMaterialInterface* Material;
    float Float;
    class UAkAudioEvent* SoundLoop;
    class UAkAudioEvent* StopLoop;
    class UAkAudioEvent* SoundStart1;
    class UAkAudioEvent* SoundStart2;
    class UAkAudioEvent* SoundStop1;
    class UAkAudioEvent* SoundStop2;
    bool ShowPrint;
    float DelaySoundUp;
    float DelaySoundDown;
    class UMaterialInterface* DisappearNewMat;
    class UMaterialInterface* DisappearOldMat;
    bool bCanMove;

    void UserConstructionScript();
    void Change Material(bool New Material);
    void Set New Material(class UMaterialInterface* Material);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void PlaySound();
    void StopSound();
    void Activate(bool ExternalControl, bool BeginPlay, bool ChangeCamera, bool Instant, bool Is Cutscene, bool Affect Timer);
    void Set Mobility(bool bCanMove);
    void ExecuteUbergraph_Moving_Path_Actor_Loop(int32 EntryPoint);
};

#endif
