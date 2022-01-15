#ifndef UE4SS_SDK_BP_SteamDweller_HPP
#define UE4SS_SDK_BP_SteamDweller_HPP

class ABP_SteamDweller_C : UEnemy_Character_Parent_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* SM_Sword_Col_01;
    USceneComponent* ScenePOI;
    UArrowComponent* Arrow Forward;
    UParticleSystemComponent* P_SlashHorizontal;
    UArrowComponent* Arrow_Horizontal;
    UParticleSystemComponent* P_SlashVertical;
    UArrowComponent* Arrow_Vertical;
    UStaticMeshComponent* Sword;
    float Timeline_1_0_Dissolve_7ABF53FB487D524BBA9627A716D0A7AA;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1_0__Direction_7ABF53FB487D524BBA9627A716D0A7AA;
    UTimelineComponent* Timeline_1_0;
    FVector MoveBackDire_0;
    FVector MoveBackOriginal_0;
    FVector Floor Offset;
    UParticleSystemComponent* Floor Shadow Particle;
    URoadDweller_AnimBp_C* Anim;
    bool isHit;
    TEnumAsByte<E_RoadDweller::Type> Behaviour_0;
    float RecoveryTime;
    UMaterialInstanceDynamic* New BodyMaterial;
    float Attack Distance;
    int32 WwiseIndex;
    UMaterialInstanceDynamic* New Body Material2;

    void UserConstructionScript(float CallFunc_MakeLiteralFloat_ReturnValue, FVector CallFunc_Conv_FloatToVector_ReturnValue);
    void Timeline_1_0__FinishedFunc();
    void Timeline_1_0__UpdateFunc();
    void OnNotifyEnd_D7A06317403B35B8CCD0D99A226869B0(FName NotifyName);
    void OnNotifyBegin_D7A06317403B35B8CCD0D99A226869B0(FName NotifyName);
    void OnInterrupted_D7A06317403B35B8CCD0D99A226869B0(FName NotifyName);
    void OnBlendOut_D7A06317403B35B8CCD0D99A226869B0(FName NotifyName);
    void OnCompleted_D7A06317403B35B8CCD0D99A226869B0(FName NotifyName);
    void OnNotifyEnd_E10D61A940983401AD4D35B6F106F923(FName NotifyName);
    void OnNotifyBegin_E10D61A940983401AD4D35B6F106F923(FName NotifyName);
    void OnInterrupted_E10D61A940983401AD4D35B6F106F923(FName NotifyName);
    void OnBlendOut_E10D61A940983401AD4D35B6F106F923(FName NotifyName);
    void OnCompleted_E10D61A940983401AD4D35B6F106F923(FName NotifyName);
    void OnNotifyEnd_10962C734E10606EF118C080ACC352B7(FName NotifyName);
    void OnNotifyBegin_10962C734E10606EF118C080ACC352B7(FName NotifyName);
    void OnInterrupted_10962C734E10606EF118C080ACC352B7(FName NotifyName);
    void OnBlendOut_10962C734E10606EF118C080ACC352B7(FName NotifyName);
    void OnCompleted_10962C734E10606EF118C080ACC352B7(FName NotifyName);
    void OnNotifyEnd_FA6FE17444B0DB71A3327E83F7C8322E(FName NotifyName);
    void OnNotifyBegin_FA6FE17444B0DB71A3327E83F7C8322E(FName NotifyName);
    void OnInterrupted_FA6FE17444B0DB71A3327E83F7C8322E(FName NotifyName);
    void OnBlendOut_FA6FE17444B0DB71A3327E83F7C8322E(FName NotifyName);
    void OnCompleted_FA6FE17444B0DB71A3327E83F7C8322E(FName NotifyName);
    void Attack01(int32 Count, int32 Max Count, bool Use Custom Counter);
    void PlayerDamage(AActor* Actor);
    void TurnDamageSwordOn(bool On);
    void BndEvt__SM_Sword_Col_01_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void MoveIn();
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void ReceiveBeginPlay();
    void Decal();
    void PerformAttackDash();
    void Attack02(int32 Count, int32 Max Count, bool Use Custom Counter);
    void Start Agro(bool Start);
    void Call Parry();
    void PerformAttackArea();
    void ExecuteUbergraph_BP_SteamDweller(int32 EntryPoint, FName K2Node_CustomEvent_NotifyName_19, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, URoadDweller_AnimBp_C* K2Node_DynamicCast_AsRoad_Dweller_Anim_Bp, bool K2Node_DynamicCast_bSuccess, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FName K2Node_CustomEvent_NotifyName_18, FName K2Node_CustomEvent_NotifyName_17, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName_16, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName_15, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName Temp_name_Variable, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FName K2Node_CustomEvent_NotifyName_14, FName K2Node_CustomEvent_NotifyName_13, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, FName K2Node_CustomEvent_NotifyName_12, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, FName K2Node_CustomEvent_NotifyName_11, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, FName K2Node_CustomEvent_NotifyName_10, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_8, FName Temp_name_Variable_1, bool Temp_bool_Variable, bool K2Node_SwitchName_CmpSuccess, bool K2Node_SwitchName_CmpSuccess_1, UAnimMontage* Temp_object_Variable, UAnimMontage* Temp_object_Variable_1, FName K2Node_CustomEvent_NotifyName_9, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_9, FName K2Node_CustomEvent_NotifyName_8, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_10, FName K2Node_CustomEvent_NotifyName_7, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_11, FName K2Node_CustomEvent_NotifyName_6, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_12, FName K2Node_CustomEvent_NotifyName_5, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_13, FName Temp_name_Variable_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_14, FName K2Node_CustomEvent_NotifyName_4, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_15, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_16, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_17, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_18, FName Temp_name_Variable_3, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 K2Node_Event_Count_1, int32 K2Node_Event_Max_Count_1, bool K2Node_Event_Use_Custom_Counter_1, AActor* K2Node_CustomEvent_Actor, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_19, float CallFunc_ApplyDamage_ReturnValue, bool K2Node_CustomEvent_On, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP_1, bool K2Node_DynamicCast_bSuccess_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_NotEqual_ByteByte_ReturnValue, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, bool CallFunc_RecieveHit_Dead, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, int32 CallFunc_PostEvent_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, URoadDweller_AnimBp_C* K2Node_DynamicCast_AsRoad_Dweller_Anim_Bp_1, bool K2Node_DynamicCast_bSuccess_3, ABP_ShadowDecal_C* CallFunc_FinishSpawningActor_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, UAnimMontage* K2Node_Select_Default, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_1, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_1, int32 K2Node_Event_Count, int32 K2Node_Event_Max_Count, bool K2Node_Event_Use_Custom_Counter, int32 CallFunc_PostEvent_ReturnValue_1, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool K2Node_Event_Start, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, FVector CallFunc_K2_GetActorLocation_ReturnValue_5, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_2, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, int32 CallFunc_PostEvent_ReturnValue_2, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_3, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_3, int32 CallFunc_PostEvent_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_1, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_6, int32 CallFunc_PostEventAtLocation_ReturnValue_2, TArray<FName>& K2Node_MakeArray_Array, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_3, FVector CallFunc_K2_GetActorLocation_ReturnValue_7, int32 CallFunc_PostEventAtLocation_ReturnValue_3, bool CallFunc_IsRobiValid_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_8);
}

#endif
