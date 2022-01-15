#ifndef UE4SS_SDK_BP_Invocation_Throw_HPP
#define UE4SS_SDK_BP_Invocation_Throw_HPP

class ABP_Invocation_Throw_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UParticleSystemComponent* P_Shot;
    USceneComponent* DefaultSceneRoot;
    float Fade_Decal_Fade_A396F7E14199571E9472D5905C963437;
    TEnumAsByte<ETimelineDirection::Type> Fade_Decal__Direction_A396F7E14199571E9472D5905C963437;
    UTimelineComponent* Fade Decal;
    TEnumAsByte<ETimelineDirection::Type> Move_To_Position__Direction_11D8A3EF4D655F4EC6DBA1AA7981CA45;
    UTimelineComponent* Move To Position;
    FVector Origin;
    FVector Target Position;
    bool Is Fast;
    bool isHit;
    float Speed;
    float Spawn Offset;
    float Damage;
    float Radius;
    UMaterialInstanceDynamic* Decal Material;
    bool Show Trace;
    AEnemy_Character_Parent_C* Father;

    void Move To Position__FinishedFunc();
    void Move To Position__UpdateFunc();
    void Fade Decal__FinishedFunc();
    void Fade Decal__UpdateFunc();
    void Lock to Player();
    void ReceiveBeginPlay();
    void Play Shot();
    void Hit(FVector Hit Position);
    void DecalTimeline();
    void ExecuteUbergraph_BP_Invocation_Throw(int32 EntryPoint, float CallFunc_GetWorldDeltaSeconds_ReturnValue, bool Temp_bool_Variable, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, const TArray<AActor*>& Temp_object_Variable, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, const TArray<uint8>& K2Node_MakeArray_Array, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, APawn* CallFunc_GetPlayerPawn_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, FRotator CallFunc_FindLookAtRotation_ReturnValue, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_VSize_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, float CallFunc_NormalizeToRange_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, float CallFunc_FClamp_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, FVector K2Node_CustomEvent_Hit_Position, float CallFunc_GetTimelineLength_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, float CallFunc_GetPlaybackPosition_ReturnValue, float CallFunc_NormalizeToRange_ReturnValue_1, FVector CallFunc_VLerp_ReturnValue, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Lerp_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_5, uint8 K2Node_Select_Default, int32 CallFunc_PostEventAtLocation_ReturnValue, FHitResult CallFunc_SphereTraceSingleForObjects_OutHit, bool CallFunc_SphereTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, float CallFunc_ApplyDamage_ReturnValue);
}

#endif
