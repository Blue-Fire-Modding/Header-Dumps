#ifndef UE4SS_SDK_BP_AirDweller_HPP
#define UE4SS_SDK_BP_AirDweller_HPP

class ABP_AirDweller_C : UEnemy_Character_Parent_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* ScenePOI;
    UAkComponent* Ak;
    UArrowComponent* Arrow_Forward;
    UParticleSystemComponent* Shadow_Slash;
    UArrowComponent* Arrow1;
    UStaticMeshComponent* Axe;
    float Deactivate_Enemy_Dissolve_C60F15AA44B0B464647BB9815AFA0577;
    TEnumAsByte<ETimelineDirection::Type> Deactivate_Enemy__Direction_C60F15AA44B0B464647BB9815AFA0577;
    UTimelineComponent* Deactivate Enemy;
    FVector MoveBackDire_0;
    FVector MoveBackOriginal_0;
    FVector Offset Damage Location;
    float Attack Distance;
    bool TeleportHidden;
    float Offset Z;
    UMaterialInstanceDynamic* New BodyMaterial;
    float Delay Teleport;
    UParticleSystemComponent* TeleportVFX;

    void Deactivate Enemy__FinishedFunc();
    void Deactivate Enemy__UpdateFunc();
    void OnNotifyEnd_457DC5B7495FB2866C8C7A89C37CA891(FName NotifyName);
    void OnNotifyBegin_457DC5B7495FB2866C8C7A89C37CA891(FName NotifyName);
    void OnInterrupted_457DC5B7495FB2866C8C7A89C37CA891(FName NotifyName);
    void OnBlendOut_457DC5B7495FB2866C8C7A89C37CA891(FName NotifyName);
    void OnCompleted_457DC5B7495FB2866C8C7A89C37CA891(FName NotifyName);
    void OnNotifyEnd_8AD351BB4FE52819BBC4768CC6ABE71C(FName NotifyName);
    void OnNotifyBegin_8AD351BB4FE52819BBC4768CC6ABE71C(FName NotifyName);
    void OnInterrupted_8AD351BB4FE52819BBC4768CC6ABE71C(FName NotifyName);
    void OnBlendOut_8AD351BB4FE52819BBC4768CC6ABE71C(FName NotifyName);
    void OnCompleted_8AD351BB4FE52819BBC4768CC6ABE71C(FName NotifyName);
    void OnNotifyEnd_E6230E6D476D9A709DBF958BA3CEA416(FName NotifyName);
    void OnNotifyBegin_E6230E6D476D9A709DBF958BA3CEA416(FName NotifyName);
    void OnInterrupted_E6230E6D476D9A709DBF958BA3CEA416(FName NotifyName);
    void OnBlendOut_E6230E6D476D9A709DBF958BA3CEA416(FName NotifyName);
    void OnCompleted_E6230E6D476D9A709DBF958BA3CEA416(FName NotifyName);
    void OnNotifyEnd_89114F364077CCCE3364A1BF8BA9617B(FName NotifyName);
    void OnNotifyBegin_89114F364077CCCE3364A1BF8BA9617B(FName NotifyName);
    void OnInterrupted_89114F364077CCCE3364A1BF8BA9617B(FName NotifyName);
    void OnBlendOut_89114F364077CCCE3364A1BF8BA9617B(FName NotifyName);
    void OnCompleted_89114F364077CCCE3364A1BF8BA9617B(FName NotifyName);
    void ReceiveHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void Attack01(int32 Count, int32 Max Count, bool Use Custom Counter);
    void TeleportIn();
    void TeleportOut();
    void Attack02(int32 Count, int32 Max Count, bool Use Custom Counter);
    void PerformAttack(float Attack Distance);
    void TeleportInExtra();
    void VFX Teleport();
    void ReceiveBeginPlay();
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void Call Parry();
    void TeleportOutExtra();
    void MoveTrail();
    void ExecuteUbergraph_BP_AirDweller(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, FName K2Node_CustomEvent_NotifyName_17, FName K2Node_CustomEvent_NotifyName_16, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FName K2Node_CustomEvent_NotifyName_15, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName Temp_name_Variable, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName_14, FName K2Node_CustomEvent_NotifyName_13, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName K2Node_CustomEvent_NotifyName_12, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FName K2Node_CustomEvent_NotifyName_11, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, FName K2Node_CustomEvent_NotifyName_10, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, FName Temp_name_Variable_1, const TArray<AActor*>& Temp_object_Variable, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_1, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, FName K2Node_CustomEvent_NotifyName_9, FName K2Node_CustomEvent_NotifyName_8, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_8, FName K2Node_CustomEvent_NotifyName_7, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_9, FName K2Node_CustomEvent_NotifyName_6, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_10, FName K2Node_CustomEvent_NotifyName_5, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_11, FName Temp_name_Variable_2, FName K2Node_CustomEvent_NotifyName_4, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_12, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_13, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_14, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_15, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_16, FName Temp_name_Variable_3, bool Temp_bool_Variable, UAnimMontage* Temp_object_Variable_1, UAnimMontage* Temp_object_Variable_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, UPrimitiveComponent* K2Node_Event_MyComp, AActor* K2Node_Event_Other, UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, FVector K2Node_Event_HitLocation, FVector K2Node_Event_HitNormal, FVector K2Node_Event_NormalImpulse, const FHitResult K2Node_Event_Hit, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 K2Node_Event_Count_1, int32 K2Node_Event_Max_Count_1, bool K2Node_Event_Use_Custom_Counter_1, FName K2Node_CustomEvent_NotifyName_19, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_RandomUnitVector_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, FVector CallFunc_MakeVector_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, FVector CallFunc_MakeVector_ReturnValue_2, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_5, FVector CallFunc_RandomUnitVector_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_6, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, float CallFunc_MakeLiteralFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue_3, float CallFunc_BreakVector_X_4, float CallFunc_BreakVector_Y_4, float CallFunc_BreakVector_Z_4, FVector CallFunc_MakeVector_ReturnValue_4, FVector CallFunc_Add_VectorVector_ReturnValue_1, int32 K2Node_Event_Count, int32 K2Node_Event_Max_Count, bool K2Node_Event_Use_Custom_Counter, float CallFunc_BreakVector_X_5, float CallFunc_BreakVector_Y_5, float CallFunc_BreakVector_Z_5, FVector CallFunc_MakeVector_ReturnValue_5, const TArray<uint8>& K2Node_MakeArray_Array, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult_1, bool CallFunc_K2_SetActorLocation_ReturnValue_1, float K2Node_CustomEvent_Attack_Distance, FVector CallFunc_GetForwardVector_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_7, FVector CallFunc_Add_VectorVector_ReturnValue_2, FHitResult CallFunc_SphereTraceSingleForObjects_OutHit, bool CallFunc_SphereTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue_8, int32 CallFunc_PostEvent_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue_4, int32 CallFunc_PostEventAtLocation_ReturnValue_5, int32 CallFunc_PostEvent_ReturnValue_1, FHitResult CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_9, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_ApplyDamage_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_17, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, bool Temp_bool_Variable_1, bool CallFunc_RecieveHit_Dead, UAnimMontage* K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_18, TArray<FName>& K2Node_MakeArray_Array_1, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, FName K2Node_CustomEvent_NotifyName_18, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_19, UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_10, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_6, int32 CallFunc_PostEventAtLocation_ReturnValue_7, int32 CallFunc_PostEventAtLocation_ReturnValue_8);
}

#endif