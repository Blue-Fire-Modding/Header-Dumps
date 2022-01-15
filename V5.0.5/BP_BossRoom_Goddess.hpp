#ifndef UE4SS_SDK_BP_BossRoom_Goddess_HPP
#define UE4SS_SDK_BP_BossRoom_Goddess_HPP

class ABP_BossRoom_Goddess_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* AreaContrast;
    UArrowComponent* Arrow_D;
    UArrowComponent* Arrow_C;
    UArrowComponent* Arrow_B;
    UArrowComponent* Arrow_A;
    UBillboardComponent* Wave Location;
    UStaticMeshComponent* Penumbra_Fight_Platform_ACenter;
    USceneComponent* DefaultSceneRoot;
    float Wave Size;
    float Wave Damage;
    float Wave Duration;
    FVector Wave Origin;
    TArray<AWave_C*> Waves;
    float LineWave Wide Size;
    TArray<ALineWave_C*> Line Waves;
    TArray<UArrowComponent*> Wave Lines Locations;
    float Line Wave Period;
    ABP_Penumbra_C* Parent;
    float Wave Period;
    bool Is Playing Line Wave;
    float Light Trap Period;
    TArray<ABP_LightTrap_C*> Light Traps;
    TArray<UArrowComponent*> Clon Locations;
    UArrowComponent* Arrow Goddess Location;
    float Goddess Z Location;
    float Scale Particle ;
    TArray<ABP_Invocation_Clon_C*> Goddess Clon;
    bool Show Trace;
    float Clon Platform Distance;
    APlayer_Character_BP_C* Player;
    ALineWave_C* Wave;
    AWave_C* Wave2;

    void ReceiveBeginPlay();
    void Attack Wave();
    void Add Wave(AWave_C* SelfRef);
    void Attack Line Wave();
    void Add Line Wave(ALineWave_C* SelfRef);
    void Attack Wave Loop(int32 Battle Fase, bool Play);
    void Attack Line Wave Loop(int32 Battle Fase, bool Play);
    void Random Teleport();
    void Attack Light Trap();
    void Attack Light Trap Loop(int32 Battle Fase, bool Play);
    void Attack Clon Spawn();
    void Attack Clon Attack(int32 Attack);
    void Attack Clon Destroy(bool IsGoddess);
    void Attack Random Bomb(float Damage);
    void Stop All Waves();
    void ShowAreaContrast(bool bShow);
    void ExecuteUbergraph_BP_BossRoom_Goddess(int32 EntryPoint, bool Temp_bool_Variable, Deactivate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, UArrowComponent* CallFunc_Array_Get_Item, float Temp_float_Variable, bool CallFunc_Array_RemoveItem_ReturnValue, float Temp_float_Variable_1, bool Temp_bool_Variable_3, float Temp_float_Variable_2, float Temp_float_Variable_3, int32 Temp_int_Variable, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, bool Temp_bool_Variable_8, int32 Temp_int_Variable_1, UAkAudioEvent* Temp_object_Variable, UAkAudioEvent* Temp_object_Variable_1, UAkAudioEvent* Temp_object_Variable_2, int32 Temp_int_Variable_2, UAkAudioEvent* Temp_object_Variable_3, UAkAudioEvent* Temp_object_Variable_4, UAkAudioEvent* Temp_object_Variable_5, int32 Temp_int_Variable_3, UAkAudioEvent* Temp_object_Variable_6, UAkAudioEvent* Temp_object_Variable_7, UAkAudioEvent* Temp_object_Variable_8, UAkAudioEvent* Temp_object_Variable_9, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, AWave_C* K2Node_CustomEvent_SelfRef_1, AWave_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, ALineWave_C* CallFunc_Array_Get_Item_2, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_2, ALineWave_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_1, ALineWave_C* K2Node_CustomEvent_SelfRef, int32 CallFunc_Array_Add_ReturnValue_1, TArray<UArrowComponent*>& K2Node_MakeArray_Array, int32 K2Node_CustomEvent_Battle_Fase_2, bool K2Node_CustomEvent_Play_2, int32 K2Node_CustomEvent_Battle_Fase_1, bool K2Node_CustomEvent_Play_1, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Array_Length_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, int32 CallFunc_RandomIntegerInRange_ReturnValue, UArrowComponent* CallFunc_Array_Get_Item_3, FVector CallFunc_GetForwardVector_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue_2, UArrowComponent* CallFunc_Array_Get_Item_4, UArrowComponent* CallFunc_Array_Get_Item_5, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_1, bool CallFunc_RandomBool_ReturnValue, int32 K2Node_CustomEvent_Battle_Fase, bool K2Node_CustomEvent_Play, FVector K2Node_Select_Default, FTransform CallFunc_MakeTransform_ReturnValue_1, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, AWave_C* CallFunc_FinishSpawningActor_ReturnValue_1, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue_3, ABP_LightTrap_C* CallFunc_Array_Get_Item_6, FVector CallFunc_GetForwardVector_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue_2, FVector CallFunc_Conv_FloatToVector_ReturnValue, int32 K2Node_CustomEvent_Attack, bool K2Node_SwitchInteger_CmpSuccess, UBP_Invocation_Clon_C* CallFunc_Array_Get_Item_7, int32 CallFunc_Array_Length_ReturnValue_3, bool K2Node_CustomEvent_IsGoddess, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, FVector CallFunc_RandomUnitVector_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_3, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, int32 Temp_int_Array_Index_Variable_2, FVector CallFunc_MakeVector_ReturnValue, UBP_Invocation_Clon_C* CallFunc_Array_Get_Item_8, FVector CallFunc_Add_VectorVector_ReturnValue_1, FTransform CallFunc_MakeTransform_ReturnValue_2, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2, UAkAudioEvent* K2Node_Select_Default_1, UInvocation_Bomb_C* CallFunc_FinishSpawningActor_ReturnValue_2, float K2Node_CustomEvent_Damage, bool K2Node_Select_Default_2, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue_2, float K2Node_Select_Default_3, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, FVector CallFunc_MakeVector_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue, float K2Node_Select_Default_4, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_2, Deactivate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FVector CallFunc_Add_VectorVector_ReturnValue_3, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, int32 Temp_int_Array_Index_Variable_3, FVector CallFunc_MakeVector_ReturnValue_2, UArrowComponent* CallFunc_Array_Get_Item_9, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult_1, bool CallFunc_K2_SetActorLocation_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue_4, FVector CallFunc_GetForwardVector_ReturnValue_2, FVector CallFunc_Multiply_VectorFloat_ReturnValue_3, UAkAudioEvent* K2Node_Select_Default_5, FVector CallFunc_Add_VectorVector_ReturnValue_4, float CallFunc_BreakVector_X_4, float CallFunc_BreakVector_Y_4, float CallFunc_BreakVector_Z_4, UAkAudioEvent* K2Node_Select_Default_6, FVector CallFunc_MakeVector_ReturnValue_3, FTransform CallFunc_MakeTransform_ReturnValue_3, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3, UBP_Invocation_Clon_C* CallFunc_FinishSpawningActor_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_3, bool Temp_bool_Variable_9, TArray<ALineWave_C*>& CallFunc_GetAllActorsOfClass_OutActors, ALineWave_C* CallFunc_Array_Get_Item_10, UArrowComponent* K2Node_Select_Default_7, FVector CallFunc_GetForwardVector_ReturnValue_3, FVector CallFunc_K2_GetComponentLocation_ReturnValue_5, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_CustomEvent_bShow);
}

#endif
