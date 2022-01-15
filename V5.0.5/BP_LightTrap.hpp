#ifndef UE4SS_SDK_BP_LightTrap_HPP
#define UE4SS_SDK_BP_LightTrap_HPP

class ABP_LightTrap_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UParticleSystemComponent* P_LightTrap;
    UCapsuleComponent* Collision;
    UDecalComponent* Decal;
    USceneComponent* DefaultSceneRoot;
    float Play_Light_Opacity_D7F603AA43690D09B68DA983BDDFC10F;
    TEnumAsByte<ETimelineDirection::Type> Play_Light__Direction_D7F603AA43690D09B68DA983BDDFC10F;
    UTimelineComponent* Play Light;
    UMaterialInstanceDynamic* LightDecal;
    float Play Rate;
    float Damage;
    bool Is Playing;

    void Play Light__FinishedFunc();
    void Play Light__UpdateFunc();
    void ReceiveBeginPlay();
    void Play();
    void BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_LightTrap(int32 EntryPoint, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const TArray<AActor*>& Temp_object_Variable, APawn* CallFunc_GetPlayerPawn_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, float CallFunc_ApplyDamage_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, const TArray<uint8>& K2Node_MakeArray_Array, FVector CallFunc_Add_VectorVector_ReturnValue, FHitResult CallFunc_CapsuleTraceSingleForObjects_OutHit, bool CallFunc_CapsuleTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, FVector CallFunc_BreakHitResult_Location_1, FVector CallFunc_BreakHitResult_ImpactPoint_1, FVector CallFunc_BreakHitResult_Normal_1, FVector CallFunc_BreakHitResult_ImpactNormal_1, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, AActor* CallFunc_BreakHitResult_HitActor_1, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_FaceIndex_1, FVector CallFunc_BreakHitResult_TraceStart_1, FVector CallFunc_BreakHitResult_TraceEnd_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, float CallFunc_ApplyDamage_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1);
}

#endif
