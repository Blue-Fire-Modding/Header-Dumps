#ifndef UE4SS_SDK_BP_BossRoom_DarkVon_HPP
#define UE4SS_SDK_BP_BossRoom_DarkVon_HPP

class ABP_BossRoom_DarkVon_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* Cube3;
    UStaticMeshComponent* Cube2;
    UStaticMeshComponent* Cube1;
    UStaticMeshComponent* Cube0;
    UBillboardComponent* PillarLocation3;
    UCapsuleComponent* Capsule3;
    UDecalComponent* RedZone3;
    UBillboardComponent* PillarLocation2;
    UCapsuleComponent* Capsule2;
    UDecalComponent* RedZone2;
    UBillboardComponent* PillarLocation1;
    UCapsuleComponent* Capsule1;
    UDecalComponent* RedZone1;
    UBillboardComponent* PillarLocation0;
    UCapsuleComponent* Capsule0;
    UDecalComponent* RedZone0;
    UStaticMeshComponent* Plataforma3;
    UStaticMeshComponent* Plataforma2;
    UStaticMeshComponent* Plataforma1;
    UStaticMeshComponent* Plataforma0;
    UParticleSystemComponent* P_DarkVon_Lava;
    UAkComponent* Ak;
    UStaticMeshComponent* LavaMesh;
    UParticleSystemComponent* P_HealConnection;
    USceneComponent* SceneRoot;
    float Timeline_0_Lerp_48D644D241B4EE337C4CE0A17F70171E;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_48D644D241B4EE337C4CE0A17F70171E;
    UTimelineComponent* Timeline_0;
    float Turn_On_Decal_Lerp_D0CE595E4298979013DB758A62B6FE49;
    TEnumAsByte<ETimelineDirection::Type> Turn_On_Decal__Direction_D0CE595E4298979013DB758A62B6FE49;
    UTimelineComponent* Turn On Decal;
    float Pillar_descending_Lerp_D22DAD39445FFA1298FC498DFC920970;
    TEnumAsByte<ETimelineDirection::Type> Pillar_descending__Direction_D22DAD39445FFA1298FC498DFC920970;
    UTimelineComponent* Pillar descending;
    float Elevate_lava_level_Lerp_C90FD61440DE7AD094CA6797C336D80A;
    TEnumAsByte<ETimelineDirection::Type> Elevate_lava_level__Direction_C90FD61440DE7AD094CA6797C336D80A;
    UTimelineComponent* Elevate lava level;
    float Elevate_platforms_Lerp_E9454AA347786496701D0E827FEC9497;
    TEnumAsByte<ETimelineDirection::Type> Elevate_platforms__Direction_E9454AA347786496701D0E827FEC9497;
    UTimelineComponent* Elevate platforms;
    TArray<ABP_HealthPillar_C*> ArrayHealthPillar;
    AStaticMeshActor* Lava;
    float PlatformChangeHeight;
    float LavaOriginZ;
    UMaterialInstanceDynamic* LavaMat;
    float PlatformB location Z;
    TArray<UStaticMeshComponent*> ArrayPillar;
    int32 IndexPillar;
    float PillarLocation;
    ABP_Boss_DarkVon_C* Boss;
    float HealerLocation;
    TArray<int32> ArrayIndex;
    int32 Random Index;
    float Lava Final Z;
    TArray<FVector> ArrayPlatformLocation;
    TArray<ASafe_Point_C*> Safe Point(BP);
    float SafePoint Height;
    float SafePoint New Height;
    float PillarChangeHeight;
    int32 PillarQuantity;
    TArray<AFade_Platform_C*> Fade Platforms;
    UMaterialInstanceDynamic* Mat RedZone A;
    UMaterialInstanceDynamic* Mat RedZone B;
    ABP_Von_Sword_C* Temp Sword;
    float Danger Platform Timer;
    UMaterialInstanceDynamic* Mat RedZone D;
    UMaterialInstanceDynamic* Mat RedZone C;
    int32 Random Sword;
    TArray<UCapsuleComponent*> Danger Capsule Array;
    FTimerHandle TimerZoneDamage;

    void GetRandomPlatformLocation(FVector& Platform Location, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue);
    void Elevate platforms__FinishedFunc();
    void Elevate platforms__UpdateFunc();
    void Elevate lava level__FinishedFunc();
    void Elevate lava level__UpdateFunc();
    void Pillar descending__FinishedFunc();
    void Pillar descending__UpdateFunc();
    void Turn On Decal__FinishedFunc();
    void Turn On Decal__UpdateFunc();
    void Turn On Decal__Activate Platforms__EventFunc();
    void Turn On Decal__Spawn Swords__EventFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void VFX Heal(bool Activate);
    void VFXHealConnection();
    void ReceiveBeginPlay();
    void WriteID(FString ID);
    void Elevate Room(bool Instant);
    void Start Healing();
    void Elevate Lava(bool Instant);
    void Change Health Pillar State(bool Move Up, int32 IndexPillar);
    void Pillar Stop Healing(bool Pillar Destroyed, int32 Index Pillar);
    void Debug Room(int32 Battle Fase);
    void Force Start Healing();
    void Spawn Swords();
    void Clean Swords();
    void Activate Platforms(bool Enabled, UCapsuleComponent* Component);
    void Danger Platforms(bool Activate);
    void Hide Lava(bool Instant);
    void ResetSoundDecal();
    void BndEvt__Capsule0_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Capsule1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Capsule2_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Capsule3_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void VFX Lava();
    void Damage Player(AActor* Player, USceneComponent* Component);
    void CheckPlayerInside();
    void OnTouchGround();
    void ExecuteUbergraph_BP_BossRoom_DarkVon(int32 EntryPoint, float CallFunc_Lerp_ReturnValue, bool Temp_bool_Variable, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, OnTouchGround__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_4, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, APawn* CallFunc_GetPlayerPawn_ReturnValue, int32 Temp_int_Array_Index_Variable_5, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable_6, bool K2Node_CustomEvent_Activate_1, FString CallFunc_MakeLiteralString_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, FString K2Node_CustomEvent_Id, FVector CallFunc_K2_GetComponentLocation_ReturnValue, bool K2Node_CustomEvent_Instant_2, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool K2Node_CustomEvent_Instant_1, float CallFunc_Add_FloatFloat_ReturnValue, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool K2Node_CustomEvent_Move_Up, int32 K2Node_CustomEvent_IndexPillar, int32 Temp_int_Loop_Counter_Variable_5, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 Temp_int_Loop_Counter_Variable_6, int32 CallFunc_Add_IntInt_ReturnValue_6, bool Temp_bool_Has_Been_Initd_Variable, ABP_HealthPillar_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_CustomEvent_Pillar_Destroyed, int32 K2Node_CustomEvent_Index_Pillar, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 K2Node_CustomEvent_Battle_Fase, float CallFunc_Add_FloatFloat_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_4, ASafe_Point_C* CallFunc_Array_Get_Item_1, ASafe_Point_C* CallFunc_Array_Get_Item_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, ASafe_Point_C* CallFunc_Array_Get_Item_3, ASafe_Point_C* CallFunc_Array_Get_Item_4, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, ASafe_Point_C* CallFunc_Array_Get_Item_5, FVector CallFunc_K2_GetActorLocation_ReturnValue_5, float CallFunc_Add_FloatFloat_ReturnValue_5, float CallFunc_BreakVector_X_4, float CallFunc_BreakVector_Y_4, float CallFunc_BreakVector_Z_4, float CallFunc_Add_FloatFloat_ReturnValue_6, StopHealing__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue_2, FVector CallFunc_K2_GetComponentLocation_ReturnValue_3, FVector CallFunc_K2_GetComponentLocation_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_1, TArray<FVector>& K2Node_MakeArray_Array, FVector CallFunc_K2_GetComponentLocation_ReturnValue_5, FVector CallFunc_K2_GetComponentLocation_ReturnValue_6, float CallFunc_BreakVector_X_5, float CallFunc_BreakVector_Y_5, float CallFunc_BreakVector_Z_5, float CallFunc_BreakVector_X_6, float CallFunc_BreakVector_Y_6, float CallFunc_BreakVector_Z_6, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_7, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, float CallFunc_BreakVector_X_7, float CallFunc_BreakVector_Y_7, float CallFunc_BreakVector_Z_7, ABP_HealthPillar_C* CallFunc_Array_Get_Item_6, FVector CallFunc_K2_GetActorLocation_ReturnValue_6, float CallFunc_BreakVector_X_8, float CallFunc_BreakVector_Y_8, float CallFunc_BreakVector_Z_8, ABP_HealthPillar_C* CallFunc_Array_Get_Item_7, int32 CallFunc_Subtract_IntInt_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_8, int32 Temp_int_Array_Index_Variable_7, AActor* CallFunc_Array_Get_Item_8, ASafe_Point_C* CallFunc_Array_Get_Item_9, FVector CallFunc_K2_GetActorLocation_ReturnValue_7, float CallFunc_BreakVector_X_9, float CallFunc_BreakVector_Y_9, float CallFunc_BreakVector_Z_9, FVector CallFunc_MakeVector_ReturnValue_1, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_2, FVector CallFunc_MakeVector_ReturnValue_2, FVector CallFunc_MakeVector_ReturnValue_3, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_1, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult_1, bool CallFunc_K2_SetActorLocation_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue_4, FVector CallFunc_MakeVector_ReturnValue_5, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult_2, bool CallFunc_K2_SetActorLocation_ReturnValue_2, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult_3, bool CallFunc_K2_SetActorLocation_ReturnValue_3, FVector CallFunc_MakeVector_ReturnValue_6, float CallFunc_Lerp_ReturnValue_3, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult_4, bool CallFunc_K2_SetActorLocation_ReturnValue_4, AFade_Platform_C* CallFunc_Array_Get_Item_10, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue, bool Temp_bool_IsClosed_Variable, bool K2Node_CustomEvent_Enabled, UCapsuleComponent* K2Node_CustomEvent_Component_1, TArray<AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, AActor* CallFunc_Array_Get_Item_11, uint8 K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, bool K2Node_CustomEvent_Activate, FString CallFunc_MakeLiteralString_ReturnValue_1, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_1, ABP_HealthPillar_C* CallFunc_Array_Get_Item_12, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_3, TArray<UBillboardComponent*>& K2Node_MakeArray_Array_1, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_4, TArray<UMaterialInstanceDynamic*>& K2Node_MakeArray_Array_2, UBillboardComponent* CallFunc_Array_Get_Item_13, TArray<ABP_Von_Sword_C*>& K2Node_MakeArray_Array_3, FVector CallFunc_K2_GetComponentLocation_ReturnValue_9, ABP_Von_Sword_C* CallFunc_Array_Get_Item_14, FTransform CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, ABP_Von_Sword_C* CallFunc_FinishSpawningActor_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_5, UMaterialInstanceDynamic* CallFunc_Array_Get_Item_15, bool CallFunc_Less_IntInt_ReturnValue_4, FVector CallFunc_Array_Get_Item_16, bool K2Node_CustomEvent_Instant, float CallFunc_BreakVector_X_10, float CallFunc_BreakVector_Y_10, float CallFunc_BreakVector_Z_10, float CallFunc_Add_FloatFloat_ReturnValue_7, FVector CallFunc_MakeVector_ReturnValue_7, int32 CallFunc_PostEventAtLocation_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue_4, float CallFunc_Subtract_FloatFloat_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue_10, FVector CallFunc_K2_GetComponentLocation_ReturnValue_11, float CallFunc_BreakVector_X_11, float CallFunc_BreakVector_Y_11, float CallFunc_BreakVector_Z_11, float CallFunc_BreakVector_X_12, float CallFunc_BreakVector_Y_12, float CallFunc_BreakVector_Z_12, FVector CallFunc_MakeVector_ReturnValue_8, FVector CallFunc_MakeVector_ReturnValue_9, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_2, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_3, FVector CallFunc_K2_GetComponentLocation_ReturnValue_12, float CallFunc_BreakVector_X_13, float CallFunc_BreakVector_Y_13, float CallFunc_BreakVector_Z_13, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_3, AActor* K2Node_ComponentBoundEvent_OtherActor_3, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_3, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_3, bool K2Node_ComponentBoundEvent_bFromSweep_3, const FHitResult K2Node_ComponentBoundEvent_SweepResult_3, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_2, AActor* K2Node_ComponentBoundEvent_OtherActor_2, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_2, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_2, bool K2Node_ComponentBoundEvent_bFromSweep_2, const FHitResult K2Node_ComponentBoundEvent_SweepResult_2, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep_1, const FHitResult K2Node_ComponentBoundEvent_SweepResult_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, TArray<UCapsuleComponent*>& K2Node_MakeArray_Array_4, UCapsuleComponent* CallFunc_Array_Get_Item_17, int32 CallFunc_Array_Length_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_5, UCapsuleComponent* CallFunc_Array_Get_Item_18, int32 Temp_int_Variable, UCapsuleComponent* CallFunc_Array_Get_Item_19, int32 CallFunc_Array_Length_ReturnValue_7, bool CallFunc_Less_IntInt_ReturnValue_6, bool CallFunc_NotEqual_IntInt_ReturnValue_1, float CallFunc_BreakVector_X_14, float CallFunc_BreakVector_Y_14, float CallFunc_BreakVector_Z_14, float CallFunc_BreakVector_X_15, float CallFunc_BreakVector_Y_15, float CallFunc_BreakVector_Z_15, FVector CallFunc_MakeVector_ReturnValue_10, FVector CallFunc_MakeVector_ReturnValue_11, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_4, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_5, float CallFunc_BreakVector_X_16, float CallFunc_BreakVector_Y_16, float CallFunc_BreakVector_Z_16, float CallFunc_BreakVector_X_17, float CallFunc_BreakVector_Y_17, float CallFunc_BreakVector_Z_17, FVector CallFunc_MakeVector_ReturnValue_12, FVector CallFunc_MakeVector_ReturnValue_13, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_6, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_7, float CallFunc_Add_FloatFloat_ReturnValue_8, float CallFunc_Add_FloatFloat_ReturnValue_9, float CallFunc_BreakVector_X_18, float CallFunc_BreakVector_Y_18, float CallFunc_BreakVector_Z_18, FVector CallFunc_MakeVector_ReturnValue_14, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_8, float CallFunc_BreakVector_X_19, float CallFunc_BreakVector_Y_19, float CallFunc_BreakVector_Z_19, FVector CallFunc_MakeVector_ReturnValue_15, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_9, float CallFunc_BreakVector_X_20, float CallFunc_BreakVector_Y_20, float CallFunc_BreakVector_Z_20, FVector CallFunc_MakeVector_ReturnValue_16, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_10, float CallFunc_BreakVector_X_21, float CallFunc_BreakVector_Y_21, float CallFunc_BreakVector_Z_21, FVector CallFunc_MakeVector_ReturnValue_17, FVector CallFunc_K2_GetComponentLocation_ReturnValue_13, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_11, float CallFunc_BreakVector_X_22, float CallFunc_BreakVector_Y_22, float CallFunc_BreakVector_Z_22, int32 Temp_int_Loop_Counter_Variable_7, bool CallFunc_Less_IntInt_ReturnValue_7, int32 CallFunc_Add_IntInt_ReturnValue_7, AActor* K2Node_CustomEvent_Player, USceneComponent* K2Node_CustomEvent_Component, FVector CallFunc_K2_GetComponentLocation_ReturnValue_14, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, float CallFunc_ApplyDamage_ReturnValue);
}

#endif
