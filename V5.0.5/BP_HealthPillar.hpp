#ifndef UE4SS_SDK_BP_HealthPillar_HPP
#define UE4SS_SDK_BP_HealthPillar_HPP

class ABP_HealthPillar_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAkComponent* Ak;
    UStaticMeshComponent* SM_Glass;
    UParticleSystemComponent* P_Von_HealSparks;
    UBillboardComponent* VFX Location;
    UCapsuleComponent* Collision;
    USceneComponent* ScenePOI;
    USceneComponent* DefaultSceneRoot;
    float Timeline_0_Lerp_7805BC6741C3F3C9F4F3D8A778BBD978;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_7805BC6741C3F3C9F4F3D8A778BBD978;
    UTimelineComponent* Timeline_0;
    float LevitateAnimation_Z_FC37EFA64DFCB463CBFA85AC92947036;
    TEnumAsByte<ETimelineDirection::Type> LevitateAnimation__Direction_FC37EFA64DFCB463CBFA85AC92947036;
    UTimelineComponent* LevitateAnimation;
    float Healing_Time_Lerp_F18521BC4CBE3A531650B1B6E4CC1BB4;
    TEnumAsByte<ETimelineDirection::Type> Healing_Time__Direction_F18521BC4CBE3A531650B1B6E4CC1BB4;
    UTimelineComponent* Healing Time;
    AEnemy_Character_Parent_C* Boss;
    float Healing;
    int32 PillarHits;
    float CurrentBossHealth;
    float TempHealth;
    FBP_HealthPillar_CStopHealing StopHealing;
    void StopHealing(bool Pillar Destroyed, int32 Index Pillar);
    bool Pillar Destroyed;
    int32 Index;
    TArray<FName> Custom Tags;
    UMaterialInstanceDynamic* MatGlow;
    int32 MaxHits;
    UMaterialInstanceDynamic* MatGlass;
    float ZOrigin;

    void Healing Time__FinishedFunc();
    void Healing Time__UpdateFunc();
    void LevitateAnimation__FinishedFunc();
    void LevitateAnimation__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Action Heal();
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void ReceiveBeginPlay();
    void Change State(bool Can be Damaged);
    void VFX Heal(bool Show);
    void Levitate(bool Play);
    void ExecuteUbergraph_BP_HealthPillar(int32 EntryPoint, bool Temp_bool_Variable, float CallFunc_Lerp_ReturnValue, bool Temp_bool_Variable_1, UMaterialInterface* Temp_object_Variable, UMaterialInterface* Temp_object_Variable_1, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, float CallFunc_Lerp_ReturnValue_1, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, TSubclassOf<UDamageType> CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue_2, float CallFunc_FClamp_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_CustomEvent_Can_be_Damaged, bool CallFunc_Not_PreBool_ReturnValue, TArray<FName>& K2Node_MakeArray_Array, TArray<FName>& K2Node_Select_Default, FVector CallFunc_K2_GetComponentLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, float CallFunc_FClamp_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, bool K2Node_CustomEvent_Show, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, UMaterialInterface* K2Node_Select_Default_1, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_3, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, bool K2Node_CustomEvent_Play, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FVector CallFunc_MakeVector_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, FVector CallFunc_MakeVector_ReturnValue_1, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult_1, bool CallFunc_K2_SetActorLocation_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_3, float CallFunc_Lerp_ReturnValue_3, float CallFunc_FClamp_ReturnValue_2, int32 Temp_int_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, float CallFunc_FClamp_ReturnValue_3, APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, float CallFunc_FClamp_ReturnValue_4);
    void StopHealing__DelegateSignature(bool Pillar Destroyed, int32 Index Pillar);
}

#endif
