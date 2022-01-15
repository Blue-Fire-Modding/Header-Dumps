#ifndef UE4SS_SDK_BP_Von_Sword_HPP
#define UE4SS_SDK_BP_Von_Sword_HPP

class ABP_Von_Sword_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAkComponent* AkFinalHit;
    UAkComponent* Ak;
    USceneComponent* ScenePOI;
    UStaticMeshComponent* Debris_Sword;
    UArrowComponent* Arrow_VFX;
    UStaticMeshComponent* SM_Sword;
    USceneComponent* SceneRoot;
    float Spawn_Sword_Lerp_Movement_447C23D7468AC663F619C0A7C8BB1894;
    float Spawn_Sword_Scale_447C23D7468AC663F619C0A7C8BB1894;
    TEnumAsByte<ETimelineDirection::Type> Spawn_Sword__Direction_447C23D7468AC663F619C0A7C8BB1894;
    UTimelineComponent* Spawn Sword;
    float Shader_Countdown_Lerp_C0B4AB034CE15920D24761B89D74A2B5;
    TEnumAsByte<ETimelineDirection::Type> Shader_Countdown__Direction_C0B4AB034CE15920D24761B89D74A2B5;
    UTimelineComponent* Shader Countdown;
    bool Show Trace;
    float Damage;
    FVector Start Location;
    float Offset;
    float EndScale;
    int32 Countdown Current Count;
    float Delay Before Counter;
    int32 Countdown Amount To Explode;
    UMaterialInstanceDynamic* MatSword;
    float Counter Lapse;
    FVector VFX Location;
    float Speed Tick;
    float Ground Offset;
    int32 CounterDamage;
    FBP_Von_Sword_COnDestroy OnDestroy;
    void OnDestroy();
    FRotator Original Rotation;
    bool Aggresive;
    FBP_Von_Sword_CDangerPlatform DangerPlatform;
    void DangerPlatform();
    bool IsPlatformDamage;
    UMaterialInstanceDynamic* Mat Red Zone;
    int32 FireTrapLoopSFX;
    bool CanBeDamaged;
    FBP_Von_Sword_COnTouchGround OnTouchGround;
    void OnTouchGround();

    void Spawn Sword__FinishedFunc();
    void Spawn Sword__UpdateFunc();
    void Shader Countdown__FinishedFunc();
    void Shader Countdown__UpdateFunc();
    void ReceiveBeginPlay();
    void Touch Ground();
    void Play Spawn Sword();
    void Wave Spawner();
    void Countdown Tick();
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void Force Destroy();
    void Set Random Rotation();
    void Play Wave();
    void ExecuteUbergraph_BP_Von_Sword(int32 EntryPoint, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, float CallFunc_Lerp_ReturnValue, int32 Temp_int_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, int32 Temp_int_Variable_1, float Temp_float_Variable_3, float Temp_float_Variable_4, float Temp_float_Variable_5, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_1, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_1, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_2, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_2, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_3, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_3, bool Temp_bool_Variable, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_4, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_4, bool Temp_bool_Variable_1, float Temp_float_Variable_6, float Temp_float_Variable_7, APawn* CallFunc_GetPlayerPawn_ReturnValue, bool Temp_bool_Variable_2, bool CallFunc_Not_PreBool_ReturnValue, const TArray<uint8>& K2Node_MakeArray_Array, FVector CallFunc_K2_GetActorLocation_ReturnValue, const TArray<AActor*>& Temp_object_Variable, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, AWave_C* CallFunc_FinishSpawningActor_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_1, AWave_C* CallFunc_FinishSpawningActor_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_1, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, FVector CallFunc_MakeVector_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, TSubclassOf<UDamageType> CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_2, FVector CallFunc_MakeVector_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue_2, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, TArray<FName>& K2Node_MakeArray_Array_1, float CallFunc_RandomFloatInRange_ReturnValue_1, FRotator CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, int32 Temp_int_Variable_2, FRotator CallFunc_MakeRotator_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, uint8 Temp_byte_Variable, FRotator CallFunc_K2_GetActorRotation_ReturnValue_1, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, float CallFunc_MakeLiteralFloat_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, float CallFunc_RandomFloatInRange_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_2, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_3, FRotator CallFunc_MakeRotator_ReturnValue_2, bool CallFunc_K2_SetActorRotation_ReturnValue_2, int32 CallFunc_PostEvent_ReturnValue, float K2Node_Select_Default, int32 CallFunc_PostEvent_ReturnValue_1, float K2Node_Select_Default_1, int32 CallFunc_PostEvent_ReturnValue_2, uint8 Temp_byte_Variable_1, float CallFunc_MakeLiteralFloat_ReturnValue_1, float CallFunc_MakeLiteralFloat_ReturnValue_2, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, int32 CallFunc_PostAkEvent_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult, TArray<FName>& K2Node_MakeArray_Array_2, TArray<FName>& K2Node_Select_Default_2, int32 CallFunc_PostAkEvent_ReturnValue_1, bool Temp_bool_Variable_3, uint8 K2Node_Select_Default_3, float K2Node_Select_Default_4, FHitResult CallFunc_SphereTraceSingleForObjects_OutHit, bool CallFunc_SphereTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsRobiValid_ReturnValue, float CallFunc_ApplyDamage_ReturnValue);
    void OnTouchGround__DelegateSignature();
    void DangerPlatform__DelegateSignature();
    void OnDestroy__DelegateSignature();
}

#endif
