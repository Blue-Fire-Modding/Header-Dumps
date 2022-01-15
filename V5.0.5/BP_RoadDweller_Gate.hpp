#ifndef UE4SS_SDK_BP_RoadDweller_Gate_HPP
#define UE4SS_SDK_BP_RoadDweller_Gate_HPP

class ABP_RoadDweller_Gate_C : UBP_RoadDweller_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UMaterialBillboardComponent* MB_Fire1;
    UAkComponent* AkLoop;
    UParticleSystemComponent* P_ShadowBody;
    UGateDweller_Lantern_AnimBp_C* AnimGate;

    void FloorDecal();
    void ReceiveBeginPlay();
    void Start Agro(bool Start);
    void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_RoadDweller_Gate(int32 EntryPoint, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, float CallFunc_Divide_FloatFloat_ReturnValue, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, APawn* CallFunc_GetPlayerPawn_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool K2Node_Event_Start, ADecal_C* CallFunc_FinishSpawningActor_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UGateDweller_Lantern_AnimBp_C* K2Node_DynamicCast_AsGate_Dweller_Lantern_Anim_Bp, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsRobiValid_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, float CallFunc_ApplyDamage_ReturnValue);
}

#endif
