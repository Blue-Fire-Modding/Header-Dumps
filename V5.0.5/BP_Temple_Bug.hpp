#ifndef UE4SS_SDK_BP_Temple_Bug_HPP
#define UE4SS_SDK_BP_Temple_Bug_HPP

class ABP_Temple_Bug_C : UEnemy_Character_Parent_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* ScenePOI;
    UAkComponent* Play_Road_Bug_Movement;
    UAkComponent* Ak Bug Bite;
    UAkComponent* Play_Road_Bug_Squish;
    float Dead_Scale_Z_2BCFC38B43851594C48BB892EC353C17;
    float Dead_Glow_2BCFC38B43851594C48BB892EC353C17;
    float Dead_Dissolve_2BCFC38B43851594C48BB892EC353C17;
    TEnumAsByte<ETimelineDirection::Type> Dead__Direction_2BCFC38B43851594C48BB892EC353C17;
    UTimelineComponent* Dead;
    bool GrabOn;
    UMaterialInstanceDynamic* MatEye;
    float Attached Damage Time;
    bool isHit;
    float RecoveryTime;
    UParticleSystemComponent* VFXEm;

    void Dead__FinishedFunc();
    void Dead__UpdateFunc();
    void ReceiveHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void Block Player Jump(bool bLock);
    void Destroy On Cutscene();
    void TeleportInExtra();
    void TeleportOutExtra();
    void MoveTrail();
    void CustomEvent_2();
    void CustomEvent_3();
    void TeleportOut();
    void TeleportIn();
    void Attack01(int32 Count, int32 Max Count, bool Use Custom Counter);
    void Release();
    void Launch();
    void Attack02(int32 Count, int32 Max Count, bool Use Custom Counter);
    void On Landed Extra();
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void ReceiveBeginPlay();
    void Make Damage();
    void FloorDecal();
    void ReceiveActorBeginOverlap(AActor* OtherActor);
    void Start Movement(int32 N);
    void End Movement(int32 N);
    void Show Minion Extra();
    void ExecuteUbergraph_BP_Temple_Bug(int32 EntryPoint, uint8 Temp_byte_Variable, UBehaviorTree* Temp_object_Variable, UBehaviorTree* Temp_object_Variable_1, UBehaviorTree* Temp_object_Variable_2, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_1, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_1, UPrimitiveComponent* K2Node_Event_MyComp, AActor* K2Node_Event_Other, UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, FVector K2Node_Event_HitLocation, FVector K2Node_Event_HitNormal, FVector K2Node_Event_NormalImpulse, const FHitResult K2Node_Event_Hit, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, FHitResult CallFunc_K2_SetActorRelativeTransform_SweepHitResult, bool CallFunc_IsRobiValid_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_1, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, APawn* CallFunc_GetPlayerPawn_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FVector CallFunc_GetDirectionUnitVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_MakeVector_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, uint8 Temp_byte_Variable_1, bool K2Node_CustomEvent_Block, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, FVector CallFunc_GetActorForwardVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, FVector CallFunc_MakeVector_ReturnValue_1, float CallFunc_ApplyDamage_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, float CallFunc_ApplyDamage_ReturnValue_1, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_2, TArray<FName>& K2Node_MakeArray_Array, AttackDispatcher__DelegateSignature K2Node_CreateDelegate_OutputDelegate, TArray<FName>& K2Node_MakeArray_Array_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, int32 K2Node_Event_Count_1, int32 K2Node_Event_Max_Count_1, bool K2Node_Event_Use_Custom_Counter_1, APawn* CallFunc_GetPlayerPawn_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_5, FVector CallFunc_K2_GetActorLocation_ReturnValue_6, float CallFunc_PlayAnimMontage_ReturnValue, FRotator CallFunc_FindLookAtRotation_ReturnValue, FVector CallFunc_GetDirectionUnitVector_ReturnValue_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FRotator CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_7, FVector CallFunc_K2_GetActorLocation_ReturnValue_8, int32 CallFunc_PostEventAtLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_3, int32 K2Node_Event_Count, int32 K2Node_Event_Max_Count, bool K2Node_Event_Use_Custom_Counter, float K2Node_Select_Default, FVector CallFunc_Multiply_VectorFloat_ReturnValue_2, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, FVector CallFunc_MakeVector_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_9, int32 CallFunc_PostEventAtLocation_ReturnValue_4, bool CallFunc_NotEqual_ByteByte_ReturnValue, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, float CallFunc_ApplyDamage_ReturnValue_2, bool CallFunc_RecieveHit_Dead, APawn* CallFunc_GetPlayerPawn_ReturnValue_3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_10, FTransform CallFunc_MakeTransform_ReturnValue_1, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, ADecal_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, AActor* K2Node_Event_OtherActor, bool CallFunc_BooleanAND_ReturnValue_1, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, int32 K2Node_Event_N_1, TriggerCutscene__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, int32 K2Node_Event_N, UBehaviorTree* K2Node_Select_Default_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_2, int32 CallFunc_PostAssociatedAkEvent_ReturnValue, TArray<FName>& K2Node_MakeArray_Array_2, int32 CallFunc_PostEventAtLocation_ReturnValue_5, bool CallFunc_IsRobiValid_ReturnValue_3, bool CallFunc_IsRobiValid_ReturnValue_4, int32 CallFunc_PostAkEvent_ReturnValue, int32 CallFunc_PostAssociatedAkEvent_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_11, int32 CallFunc_PostEventAtLocation_ReturnValue_6);
}

#endif
