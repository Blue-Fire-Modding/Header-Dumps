#ifndef UE4SS_SDK_SwingingAxe_BP_HPP
#define UE4SS_SDK_SwingingAxe_BP_HPP

class ASwingingAxe_BP_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBoxComponent* Box;
    UAkComponent* Ak;
    UStaticMeshComponent* SwingingAxe_Saw;
    UStaticMeshComponent* SwingingAxe_Base;
    USceneComponent* DefaultSceneRoot;
    float StringTimeline_Swing_A13D640D425CFA9936DCEAA0D43C6B98;
    TEnumAsByte<ETimelineDirection::Type> StringTimeline__Direction_A13D640D425CFA9936DCEAA0D43C6B98;
    UTimelineComponent* StringTimeline;
    float Length;
    float SawSize;
    float SawRotationSpeed;
    float Angle;
    float SwingSpeed;
    float Offset;

    void UserConstructionScript(FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1);
    void StringTimeline__FinishedFunc();
    void StringTimeline__UpdateFunc();
    void ReceiveBeginPlay();
    void Spin();
    void ResetSwing();
    void BndEvt__SwingingAxe_Saw_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_SwingingAxe_BP(int32 EntryPoint, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, float CallFunc_ApplyDamage_ReturnValue, float CallFunc_Abs_ReturnValue, float CallFunc_Lerp_ReturnValue, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FHitResult CallFunc_K2_AddLocalRotation_SweepHitResult, FRotator CallFunc_MakeRotator_ReturnValue_1, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostAssociatedAkEvent_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep_1, const FHitResult K2Node_ComponentBoundEvent_SweepResult_1);
}

#endif
