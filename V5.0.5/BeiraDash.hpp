#ifndef UE4SS_SDK_BeiraDash_HPP
#define UE4SS_SDK_BeiraDash_HPP

class UBeiraDash_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    TEnumAsByte<E_TypeCheck::Type> Type Check;
    bool OnlyCheckRadius;
    float Radius;
    bool UpdatePlayerPosition;
    bool Trace to Update Location;
    FVector Target;
    AEnemy_Character_Parent_C* EnemyParent;
    bool UsePlayerZ;
    float Delay;
    float PlayerZTargetOffset;
    int32 MovementNumber;
    APlayer_Character_BP_C* Player;
    bool Wait For Player is Ground;
    float CurrentTimeRadius;
    bool MinDistanceBasedOnDirection;
    float MinDistance;
    bool Enable Tick;
    bool IgnoreNavMesh;

    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void ReceiveExecute(AActor* OwnerActor);
    void UpdateLocation();
    void ReceiveAbort(AActor* OwnerActor);
    void ExecuteUbergraph_BeiraDash(int32 EntryPoint, AActor* K2Node_Event_OwnerActor_2, float K2Node_Event_DeltaSeconds, AActor* K2Node_Event_OwnerActor_1, UAIController* CallFunc_GetAIController_ReturnValue, APawn* CallFunc_K2_GetPawn_ReturnValue, UEnemy_Character_Parent_C* K2Node_DynamicCast_AsEnemy_Character_Parent, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_GetDirectionUnitVector_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_GetDirectionUnitVector_ReturnValue_1, AActor* K2Node_Event_OwnerActor, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_Add_FloatFloat_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue);
}

#endif
