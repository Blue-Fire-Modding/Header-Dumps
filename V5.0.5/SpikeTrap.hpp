#ifndef UE4SS_SDK_SpikeTrap_HPP
#define UE4SS_SDK_SpikeTrap_HPP

class ASpikeTrap_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* SpikeFenceVoids_Big;
    UParticleSystemComponent* P_SpikesTrap;
    UBoxComponent* Collider;
    UStaticMeshComponent* SpikeFenceVoids_Base_Big;
    UAkComponent* AkStart;
    UAkComponent* AkImpact;
    USceneComponent* DefaultSceneRoot;
    float Play_Z_F654188A4DD4A2FDC40304A220D0DE97;
    TEnumAsByte<ETimelineDirection::Type> Play__Direction_F654188A4DD4A2FDC40304A220D0DE97;
    UTimelineComponent* Play;
    float Damage;
    bool StartDown;
    float Play Rate;
    bool Random Rate;
    float Range Min;
    float Range Max;
    bool Play VFX;

    void PushSpikes();
    void Play__FinishedFunc();
    void Play__UpdateFunc();
    void Play__Sound Start__EventFunc();
    void Play__Sound Impact__EventFunc();
    void ReceiveBeginPlay();
    void Pre();
    void Attack();
    void Down();
    void BndEvt__Collider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_SpikeTrap(int32 EntryPoint, FVector CallFunc_MakeVector_ReturnValue, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, FVector CallFunc_MakeVector_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue_2, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_1, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_2, bool Temp_bool_Variable, FVector CallFunc_MakeVector_ReturnValue_3, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_1, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_1, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_1, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_2, APawn* CallFunc_GetPlayerPawn_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float K2Node_Select_Default, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, int32 CallFunc_PostAssociatedAkEvent_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, float CallFunc_ApplyDamage_ReturnValue, int32 CallFunc_PostAssociatedAkEvent_ReturnValue_1, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_3);
}

#endif
