#ifndef UE4SS_SDK_Spline_Ambience_Sound_Simple_HPP
#define UE4SS_SDK_Spline_Ambience_Sound_Simple_HPP

class ASpline_Ambience_Sound_Simple_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBillboardComponent* Billboard;
    class UAkComponent* Ak;
    class USplineComponent* Spline;
    class USceneComponent* DefaultSceneRoot;
    class UAkAudioEvent* AmbientSound;
    class UAkAudioEvent* AmbientSound2;
    float TimeTick;
    float OcclusionRefreshInterval;
    float CurrentDistance;
    float Interp;
    TArray<float> PastInterpolatedValues;
    int32 NumFramesToInterpOver;
    float AccumulatedInterpValues;
    int32 PlayingID;
    float DistanceToFalseSpline;
    int32 PlayingID2;

    void InterpLoop();
    void InterpValues();
    void ReceiveTick(float DeltaSeconds);
    void AudioFollowPlayer();
    void ReceiveBeginPlay();
    void CustomTick();
    void CurrentDistanceSpline();
    void ExecuteUbergraph_Spline_Ambience_Sound_Simple(int32 EntryPoint);
};

#endif
