#ifndef UE4SS_SDK_Invocation_Throw_HPP
#define UE4SS_SDK_Invocation_Throw_HPP

class AInvocation_Throw_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* Projectile;
    USceneComponent* DefaultSceneRoot;
    TEnumAsByte<ETimelineDirection::Type> Move_To_Position__Direction_A38C79CA4BEC9F23D88B46A2398D83AF;
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
    FInvocation_Throw_CBreak Combat Break Combat;
    void Break Combat();

    void Move To Position__FinishedFunc();
    void Move To Position__UpdateFunc();
    void Hit(FVector Hit Position);
    void Play Shot();
    void ReceiveBeginPlay();
    void Lock to Player();
    void BndEvt__Projectile_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_Invocation_Throw(int32 EntryPoint, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, bool Temp_bool_Variable, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, const TArray<AActor*>& Temp_object_Variable, FVector K2Node_CustomEvent_Hit_Position, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, const TArray<uint8>& K2Node_MakeArray_Array, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_1, uint8 K2Node_Select_Default, FHitResult CallFunc_SphereTraceSingleForObjects_OutHit, bool CallFunc_SphereTraceSingleForObjects_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_ApplyDamage_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, FRotator CallFunc_MakeRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FRotator CallFunc_MakeRotator_ReturnValue_1, APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, FVector CallFunc_GetDirectionUnitVector_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, FHitResult CallFunc_K2_AddLocalRotation_SweepHitResult, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, APawn* CallFunc_GetPlayerPawn_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_2, FRotator CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, float CallFunc_Multiply_FloatFloat_ReturnValue_4, FRotator CallFunc_MakeRotator_ReturnValue_2, FVector CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_1, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult, FVector CallFunc_K2_GetComponentLocation_ReturnValue_3);
    void Break Combat__DelegateSignature();
}

#endif
