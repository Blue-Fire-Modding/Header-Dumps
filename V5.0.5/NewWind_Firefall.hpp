#ifndef UE4SS_SDK_NewWind_Firefall_HPP
#define UE4SS_SDK_NewWind_Firefall_HPP

class ANewWind_Firefall_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBoxComponent* Box;
    UStaticMeshComponent* WindNew;
    UParticleSystemComponent* WindParticles;
    USceneComponent* Scene;
    UAkComponent* AkThrow;
    UAkComponent* AkLoop;
    UStaticMeshComponent* FloorOpening;
    UArrowComponent* Arrow;
    USceneComponent* DefaultSceneRoot;
    float Distance;
    float Cooldown;
    bool Active;
    UMaterialInstanceDynamic* SourceMat;
    bool Strong;

    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Loop();
    void BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void Toggle(bool A);
    void ReceiveBeginPlay();
    void ToggleForce();
    void ExecuteUbergraph_NewWind_Firefall(int32 EntryPoint, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, bool Temp_bool_Variable, float CallFunc_SelectFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, float Temp_float_Variable, int32 Temp_int_Array_Index_Variable, FVector CallFunc_GetForwardVector_ReturnValue, float K2Node_Select_Default, FVector CallFunc_Multiply_VectorFloat_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, const TArray<uint8>& K2Node_MakeArray_Array, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, FRotator CallFunc_K2_GetActorRotation_ReturnValue, bool K2Node_CustomEvent_A, FRotator CallFunc_K2_GetComponentRotation_ReturnValue, FVector CallFunc_Conv_RotatorToVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_1, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_1, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_2, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_2, int32 CallFunc_PostAkEvent_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue_1, int32 CallFunc_PostAkEvent_ReturnValue_2, const TArray<AActor*>& Temp_object_Variable, TArray<FHitResult>& CallFunc_BoxTraceMultiForObjects_OutHits, bool CallFunc_BoxTraceMultiForObjects_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
}

#endif
