#ifndef UE4SS_SDK_BP_Invocation_Area_HPP
#define UE4SS_SDK_BP_Invocation_Area_HPP

class ABP_Invocation_Area_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* DefaultSceneRoot;
    bool Show Trace;
    UParticleSystemComponent* P_Smoke;
    bool Is Big;
    bool Rot Direction;
    float Damage Small;
    float Damage Big;
    float Speed Movement;
    float Speed Rotation;
    float Radius Big;
    float Radius Small;
    bool Instant;

    void ReceiveBeginPlay();
    void Damage();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_Invocation_Area(int32 EntryPoint, bool Temp_bool_Variable, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, bool Temp_bool_Variable_1, TSubclassOf<UCameraShake> Temp_class_Variable, TSubclassOf<UCameraShake> Temp_class_Variable_1, bool Temp_bool_Variable_2, UParticleSystem* Temp_object_Variable, UParticleSystem* Temp_object_Variable_1, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_6, float Temp_float_Variable_2, float Temp_float_Variable_3, const TArray<AActor*>& Temp_object_Variable_2, bool Temp_bool_Variable_7, const TArray<uint8>& K2Node_MakeArray_Array, FVector CallFunc_K2_GetActorLocation_ReturnValue, uint8 K2Node_Select_Default, int32 CallFunc_PostEventAtLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, APawn* CallFunc_GetPlayerPawn_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, TSubclassOf<UCameraShake> K2Node_Select_Default_1, UParticleSystem* K2Node_Select_Default_2, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, float K2Node_Select_Default_3, float K2Node_Select_Default_4, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float K2Node_Select_Default_5, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, FRotator CallFunc_MakeRotator_ReturnValue, FHitResult CallFunc_K2_AddActorWorldRotation_SweepHitResult, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FVector CallFunc_VInterpTo_ReturnValue, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult, float K2Node_Event_DeltaSeconds, float K2Node_Select_Default_6, FHitResult CallFunc_SphereTraceSingleForObjects_OutHit, bool CallFunc_SphereTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, float CallFunc_ApplyDamage_ReturnValue, float K2Node_Select_Default_7, float CallFunc_Add_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue);
}

#endif
