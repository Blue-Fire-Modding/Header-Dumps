#ifndef UE4SS_SDK_NewWind_BP_HPP
#define UE4SS_SDK_NewWind_BP_HPP

class ANewWind_BP_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UParticleSystemComponent* WindParticles1;
    UStaticMeshComponent* WindNew;
    UAkComponent* AkThrow;
    UAkComponent* AkLoop;
    UStaticMeshComponent* FloorOpening;
    UBoxComponent* Box;
    UArrowComponent* Arrow;
    USceneComponent* DefaultSceneRoot;
    float Distance;
    float Cooldown;
    bool Active;
    UMaterialInstanceDynamic* SourceMat;

    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Loop();
    void Toggle(bool A);
    void ReceiveBeginPlay();
    void SetMoreWind();
    void ExecuteUbergraph_NewWind_BP(int32 EntryPoint, FVector CallFunc_K2_GetComponentScale_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, int32 Temp_int_Array_Index_Variable, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_GetForwardVector_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, const TArray<uint8>& K2Node_MakeArray_Array, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue, bool K2Node_CustomEvent_A, FRotator CallFunc_K2_GetComponentRotation_ReturnValue, FVector CallFunc_Conv_RotatorToVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, const TArray<AActor*>& Temp_object_Variable, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, TArray<FHitResult>& CallFunc_BoxTraceMultiForObjects_OutHits, bool CallFunc_BoxTraceMultiForObjects_ReturnValue, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, int32 CallFunc_Array_Length_ReturnValue, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_1, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_1, int32 CallFunc_PostAkEvent_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue_1, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_2, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_2, int32 CallFunc_PostAkEvent_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
}

#endif
