#ifndef UE4SS_SDK_Goddess_SphereAttack_HPP
#define UE4SS_SDK_Goddess_SphereAttack_HPP

class AGoddess_SphereAttack_C : AAttack_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UParticleSystemComponent* ShadowPath;
    UParticleSystemComponent* BlueFireSphereAttack;
    UStaticMeshComponent* StaticMesh;
    bool Hor;
    float FollowPlayerSpeed;
    float Size;
    bool Color;

    void ReceiveBeginPlay();
    void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Release();
    void TimerTick();
    void FadeOut();
    void Launch();
    void ExecuteUbergraph_Goddess_SphereAttack(int32 EntryPoint, FVector CallFunc_MakeVector_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, APawn* CallFunc_GetPlayerPawn_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_GetActorForwardVector_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, FRotator CallFunc_K2_GetActorRotation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, FRotator CallFunc_FindLookAtRotation_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult, bool Temp_bool_IsClosed_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue, FRotator CallFunc_RInterpTo_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_1, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, float CallFunc_ApplyDamage_ReturnValue);
}

#endif
