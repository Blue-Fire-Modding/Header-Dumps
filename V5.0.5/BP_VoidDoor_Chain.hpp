#ifndef UE4SS_SDK_BP_VoidDoor_Chain_HPP
#define UE4SS_SDK_BP_VoidDoor_Chain_HPP

class ABP_VoidDoor_Chain_C : UBP_VoidDoor_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* SM_Door_Side;
    float Move_Doors_Position_DB48D349487C7AB36EFE7684DE1FDDD0;
    TEnumAsByte<ETimelineDirection::Type> Move_Doors__Direction_DB48D349487C7AB36EFE7684DE1FDDD0;
    UTimelineComponent* Move Doors;
    FVector OriginalLocation_StaticMesh;

    void Move Doors__FinishedFunc();
    void Move Doors__UpdateFunc();
    void OpenTimelineRun();
    void CloseTimelineRun();
    void ReceiveBeginPlay();
    void Force Close();
    void ExecuteUbergraph_BP_VoidDoor_Chain(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_1, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_1, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_2, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_2, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_3, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_3, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_1, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue_2, FVector CallFunc_MakeVector_ReturnValue_3, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_2, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_3, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue_1, int32 CallFunc_PostAkEvent_ReturnValue_2, int32 CallFunc_PostAkEvent_ReturnValue_3);
}

#endif
