#ifndef UE4SS_SDK_LineWave_HPP
#define UE4SS_SDK_LineWave_HPP

class ALineWave_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* StaticMesh;
    USceneComponent* DefaultSceneRoot;
    float Timeline_0_Dissolve_15F8527542290EA14F16EF8D0905CA6B;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_15F8527542290EA14F16EF8D0905CA6B;
    UTimelineComponent* Timeline_0;
    float Speed;
    float DieTimeout;
    float Wide;
    bool Is White;
    UMaterialInstanceDynamic* Material;
    FLineWave_CDeactivate Deactivate;
    void Deactivate(ALineWave_C* SelfRef);
    UMaterialInterface* WaveMaterial;
    float Damage;
    bool UseTick;
    bool Dissolve;
    UBlueFire_Game_Instance_C* GameInstance;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Play(FVector NewLocation, bool Custom Rotation, bool Custom Forward Vector, FVector Forward Vector, FRotator Rot);
    void Deactivate LineWave();
    void MoveTick();
    void ReceiveBeginPlay();
    void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_LineWave(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, UMaterialInterface* Temp_object_Variable, float CallFunc_Lerp_ReturnValue, FVector K2Node_CustomEvent_NewLocation, bool K2Node_CustomEvent_Custom_Rotation, bool K2Node_CustomEvent_Custom_Forward_Vector, FVector K2Node_CustomEvent_Forward_Vector, FRotator K2Node_CustomEvent_Rot, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_GetActorForwardVector_ReturnValue, FVector K2Node_Select_Default, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, float CallFunc_Divide_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, FVector CallFunc_GetActorForwardVector_ReturnValue_1, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, FVector K2Node_Select_Default_1, FRotator CallFunc_Conv_VectorToRotator_ReturnValue, FRotator K2Node_Select_Default_2, FHitResult CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_GetClosestPointOnCollision_OutPointOnBody, float CallFunc_GetClosestPointOnCollision_ReturnValue, UMaterialInterface* K2Node_Select_Default_3, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float CallFunc_ApplyDamage_ReturnValue, float K2Node_Event_DeltaSeconds, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue_1, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult_1, bool CallFunc_K2_SetActorLocation_ReturnValue_1, bool Temp_bool_IsClosed_Variable);
    void Deactivate__DelegateSignature(ALineWave_C* SelfRef);
}

#endif
