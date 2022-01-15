#ifndef UE4SS_SDK_InstaRelocate_HPP
#define UE4SS_SDK_InstaRelocate_HPP

class UInstaRelocate_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool RandomZ;
    FVector2D ZOffsetRange;
    bool RandomXY;
    FVector2D XYOffsetRange;
    FBlackboardKeySelector Loc;
    float MinPlayerDistance;
    bool Use Current Z;

    void ReceiveExecute(AActor* OwnerActor);
    void GetNewPoint();
    void ExecuteUbergraph_InstaRelocate(int32 EntryPoint, bool Temp_bool_Variable, AActor* K2Node_Event_OwnerActor, UAIController* CallFunc_GetAIController_ReturnValue, APawn* CallFunc_K2_GetPawn_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_IsRobiValid_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, bool Temp_bool_Variable_2, float CallFunc_RandomFloatInRange_ReturnValue_2, APawn* CallFunc_GetPlayerPawn_ReturnValue, FVector CallFunc_GetBlackboardValueAsVector_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, float K2Node_Select_Default, FVector CallFunc_MakeVector_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1, float K2Node_Select_Default_1, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, FVector CallFunc_MakeVector_ReturnValue_2, FVector K2Node_Select_Default_2, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_3, FVector CallFunc_MakeVector_ReturnValue_4, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
}

#endif
