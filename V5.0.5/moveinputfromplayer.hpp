#ifndef UE4SS_SDK_moveinputfromplayer_HPP
#define UE4SS_SDK_moveinputfromplayer_HPP

class UMoveInputFromPlayer_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    float PlayerZTargetOffset;
    float Radius;
    FVector Target;
    AEnemy_Character_Parent_C* EnemyParent;
    bool UsePlayerZ;
    int32 MovementNumber;

    void ReceiveExecute(AActor* OwnerActor);
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void UpdateLocation();
    void ReceiveAbort(AActor* OwnerActor);
    void ExecuteUbergraph_MoveInputFromPlayer(int32 EntryPoint, bool Temp_bool_Variable, AActor* K2Node_Event_OwnerActor_2, UAIController* CallFunc_GetAIController_ReturnValue, AActor* K2Node_Event_OwnerActor_1, float K2Node_Event_DeltaSeconds, APawn* CallFunc_K2_GetPawn_ReturnValue, UEnemy_Character_Parent_C* K2Node_DynamicCast_AsEnemy_Character_Parent, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, FVector CallFunc_GetDirectionUnitVector_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float K2Node_Select_Default, FVector CallFunc_MakeVector_ReturnValue_1, AActor* K2Node_Event_OwnerActor);
}

#endif
