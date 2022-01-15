#ifndef UE4SS_SDK_DoorLever_Pipe_HPP
#define UE4SS_SDK_DoorLever_Pipe_HPP

class ADoorLever_Pipe_C : UDoorLever_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAkComponent* Play_Wheel_Lever_Valve_Open;
    UStaticMeshComponent* BaseValve_VoidGate;
    UParticleSystemComponent* P_Smoke_LevelPipe;
    float Rotate_Lerp_F3C8DE384ED51B4F0FCE1EB6C159133F;
    TEnumAsByte<ETimelineDirection::Type> Rotate__Direction_F3C8DE384ED51B4F0FCE1EB6C159133F;
    UTimelineComponent* Rotate;

    void Rotate__FinishedFunc();
    void Rotate__UpdateFunc();
    void Change Visual(bool IsPressed, bool Instant);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_DoorLever_Pipe(int32 EntryPoint, float CallFunc_Lerp_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, bool K2Node_Event_IsPressed, bool K2Node_Event_Instant, float K2Node_Select_Default, FRotator CallFunc_MakeRotator_ReturnValue_1, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult_1, int32 CallFunc_PostAssociatedAkEvent_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
}

#endif
