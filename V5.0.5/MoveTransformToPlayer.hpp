#ifndef UE4SS_SDK_MoveTransformToPlayer_HPP
#define UE4SS_SDK_MoveTransformToPlayer_HPP

class UMoveTransformToPlayer_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Speed;
    float PlayerZTargetOffset;
    float Distance;

    void ReceiveExecute(AActor* OwnerActor);
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void ExecuteUbergraph_MoveTransformToPlayer(int32 EntryPoint, AActor* K2Node_Event_OwnerActor_1, APawn* CallFunc_GetPlayerPawn_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, AActor* K2Node_Event_OwnerActor, float K2Node_Event_DeltaSeconds, float CallFunc_Multiply_FloatFloat_ReturnValue, UAIController* CallFunc_GetAIController_ReturnValue, APawn* CallFunc_K2_GetPawn_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_EqualEqual_VectorVector_ReturnValue, FVector CallFunc_GetDirectionUnitVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, UEnemy_Character_Parent_C* K2Node_DynamicCast_AsEnemy_Character_Parent, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_Add_VectorVector_ReturnValue_1, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue);
}

#endif
