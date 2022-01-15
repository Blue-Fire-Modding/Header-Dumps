#ifndef UE4SS_SDK_Random_MoveTo_HPP
#define UE4SS_SDK_Random_MoveTo_HPP

class URandom_MoveTo_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Radius;
    float MaxTime;
    bool FixedTime;
    FVector Destination;
    float MinDistance;
    bool UseSameXY;
    AEnemy_Character_Parent_C* EnemyParent;
    int32 MovementNumber;
    bool AvoidNavMesh;
    FVector DestinationTemp;
    AActor* Owner;

    void OnFail_EBA25F9948CCEF643B29ACAED3091A1F(uint8 MovementResult);
    void OnSuccess_EBA25F9948CCEF643B29ACAED3091A1F(uint8 MovementResult);
    void ReceiveExecute(AActor* OwnerActor);
    void GetRandomPoint();
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void ReceiveAbort(AActor* OwnerActor);
    void ExecuteUbergraph_Random_MoveTo(int32 EntryPoint, uint8 K2Node_CustomEvent_MovementResult, bool CallFunc_IsRobiValid_ReturnValue, uint8 Temp_byte_Variable, UAIController* CallFunc_GetAIController_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, APawn* CallFunc_K2_GetPawn_ReturnValue, UAIController* CallFunc_GetAIController_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, APawn* CallFunc_K2_GetPawn_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, UEnemy_Character_Parent_C* K2Node_DynamicCast_AsEnemy_Character_Parent, bool K2Node_DynamicCast_bSuccess, const TArray<AActor*>& Temp_object_Variable, AActor* K2Node_Event_OwnerActor_2, FName CallFunc_MakeLiteralName_ReturnValue, FVector CallFunc_GetValueAsVector_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, OAISimpleDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FVector CallFunc_MakeVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1, const TArray<uint8>& K2Node_MakeArray_Array, FVector CallFunc_RandomPointInBoundingBox_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, FVector CallFunc_Subtract_VectorVector_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue_2, FHitResult CallFunc_LineTraceSingleForObjects_OutHit, bool CallFunc_LineTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_1, AActor* K2Node_Event_OwnerActor_1, float K2Node_Event_DeltaSeconds, bool Temp_bool_IsClosed_Variable, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, FVector CallFunc_MakeVector_ReturnValue_3, FVector CallFunc_Subtract_VectorVector_ReturnValue_2, FVector CallFunc_Subtract_VectorVector_ReturnValue_3, float CallFunc_VSize_ReturnValue, float CallFunc_VSize_ReturnValue_1, float CallFunc_NormalizeToRange_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Lerp_ReturnValue, FVector CallFunc_GetDirectionUnitVector_ReturnValue, AActor* K2Node_Event_OwnerActor, const TArray<uint8>& K2Node_MakeArray_Array_1, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue_1, bool CallFunc_WasRecentlyRendered_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, uint8 K2Node_CustomEvent_MovementResult_1, const TArray<AActor*>& Temp_object_Variable_1, OAISimpleDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FHitResult CallFunc_BoxTraceSingleForObjects_OutHit, bool CallFunc_BoxTraceSingleForObjects_ReturnValue);
}

#endif
