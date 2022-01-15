#ifndef UE4SS_SDK_BP_Von_Bomb_HPP
#define UE4SS_SDK_BP_Von_Bomb_HPP

class ABP_Von_Bomb_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UArrowComponent* Arrow_Wave;
    UStaticMeshComponent* Von_SwordAttack_Ground;
    UAkComponent* Ak;
    UDecalComponent* Decal Block;
    UStaticMeshComponent* SM_Block;
    USceneComponent* SceneRoot;
    float Decal_Scale_Scale_49B5994C44286B16F96D998840023E9E;
    TEnumAsByte<ETimelineDirection::Type> Decal_Scale__Direction_49B5994C44286B16F96D998840023E9E;
    UTimelineComponent* Decal Scale;
    float Shader_Countdown_Lerp_727E9E5A4AD2DDFE1CEB0EAE6C7DD83D;
    TEnumAsByte<ETimelineDirection::Type> Shader_Countdown__Direction_727E9E5A4AD2DDFE1CEB0EAE6C7DD83D;
    UTimelineComponent* Shader Countdown;
    float Custom_Tick_Lerp_Movement_B994224D4E4D23C534B36184821C4B68;
    float Custom_Tick_Scale_B994224D4E4D23C534B36184821C4B68;
    TEnumAsByte<ETimelineDirection::Type> Custom_Tick__Direction_B994224D4E4D23C534B36184821C4B68;
    UTimelineComponent* Custom Tick;
    bool Show Trace;
    float Damage;
    FVector Start Location;
    float Offset;
    float Radius Damage;
    float EndScale;
    int32 Countdown Current Count;
    float Delay Before Countdown;
    int32 Countdown Amount To Explode;
    UMaterialInstanceDynamic* MatBlock;
    float Countdown Beep Time;
    bool Explosion Make Wave;
    float Speed Tick;
    UMaterialInstanceDynamic* Mat Decal Block;
    int32 BombSoundCounter;
    AWave_C* Wave;
    FTimerHandle TimerClosenessWave;

    void Custom Tick__FinishedFunc();
    void Custom Tick__UpdateFunc();
    void Shader Countdown__FinishedFunc();
    void Shader Countdown__UpdateFunc();
    void Decal Scale__FinishedFunc();
    void Decal Scale__UpdateFunc();
    void BndEvt__SM_Ball_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveBeginPlay();
    void Touch Ground();
    void Play Custom Tick();
    void Countdown();
    void Countdown Tick();
    void Make Explosion();
    void Make Wave();
    void VFX Decal Block(bool Show);
    void BomSound(int32 CounterSound);
    void CheckClosenessWave();
    void ExecuteUbergraph_BP_Von_Bomb(int32 EntryPoint, bool Temp_bool_Variable, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, const TArray<AActor*>& Temp_object_Variable, float CallFunc_Lerp_ReturnValue, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_1, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_1, bool Temp_bool_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, FVector K2Node_ComponentBoundEvent_NormalImpulse, const FHitResult K2Node_ComponentBoundEvent_Hit, const TArray<uint8>& K2Node_MakeArray_Array, bool CallFunc_IsRobiValid_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, const TArray<AActor*>& Temp_object_Variable_1, bool CallFunc_K2_SetActorRotation_ReturnValue, float CallFunc_Lerp_ReturnValue_1, bool Temp_bool_IsClosed_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Lerp_ReturnValue_2, FVector CallFunc_MakeVector_ReturnValue, const TArray<uint8>& K2Node_MakeArray_Array_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, float CallFunc_Lerp_ReturnValue_3, FVector CallFunc_MakeVector_ReturnValue_1, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, uint8 K2Node_Select_Default, uint8 Temp_byte_Variable_2, int32 Temp_int_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, FHitResult CallFunc_SphereTraceSingleForObjects_OutHit, bool CallFunc_SphereTraceSingleForObjects_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsRobiValid_ReturnValue_1, float CallFunc_ApplyDamage_ReturnValue, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, bool K2Node_CustomEvent_Show, bool Temp_bool_Has_Been_Initd_Variable_1, int32 K2Node_CustomEvent_CounterSound, bool CallFunc_GreaterEqual_IntInt_ReturnValue, uint8 Temp_byte_Variable_3, int32 CallFunc_PostAkEvent_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, AWave_C* CallFunc_FinishSpawningActor_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_5, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, bool Temp_bool_Variable_2, uint8 K2Node_Select_Default_1, FHitResult CallFunc_SphereTraceSingleForObjects_OutHit_1, bool CallFunc_SphereTraceSingleForObjects_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, FVector CallFunc_BreakHitResult_Location_1, FVector CallFunc_BreakHitResult_ImpactPoint_1, FVector CallFunc_BreakHitResult_Normal_1, FVector CallFunc_BreakHitResult_ImpactNormal_1, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, AActor* CallFunc_BreakHitResult_HitActor_1, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_FaceIndex_1, FVector CallFunc_BreakHitResult_TraceStart_1, FVector CallFunc_BreakHitResult_TraceEnd_1, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_ApplyDamage_ReturnValue_1, FVector CallFunc_GetClosestPointOnCollision_OutPointOnBody, float CallFunc_GetClosestPointOnCollision_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_3, FVector CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_2, float CallFunc_VSize_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue_3);
}

#endif
