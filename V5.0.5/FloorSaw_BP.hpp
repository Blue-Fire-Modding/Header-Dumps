#ifndef UE4SS_SDK_FloorSaw_BP_HPP
#define UE4SS_SDK_FloorSaw_BP_HPP

class AFloorSaw_BP_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBoxComponent* Box;
    UAkComponent* Ak;
    UStaticMeshComponent* FloorSaw_Saw;
    UStaticMeshComponent* FloorSaw_Base;
    USceneComponent* DefaultSceneRoot;
    float Saw_Sound_660A61294B8EFBC7F0FA989542E06F47;
    float Saw_SawMovement_660A61294B8EFBC7F0FA989542E06F47;
    TEnumAsByte<ETimelineDirection::Type> Saw__Direction_660A61294B8EFBC7F0FA989542E06F47;
    UTimelineComponent* Saw;
    float Distance;
    float SawMovementSpeed;
    float SawSize;
    float SawRotationSpeed;
    float Offset;
    int32 Copies;
    float CopiesDistance;
    UMaterialInterface* Material;

    void UserConstructionScript(int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_1, float CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue_1, FTransform CallFunc_MakeTransform_ReturnValue_1, UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_K2_AttachToComponent_ReturnValue_1, float CallFunc_Multiply_IntFloat_ReturnValue_2, FVector CallFunc_K2_GetComponentScale_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_2, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, FVector CallFunc_MakeVector_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_4, float CallFunc_Divide_FloatFloat_ReturnValue_1, FTransform CallFunc_GetRelativeTransform_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, bool CallFunc_Greater_IntInt_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_5, FTransform CallFunc_MakeTransform_ReturnValue_2, FHitResult CallFunc_K2_SetRelativeTransform_SweepHitResult, FVector CallFunc_MakeVector_ReturnValue_6, FVector CallFunc_MakeVector_ReturnValue_7);
    void Saw__FinishedFunc();
    void Saw__UpdateFunc();
    void ReceiveBeginPlay();
    void Spin();
    void Reset();
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_FloorSaw_BP(int32 EntryPoint, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, float CallFunc_ApplyDamage_ReturnValue, float CallFunc_Abs_ReturnValue, float CallFunc_Lerp_ReturnValue, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, FHitResult CallFunc_K2_AddLocalRotation_SweepHitResult, int32 CallFunc_PostAssociatedAkEvent_ReturnValue);
}

#endif
