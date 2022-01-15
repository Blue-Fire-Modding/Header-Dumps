#ifndef UE4SS_SDK_BP_BabyBoo_HPP
#define UE4SS_SDK_BP_BabyBoo_HPP

class ABP_BabyBoo_C : UEnemy_Character_Parent_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* ScenePOI;
    UParticleSystemComponent* P_Scream;
    UAkComponent* Ak_Idle;
    float Dead_Scale_Z_F9355D414B356D8C39E643AC887A60CA;
    float Dead_Glow_F9355D414B356D8C39E643AC887A60CA;
    float Dead_Dissolve_F9355D414B356D8C39E643AC887A60CA;
    TEnumAsByte<ETimelineDirection::Type> Dead__Direction_F9355D414B356D8C39E643AC887A60CA;
    UTimelineComponent* Dead;
    AEnemy_Character_Parent_C* Father;
    bool Play Show Montage;
    UMaterialInstanceDynamic* MatBody;
    bool IsBoss;
    UParticleSystemComponent* TeleportVFX;
    float Custom Damage;

    void Dead__FinishedFunc();
    void Dead__UpdateFunc();
    void OnNotifyEnd_B837DB7B4FFA7C970C7804B912878612(FName NotifyName);
    void OnNotifyBegin_B837DB7B4FFA7C970C7804B912878612(FName NotifyName);
    void OnInterrupted_B837DB7B4FFA7C970C7804B912878612(FName NotifyName);
    void OnBlendOut_B837DB7B4FFA7C970C7804B912878612(FName NotifyName);
    void OnCompleted_B837DB7B4FFA7C970C7804B912878612(FName NotifyName);
    void OnNotifyEnd_217A68AD4606ED7CDBCE29B54850CC50(FName NotifyName);
    void OnNotifyBegin_217A68AD4606ED7CDBCE29B54850CC50(FName NotifyName);
    void OnInterrupted_217A68AD4606ED7CDBCE29B54850CC50(FName NotifyName);
    void OnBlendOut_217A68AD4606ED7CDBCE29B54850CC50(FName NotifyName);
    void OnCompleted_217A68AD4606ED7CDBCE29B54850CC50(FName NotifyName);
    void OnNotifyEnd_00DB2A004840BB0DE99640A3162F3C96(FName NotifyName);
    void OnNotifyBegin_00DB2A004840BB0DE99640A3162F3C96(FName NotifyName);
    void OnInterrupted_00DB2A004840BB0DE99640A3162F3C96(FName NotifyName);
    void OnBlendOut_00DB2A004840BB0DE99640A3162F3C96(FName NotifyName);
    void OnCompleted_00DB2A004840BB0DE99640A3162F3C96(FName NotifyName);
    void Attack01(int32 Count, int32 Max Count, bool Use Custom Counter);
    void CustomEvent_2();
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void ReceiveBeginPlay();
    void TeleportIn();
    void TeleportOut();
    void CustomEvent_3();
    void ReceiveHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void Death Minion();
    void Instant Combat Extra();
    void MoveTrail();
    void On Player Die();
    void TeleportOutExtra();
    void TeleportInExtra();
    void ExecuteUbergraph_BP_BabyBoo(int32 EntryPoint, FName K2Node_CustomEvent_NotifyName_14, FName K2Node_CustomEvent_NotifyName_13, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FName K2Node_CustomEvent_NotifyName_12, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName_11, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName_10, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName Temp_name_Variable, uint8 Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, bool CallFunc_IsRobiValid_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_1, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, Die__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, FName K2Node_CustomEvent_NotifyName_9, FName K2Node_CustomEvent_NotifyName_8, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, FName K2Node_CustomEvent_NotifyName_7, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, FName K2Node_CustomEvent_NotifyName_6, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_8, FName K2Node_CustomEvent_NotifyName_5, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_9, FName Temp_name_Variable_1, bool Temp_bool_Variable, UAnimMontage* Temp_object_Variable, UAnimMontage* Temp_object_Variable_1, FName K2Node_CustomEvent_NotifyName_4, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_10, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_11, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_12, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_13, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_14, FName Temp_name_Variable_2, int32 K2Node_Event_Count, int32 K2Node_Event_Max_Count, bool K2Node_Event_Use_Custom_Counter, FVector CallFunc_K2_GetActorLocation_ReturnValue, const TArray<uint8>& K2Node_MakeArray_Array, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_GetActorForwardVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue_2, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, uint8 Temp_byte_Variable_1, float K2Node_Select_Default, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, UAnimMontage* K2Node_Select_Default_1, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_15, bool CallFunc_NotEqual_ByteByte_ReturnValue, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, bool CallFunc_RecieveHit_Dead, const TArray<AActor*>& Temp_object_Variable_2, UPrimitiveComponent* K2Node_Event_MyComp, AActor* K2Node_Event_Other, UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, FVector K2Node_Event_HitLocation, FVector K2Node_Event_HitNormal, FVector K2Node_Event_NormalImpulse, const FHitResult K2Node_Event_Hit, APawn* CallFunc_GetPlayerPawn_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue_2, int32 CallFunc_PostAssociatedAkEvent_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, uint8 Temp_byte_Variable_2, uint8 K2Node_Select_Default_2, FHitResult CallFunc_SphereTraceSingleForObjects_OutHit, bool CallFunc_SphereTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_3, float CallFunc_ApplyDamage_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_4, TArray<FName>& K2Node_MakeArray_Array_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_5, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_2, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_6, int32 CallFunc_PostEventAtLocation_ReturnValue_3);
}

#endif
