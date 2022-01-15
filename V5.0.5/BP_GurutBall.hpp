#ifndef UE4SS_SDK_BP_GurutBall_HPP
#define UE4SS_SDK_BP_GurutBall_HPP

class ABP_GurutBall_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAkComponent* AkFireBall;
    UParticleSystemComponent* P_Trailball;
    UStaticMeshComponent* Projectile;
    USceneComponent* DefaultSceneRoot;
    float Fade_Decal_Fade_A66790324AE3E7EF058C66B26EA7841C;
    TEnumAsByte<ETimelineDirection::Type> Fade_Decal__Direction_A66790324AE3E7EF058C66B26EA7841C;
    UTimelineComponent* Fade Decal;
    float Move_To_Position_F_9F6DAB194272B23BF9742EB7B89F1A9E;
    TEnumAsByte<ETimelineDirection::Type> Move_To_Position__Direction_9F6DAB194272B23BF9742EB7B89F1A9E;
    UTimelineComponent* Move To Position;
    FVector Origin;
    FVector Direction;
    FVector Speed Normal;
    FVector Speed Fast;
    bool Is Fast;
    bool isHit;
    float Speed;
    float Spawn Offset;
    float Damage;
    float Radius;
    UMaterialInstanceDynamic* Decal Material;
    bool Show Trace;
    float Rotate Speed;
    FRotator Rotation;
    AActor* ShootingActor;
    bool Is Parry;
    AActor* TargetActor;
    bool HitGurut;
    ABP_Gurut_C* Parent;

    void Move To Position__FinishedFunc();
    void Move To Position__UpdateFunc();
    void Fade Decal__FinishedFunc();
    void Fade Decal__UpdateFunc();
    void ReceiveBeginPlay();
    void Play Shot();
    void Hit55(FVector Hit Position);
    void DecalTimeline();
    void Lock to Target(bool Is Player);
    void ReceiveHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void Parry();
    void HitBall();
    void ExecuteUbergraph_BP_GurutBall(int32 EntryPoint, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, const TArray<AActor*>& Temp_object_Variable, bool Temp_bool_Variable, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool Temp_bool_IsClosed_Variable, const TArray<uint8>& K2Node_MakeArray_Array, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector K2Node_CustomEvent_Hit_Position, int32 CallFunc_PostEventAtLocation_ReturnValue, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_RandomFloatInRange_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, bool K2Node_CustomEvent_Is_Player, FRotator CallFunc_MakeRotator_ReturnValue_1, bool Temp_bool_Variable_4, FVector CallFunc_K2_GetComponentLocation_ReturnValue, uint8 K2Node_Select_Default, FHitResult CallFunc_SphereTraceSingleForObjects_OutHit, bool CallFunc_SphereTraceSingleForObjects_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, float CallFunc_ApplyDamage_ReturnValue, UPrimitiveComponent* K2Node_Event_MyComp, AActor* K2Node_Event_Other, UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, FVector K2Node_Event_HitLocation, FVector K2Node_Event_HitNormal, FVector K2Node_Event_NormalImpulse, const FHitResult K2Node_Event_Hit, UEnemy_Character_Parent_C* K2Node_DynamicCast_AsEnemy_Character_Parent, bool K2Node_DynamicCast_bSuccess_1, FHitResult CallFunc_K2_AddLocalRotation_SweepHitResult, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, FVector CallFunc_K2_GetComponentLocation_ReturnValue_2, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_3, bool Temp_bool_Has_Been_Initd_Variable, FVector CallFunc_K2_GetComponentLocation_ReturnValue_4, int32 CallFunc_PostEventAtLocation_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue, int32 CallFunc_PostAssociatedAkEvent_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool Temp_bool_IsClosed_Variable_1, bool CallFunc_IsValid_ReturnValue, AActor* K2Node_Select_Default_1, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, FVector CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FVector K2Node_Select_Default_2, FRotator CallFunc_FindLookAtRotation_ReturnValue, AActor* K2Node_Select_Default_3, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_5, FRotator CallFunc_MakeRotator_ReturnValue_2, FVector CallFunc_Add_VectorVector_ReturnValue_1, bool CallFunc_K2_SetActorRotation_ReturnValue, FVector CallFunc_GetDirectionUnitVector_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue_3, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult, FVector CallFunc_GetSocketLocation_ReturnValue, FVector K2Node_Select_Default_4, bool Temp_bool_Has_Been_Initd_Variable_1, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_4, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue_2, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult);
}

#endif
