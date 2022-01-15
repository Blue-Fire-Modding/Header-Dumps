#ifndef UE4SS_SDK_BP_Invocation_Clon_HPP
#define UE4SS_SDK_BP_Invocation_Clon_HPP

class ABP_Invocation_Clon_C : UEnemy_Character_Parent_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* ScenePOI;
    UArrowComponent* Arrow_Forward;
    USphereComponent* Shield Collider;
    UStaticMeshComponent* Shield;
    UCapsuleComponent* Collider;
    UArrowComponent* Spawn;
    float Show_Shield_Lerp_7E994109474065246B803B93588ADE63;
    TEnumAsByte<ETimelineDirection::Type> Show_Shield__Direction_7E994109474065246B803B93588ADE63;
    UTimelineComponent* Show Shield;
    float Expand_Shield_Lerp_Scale_B7282F924CFEF3D8BA883CA80A21DBBF;
    TEnumAsByte<ETimelineDirection::Type> Expand_Shield__Direction_B7282F924CFEF3D8BA883CA80A21DBBF;
    UTimelineComponent* Expand Shield;
    FBP_Invocation_Clon_CCallB CallB;
    void CallB();
    FString ID;
    AActor* Boss Room Actor;
    AActor* Cutscene Camera;
    ULevelSequence* Cutscene Change Fase;
    bool Is Shield Visible;
    UPenumbraSkelMesh_Skeleton_AnimBlueprint_C* Anim Inst;
    int32 Amount Minion;
    int32 Max Minions;
    float Fase_04_Damage;
    float Health To Fase 4;
    ABP_Penumbra_C* Goddess;
    UMaterialInstanceDynamic* Body;
    bool Custom Show Trace;
    UAkAudioEvent* Clon_VO;
    UAkAudioEvent* AppearSFX;
    UAkAudioEvent* ClonDisappearSFX;
    int32 NewVar_0_0;
    int32 NewVar_1;
    int32 ClonDisappearID;

    void Expand Shield__FinishedFunc();
    void Expand Shield__UpdateFunc();
    void Show Shield__FinishedFunc();
    void Show Shield__UpdateFunc();
    void OnNotifyEnd_3C6990A549AF64D4CA200B8FFAE3EFB1(FName NotifyName);
    void OnNotifyBegin_3C6990A549AF64D4CA200B8FFAE3EFB1(FName NotifyName);
    void OnInterrupted_3C6990A549AF64D4CA200B8FFAE3EFB1(FName NotifyName);
    void OnBlendOut_3C6990A549AF64D4CA200B8FFAE3EFB1(FName NotifyName);
    void OnCompleted_3C6990A549AF64D4CA200B8FFAE3EFB1(FName NotifyName);
    void OnNotifyEnd_0D07B1784BFBCB043462B4B53BF7BD87(FName NotifyName);
    void OnNotifyBegin_0D07B1784BFBCB043462B4B53BF7BD87(FName NotifyName);
    void OnInterrupted_0D07B1784BFBCB043462B4B53BF7BD87(FName NotifyName);
    void OnBlendOut_0D07B1784BFBCB043462B4B53BF7BD87(FName NotifyName);
    void OnCompleted_0D07B1784BFBCB043462B4B53BF7BD87(FName NotifyName);
    void OnNotifyEnd_0461CB3B439057F8B84A9BA4290C4437(FName NotifyName);
    void OnNotifyBegin_0461CB3B439057F8B84A9BA4290C4437(FName NotifyName);
    void OnInterrupted_0461CB3B439057F8B84A9BA4290C4437(FName NotifyName);
    void OnBlendOut_0461CB3B439057F8B84A9BA4290C4437(FName NotifyName);
    void OnCompleted_0461CB3B439057F8B84A9BA4290C4437(FName NotifyName);
    void OnNotifyEnd_738C1F0842AC8423B6F2D2B8CB425F03(FName NotifyName);
    void OnNotifyBegin_738C1F0842AC8423B6F2D2B8CB425F03(FName NotifyName);
    void OnInterrupted_738C1F0842AC8423B6F2D2B8CB425F03(FName NotifyName);
    void OnBlendOut_738C1F0842AC8423B6F2D2B8CB425F03(FName NotifyName);
    void OnCompleted_738C1F0842AC8423B6F2D2B8CB425F03(FName NotifyName);
    void VFX Shield Expand(bool Reset);
    void VFX Shield Stop Expand();
    void VFX Smoke Spawn();
    void VFX Glow(bool Show);
    void Attack01(int32 Count, int32 Max Count, bool Use Custom Counter);
    void Attack02(int32 Count, int32 Max Count, bool Use Custom Counter);
    void Attack03(int32 Count, int32 Max Count, bool Use Custom Counter);
    void BndEvt__Shield Collider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void VFX Shield Show(bool Show, bool Instant);
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void ReceiveBeginPlay();
    void On Player Die();
    void Death(bool IsGoddess);
    void ExecuteUbergraph_BP_Invocation_Clon(int32 EntryPoint, bool Temp_bool_Variable, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, bool Temp_bool_Variable_1, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_2, float Temp_float_Variable_2, float Temp_float_Variable_3, FName K2Node_CustomEvent_NotifyName_19, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FName K2Node_CustomEvent_NotifyName_18, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName_17, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName_16, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName K2Node_CustomEvent_NotifyName_15, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FName Temp_name_Variable, bool Temp_bool_Variable_3, float Temp_float_Variable_4, float Temp_float_Variable_5, float CallFunc_Lerp_ReturnValue, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, FVector CallFunc_Conv_FloatToVector_ReturnValue, FName K2Node_CustomEvent_NotifyName_14, FName K2Node_CustomEvent_NotifyName_13, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, FName K2Node_CustomEvent_NotifyName_12, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, FName K2Node_CustomEvent_NotifyName_11, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_8, FName K2Node_CustomEvent_NotifyName_10, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_9, FName Temp_name_Variable_1, FName K2Node_CustomEvent_NotifyName_9, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_10, FName K2Node_CustomEvent_NotifyName_8, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_11, FName K2Node_CustomEvent_NotifyName_7, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_12, FName K2Node_CustomEvent_NotifyName_6, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_13, FName K2Node_CustomEvent_NotifyName_5, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_14, FName Temp_name_Variable_2, bool Temp_bool_Variable_4, uint8 Temp_byte_Variable_2, uint8 Temp_byte_Variable_3, const TArray<AActor*>& Temp_object_Variable, FName K2Node_CustomEvent_NotifyName_4, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_15, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_16, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_17, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_18, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_19, FName Temp_name_Variable_3, bool CallFunc_EqualEqual_NameName_ReturnValue, bool K2Node_CustomEvent_Reset, float K2Node_Select_Default, float CallFunc_Lerp_ReturnValue_1, FVector CallFunc_Conv_FloatToVector_ReturnValue_1, FVector CallFunc_Conv_FloatToVector_ReturnValue_2, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_CustomEvent_Show_1, float K2Node_Select_Default_1, int32 K2Node_Event_Count_2, int32 K2Node_Event_Max_Count_2, bool K2Node_Event_Use_Custom_Counter_2, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, int32 K2Node_Event_Count_1, int32 K2Node_Event_Max_Count_1, bool K2Node_Event_Use_Custom_Counter_1, int32 K2Node_Event_Count, int32 K2Node_Event_Max_Count, bool K2Node_Event_Use_Custom_Counter, APawn* CallFunc_GetPlayerPawn_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, float CallFunc_ApplyDamage_ReturnValue, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_CustomEvent_Show, bool K2Node_CustomEvent_Instant, uint8 K2Node_Select_Default_2, float K2Node_Select_Default_3, FVector CallFunc_Conv_FloatToVector_ReturnValue_3, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UPenumbraSkelMesh_Skeleton_AnimBlueprint_C* K2Node_DynamicCast_AsPenumbra_Skel_Mesh_Skeleton_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_CustomEvent_IsGoddess, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, const TArray<uint8>& K2Node_MakeArray_Array, uint8 K2Node_Select_Default_4, FHitResult CallFunc_SphereTraceSingleForObjects_OutHit, bool CallFunc_SphereTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, FVector CallFunc_BreakHitResult_Location_1, FVector CallFunc_BreakHitResult_ImpactPoint_1, FVector CallFunc_BreakHitResult_Normal_1, FVector CallFunc_BreakHitResult_ImpactNormal_1, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, AActor* CallFunc_BreakHitResult_HitActor_1, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_FaceIndex_1, FVector CallFunc_BreakHitResult_TraceStart_1, FVector CallFunc_BreakHitResult_TraceEnd_1, float CallFunc_ApplyDamage_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, FRotator CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_3, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2);
    void CallB__DelegateSignature();
}

#endif
