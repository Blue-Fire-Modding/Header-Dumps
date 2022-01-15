#ifndef UE4SS_SDK_FloorTrap_BP_HPP
#define UE4SS_SDK_FloorTrap_BP_HPP

class AFloorTrap_BP_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBoxComponent* Collider;
    UStaticMeshComponent* FloorTrap_Spikes;
    UStaticMeshComponent* FloorTrap_Base;
    USceneComponent* DefaultSceneRoot;
    float Float_Glow_8C7D5EC9470B2A8A15838FADA007696A;
    float Float_Float_8C7D5EC9470B2A8A15838FADA007696A;
    TEnumAsByte<ETimelineDirection::Type> Float__Direction_8C7D5EC9470B2A8A15838FADA007696A;
    UTimelineComponent* Float;
    bool Damage;
    FVector Initial Location;
    float Multiplier;
    float Rate;
    bool canMove;
    float TimeToPush;

    void PushSpikes();
    void Float__FinishedFunc();
    void Float__UpdateFunc();
    void PushSpike();
    void BndEvt__FloorTrap_Base_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Reset();
    void BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ResetOverlap();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__FloorTrap_Base_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveBeginPlay();
    void MoveBackDown();
    void ReBuild();
    void ExecuteUbergraph_FloorTrap_BP(int32 EntryPoint, const TArray<AActor*>& Temp_object_Variable, FVector CallFunc_MakeVector_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Has_Been_Initd_Variable, FVector CallFunc_MakeVector_ReturnValue_1, APawn* CallFunc_GetPlayerPawn_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_2, AActor* K2Node_ComponentBoundEvent_OtherActor_3, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_3, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_2, bool K2Node_ComponentBoundEvent_bFromSweep_1, const FHitResult K2Node_ComponentBoundEvent_SweepResult_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_2, bool Temp_bool_IsClosed_Variable, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_2, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_2, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, float CallFunc_ApplyDamage_ReturnValue, const TArray<uint8>& K2Node_MakeArray_Array, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, FVector CallFunc_MakeVector_ReturnValue_2, FVector CallFunc_Add_VectorVector_ReturnValue, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_1, TArray<FHitResult>& CallFunc_BoxTraceMultiForObjects_OutHits, bool CallFunc_BoxTraceMultiForObjects_ReturnValue, FHitResult CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, FVector CallFunc_BreakHitResult_Location_1, FVector CallFunc_BreakHitResult_ImpactPoint_1, FVector CallFunc_BreakHitResult_Normal_1, FVector CallFunc_BreakHitResult_ImpactNormal_1, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, AActor* CallFunc_BreakHitResult_HitActor_1, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_FaceIndex_1, FVector CallFunc_BreakHitResult_TraceStart_1, FVector CallFunc_BreakHitResult_TraceEnd_1, float CallFunc_ApplyDamage_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue_2, bool CallFunc_IsOverlappingActor_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, FVector K2Node_ComponentBoundEvent_NormalImpulse, const FHitResult K2Node_ComponentBoundEvent_Hit, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_3, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_3, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_1);
}

#endif
