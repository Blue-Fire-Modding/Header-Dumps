#ifndef UE4SS_SDK_Door_A02_Uthas_HPP
#define UE4SS_SDK_Door_A02_Uthas_HPP

class ADoor_A02_Uthas_C : UDoor_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* StaticMesh1_0;
    float Timeline_0_0_Position_C3DEFAE84A4A758845F3C28C1E2FBF17;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0_0__Direction_C3DEFAE84A4A758845F3C28C1E2FBF17;
    UTimelineComponent* Timeline_0_0;
    float Timeline_2_Offset_CB6790D24D11F2D0C649D793C4E3BF2A;
    TEnumAsByte<ETimelineDirection::Type> Timeline_2__Direction_CB6790D24D11F2D0C649D793C4E3BF2A;
    UTimelineComponent* Timeline_2;
    float Timeline_1_Position_1AEE1182457E9B991F816CBCEAC4531F;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_1AEE1182457E9B991F816CBCEAC4531F;
    UTimelineComponent* Timeline_1;

    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Timeline_0_0__FinishedFunc();
    void Timeline_0_0__UpdateFunc();
    void Timeline_2__FinishedFunc();
    void Timeline_2__UpdateFunc();
    void CloseTimelineRun();
    void OpenTimelineRun();
    void ExtraFenceOnly();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Door_A02_Uthas(int32 EntryPoint, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, FVector CallFunc_MakeVector_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, FVector CallFunc_MakeVector_ReturnValue_3, FVector CallFunc_K2_GetActorLocation_ReturnValue, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_1, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_2, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_3, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue);
}

#endif
