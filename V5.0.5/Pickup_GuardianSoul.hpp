#ifndef UE4SS_SDK_Pickup_GuardianSoul_HPP
#define UE4SS_SDK_Pickup_GuardianSoul_HPP

class APickup_GuardianSoul_C : APickup_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Timeline_1_Z_AE1EDC7F47C39C859DA20D8E9973763D;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_AE1EDC7F47C39C859DA20D8E9973763D;
    UTimelineComponent* Timeline_1;
    float ZOrigin;

    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Pickup_GuardianSoul(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Add_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue);
}

#endif
