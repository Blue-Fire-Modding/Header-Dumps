#ifndef UE4SS_SDK_MoveInputToPlayer_HPP
#define UE4SS_SDK_MoveInputToPlayer_HPP

class UMoveInputToPlayer_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    TEnumAsByte<E_TypeCheck::Type> Type Check;
    bool OnlyCheckRadius;
    float Radius;
    float TimeToCheck;
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
    bool RandomDelay;
    FVector2D DelayRange;
    bool IsFlying;

    void OnFail_D2719AF2429A097A7E2E6C89C3F071F6(uint8 MovementResult);
    void OnSuccess_D2719AF2429A097A7E2E6C89C3F071F6(uint8 MovementResult);
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void UpdateLocation();
    void ReceiveAbort(AActor* OwnerActor);
    void ReceiveExecute(AActor* OwnerActor);
    void ExecuteUbergraph_MoveInputToPlayer(int32 EntryPoint, bool Temp_bool_Variable, uint8 K2Node_CustomEvent_MovementResult_1, OAISimpleDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, uint8 K2Node_CustomEvent_MovementResult, OAISimpleDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, uint8 Temp_byte_Variable, const TArray<AActor*>& Temp_object_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, AActor* K2Node_Event_OwnerActor_2, float K2Node_Event_DeltaSeconds, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_GetDirectionUnitVector_ReturnValue, float CallFunc_VSize_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, FVector CallFunc_MakeVector_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, FVector CallFunc_K2_GetActorLocation_ReturnValue_5, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, FVector CallFunc_GetDirectionUnitVector_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_6, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, FVector CallFunc_MakeVector_ReturnValue_2, FVector CallFunc_SelectVector_ReturnValue, const FVector K2Node_Select_Default, FVector CallFunc_Add_VectorVector_ReturnValue_1, AActor* K2Node_Event_OwnerActor_1, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue_2, const TArray<uint8>& K2Node_MakeArray_Array, bool Temp_bool_Has_Been_Initd_Variable, FHitResult CallFunc_LineTraceSingleForObjects_OutHit, bool CallFunc_LineTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, AActor* K2Node_Event_OwnerActor, UAIController* CallFunc_GetAIController_ReturnValue, APawn* CallFunc_K2_GetPawn_ReturnValue, UEnemy_Character_Parent_C* K2Node_DynamicCast_AsEnemy_Character_Parent, bool K2Node_DynamicCast_bSuccess_1, UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Variable_3, bool CallFunc_IsRobiValid_ReturnValue, float K2Node_Select_Default_1, FVector CallFunc_MakeVector_ReturnValue_3, FVector K2Node_Select_Default_2, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_RandomFloatInRange_ReturnValue, float K2Node_Select_Default_3);
}

#endif
