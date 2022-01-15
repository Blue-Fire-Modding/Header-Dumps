#ifndef UE4SS_SDK_BP_Gurut_HPP
#define UE4SS_SDK_BP_Gurut_HPP

class ABP_Gurut_C : UEnemy_Character_Parent_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* ScenePOI;
    UParticleSystemComponent* P_SpawnBall;
    UStaticMeshComponent* Debris_Sword;
    UParticleSystemComponent* P_ShadowParticle;
    UDecalComponent* Decal_Crack;
    UParticleSystemComponent* P_GroundPop;
    USphereComponent* Sphere4;
    USphereComponent* Sphere3;
    USphereComponent* Sphere2;
    USphereComponent* Sphere1;
    USphereComponent* Sphere;
    UParticleSystemComponent* EnemyLens_VFX;
    UArrowComponent* Spawn;
    float Deactivate_Enemy_Dissolve_C6DEE80F4D67810AE9F0F8B2DB1ECC20;
    TEnumAsByte<ETimelineDirection::Type> Deactivate_Enemy__Direction_C6DEE80F4D67810AE9F0F8B2DB1ECC20;
    UTimelineComponent* Deactivate Enemy;
    UGurut_AnimBp_C* GurutAnim;
    TEnumAsByte<E_VFX_Type::Type> VFX Type;
    UMaterialInstanceDynamic* New BodyMaterial;
    AActor* TargetActor_0;
    float TimePerAttack;

    void UserConstructionScript();
    void Deactivate Enemy__FinishedFunc();
    void Deactivate Enemy__UpdateFunc();
    void Deactivate Enemy__Fade__EventFunc();
    void OnNotifyEnd_5FD45CD548668CF791A2A79118071303(FName NotifyName);
    void OnNotifyBegin_5FD45CD548668CF791A2A79118071303(FName NotifyName);
    void OnInterrupted_5FD45CD548668CF791A2A79118071303(FName NotifyName);
    void OnBlendOut_5FD45CD548668CF791A2A79118071303(FName NotifyName);
    void OnCompleted_5FD45CD548668CF791A2A79118071303(FName NotifyName);
    void OnNotifyEnd_1D38287947774E46390E3D8F04A489B5(FName NotifyName);
    void OnNotifyBegin_1D38287947774E46390E3D8F04A489B5(FName NotifyName);
    void OnInterrupted_1D38287947774E46390E3D8F04A489B5(FName NotifyName);
    void OnBlendOut_1D38287947774E46390E3D8F04A489B5(FName NotifyName);
    void OnCompleted_1D38287947774E46390E3D8F04A489B5(FName NotifyName);
    void OnNotifyEnd_8DFC0D9340CA22B08372A19ADCC4708F(FName NotifyName);
    void OnNotifyBegin_8DFC0D9340CA22B08372A19ADCC4708F(FName NotifyName);
    void OnInterrupted_8DFC0D9340CA22B08372A19ADCC4708F(FName NotifyName);
    void OnBlendOut_8DFC0D9340CA22B08372A19ADCC4708F(FName NotifyName);
    void OnCompleted_8DFC0D9340CA22B08372A19ADCC4708F(FName NotifyName);
    void OnNotifyEnd_1829F1F64D4652E920C946AD0322D20B(FName NotifyName);
    void OnNotifyBegin_1829F1F64D4652E920C946AD0322D20B(FName NotifyName);
    void OnInterrupted_1829F1F64D4652E920C946AD0322D20B(FName NotifyName);
    void OnBlendOut_1829F1F64D4652E920C946AD0322D20B(FName NotifyName);
    void OnCompleted_1829F1F64D4652E920C946AD0322D20B(FName NotifyName);
    void OnNotifyEnd_6135A097445F788F2007A8982B1BC8A6(FName NotifyName);
    void OnNotifyBegin_6135A097445F788F2007A8982B1BC8A6(FName NotifyName);
    void OnInterrupted_6135A097445F788F2007A8982B1BC8A6(FName NotifyName);
    void OnBlendOut_6135A097445F788F2007A8982B1BC8A6(FName NotifyName);
    void OnCompleted_6135A097445F788F2007A8982B1BC8A6(FName NotifyName);
    void SilentHide_1();
    void Attack01(int32 Count, int32 Max Count, bool Use Custom Counter);
    void RecorderAttack();
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void ReceiveBeginPlay();
    void StopStun();
    void StartStun();
    void TeleportIn();
    void TeleportOut();
    void FinishHide();
    void FinishAppear();
    void CustomEvent_3();
    void CustomEvent_2();
    void ReceiveHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void Kill();
    void CustomDamage(float Damage, bool Play Custom Animation);
    void ExecuteUbergraph_BP_Gurut(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, FName K2Node_CustomEvent_NotifyName_22, FName K2Node_CustomEvent_NotifyName_21, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FName K2Node_CustomEvent_NotifyName_20, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName Temp_name_Variable, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName_19, FName K2Node_CustomEvent_NotifyName_18, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName K2Node_CustomEvent_NotifyName_17, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FName K2Node_CustomEvent_NotifyName_16, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, FName K2Node_CustomEvent_NotifyName_15, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, FName Temp_name_Variable_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, FName K2Node_CustomEvent_NotifyName_14, FName K2Node_CustomEvent_NotifyName_13, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_8, FName K2Node_CustomEvent_NotifyName_12, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_9, FName K2Node_CustomEvent_NotifyName_11, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_10, FName K2Node_CustomEvent_NotifyName_10, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_11, FName Temp_name_Variable_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_12, FName K2Node_CustomEvent_NotifyName_9, FName K2Node_CustomEvent_NotifyName_8, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_13, FName K2Node_CustomEvent_NotifyName_7, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_14, FName K2Node_CustomEvent_NotifyName_6, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_15, FName K2Node_CustomEvent_NotifyName_5, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_16, FName Temp_name_Variable_3, uint8 Temp_byte_Variable, UParticleSystem* Temp_object_Variable, UParticleSystem* Temp_object_Variable_1, UParticleSystem* Temp_object_Variable_2, UParticleSystem* Temp_object_Variable_3, UParticleSystem* Temp_object_Variable_4, UParticleSystem* Temp_object_Variable_5, FName K2Node_CustomEvent_NotifyName_4, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_17, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_18, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_19, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_20, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_21, FName Temp_name_Variable_4, int32 K2Node_Event_Count, int32 K2Node_Event_Max_Count, bool K2Node_Event_Use_Custom_Counter, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_22, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_GetSocketLocation_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FTransform CallFunc_MakeTransform_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_2, ABP_GurutBall_C* CallFunc_FinishSpawningActor_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_23, float CallFunc_Montage_GetPosition_ReturnValue, float CallFunc_Montage_GetPosition_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue_4, bool CallFunc_NotEqual_ByteByte_ReturnValue, UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, bool CallFunc_IsRobiValid_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_5, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, float K2Node_Event_Damage_1, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, FName K2Node_CustomEvent_NotifyName_23, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UGurut_AnimBp_C* K2Node_DynamicCast_AsGurut_Anim_Bp, bool K2Node_DynamicCast_bSuccess, UPrimitiveComponent* K2Node_Event_MyComp, AActor* K2Node_Event_Other, UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, FVector K2Node_Event_HitLocation, FVector K2Node_Event_HitNormal, FVector K2Node_Event_NormalImpulse, const FHitResult K2Node_Event_Hit, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_24, UParticleSystem* K2Node_Select_Default, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, float K2Node_Event_Damage, bool K2Node_Event_Play_Custom_Animation, bool CallFunc_RecieveHit_Dead, FName K2Node_CustomEvent_NotifyName_24, TArray<FName>& K2Node_MakeArray_Array, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_3, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_4, FVector CallFunc_K2_GetActorLocation_ReturnValue_5, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, FTimerHandle CallFunc_K2_SetTimer_ReturnValue);
}

#endif
