#ifndef UE4SS_SDK_BP_ForestDweller_HPP
#define UE4SS_SDK_BP_ForestDweller_HPP

class ABP_ForestDweller_C : UEnemy_Character_Parent_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* SM_Sword_Col_01;
    USceneComponent* ScenePOI;
    UAkComponent* Ak;
    UArrowComponent* Arrow Forward;
    UParticleSystemComponent* P_SlashHorizontal;
    UArrowComponent* Arrow_Horizontal;
    UParticleSystemComponent* P_SlashVertical;
    UArrowComponent* Arrow_Vertical;
    UStaticMeshComponent* Sword;
    float Timeline_1_02_Dissolve_1612526B443FE85D11F6F2919568E43B;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1_02__Direction_1612526B443FE85D11F6F2919568E43B;
    UTimelineComponent* Timeline_1_02;
    FVector MoveBackDire_0;
    FVector MoveBackOriginal_0;
    FVector Floor Offset;
    UParticleSystemComponent* Floor Shadow Particle;
    URoadDweller_AnimBp_C* Anim;
    bool isHit;
    TEnumAsByte<E_RoadDweller::Type> Behaviour_0;
    float RecoveryTime;
    UMaterialInstanceDynamic* New Body Material;
    int32 WwiseIndex;

    void UserConstructionScript(float CallFunc_MakeLiteralFloat_ReturnValue, FVector CallFunc_Conv_FloatToVector_ReturnValue);
    void Timeline_1_02__FinishedFunc();
    void Timeline_1_02__UpdateFunc();
    void OnNotifyEnd_EACA330B49C960A7E1B0A38C6F5FC73E(FName NotifyName);
    void OnNotifyBegin_EACA330B49C960A7E1B0A38C6F5FC73E(FName NotifyName);
    void OnInterrupted_EACA330B49C960A7E1B0A38C6F5FC73E(FName NotifyName);
    void OnBlendOut_EACA330B49C960A7E1B0A38C6F5FC73E(FName NotifyName);
    void OnCompleted_EACA330B49C960A7E1B0A38C6F5FC73E(FName NotifyName);
    void OnNotifyEnd_AD9D684D4D94E753A14C69A884BB2861(FName NotifyName);
    void OnNotifyBegin_AD9D684D4D94E753A14C69A884BB2861(FName NotifyName);
    void OnInterrupted_AD9D684D4D94E753A14C69A884BB2861(FName NotifyName);
    void OnBlendOut_AD9D684D4D94E753A14C69A884BB2861(FName NotifyName);
    void OnCompleted_AD9D684D4D94E753A14C69A884BB2861(FName NotifyName);
    void OnNotifyEnd_126C8B524C8912A50CED91934FD41026(FName NotifyName);
    void OnNotifyBegin_126C8B524C8912A50CED91934FD41026(FName NotifyName);
    void OnInterrupted_126C8B524C8912A50CED91934FD41026(FName NotifyName);
    void OnBlendOut_126C8B524C8912A50CED91934FD41026(FName NotifyName);
    void OnCompleted_126C8B524C8912A50CED91934FD41026(FName NotifyName);
    void OnNotifyEnd_ABD42B7D46AA37422FA12C8A8DEB1B3B(FName NotifyName);
    void OnNotifyBegin_ABD42B7D46AA37422FA12C8A8DEB1B3B(FName NotifyName);
    void OnInterrupted_ABD42B7D46AA37422FA12C8A8DEB1B3B(FName NotifyName);
    void OnBlendOut_ABD42B7D46AA37422FA12C8A8DEB1B3B(FName NotifyName);
    void OnCompleted_ABD42B7D46AA37422FA12C8A8DEB1B3B(FName NotifyName);
    void PerformAttack 2();
    void PerformAttack 1();
    void TurnDamageSwordOn(bool On);
    void BndEvt__SM_Sword_Col_01_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void PlayerDamage(AActor* Actor);
    void Attack02(int32 Count, int32 Max Count, bool Use Custom Counter);
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void ReceiveBeginPlay();
    void Decal();
    void BndEvt__Sword_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void Start Agro(bool Start);
    void Set Visible Mesh(bool Visible);
    void Attack01(int32 Count, int32 Max Count, bool Use Custom Counter);
    void Call Parry();
    void ExecuteUbergraph_BP_ForestDweller(int32 EntryPoint, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, URoadDweller_AnimBp_C* K2Node_DynamicCast_AsRoad_Dweller_Anim_Bp, bool K2Node_DynamicCast_bSuccess, FName K2Node_CustomEvent_NotifyName_16, FName K2Node_CustomEvent_NotifyName_15, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName Temp_name_Variable, bool K2Node_SwitchName_CmpSuccess, bool K2Node_SwitchName_CmpSuccess_1, FName K2Node_CustomEvent_NotifyName_14, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName_13, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName K2Node_CustomEvent_NotifyName_12, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FName K2Node_CustomEvent_NotifyName_11, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, FName K2Node_CustomEvent_NotifyName_10, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, FName Temp_name_Variable_1, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, bool K2Node_SwitchName_CmpSuccess_2, bool K2Node_SwitchName_CmpSuccess_3, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, bool Temp_bool_Variable, UAnimMontage* Temp_object_Variable, UAnimMontage* Temp_object_Variable_1, FName K2Node_CustomEvent_NotifyName_9, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, FName K2Node_CustomEvent_NotifyName_8, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_8, FName K2Node_CustomEvent_NotifyName_7, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_9, FName K2Node_CustomEvent_NotifyName_6, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_10, FName K2Node_CustomEvent_NotifyName_5, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_11, FName Temp_name_Variable_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_12, FName K2Node_CustomEvent_NotifyName_4, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_13, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_14, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_15, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_16, FName Temp_name_Variable_3, FName K2Node_CustomEvent_NotifyName_17, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_17, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEvent_ReturnValue, bool Temp_bool_Variable_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, UAnimMontage* K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_3, bool K2Node_CustomEvent_On, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess_1, AActor* K2Node_CustomEvent_Actor, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP_1, bool K2Node_DynamicCast_bSuccess_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_18, float CallFunc_ApplyDamage_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 K2Node_Event_Count_1, int32 K2Node_Event_Max_Count_1, bool K2Node_Event_Use_Custom_Counter_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, bool CallFunc_RecieveHit_Dead, FName K2Node_CustomEvent_NotifyName_18, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, URoadDweller_AnimBp_C* K2Node_DynamicCast_AsRoad_Dweller_Anim_Bp_1, bool K2Node_DynamicCast_bSuccess_3, ABP_ShadowDecal_C* CallFunc_FinishSpawningActor_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_5, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, FVector K2Node_ComponentBoundEvent_NormalImpulse, const FHitResult K2Node_ComponentBoundEvent_Hit, bool Temp_bool_IsClosed_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_6, bool K2Node_Event_Start, int32 CallFunc_PostEventAtLocation_ReturnValue_2, bool K2Node_Event_Visible, bool CallFunc_Not_PreBool_ReturnValue_5, int32 K2Node_Event_Count, int32 K2Node_Event_Max_Count, bool K2Node_Event_Use_Custom_Counter, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_19, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_1, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_1, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, int32 CallFunc_PostEvent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, TArray<FName>& K2Node_MakeArray_Array, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_3, FName K2Node_CustomEvent_NotifyName_19, FVector CallFunc_K2_GetActorLocation_ReturnValue_7, int32 CallFunc_PostEventAtLocation_ReturnValue_3, bool CallFunc_IsRobiValid_ReturnValue_1);
}

#endif
