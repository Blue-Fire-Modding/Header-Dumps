#ifndef UE4SS_SDK_OverrideListenerLocation_HPP
#define UE4SS_SDK_OverrideListenerLocation_HPP

class AOverrideListenerLocation_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAkComponent* AkChoir;
    class UBillboardComponent* L5;
    class UBillboardComponent* L4;
    class UBillboardComponent* L3;
    class UBillboardComponent* L2;
    class UBillboardComponent* L1;
    class USceneComponent* Listener Positions;
    class USceneComponent* DefaultSceneRoot;
    float ScaleTimelineChord_ScaleCurve_EC4B765645468E57A62D0F99738C0F7D;
    TEnumAsByte<ETimelineDirection::Type> ScaleTimelineChord__Direction_EC4B765645468E57A62D0F99738C0F7D;
    class UTimelineComponent* ScaleTimelineChord;
    float VelocityRTPC_NewTrack_0_D589DAF2483516FEFF18C1A73E5A0F1C;
    TEnumAsByte<ETimelineDirection::Type> VelocityRTPC__Direction_D589DAF2483516FEFF18C1A73E5A0F1C;
    class UTimelineComponent* VelocityRTPC;
    class APlayer_Character_BP_C* Player;
    TArray<class UBillboardComponent*> ListenerArray;
    FVector CurrentListenerLocation;
    int32 IndexListener;
    float Lerp Speed;
    int32 AmountOfCameraChanges;
    int32 SetSoundFinish;
    int32 FirstFinish;
    class AVoid_Location_C* VoidLocationRef;
    bool IsFirst;
    float PlayRateTimeline;
    bool UpdateTimeline;
    float MapRangeB;
    float 16th;
    float PlayRate16th;
    float MapRangeA;
    bool UseStingerIntro;

    void VelocityRTPC__FinishedFunc();
    void VelocityRTPC__UpdateFunc();
    void ScaleTimelineChord__FinishedFunc();
    void ScaleTimelineChord__UpdateFunc();
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void CustomTick();
    void NextListener();
    void FinishOverrideListener();
    void TriggerChord();
    void BeatSync();
    void ExecuteUbergraph_OverrideListenerLocation(int32 EntryPoint);
};

#endif
