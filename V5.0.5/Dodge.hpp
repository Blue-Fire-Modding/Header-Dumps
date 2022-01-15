#ifndef UE4SS_SDK_Dodge_HPP
#define UE4SS_SDK_Dodge_HPP

class UDodge_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    AEnemy_Character_Parent_C* EnemyParent;
    int32 MovementNumber;
    float SuccessChance;
    float Delay;
    float Detect Distance;
    float MaxDistanceToMove;
    bool DoDash;
    float Radius Random Point;
    FVector Destination;
    float New Speed;
    FVector Direction;
    bool Control Anim Montage;

    void ReceiveExecute(AActor* OwnerActor);
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void ReceiveAbort(AActor* OwnerActor);
    void GetRandomPoint();
    void ExecuteUbergraph_Dodge(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, bool Temp_bool_Variable, AActor* K2Node_Event_OwnerActor_2, UAIController* CallFunc_GetAIController_ReturnValue, AActor* K2Node_Event_OwnerActor_1, float K2Node_Event_DeltaSeconds, APawn* CallFunc_K2_GetPawn_ReturnValue, UEnemy_Character_Parent_C* K2Node_DynamicCast_AsEnemy_Character_Parent, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, AActor* K2Node_Event_OwnerActor, bool CallFunc_RandomBoolWithWeight_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, FVector CallFunc_GetValueAsVector_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, FVector CallFunc_RandomPointInBoundingBox_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1, float CallFunc_BreakVector_X_4, float CallFunc_BreakVector_Y_4, float CallFunc_BreakVector_Z_4, float CallFunc_Vector_Distance_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_2, FVector CallFunc_GetDirectionUnitVector_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float K2Node_Select_Default, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_BreakVector_X_5, float CallFunc_BreakVector_Y_5, float CallFunc_BreakVector_Z_5, FVector CallFunc_MakeVector_ReturnValue_3, float CallFunc_Vector_Distance_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, float CallFunc_Vector_Distance_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue_1);
}

#endif
