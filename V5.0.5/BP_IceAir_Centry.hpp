#ifndef UE4SS_SDK_BP_IceAir_Centry_HPP
#define UE4SS_SDK_BP_IceAir_Centry_HPP

class ABP_IceAir_Centry_C : UEnemy_Character_Parent_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* ScenePOI;
    UParticleSystemComponent* P_Implosion_Warm;
    UAkComponent* Ak Explosion;
    UAkComponent* Play_Small_Centry_Laser_Charge_Loop;
    UAkComponent* Play_Small_Centry_Laser_Charge_Positive;
    UParticleSystemComponent* Laser;
    USphereComponent* Sphere;
    float Timeline_2_Fade_51836FAF44B69BA1F8235CA2E6F34273;
    TEnumAsByte<ETimelineDirection::Type> Timeline_2__Direction_51836FAF44B69BA1F8235CA2E6F34273;
    UTimelineComponent* Timeline_2;
    float Timeline_1_0A_Dissolve_62DE51B34A7144C22C4F50871A59005B;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1_0A__Direction_62DE51B34A7144C22C4F50871A59005B;
    UTimelineComponent* Timeline_1_0A;
    float Eye_Glow_Glow_60EB0C9949B1FBC0454C9EB9319B7E70;
    TEnumAsByte<ETimelineDirection::Type> Eye_Glow__Direction_60EB0C9949B1FBC0454C9EB9319B7E70;
    UTimelineComponent* Eye Glow;
    FVector HitLocation;
    FRotator Rotation;
    UMaterialInstanceDynamic* MatEye;
    UMaterialInstanceDynamic* Material;

    void UserConstructionScript(FParticleSysParam K2Node_MakeStruct_ParticleSysParam, TArray<FParticleSysParam>& K2Node_MakeArray_Array);
    void Eye Glow__FinishedFunc();
    void Eye Glow__UpdateFunc();
    void Timeline_2__FinishedFunc();
    void Timeline_2__UpdateFunc();
    void Timeline_1_0A__FinishedFunc();
    void Timeline_1_0A__UpdateFunc();
    void OnNotifyEnd_41F42A584BAA9F6FA793E09BB0972529(FName NotifyName);
    void OnNotifyBegin_41F42A584BAA9F6FA793E09BB0972529(FName NotifyName);
    void OnInterrupted_41F42A584BAA9F6FA793E09BB0972529(FName NotifyName);
    void OnBlendOut_41F42A584BAA9F6FA793E09BB0972529(FName NotifyName);
    void OnCompleted_41F42A584BAA9F6FA793E09BB0972529(FName NotifyName);
    void OnNotifyEnd_9931201E491FA5A63B99949F8812A677(FName NotifyName);
    void OnNotifyBegin_9931201E491FA5A63B99949F8812A677(FName NotifyName);
    void OnInterrupted_9931201E491FA5A63B99949F8812A677(FName NotifyName);
    void OnBlendOut_9931201E491FA5A63B99949F8812A677(FName NotifyName);
    void OnCompleted_9931201E491FA5A63B99949F8812A677(FName NotifyName);
    void OnNotifyEnd_B776FFD44A4FA7C6378F63AA8BC31D52(FName NotifyName);
    void OnNotifyBegin_B776FFD44A4FA7C6378F63AA8BC31D52(FName NotifyName);
    void OnInterrupted_B776FFD44A4FA7C6378F63AA8BC31D52(FName NotifyName);
    void OnBlendOut_B776FFD44A4FA7C6378F63AA8BC31D52(FName NotifyName);
    void OnCompleted_B776FFD44A4FA7C6378F63AA8BC31D52(FName NotifyName);
    void Attack03(int32 Count, int32 Max Count, bool Use Custom Counter);
    void Attack02(int32 Count, int32 Max Count, bool Use Custom Counter);
    void Attacka();
    void DecalTimeline();
    void Attack01(int32 Count, int32 Max Count, bool Use Custom Counter);
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void ReceiveBeginPlay();
    void ReceiveHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void Aim();
    void Start Agro(bool Start);
    void Cancel Laser();
    void ExecuteUbergraph_BP_IceAir_Centry(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, bool Temp_bool_Variable, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, FName K2Node_CustomEvent_NotifyName_14, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FName K2Node_CustomEvent_NotifyName_13, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName_12, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName_11, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName K2Node_CustomEvent_NotifyName_10, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FName Temp_name_Variable, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, bool Temp_bool_Variable_1, uint8 Temp_byte_Variable_2, uint8 Temp_byte_Variable_3, const TArray<AActor*>& Temp_object_Variable, bool CallFunc_IsRobiValid_ReturnValue, FName K2Node_CustomEvent_NotifyName_9, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, FName K2Node_CustomEvent_NotifyName_8, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, FName K2Node_CustomEvent_NotifyName_7, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, FName K2Node_CustomEvent_NotifyName_6, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_8, FName K2Node_CustomEvent_NotifyName_5, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_9, FName Temp_name_Variable_1, bool Temp_bool_Variable_2, UAnimMontage* Temp_object_Variable_1, UAnimMontage* Temp_object_Variable_2, FName K2Node_CustomEvent_NotifyName_4, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_10, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_11, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_12, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_13, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_14, FName Temp_name_Variable_2, int32 K2Node_Event_Count_2, int32 K2Node_Event_Max_Count_2, bool K2Node_Event_Use_Custom_Counter_2, bool CallFunc_IsRobiValid_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue_3, APawn* CallFunc_GetPlayerPawn_ReturnValue, FRotator Temp_struct_Variable_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, int32 K2Node_Event_Count_1, int32 K2Node_Event_Max_Count_1, bool K2Node_Event_Use_Custom_Counter_1, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_1, uint8 K2Node_Select_Default, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_2, int32 CallFunc_PostAssociatedAkEvent_ReturnValue, const TArray<uint8>& K2Node_MakeArray_Array, UDecalComponent* CallFunc_SpawnDecalAtLocation_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_4, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, FVector CallFunc_Conv_FloatToVector_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, int32 CallFunc_PostAssociatedAkEvent_ReturnValue_1, bool Temp_bool_Variable_3, uint8 K2Node_Select_Default_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, FParticleSysParam K2Node_MakeStruct_ParticleSysParam, TArray<FParticleSysParam>& K2Node_MakeArray_Array_1, FHitResult CallFunc_SphereTraceSingleForObjects_OutHit, bool CallFunc_SphereTraceSingleForObjects_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, float CallFunc_ApplyDamage_ReturnValue, bool Temp_bool_Variable_4, int32 K2Node_Event_Count, int32 K2Node_Event_Max_Count, bool K2Node_Event_Use_Custom_Counter, const TArray<AActor*>& Temp_object_Variable_3, bool CallFunc_NotEqual_ByteByte_ReturnValue, FHitResult CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, FVector CallFunc_BreakHitResult_Location_1, FVector CallFunc_BreakHitResult_ImpactPoint_1, FVector CallFunc_BreakHitResult_Normal_1, FVector CallFunc_BreakHitResult_ImpactNormal_1, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, AActor* CallFunc_BreakHitResult_HitActor_1, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_FaceIndex_1, FVector CallFunc_BreakHitResult_TraceStart_1, FVector CallFunc_BreakHitResult_TraceEnd_1, FRotator CallFunc_Conv_VectorToRotator_ReturnValue, FVector K2Node_Select_Default_2, FRotator K2Node_Select_Default_3, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, bool CallFunc_RecieveHit_Dead, float CallFunc_PlayAnimMontage_ReturnValue, UPrimitiveComponent* K2Node_Event_MyComp, AActor* K2Node_Event_Other, UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, FVector K2Node_Event_HitLocation, FVector K2Node_Event_HitNormal, FVector K2Node_Event_NormalImpulse, const FHitResult K2Node_Event_Hit, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_ApplyDamage_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_5, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, bool K2Node_Event_Start, bool Temp_bool_Variable_5, bool CallFunc_Not_PreBool_ReturnValue, UAnimMontage* K2Node_Select_Default_4, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_1, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_2, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_3, FVector CallFunc_K2_GetActorLocation_ReturnValue_6, int32 CallFunc_PostAssociatedAkEvent_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_2, TArray<FName>& K2Node_MakeArray_Array_2, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2);
}

#endif
