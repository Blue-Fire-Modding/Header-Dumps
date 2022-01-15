#ifndef UE4SS_SDK_BP_Bomber_Poison_HPP
#define UE4SS_SDK_BP_Bomber_Poison_HPP

class ABP_Bomber_Poison_C : UEnemy_Character_Parent_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* ScenePOI;
    UAkComponent* AkBomb;
    UBillboardComponent* VFX Location;
    float Deactivate_Enemy_Dissolve_B22C4B6B4B58D8ADD9C93A86943FE6E7;
    TEnumAsByte<ETimelineDirection::Type> Deactivate_Enemy__Direction_B22C4B6B4B58D8ADD9C93A86943FE6E7;
    UTimelineComponent* Deactivate Enemy;
    UMaterialInstanceDynamic* New BodyMaterial;
    UMaterialInstanceDynamic* Glow Material;
    UParticleSystemComponent* TeleportVFX;

    void Deactivate Enemy__FinishedFunc();
    void Deactivate Enemy__UpdateFunc();
    void OnNotifyEnd_5BAF45BE472B5358185B9B99A2F21805(FName NotifyName);
    void OnNotifyBegin_5BAF45BE472B5358185B9B99A2F21805(FName NotifyName);
    void OnInterrupted_5BAF45BE472B5358185B9B99A2F21805(FName NotifyName);
    void OnBlendOut_5BAF45BE472B5358185B9B99A2F21805(FName NotifyName);
    void OnCompleted_5BAF45BE472B5358185B9B99A2F21805(FName NotifyName);
    void TeleportInExtra();
    void TeleportOutExtra();
    void TeleportOut();
    void TeleportIn();
    void Attack01(int32 Count, int32 Max Count, bool Use Custom Counter);
    void PerformAttack();
    void MoveTrail();
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void ReceiveBeginPlay();
    void CustomEvent_3();
    void CustomEvent_2();
    void ExecuteUbergraph_BP_Bomber_Poison(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, FName K2Node_CustomEvent_NotifyName_4, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName Temp_name_Variable, float CallFunc_Lerp_ReturnValue, int32 K2Node_Event_Count, int32 K2Node_Event_Max_Count, bool K2Node_Event_Use_Custom_Counter, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, const TArray<uint8>& K2Node_MakeArray_Array, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_1, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FVector CallFunc_K2_GetComponentLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue_3, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_2, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_1, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, bool CallFunc_RecieveHit_Dead, APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_1, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult, TArray<FName>& K2Node_MakeArray_Array_1, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_5, int32 CallFunc_PostEventAtLocation_ReturnValue_4, int32 CallFunc_PostEventAtLocation_ReturnValue_5, const TArray<AActor*>& Temp_object_Variable, FHitResult CallFunc_SphereTraceSingleForObjects_OutHit, bool CallFunc_SphereTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, float CallFunc_ApplyDamage_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
}

#endif
