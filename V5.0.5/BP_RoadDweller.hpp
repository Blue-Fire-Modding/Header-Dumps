#ifndef UE4SS_SDK_BP_RoadDweller_HPP
#define UE4SS_SDK_BP_RoadDweller_HPP

class ABP_RoadDweller_C : UEnemy_Character_Parent_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* SM_Sword_Col_01;
    USceneComponent* ScenePOI;
    UAkComponent* Play_Vanish;
    UArrowComponent* Arrow Forward;
    UPointLightComponent* PointLight;
    UMaterialBillboardComponent* MB_Fire;
    UStaticMeshComponent* Lantern;
    UStaticMeshComponent* Sword;
    float Deactivate_Enemy_Dissolve_CF40E6CB4D4832C1301326B53B3ACE4A;
    TEnumAsByte<ETimelineDirection::Type> Deactivate_Enemy__Direction_CF40E6CB4D4832C1301326B53B3ACE4A;
    UTimelineComponent* Deactivate Enemy;
    FVector MoveBackDire_0;
    FVector MoveBackOriginal_0;
    FVector Floor Offset;
    UParticleSystemComponent* Floor Shadow Particle;
    URoadDweller_Lantern_AnimBp_C* Anim;
    bool isHit;
    TEnumAsByte<E_RoadDweller::Type> Behaviour_0;
    float RecoveryTime;
    UMaterialInstanceDynamic* New BodyMaterial;
    float Attack Distance;
    UAkAudioEvent* TakeHitVO;
    UAkAudioEvent* TakeHit;
    UAkAudioEvent* DieSFX;
    UAkAudioEvent* LampFall;
    UAkAudioEvent* SwordFall;

    void UserConstructionScript(float CallFunc_MakeLiteralFloat_ReturnValue, FVector CallFunc_Conv_FloatToVector_ReturnValue);
    void Deactivate Enemy__FinishedFunc();
    void Deactivate Enemy__UpdateFunc();
    void OnNotifyEnd_93FE5D2A4CA4493AFBE20AA78A5C3308(FName NotifyName);
    void OnNotifyBegin_93FE5D2A4CA4493AFBE20AA78A5C3308(FName NotifyName);
    void OnInterrupted_93FE5D2A4CA4493AFBE20AA78A5C3308(FName NotifyName);
    void OnBlendOut_93FE5D2A4CA4493AFBE20AA78A5C3308(FName NotifyName);
    void OnCompleted_93FE5D2A4CA4493AFBE20AA78A5C3308(FName NotifyName);
    void OnNotifyEnd_ABA2DF064FC5ACE48ED9EBBD8D650282(FName NotifyName);
    void OnNotifyBegin_ABA2DF064FC5ACE48ED9EBBD8D650282(FName NotifyName);
    void OnInterrupted_ABA2DF064FC5ACE48ED9EBBD8D650282(FName NotifyName);
    void OnBlendOut_ABA2DF064FC5ACE48ED9EBBD8D650282(FName NotifyName);
    void OnCompleted_ABA2DF064FC5ACE48ED9EBBD8D650282(FName NotifyName);
    void OnNotifyEnd_E98CCCAA4F6791EB1DA0B1AB2FA3920D(FName NotifyName);
    void OnNotifyBegin_E98CCCAA4F6791EB1DA0B1AB2FA3920D(FName NotifyName);
    void OnInterrupted_E98CCCAA4F6791EB1DA0B1AB2FA3920D(FName NotifyName);
    void OnBlendOut_E98CCCAA4F6791EB1DA0B1AB2FA3920D(FName NotifyName);
    void OnCompleted_E98CCCAA4F6791EB1DA0B1AB2FA3920D(FName NotifyName);
    void PerformAttackArea();
    void Attack02(int32 Count, int32 Max Count, bool Use Custom Counter);
    void TurnDamageSwordOn(bool On);
    void PlayerDamage(AActor* Actor);
    void BndEvt__SM_Sword_Col_01_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Attack01(int32 Count, int32 Max Count, bool Use Custom Counter);
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void ReceiveBeginPlay();
    void Decal();
    void BndEvt__Lantern_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__Sword_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void Start Agro(bool Start);
    void Set Visible Mesh(bool Visible);
    void PerformAttackDash();
    void Call Parry();
    void Custom Die();
    void ExecuteUbergraph_BP_RoadDweller(int32 EntryPoint, FName K2Node_CustomEvent_NotifyName_10, FName Temp_name_Variable, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool K2Node_SwitchName_CmpSuccess, bool K2Node_SwitchName_CmpSuccess_1, FName K2Node_CustomEvent_NotifyName_9, FName K2Node_CustomEvent_NotifyName_8, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName_7, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName_6, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName K2Node_CustomEvent_NotifyName_5, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FName Temp_name_Variable_1, bool Temp_bool_Variable, UAnimMontage* Temp_object_Variable, UAnimMontage* Temp_object_Variable_1, FName K2Node_CustomEvent_NotifyName_4, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_8, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_9, FName Temp_name_Variable_2, FVector CallFunc_K2_GetActorLocation_ReturnValue, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_10, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 K2Node_Event_Count_1, int32 K2Node_Event_Max_Count_1, bool K2Node_Event_Use_Custom_Counter_1, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_3, bool K2Node_CustomEvent_On, bool CallFunc_BooleanAND_ReturnValue_1, AActor* K2Node_CustomEvent_Actor, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, float CallFunc_ApplyDamage_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor_2, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_2, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP_1, bool K2Node_DynamicCast_bSuccess_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_11, int32 K2Node_Event_Count, int32 K2Node_Event_Max_Count, bool K2Node_Event_Use_Custom_Counter, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, bool CallFunc_NotEqual_ByteByte_ReturnValue, FName K2Node_CustomEvent_NotifyName_13, FVector CallFunc_K2_GetActorLocation_ReturnValue_5, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, bool CallFunc_RecieveHit_Dead, FName K2Node_CustomEvent_NotifyName_11, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, bool Temp_bool_IsClosed_Variable, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_6, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_12, FVector CallFunc_Subtract_VectorVector_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, URoadDweller_Lantern_AnimBp_C* K2Node_DynamicCast_AsRoad_Dweller_Lantern_Anim_Bp, bool K2Node_DynamicCast_bSuccess_2, ABP_ShadowDecal_C* CallFunc_FinishSpawningActor_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, FVector K2Node_ComponentBoundEvent_NormalImpulse_1, const FHitResult K2Node_ComponentBoundEvent_Hit_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, FVector K2Node_ComponentBoundEvent_NormalImpulse, const FHitResult K2Node_ComponentBoundEvent_Hit, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_13, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool Temp_bool_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_4, UAnimMontage* K2Node_Select_Default, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_Event_Start, FName K2Node_CustomEvent_NotifyName_14, bool CallFunc_IsRobiValid_ReturnValue, TArray<FName>& K2Node_MakeArray_Array, int32 CallFunc_PostEventAtLocation_ReturnValue, bool K2Node_Event_Visible, bool CallFunc_Not_PreBool_ReturnValue_5, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_14, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable_1, UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, FName K2Node_CustomEvent_NotifyName_12, bool CallFunc_IsRobiValid_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, URoadDweller_Lantern_AnimBp_C* K2Node_DynamicCast_AsRoad_Dweller_Lantern_Anim_Bp_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsRobiValid_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue_3, bool CallFunc_IsRobiValid_ReturnValue_4, int32 CallFunc_PostEventAtLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_3, bool CallFunc_IsRobiValid_ReturnValue_5, int32 CallFunc_PostEventAtLocation_ReturnValue_4, bool CallFunc_RandomBoolWithWeight_ReturnValue);
}

#endif
