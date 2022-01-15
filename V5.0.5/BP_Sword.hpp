#ifndef UE4SS_SDK_BP_Sword_HPP
#define UE4SS_SDK_BP_Sword_HPP

class ABP_Sword_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UParticleSystemComponent* P_Sword;
    UStaticMeshComponent* SM_Sword;
    USceneComponent* DefaultSceneRoot;
    float Glow_Sword_Glow_EE5AC628473D5AF7CA2A8489C5059F50;
    TEnumAsByte<ETimelineDirection::Type> Glow_Sword__Direction_EE5AC628473D5AF7CA2A8489C5059F50;
    UTimelineComponent* Glow Sword;
    TEnumAsByte<ETimelineDirection::Type> Move_To_Position__Direction_93B69EEB49D0C4783521ACB34C649F3D;
    UTimelineComponent* Move To Position;
    FVector Origin;
    FVector Player Position;
    FVector Speed Normal;
    FVector Speed Fast;
    bool Is Fast;
    bool Can Damage;
    float Radius;
    UMaterialInstanceDynamic* Mat Sword;
    bool isHit;
    float Damage;
    bool Show Trace;

    void Move To Position__FinishedFunc();
    void Move To Position__UpdateFunc();
    void Glow Sword__FinishedFunc();
    void Glow Sword__UpdateFunc();
    void BndEvt__SM_Sword_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void Lock to Player();
    void ReceiveBeginPlay();
    void Play Shot();
    void Hit(FVector Hit Position);
    void Explosion(FVector Hit Position);
    void ExecuteUbergraph_BP_Sword(int32 EntryPoint, float CallFunc_MakeLiteralFloat_ReturnValue, bool Temp_bool_Variable, bool Temp_bool_Variable_1, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, const TArray<AActor*>& Temp_object_Variable, bool Temp_bool_Variable_2, uint8 Temp_byte_Variable_2, uint8 Temp_byte_Variable_3, const TArray<AActor*>& Temp_object_Variable_1, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, FVector K2Node_ComponentBoundEvent_NormalImpulse, const FHitResult K2Node_ComponentBoundEvent_Hit, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, const TArray<uint8>& K2Node_MakeArray_Array, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, APawn* CallFunc_GetPlayerPawn_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FRotator CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, float CallFunc_GetTimelineLength_ReturnValue, float CallFunc_GetPlaybackPosition_ReturnValue, FVector K2Node_CustomEvent_Hit_Position_1, float CallFunc_NormalizeToRange_ReturnValue, FVector CallFunc_VLerp_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue_1, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, int32 Temp_int_Loop_Counter_Variable, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult, int32 CallFunc_Add_IntInt_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, FVector K2Node_CustomEvent_Hit_Position, FVector K2Node_Select_Default, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, const TArray<uint8>& K2Node_MakeArray_Array_1, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue_2, uint8 K2Node_Select_Default_1, uint8 K2Node_Select_Default_2, TArray<FHitResult>& CallFunc_SphereTraceMultiForObjects_OutHits, bool CallFunc_SphereTraceMultiForObjects_ReturnValue, FHitResult CallFunc_SphereTraceSingleForObjects_OutHit, bool CallFunc_SphereTraceSingleForObjects_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, FVector CallFunc_BreakHitResult_Location_1, FVector CallFunc_BreakHitResult_ImpactPoint_1, FVector CallFunc_BreakHitResult_Normal_1, FVector CallFunc_BreakHitResult_ImpactNormal_1, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, AActor* CallFunc_BreakHitResult_HitActor_1, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_FaceIndex_1, FVector CallFunc_BreakHitResult_TraceStart_1, FVector CallFunc_BreakHitResult_TraceEnd_1, FHitResult CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit_2, bool CallFunc_BreakHitResult_bInitialOverlap_2, float CallFunc_BreakHitResult_Time_2, float CallFunc_BreakHitResult_Distance_2, FVector CallFunc_BreakHitResult_Location_2, FVector CallFunc_BreakHitResult_ImpactPoint_2, FVector CallFunc_BreakHitResult_Normal_2, FVector CallFunc_BreakHitResult_ImpactNormal_2, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_2, AActor* CallFunc_BreakHitResult_HitActor_2, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_2, FName CallFunc_BreakHitResult_HitBoneName_2, int32 CallFunc_BreakHitResult_HitItem_2, int32 CallFunc_BreakHitResult_FaceIndex_2, FVector CallFunc_BreakHitResult_TraceStart_2, FVector CallFunc_BreakHitResult_TraceEnd_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, float CallFunc_ApplyDamage_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_MakeLiteralFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_NormalizeToRange_ReturnValue_1, float CallFunc_FClamp_ReturnValue, float CallFunc_Lerp_ReturnValue);
}

#endif
