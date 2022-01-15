#ifndef UE4SS_SDK_UpDown_Platform_HPP
#define UE4SS_SDK_UpDown_Platform_HPP

class AUpDown_Platform_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAkComponent* Ak;
    UStaticMeshComponent* StaticMesh;
    USceneComponent* DefaultSceneRoot;
    float Move_Audio_272A4361403069FA27125195CA30B84F;
    float Move_Movement_272A4361403069FA27125195CA30B84F;
    TEnumAsByte<ETimelineDirection::Type> Move__Direction_272A4361403069FA27125195CA30B84F;
    UTimelineComponent* Move;
    float StartTime;
    float ZPos;
    float Movement;
    float StillTime;
    float Speed;
    bool UseHitSounds;

    void UserConstructionScript(float CallFunc_Multiply_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1, FTransform CallFunc_MakeTransform_ReturnValue, UStaticMeshComponent* CallFunc_AddComponent_ReturnValue);
    void Move__FinishedFunc();
    void Move__UpdateFunc();
    void Move__Down__EventFunc();
    void Move__Up__EventFunc();
    void Move__Event__EventFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_UpDown_Platform(int32 EntryPoint, float CallFunc_Lerp_ReturnValue, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_1, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_1, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_2, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_2, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetTimelineLength_ReturnValue, float CallFunc_Lerp_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, FVector CallFunc_MakeVector_ReturnValue, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue_2, int32 CallFunc_PostAssociatedAkEvent_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue_1);
}

#endif
