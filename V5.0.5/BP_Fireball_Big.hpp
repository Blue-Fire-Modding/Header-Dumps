#ifndef UE4SS_SDK_BP_Fireball_Big_HPP
#define UE4SS_SDK_BP_Fireball_Big_HPP

class ABP_Fireball_Big_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UParticleSystemComponent* P_FireballBig_Ash;
    UAkComponent* AkFireBall;
    UStaticMeshComponent* Projectile;
    USceneComponent* DefaultSceneRoot;
    float Move_To_Position_F_A3C2BF71445F63D04EB810B7E1947D25;
    TEnumAsByte<ETimelineDirection::Type> Move_To_Position__Direction_A3C2BF71445F63D04EB810B7E1947D25;
    UTimelineComponent* Move To Position;
    FVector Direction;
    float Damage;
    float ParryDamage;
    float Radius;
    bool Show Trace;
    float Rotate Speed;
    FRotator Rotation;
    AActor* ShootingActor;
    bool Is Parry;

    void Move To Position__FinishedFunc();
    void Move To Position__UpdateFunc();
    void ReceiveBeginPlay();
    void Play Shot();
    void Hit55(FVector Hit Position);
    void Lock to Target(bool Is Player);
    void ReceiveHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void Parry();
    void HitBall();
    void ExecuteUbergraph_BP_Fireball_Big(int32 EntryPoint, const TArray<AActor*>& Temp_object_Variable, bool Temp_bool_Variable, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, int32 CallFunc_PostAkEvent_ReturnValue, bool Temp_bool_Variable_1, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_2, const TArray<uint8>& K2Node_MakeArray_Array, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector K2Node_CustomEvent_Hit_Position, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, uint8 Temp_byte_Variable, bool K2Node_CustomEvent_Is_Player, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, FRotator CallFunc_MakeRotator_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FVector CallFunc_K2_GetComponentLocation_ReturnValue, UPrimitiveComponent* K2Node_Event_MyComp, AActor* K2Node_Event_Other, UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, FVector K2Node_Event_HitLocation, FVector K2Node_Event_HitNormal, FVector K2Node_Event_NormalImpulse, const FHitResult K2Node_Event_Hit, UEnemy_Character_Parent_C* K2Node_DynamicCast_AsEnemy_Character_Parent, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, FVector K2Node_Select_Default, uint8 Temp_byte_Variable_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue, uint8 K2Node_Select_Default_1, FHitResult CallFunc_SphereTraceSingleForObjects_OutHit, bool CallFunc_SphereTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, FVector CallFunc_K2_GetComponentLocation_ReturnValue_2, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess_1, FRotator CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FRotator CallFunc_MakeRotator_ReturnValue_1, bool CallFunc_K2_SetActorRotation_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue_2, float CallFunc_ApplyDamage_ReturnValue, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult, FVector CallFunc_K2_GetComponentLocation_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue_2, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_3, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_5, FVector CallFunc_Add_VectorVector_ReturnValue_1, FVector CallFunc_GetDirectionUnitVector_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_4, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue_2, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult, FRotator CallFunc_MakeRotator_ReturnValue_3, bool Temp_bool_IsClosed_Variable_2, FHitResult CallFunc_K2_AddLocalRotation_SweepHitResult, APawn* CallFunc_GetPlayerPawn_ReturnValue_2, bool Temp_bool_IsClosed_Variable_3, FVector CallFunc_K2_GetActorLocation_ReturnValue_6, FVector CallFunc_K2_GetComponentLocation_ReturnValue_4, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
}

#endif
