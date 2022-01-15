#ifndef UE4SS_SDK_BP_CentryWaveSpawner_HPP
#define UE4SS_SDK_BP_CentryWaveSpawner_HPP

class ABP_CentryWaveSpawner_C : UEnemy_Character_Parent_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* ScenePOI;
    UAkComponent* Ak;
    UBoxComponent* AreaDetection;
    UArrowComponent* ArrowDirection;
    float Timeline_1_0_Dissolve_5D7B350846D21242054585B5EE0E4905;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1_0__Direction_5D7B350846D21242054585B5EE0E4905;
    UTimelineComponent* Timeline_1_0;
    UStaticMeshComponent* DebugComp;
    float Interval;
    float Speed;
    float Timeout;
    float WideSize;
    bool Circular;
    bool ShowHelp;
    float CircularDuration;
    float TimeOffset;
    TArray<ALineWave_C*> DeactivatedWaves;
    TArray<AWave_C*> DeactivatedWavesCircular;
    UMaterialInterface* WaveMaterial;
    TArray<AActor*> Waves;
    UAkAudioEvent* WaveSpawnSound;
    UParticleSystem* WaveSpawnEmitter;
    UMaterialInstanceDynamic* New BodyMaterial;
    UMaterialInstanceDynamic* Glow Material;

    void UserConstructionScript(FTransform CallFunc_MakeTransform_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue_1, UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1);
    void Timeline_1_0__FinishedFunc();
    void Timeline_1_0__UpdateFunc();
    void OnNotifyEnd_356737304E3B7676D4B8C6B3B032F369(FName NotifyName);
    void OnNotifyBegin_356737304E3B7676D4B8C6B3B032F369(FName NotifyName);
    void OnInterrupted_356737304E3B7676D4B8C6B3B032F369(FName NotifyName);
    void OnBlendOut_356737304E3B7676D4B8C6B3B032F369(FName NotifyName);
    void OnCompleted_356737304E3B7676D4B8C6B3B032F369(FName NotifyName);
    void OnNotifyEnd_A5F6CD9B48A6A8CC90A6D597A9815729(FName NotifyName);
    void OnNotifyBegin_A5F6CD9B48A6A8CC90A6D597A9815729(FName NotifyName);
    void OnInterrupted_A5F6CD9B48A6A8CC90A6D597A9815729(FName NotifyName);
    void OnBlendOut_A5F6CD9B48A6A8CC90A6D597A9815729(FName NotifyName);
    void OnCompleted_A5F6CD9B48A6A8CC90A6D597A9815729(FName NotifyName);
    void OnNotifyEnd_99280E48471439F123D823820DBDC2C1(FName NotifyName);
    void OnNotifyBegin_99280E48471439F123D823820DBDC2C1(FName NotifyName);
    void OnInterrupted_99280E48471439F123D823820DBDC2C1(FName NotifyName);
    void OnBlendOut_99280E48471439F123D823820DBDC2C1(FName NotifyName);
    void OnCompleted_99280E48471439F123D823820DBDC2C1(FName NotifyName);
    void Attack01(int32 Count, int32 Max Count, bool Use Custom Counter);
    void Attack03(int32 Count, int32 Max Count, bool Use Custom Counter);
    void Wave();
    void AddWave(AWave_C* SelfRef);
    void AddLineWave(ALineWave_C* SelfRef);
    void ReceiveBeginPlay();
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void BndEvt__AreaDetection_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__AreaDetection_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void CheckPlayerDistance();
    void DontDestroyPawnSensing();
    void ExecuteUbergraph_BP_CentryWaveSpawner(int32 EntryPoint, FName K2Node_CustomEvent_NotifyName_14, FName K2Node_CustomEvent_NotifyName_13, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FName K2Node_CustomEvent_NotifyName_12, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName_11, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName_10, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName Temp_name_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FName K2Node_CustomEvent_NotifyName_9, FName K2Node_CustomEvent_NotifyName_8, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, FName K2Node_CustomEvent_NotifyName_7, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, FName K2Node_CustomEvent_NotifyName_6, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, FName K2Node_CustomEvent_NotifyName_5, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_8, FName Temp_name_Variable_1, bool Temp_bool_Variable, UAnimMontage* Temp_object_Variable, UAnimMontage* Temp_object_Variable_1, bool Temp_bool_Variable_1, float Temp_float_Variable, bool Temp_bool_Variable_2, float Temp_float_Variable_1, float Temp_float_Variable_2, bool CallFunc_IsValid_ReturnValue_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_9, FName K2Node_CustomEvent_NotifyName_4, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_10, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_11, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_12, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_13, FName Temp_name_Variable_2, float CallFunc_Lerp_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool Temp_bool_Variable_3, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UAnimMontage* K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_14, int32 K2Node_Event_Count_1, int32 K2Node_Event_Max_Count_1, bool K2Node_Event_Use_Custom_Counter_1, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, int32 K2Node_Event_Count, int32 K2Node_Event_Max_Count, bool K2Node_Event_Use_Custom_Counter, const FTransform CallFunc_GetTransform_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, ALineWave_C* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, ALineWave_C* CallFunc_FinishSpawningActor_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, AWave_C* K2Node_CustomEvent_SelfRef_1, AWave_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue_1, Deactivate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_15, Deactivate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_16, FRotator CallFunc_K2_GetActorRotation_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue, UWave_Fire_C* CallFunc_FinishSpawningActor_ReturnValue_1, ALineWave_C* K2Node_CustomEvent_SelfRef, int32 CallFunc_Array_Add_ReturnValue_1, FVector CallFunc_GetForwardVector_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_5, int32 CallFunc_PostEventAtLocation_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, bool CallFunc_RecieveHit_Dead, FVector CallFunc_K2_GetActorLocation_ReturnValue_6, int32 CallFunc_PostEventAtLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_3, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_1, APawn* CallFunc_GetPlayerPawn_ReturnValue_2, AActor* CallFunc_Array_Get_Item_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_7, AActor* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_8, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float K2Node_Select_Default_1, bool Temp_bool_IsClosed_Variable, float K2Node_Select_Default_2, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, TArray<FName>& K2Node_MakeArray_Array, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_6, FVector CallFunc_K2_GetActorLocation_ReturnValue_9, FVector CallFunc_K2_GetActorLocation_ReturnValue_10, int32 CallFunc_PostEventAtLocation_ReturnValue_4, int32 CallFunc_PostEventAtLocation_ReturnValue_5, UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue_1);
}

#endif
