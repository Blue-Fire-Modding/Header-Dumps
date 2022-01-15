#ifndef UE4SS_SDK_AreaTransition_Elevator_Graveyard_HPP
#define UE4SS_SDK_AreaTransition_Elevator_Graveyard_HPP

class AAreaTransition_Elevator_Graveyard_C : UAreaTransition_Elevator_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* Door_L;
    UStaticMeshComponent* Door_R;
    float Open_Door_Lerp_FB6A60634E7C70DA010FB9A8AEE3BFA2;
    TEnumAsByte<ETimelineDirection::Type> Open_Door__Direction_FB6A60634E7C70DA010FB9A8AEE3BFA2;
    UTimelineComponent* Open Door;
    float Door Open Angle;
    float Open Angle L;
    float Open Angle R;
    float Original Angle L;
    float Original Angle R;

    void Open Door__FinishedFunc();
    void Open Door__UpdateFunc();
    void Animation(bool Open, bool Instant);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_AreaTransition_Elevator_Graveyard(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_1, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, float CallFunc_BreakRotator_Roll_3, float CallFunc_BreakRotator_Pitch_3, float CallFunc_BreakRotator_Yaw_3, bool K2Node_Event_Open, bool K2Node_Event_Instant, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, FRotator CallFunc_MakeRotator_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue_1, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult_1, float K2Node_Select_Default, float K2Node_Select_Default_1, FRotator CallFunc_MakeRotator_ReturnValue_2, FRotator CallFunc_MakeRotator_ReturnValue_3, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult_2, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult_3, bool CallFunc_IsRobiValid_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_1, int32 CallFunc_PostAkEvent_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue_1);
}

#endif
