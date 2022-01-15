#ifndef UE4SS_SDK_BP_Invocation_Hand_HPP
#define UE4SS_SDK_BP_Invocation_Hand_HPP

class ABP_Invocation_Hand_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UDecalComponent* RedZone;
    USkeletalMeshComponent* Hand;
    UCapsuleComponent* Collision;
    USceneComponent* DefaultSceneRoot;
    float Timeline_0_Lerp_FA774731440CB58E7347659C08E134C1;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_FA774731440CB58E7347659C08E134C1;
    UTimelineComponent* Timeline_0;
    FVector Target Location;
    float Damage;
    bool Show Trace;
    UMaterialInstanceDynamic* MatRedZone;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OnNotifyEnd_03D4A5114DE75EA5C501E8AB21F807EA(FName NotifyName);
    void OnNotifyBegin_03D4A5114DE75EA5C501E8AB21F807EA(FName NotifyName);
    void OnInterrupted_03D4A5114DE75EA5C501E8AB21F807EA(FName NotifyName);
    void OnBlendOut_03D4A5114DE75EA5C501E8AB21F807EA(FName NotifyName);
    void OnCompleted_03D4A5114DE75EA5C501E8AB21F807EA(FName NotifyName);
    void ReceiveBeginPlay();
    void BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void Show();
    void Hide();
    void ExecuteUbergraph_BP_Invocation_Hand(int32 EntryPoint, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, FName K2Node_CustomEvent_NotifyName_4, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FName Temp_name_Variable, int32 Temp_int_Variable, UAnimMontage* Temp_object_Variable, UAnimMontage* Temp_object_Variable_1, const TArray<AActor*>& Temp_object_Variable_2, bool Temp_bool_Variable, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, APawn* CallFunc_GetPlayerPawn_ReturnValue, float CallFunc_Lerp_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, const TArray<uint8>& K2Node_MakeArray_Array, UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, FVector K2Node_ComponentBoundEvent_NormalImpulse, const FHitResult K2Node_ComponentBoundEvent_Hit, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, float CallFunc_ApplyDamage_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, UAnimMontage* K2Node_Select_Default, int32 CallFunc_PostEventAtLocation_ReturnValue, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, uint8 K2Node_Select_Default_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, FHitResult CallFunc_SphereTraceSingleForObjects_OutHit, bool CallFunc_SphereTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, float CallFunc_ApplyDamage_ReturnValue_1);
}

#endif
