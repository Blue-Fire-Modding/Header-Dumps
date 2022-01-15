#ifndef UE4SS_SDK_Invocation_Bomb_HPP
#define UE4SS_SDK_Invocation_Bomb_HPP

class AInvocation_Bomb_C : AAttack_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UParticleSystemComponent* P_BombAlert;
    UStaticMeshComponent* Ball;
    float Pre_Explosion_Lerp_Size_001E797B4E50CD87C0AB3B8402FE27C6;
    TEnumAsByte<ETimelineDirection::Type> Pre_Explosion__Direction_001E797B4E50CD87C0AB3B8402FE27C6;
    UTimelineComponent* Pre Explosion;
    bool Show Trace;
    float Pre Explosion Play Rate;
    bool Instant;
    bool Make Explosion;
    bool Make Wave;
    int32 Fase;

    void Pre Explosion__FinishedFunc();
    void Pre Explosion__UpdateFunc();
    void Release();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Invocation_Bomb(int32 EntryPoint, int32 CallFunc_PostEventAtLocation_ReturnValue, bool Temp_bool_Variable, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, const TArray<AActor*>& Temp_object_Variable, FVector CallFunc_Conv_FloatToVector_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, const TArray<uint8>& K2Node_MakeArray_Array, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_1, uint8 K2Node_Select_Default, int32 CallFunc_PostEventAtLocation_ReturnValue_2, FHitResult CallFunc_SphereTraceSingleForObjects_OutHit, bool CallFunc_SphereTraceSingleForObjects_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_3, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, float CallFunc_ApplyDamage_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FTransform CallFunc_MakeTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, AWave_C* CallFunc_FinishSpawningActor_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, APawn* CallFunc_GetPlayerPawn_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
}

#endif
