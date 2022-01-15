#ifndef UE4SS_SDK_BP_Fireball_Small_HPP
#define UE4SS_SDK_BP_Fireball_Small_HPP

class ABP_Fireball_Small_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAkComponent* Ak;
    UParticleSystemComponent* P_Fireball_Ash;
    UStaticMeshComponent* SM_Fireball_Small;
    USceneComponent* DefaultSceneRoot;
    TEnumAsByte<ETimelineDirection::Type> Move_To_Position__Direction_225AB8354DD6A196C14303A3BF5290F0;
    UTimelineComponent* Move To Position;
    FVector Origin;
    FVector Player Position;
    FVector Speed Normal;
    FVector Speed Fast;
    bool Can Damage;
    float Radius;
    float Damage;
    bool Show Trace;
    bool ReachPlayer;
    float Speed;

    void Move To Position__FinishedFunc();
    void Move To Position__UpdateFunc();
    void DopplerEffect();
    void Lock to Player();
    void ReceiveBeginPlay();
    void Play Shot();
    void Hit Ground(FVector Hit Position);
    void BndEvt__SM_Fireball_Small_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_BP_Fireball_Small(int32 EntryPoint, const TArray<AActor*>& Temp_object_Variable, bool Temp_bool_Variable, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FRotator CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, float CallFunc_GetTimelineLength_ReturnValue, float CallFunc_GetPlaybackPosition_ReturnValue, FVector K2Node_CustomEvent_Hit_Position, float CallFunc_NormalizeToRange_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, FVector CallFunc_VLerp_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, FString CallFunc_GetPlatformName_ReturnValue, bool K2Node_SwitchString_CmpSuccess, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, const TArray<uint8>& K2Node_MakeArray_Array, float CallFunc_GetWorldDeltaSeconds_ReturnValue, uint8 K2Node_Select_Default, float CallFunc_MakeLiteralFloat_ReturnValue, FHitResult CallFunc_SphereTraceSingleForObjects_OutHit, bool CallFunc_SphereTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult, float CallFunc_ApplyDamage_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, FVector K2Node_ComponentBoundEvent_NormalImpulse, const FHitResult K2Node_ComponentBoundEvent_Hit, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, FVector CallFunc_BreakHitResult_Location_1, FVector CallFunc_BreakHitResult_ImpactPoint_1, FVector CallFunc_BreakHitResult_Normal_1, FVector CallFunc_BreakHitResult_ImpactNormal_1, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, AActor* CallFunc_BreakHitResult_HitActor_1, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_FaceIndex_1, FVector CallFunc_BreakHitResult_TraceStart_1, FVector CallFunc_BreakHitResult_TraceEnd_1, APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_NormalizeToRange_ReturnValue_1, float CallFunc_FClamp_ReturnValue, float CallFunc_Lerp_ReturnValue);
}

#endif
