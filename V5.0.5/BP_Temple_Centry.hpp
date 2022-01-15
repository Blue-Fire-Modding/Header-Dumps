#ifndef UE4SS_SDK_BP_Temple_Centry_HPP
#define UE4SS_SDK_BP_Temple_Centry_HPP

class ABP_Temple_Centry_C : UEnemy_Character_Parent_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* ScenePOI;
    UParticleSystemComponent* P_Implosion_Warm;
    UAkComponent* Ak Explosion;
    UAkComponent* Play_Small_Centry_Laser_Charge_Loop;
    UAkComponent* Play_Small_Centry_Laser_Charge_Positive;
    UParticleSystemComponent* Laser;
    USphereComponent* Sphere;
    float Timeline_3_Fade_BF69FD8842305FBAAB85EDB71F923605;
    TEnumAsByte<ETimelineDirection::Type> Timeline_3__Direction_BF69FD8842305FBAAB85EDB71F923605;
    UTimelineComponent* Timeline_3;
    float Timeline_1_0A_Dissolve_78487BC645F9020C6895FA92DEF08E9B;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1_0A__Direction_78487BC645F9020C6895FA92DEF08E9B;
    UTimelineComponent* Timeline_1_0A;
    float Eye_Glow_Glow_CC0BA2624F02EE8375ECAD99B56BDC99;
    TEnumAsByte<ETimelineDirection::Type> Eye_Glow__Direction_CC0BA2624F02EE8375ECAD99B56BDC99;
    UTimelineComponent* Eye Glow;
    FVector HitLocation;
    FRotator Rotation;
    UMaterialInstanceDynamic* MatEye;
    FColor VFX Color_0;
    UDecalComponent* DecalSpawn;
    UMaterialInstanceDynamic* Material;

    void UserConstructionScript(FParticleSysParam K2Node_MakeStruct_ParticleSysParam, TArray<FParticleSysParam>& K2Node_MakeArray_Array);
    void Eye Glow__FinishedFunc();
    void Eye Glow__UpdateFunc();
    void Timeline_3__FinishedFunc();
    void Timeline_3__UpdateFunc();
    void Timeline_1_0A__FinishedFunc();
    void Timeline_1_0A__UpdateFunc();
    void OnNotifyEnd_326CFA4E4EBC7F253C98DB88F41F33E3(FName NotifyName);
    void OnNotifyBegin_326CFA4E4EBC7F253C98DB88F41F33E3(FName NotifyName);
    void OnInterrupted_326CFA4E4EBC7F253C98DB88F41F33E3(FName NotifyName);
    void OnBlendOut_326CFA4E4EBC7F253C98DB88F41F33E3(FName NotifyName);
    void OnCompleted_326CFA4E4EBC7F253C98DB88F41F33E3(FName NotifyName);
    void OnNotifyEnd_CD961D28409F83D04C0CD787A6A7AEBA(FName NotifyName);
    void OnNotifyBegin_CD961D28409F83D04C0CD787A6A7AEBA(FName NotifyName);
    void OnInterrupted_CD961D28409F83D04C0CD787A6A7AEBA(FName NotifyName);
    void OnBlendOut_CD961D28409F83D04C0CD787A6A7AEBA(FName NotifyName);
    void OnCompleted_CD961D28409F83D04C0CD787A6A7AEBA(FName NotifyName);
    void Aim();
    void Attack02(int32 Count, int32 Max Count, bool Use Custom Counter);
    void Attacka();
    void DecalTimeline();
    void Attack03(int32 Count, int32 Max Count, bool Use Custom Counter);
    void Attack01(int32 Count, int32 Max Count, bool Use Custom Counter);
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void ReceiveBeginPlay();
    void ReceiveHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void Start Agro(bool Start);
    void Cancel Laser();
    void ExecuteUbergraph_BP_Temple_Centry(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, FRotator Temp_struct_Variable, bool Temp_bool_Variable, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, FName K2Node_CustomEvent_NotifyName_9, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FName K2Node_CustomEvent_NotifyName_8, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName_7, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName_6, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName K2Node_CustomEvent_NotifyName_5, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FName Temp_name_Variable, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_1, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, bool Temp_bool_Variable_1, uint8 Temp_byte_Variable_2, uint8 Temp_byte_Variable_3, const TArray<AActor*>& Temp_object_Variable, bool CallFunc_IsRobiValid_ReturnValue, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, FName K2Node_CustomEvent_NotifyName_4, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_8, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_9, FName Temp_name_Variable_1, bool Temp_bool_Variable_2, UAnimMontage* Temp_object_Variable_1, UAnimMontage* Temp_object_Variable_2, bool CallFunc_IsRobiValid_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue_2, bool CallFunc_IsRobiValid_ReturnValue_3, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, APawn* CallFunc_GetPlayerPawn_ReturnValue, bool Temp_bool_Variable_3, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, int32 K2Node_Event_Count_2, int32 K2Node_Event_Max_Count_2, bool K2Node_Event_Use_Custom_Counter_2, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_2, uint8 K2Node_Select_Default, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, const TArray<uint8>& K2Node_MakeArray_Array, UDecalComponent* CallFunc_SpawnDecalAtLocation_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_4, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult, FVector CallFunc_Conv_FloatToVector_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, int32 CallFunc_PostAssociatedAkEvent_ReturnValue, bool Temp_bool_Variable_4, uint8 K2Node_Select_Default_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, FParticleSysParam K2Node_MakeStruct_ParticleSysParam, TArray<FParticleSysParam>& K2Node_MakeArray_Array_1, FHitResult CallFunc_SphereTraceSingleForObjects_OutHit, bool CallFunc_SphereTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, float CallFunc_ApplyDamage_ReturnValue, const TArray<AActor*>& Temp_object_Variable_3, int32 K2Node_Event_Count_1, int32 K2Node_Event_Max_Count_1, bool K2Node_Event_Use_Custom_Counter_1, FHitResult CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, FVector CallFunc_BreakHitResult_Location_1, FVector CallFunc_BreakHitResult_ImpactPoint_1, FVector CallFunc_BreakHitResult_Normal_1, FVector CallFunc_BreakHitResult_ImpactNormal_1, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, AActor* CallFunc_BreakHitResult_HitActor_1, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_FaceIndex_1, FVector CallFunc_BreakHitResult_TraceStart_1, FVector CallFunc_BreakHitResult_TraceEnd_1, FRotator CallFunc_Conv_VectorToRotator_ReturnValue, FRotator K2Node_Select_Default_2, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_1, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, FVector K2Node_Select_Default_3, bool CallFunc_NotEqual_ByteByte_ReturnValue, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_3, int32 CallFunc_PostAssociatedAkEvent_ReturnValue_1, int32 K2Node_Event_Count, int32 K2Node_Event_Max_Count, bool K2Node_Event_Use_Custom_Counter, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, bool CallFunc_RecieveHit_Dead, UPrimitiveComponent* K2Node_Event_MyComp, AActor* K2Node_Event_Other, UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, FVector K2Node_Event_HitLocation, FVector K2Node_Event_HitNormal, FVector K2Node_Event_NormalImpulse, const FHitResult K2Node_Event_Hit, FVector CallFunc_K2_GetActorLocation_ReturnValue_5, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_ApplyDamage_ReturnValue_1, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, bool K2Node_Event_Start, float CallFunc_PlayAnimMontage_ReturnValue, bool Temp_bool_Variable_5, bool CallFunc_Not_PreBool_ReturnValue, UAnimMontage* K2Node_Select_Default_4, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_1, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_6, int32 CallFunc_PostAssociatedAkEvent_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_2, TArray<FName>& K2Node_MakeArray_Array_2);
}

#endif
