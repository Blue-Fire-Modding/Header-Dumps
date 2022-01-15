#ifndef UE4SS_SDK_BP_Ice_Centry_HPP
#define UE4SS_SDK_BP_Ice_Centry_HPP

class ABP_Ice_Centry_C : UEnemy_Character_Parent_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* ScenePOI;
    UParticleSystemComponent* P_CentryWarm;
    UParticleSystemComponent* P_IceCentry;
    USphereComponent* Sphere;
    float Timeline_1_0A_Dissolve_D3CC8CD04BC09BD87DB2938F87EE14F4;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1_0A__Direction_D3CC8CD04BC09BD87DB2938F87EE14F4;
    UTimelineComponent* Timeline_1_0A;
    FVector MoveBackDire_0;
    FVector MoveBackOriginal_0;
    UMaterialInstanceDynamic* New BodyMaterial;

    void UserConstructionScript(FParticleSysParam K2Node_MakeStruct_ParticleSysParam, TArray<FParticleSysParam>& K2Node_MakeArray_Array);
    void Timeline_1_0A__FinishedFunc();
    void Timeline_1_0A__UpdateFunc();
    void OnNotifyEnd_3ED324184989F2EC5DAAA1BB37538948(FName NotifyName);
    void OnNotifyBegin_3ED324184989F2EC5DAAA1BB37538948(FName NotifyName);
    void OnInterrupted_3ED324184989F2EC5DAAA1BB37538948(FName NotifyName);
    void OnBlendOut_3ED324184989F2EC5DAAA1BB37538948(FName NotifyName);
    void OnCompleted_3ED324184989F2EC5DAAA1BB37538948(FName NotifyName);
    void OnNotifyEnd_7F7C5B114AD249296694639E2C12546C(FName NotifyName);
    void OnNotifyBegin_7F7C5B114AD249296694639E2C12546C(FName NotifyName);
    void OnInterrupted_7F7C5B114AD249296694639E2C12546C(FName NotifyName);
    void OnBlendOut_7F7C5B114AD249296694639E2C12546C(FName NotifyName);
    void OnCompleted_7F7C5B114AD249296694639E2C12546C(FName NotifyName);
    void OnNotifyEnd_D44CF5C24422213154F38D8A78117778(FName NotifyName);
    void OnNotifyBegin_D44CF5C24422213154F38D8A78117778(FName NotifyName);
    void OnInterrupted_D44CF5C24422213154F38D8A78117778(FName NotifyName);
    void OnBlendOut_D44CF5C24422213154F38D8A78117778(FName NotifyName);
    void OnCompleted_D44CF5C24422213154F38D8A78117778(FName NotifyName);
    void OnNotifyEnd_09C1D38F4F02EBD59F1B778A24D993F1(FName NotifyName);
    void OnNotifyBegin_09C1D38F4F02EBD59F1B778A24D993F1(FName NotifyName);
    void OnInterrupted_09C1D38F4F02EBD59F1B778A24D993F1(FName NotifyName);
    void OnBlendOut_09C1D38F4F02EBD59F1B778A24D993F1(FName NotifyName);
    void OnCompleted_09C1D38F4F02EBD59F1B778A24D993F1(FName NotifyName);
    void Attack03(int32 Count, int32 Max Count, bool Use Custom Counter);
    void MoveIn();
    void Explode();
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void ReceiveBeginPlay();
    void Attack01(int32 Count, int32 Max Count, bool Use Custom Counter);
    void ReceiveHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_BP_Ice_Centry(int32 EntryPoint, FName K2Node_CustomEvent_NotifyName_17, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FName K2Node_CustomEvent_NotifyName_16, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName_15, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName Temp_name_Variable, bool Temp_bool_Variable, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, const TArray<AActor*>& Temp_object_Variable, FName K2Node_CustomEvent_NotifyName_14, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName K2Node_CustomEvent_NotifyName_13, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FName K2Node_CustomEvent_NotifyName_12, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, FName K2Node_CustomEvent_NotifyName_11, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, FName K2Node_CustomEvent_NotifyName_10, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, FName Temp_name_Variable_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_8, FName K2Node_CustomEvent_NotifyName_9, FName K2Node_CustomEvent_NotifyName_8, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_9, FName K2Node_CustomEvent_NotifyName_7, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_10, FName K2Node_CustomEvent_NotifyName_6, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_11, FName K2Node_CustomEvent_NotifyName_5, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_12, FName Temp_name_Variable_2, bool Temp_bool_Variable_1, UAnimMontage* Temp_object_Variable_1, UAnimMontage* Temp_object_Variable_2, FName K2Node_CustomEvent_NotifyName_4, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_13, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_14, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_15, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_16, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_17, FName Temp_name_Variable_3, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 K2Node_Event_Count_1, int32 K2Node_Event_Max_Count_1, bool K2Node_Event_Use_Custom_Counter_1, APawn* CallFunc_GetPlayerPawn_ReturnValue, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_IsValid_ReturnValue, FName K2Node_CustomEvent_NotifyName_19, uint8 K2Node_Select_Default, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_MakeLiteralFloat_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, const TArray<uint8>& K2Node_MakeArray_Array, FHitResult CallFunc_SphereTraceSingleForObjects_OutHit, bool CallFunc_SphereTraceSingleForObjects_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsRobiValid_ReturnValue, float CallFunc_ApplyDamage_ReturnValue, FName K2Node_CustomEvent_NotifyName_18, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, bool CallFunc_RecieveHit_Dead, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_18, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 K2Node_Event_Count, int32 K2Node_Event_Max_Count, bool K2Node_Event_Use_Custom_Counter, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_19, FVector CallFunc_K2_GetActorLocation_ReturnValue_5, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_GetDirectionUnitVector_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, UPrimitiveComponent* K2Node_Event_MyComp, AActor* K2Node_Event_Other, UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, FVector K2Node_Event_HitLocation, FVector K2Node_Event_HitNormal, FVector K2Node_Event_NormalImpulse, const FHitResult K2Node_Event_Hit, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP_1, bool K2Node_DynamicCast_bSuccess_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_6, int32 CallFunc_PostEventAtLocation_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_7, int32 CallFunc_PostEventAtLocation_ReturnValue_3, float CallFunc_ApplyDamage_ReturnValue_1, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Variable_2, bool CallFunc_Not_PreBool_ReturnValue, UAnimMontage* K2Node_Select_Default_1, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_4, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_8, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_5, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, TArray<FName>& K2Node_MakeArray_Array_1, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_3, FVector CallFunc_K2_GetActorLocation_ReturnValue_9, int32 CallFunc_PostEventAtLocation_ReturnValue_6);
}

#endif