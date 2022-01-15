#ifndef UE4SS_SDK_AreaTransition_SpecialElevator_HPP
#define UE4SS_SDK_AreaTransition_SpecialElevator_HPP

class AAreaTransition_SpecialElevator_C : UAreaTransition_Elevator_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    float SineMovement_Lerp_FCC7C3604A2B7BC059AF1CBDDE89F9F0;
    TEnumAsByte<ETimelineDirection::Type> SineMovement__Direction_FCC7C3604A2B7BC059AF1CBDDE89F9F0;
    UTimelineComponent* SineMovement;
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
    void ExecuteUbergraph_AreaTransition_SpecialElevator(int32 EntryPoint, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, bool K2Node_Event_Open, bool K2Node_Event_Instant, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, int32 CallFunc_PostAkEvent_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue);
}

#endif
