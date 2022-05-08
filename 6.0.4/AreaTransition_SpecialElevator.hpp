#ifndef UE4SS_SDK_AreaTransition_SpecialElevator_HPP
#define UE4SS_SDK_AreaTransition_SpecialElevator_HPP

class AAreaTransition_SpecialElevator_C : public AAreaTransition_Elevator_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    float SineMovement_Lerp_FCC7C3604A2B7BC059AF1CBDDE89F9F0;
    TEnumAsByte<ETimelineDirection::Type> SineMovement__Direction_FCC7C3604A2B7BC059AF1CBDDE89F9F0;
    class UTimelineComponent* SineMovement;
    FVector StartPosition;
    float MaxPosition;
    float Sine Speed;

    void SineMovement__FinishedFunc();
    void SineMovement__UpdateFunc();
    void ReceiveBeginPlay();
    void Animation(bool Open, bool Instant);
    void StartElevatorSound();
    void PlaySine();
    void StopSine();
    void ExecuteUbergraph_AreaTransition_SpecialElevator(int32 EntryPoint);
};

#endif
