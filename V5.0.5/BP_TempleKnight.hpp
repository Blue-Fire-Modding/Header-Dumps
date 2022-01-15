#ifndef UE4SS_SDK_BP_TempleKnight_HPP
#define UE4SS_SDK_BP_TempleKnight_HPP

class ABP_TempleKnight_C : UEnemy_Character_Parent_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* SM_Sword_Col_01;
    USceneComponent* ScenePOI;
    UAkComponent* Ak;
    UBoxComponent* Sword Collision;
    UArrowComponent* Arrow Forward;
    UBillboardComponent* VFX Sword Location;
    UParticleSystemComponent* P_SlashHorizontal;
    UArrowComponent* Arrow_Horizontal;
    UParticleSystemComponent* P_SlashVertical;
    UArrowComponent* Arrow_Vertical;
    UStaticMeshComponent* Sword;
    float Timeline_1_0A_Dissolve_0FDCA9BC4FC9DC862AEE74B7CEBA7503;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1_0A__Direction_0FDCA9BC4FC9DC862AEE74B7CEBA7503;
    UTimelineComponent* Timeline_1_0A;
    FVector MoveBackDire_0;
    FVector MoveBackOriginal_0;
    FVector Floor Offset;
    UParticleSystemComponent* Floor Shadow Particle;
    URoadDweller_AnimBp_C* Anim;
    bool isHit;
    float RecoveryTime;
    float Attack Distance;
    UMaterialInstanceDynamic* New Body Material;
    int32 WwiseIndex;
    bool Interrupted;

    void UserConstructionScript(float CallFunc_MakeLiteralFloat_ReturnValue, FVector CallFunc_Conv_FloatToVector_ReturnValue);
    void Timeline_1_0A__FinishedFunc();
    void Timeline_1_0A__UpdateFunc();
    void OnNotifyEnd_E461D0564D759437CE40199B42ADE849(FName NotifyName);
    void OnNotifyBegin_E461D0564D759437CE40199B42ADE849(FName NotifyName);
    void OnInterrupted_E461D0564D759437CE40199B42ADE849(FName NotifyName);
    void OnBlendOut_E461D0564D759437CE40199B42ADE849(FName NotifyName);
    void OnCompleted_E461D0564D759437CE40199B42ADE849(FName NotifyName);
    void OnNotifyEnd_1E951AB94F5D62AB9DF46CB9D24B4D4E(FName NotifyName);
    void OnNotifyBegin_1E951AB94F5D62AB9DF46CB9D24B4D4E(FName NotifyName);
    void OnInterrupted_1E951AB94F5D62AB9DF46CB9D24B4D4E(FName NotifyName);
    void OnBlendOut_1E951AB94F5D62AB9DF46CB9D24B4D4E(FName NotifyName);
    void OnCompleted_1E951AB94F5D62AB9DF46CB9D24B4D4E(FName NotifyName);
    void OnNotifyEnd_0C3D4BB04DA2B5D6867F989CD81962AF(FName NotifyName);
    void OnNotifyBegin_0C3D4BB04DA2B5D6867F989CD81962AF(FName NotifyName);
    void OnInterrupted_0C3D4BB04DA2B5D6867F989CD81962AF(FName NotifyName);
    void OnBlendOut_0C3D4BB04DA2B5D6867F989CD81962AF(FName NotifyName);
    void OnCompleted_0C3D4BB04DA2B5D6867F989CD81962AF(FName NotifyName);
    void OnNotifyEnd_8BE988024C4D70F3E25DD18F786EE1F9(FName NotifyName);
    void OnNotifyBegin_8BE988024C4D70F3E25DD18F786EE1F9(FName NotifyName);
    void OnInterrupted_8BE988024C4D70F3E25DD18F786EE1F9(FName NotifyName);
    void OnBlendOut_8BE988024C4D70F3E25DD18F786EE1F9(FName NotifyName);
    void OnCompleted_8BE988024C4D70F3E25DD18F786EE1F9(FName NotifyName);
    void PerformAttackArea();
    void BndEvt__Sword Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Attack02(int32 Count, int32 Max Count, bool Use Custom Counter);
    void TurnDamageSwordOn(bool On);
    void BndEvt__SM_Sword_Col_01_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void PerformAttackDash();
    void PlayerDamage(AActor* Actor);
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void ReceiveBeginPlay();
    void Decal();
    void BndEvt__Sword_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void Attack01(int32 Count, int32 Max Count, bool Use Custom Counter);
    void Start Agro(bool Start);
    void Call Parry();
    void ExecuteUbergraph_BP_TempleKnight(int32 EntryPoint, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, URoadDweller_AnimBp_C* K2Node_DynamicCast_AsRoad_Dweller_Anim_Bp, bool K2Node_DynamicCast_bSuccess, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FName K2Node_CustomEvent_NotifyName_16, FName K2Node_CustomEvent_NotifyName_15, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName Temp_name_Variable, bool Temp_bool_Variable, bool K2Node_SwitchName_CmpSuccess, bool K2Node_SwitchName_CmpSuccess_1, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, const TArray<AActor*>& Temp_object_Variable, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName_14, FName K2Node_CustomEvent_NotifyName_13, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName K2Node_CustomEvent_NotifyName_12, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FName K2Node_CustomEvent_NotifyName_11, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, FName K2Node_CustomEvent_NotifyName_10, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, FName Temp_name_Variable_1, bool Temp_bool_Variable_1, UAnimMontage* Temp_object_Variable_1, UAnimMontage* Temp_object_Variable_2, FName K2Node_CustomEvent_NotifyName_9, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, FName K2Node_CustomEvent_NotifyName_8, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_8, FName K2Node_CustomEvent_NotifyName_7, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_9, FName K2Node_CustomEvent_NotifyName_6, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_10, FName K2Node_CustomEvent_NotifyName_5, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_11, FName Temp_name_Variable_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_12, FName K2Node_CustomEvent_NotifyName_4, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_13, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_14, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_15, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_16, FName Temp_name_Variable_3, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Subtract_FloatFloat_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_2, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_2, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep_1, const FHitResult K2Node_ComponentBoundEvent_SweepResult_1, bool Temp_bool_Variable_2, float CallFunc_ApplyDamage_ReturnValue, UAnimMontage* K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue_4, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, FVector CallFunc_GetActorForwardVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, FVector CallFunc_K2_GetActorLocation_ReturnValue_5, FVector CallFunc_Add_VectorVector_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, FVector CallFunc_MakeVector_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, int32 K2Node_Event_Count_1, int32 K2Node_Event_Max_Count_1, bool K2Node_Event_Use_Custom_Counter_1, FName K2Node_CustomEvent_NotifyName_19, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_6, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_17, FVector CallFunc_K2_GetActorLocation_ReturnValue_7, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool K2Node_CustomEvent_On, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess_1, uint8 K2Node_Select_Default_1, AActor* K2Node_CustomEvent_Actor, FName K2Node_CustomEvent_NotifyName_17, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP_1, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_ApplyDamage_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_8, int32 CallFunc_PostEventAtLocation_ReturnValue, const TArray<uint8>& K2Node_MakeArray_Array, FHitResult CallFunc_SphereTraceSingleForObjects_OutHit, bool CallFunc_SphereTraceSingleForObjects_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP_2, bool K2Node_DynamicCast_bSuccess_3, float CallFunc_ApplyDamage_ReturnValue_2, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, bool CallFunc_RecieveHit_Dead, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_18, FVector CallFunc_K2_GetActorLocation_ReturnValue_9, FVector CallFunc_Subtract_VectorVector_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, FTransform CallFunc_MakeTransform_ReturnValue, URoadDweller_AnimBp_C* K2Node_DynamicCast_AsRoad_Dweller_Anim_Bp_1, bool K2Node_DynamicCast_bSuccess_4, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, ABP_ShadowDecal_C* CallFunc_FinishSpawningActor_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, FVector CallFunc_K2_GetActorLocation_ReturnValue_10, int32 CallFunc_PostEventAtLocation_ReturnValue_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, FVector K2Node_ComponentBoundEvent_NormalImpulse, const FHitResult K2Node_ComponentBoundEvent_Hit, int32 K2Node_Event_Count, int32 K2Node_Event_Max_Count, bool K2Node_Event_Use_Custom_Counter, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_Event_Start, int32 CallFunc_PostEventAtLocation_ReturnValue_2, bool CallFunc_IsRobiValid_ReturnValue, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, int32 CallFunc_PostEvent_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_1, APawn* CallFunc_GetPlayerPawn_ReturnValue, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_PostEvent_ReturnValue_1, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, FName K2Node_CustomEvent_NotifyName_18, UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_11, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_3, TArray<FName>& K2Node_MakeArray_Array_1, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_3, FVector CallFunc_K2_GetActorLocation_ReturnValue_12, int32 CallFunc_PostEventAtLocation_ReturnValue_4, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_19);
}

#endif