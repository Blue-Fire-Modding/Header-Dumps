#ifndef UE4SS_SDK_BP_Ball_Lord1_HPP
#define UE4SS_SDK_BP_Ball_Lord1_HPP

class ABP_Ball_Lord1_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* SM_Ball;
    UDecalComponent* Decal;
    UParticleSystemComponent* P_Ball;
    float Scale_Lerp_0E768AE54E1ACAAC4DD8448ACFF06820;
    float Scale_Scale_0E768AE54E1ACAAC4DD8448ACFF06820;
    TEnumAsByte<ETimelineDirection::Type> Scale__Direction_0E768AE54E1ACAAC4DD8448ACFF06820;
    UTimelineComponent* Scale;
    float Fade_Fade_73B659DE49E306092F7BBEB107D4E3A8;
    TEnumAsByte<ETimelineDirection::Type> Fade__Direction_73B659DE49E306092F7BBEB107D4E3A8;
    UTimelineComponent* Fade;
    bool Show Trace;
    UMaterialInstanceDynamic* Decal Material;
    float Glow;
    float Damage;
    FVector Start Location;
    float Offset;

    void UserConstructionScript();
    void Fade__FinishedFunc();
    void Fade__UpdateFunc();
    void Scale__FinishedFunc();
    void Scale__UpdateFunc();
    void DecalTimeline();
    void Build();
    void ReceiveBeginPlay();
    void BndEvt__SM_Ball_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void StartSim();
    void ReceiveEndPlay(uint8 EndPlayReason);
    void ExecuteUbergraph_BP_Ball_Lord1(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool Temp_bool_Variable, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1, const TArray<AActor*>& Temp_object_Variable, uint8 K2Node_Select_Default, FVector CallFunc_Conv_FloatToVector_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, const TArray<uint8>& K2Node_MakeArray_Array, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, FVector K2Node_ComponentBoundEvent_NormalImpulse, const FHitResult K2Node_ComponentBoundEvent_Hit, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, FHitResult CallFunc_SphereTraceSingleForObjects_OutHit, bool CallFunc_SphereTraceSingleForObjects_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, FVector CallFunc_BreakHitResult_Location_1, FVector CallFunc_BreakHitResult_ImpactPoint_1, FVector CallFunc_BreakHitResult_Normal_1, FVector CallFunc_BreakHitResult_ImpactNormal_1, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, AActor* CallFunc_BreakHitResult_HitActor_1, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_FaceIndex_1, FVector CallFunc_BreakHitResult_TraceStart_1, FVector CallFunc_BreakHitResult_TraceEnd_1, bool CallFunc_IsRobiValid_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsRobiValid_ReturnValue_1, float CallFunc_ApplyDamage_ReturnValue, uint8 K2Node_Event_EndPlayReason, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_2, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue);
}

#endif
