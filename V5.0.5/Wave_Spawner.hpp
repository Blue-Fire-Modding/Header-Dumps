#ifndef UE4SS_SDK_Wave_Spawner_HPP
#define UE4SS_SDK_Wave_Spawner_HPP

class AWave_Spawner_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UArrowComponent* Arrow1;
    USkeletalMeshComponent* Booster_Rig;
    UStaticMeshComponent* SM_WaveSpawner;
    UArrowComponent* Arrow;
    USceneComponent* DefaultSceneRoot;
    bool AutoActivate;
    TArray<ALineWave_C*> DeactivatedWaves;
    float Interval;
    float Speed;
    float Timeout;
    float WideSize;
    bool Circular;
    bool ShowHelp;
    UStaticMeshComponent* DebugComp;
    float CircularDuration;
    float TimeOffset;
    TArray<AWave_C*> DeactivatedWavesCircular;
    APlayer_Character_BP_C* Player ;
    bool UseTick;
    TArray<AActor*> Waves;
    UBlueFire_Game_Instance_C* GameInstance;

    void UserConstructionScript(FTransform CallFunc_MakeTransform_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue_1, UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1);
    void Activate();
    void Wave();
    void ReceiveBeginPlay();
    void AddWave(AWave_C* SelfRef);
    void Lock to Player();
    void AddLineWave(ALineWave_C* SelfRef);
    void CheckPlayerDistance();
    void MakerWaveReset();
    void ReceiveDestroyed();
    void DestroyWaves();
    void ExecuteUbergraph_Wave_Spawner(int32 EntryPoint, int32 Temp_int_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, bool Temp_bool_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, bool Temp_bool_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, bool Temp_bool_Variable_3, float Temp_float_Variable_5, float Temp_float_Variable_6, bool Temp_bool_Variable_4, float Temp_float_Variable_7, float Temp_float_Variable_8, int32 Temp_int_Variable_4, float Temp_float_Variable_9, float Temp_float_Variable_10, float Temp_float_Variable_11, bool Temp_bool_Variable_5, int32 Temp_int_Array_Index_Variable, Deactivate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool Temp_bool_IsClosed_Variable, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_3, const FTransform CallFunc_GetTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, ALineWave_C* CallFunc_FinishSpawningActor_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, ALineWave_C* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_IsRobiValid_ReturnValue_1, AWave_C* CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue_2, Deactivate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, AWave_C* K2Node_CustomEvent_SelfRef_1, FRotator CallFunc_K2_GetActorRotation_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult, UWave_Fire_C* CallFunc_FinishSpawningActor_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_2, FRotator CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FRotator CallFunc_MakeRotator_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_5, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult_1, int32 CallFunc_PostEventAtLocation_ReturnValue, ALineWave_C* K2Node_CustomEvent_SelfRef, int32 CallFunc_Array_Add_ReturnValue_1, FVector CallFunc_GetForwardVector_ReturnValue, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, APawn* CallFunc_GetPlayerPawn_ReturnValue, AActor* CallFunc_Array_Get_Item_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_6, AActor* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_7, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, UPlayer_Character_BP_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, float K2Node_Select_Default_1, int32 K2Node_Select_Default_2, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_2, float K2Node_Select_Default_3, bool CallFunc_Greater_FloatFloat_ReturnValue_1, int32 K2Node_Select_Default_4, bool CallFunc_IsRobiValid_ReturnValue_4, float K2Node_Select_Default_5, bool CallFunc_EqualEqual_IntInt_ReturnValue, float K2Node_Select_Default_6, float K2Node_Select_Default_7, FRotator CallFunc_K2_GetActorRotation_ReturnValue_1, FRotator CallFunc_K2_GetActorRotation_ReturnValue_2, AWave_C* CallFunc_Array_Get_Item_4, ALineWave_C* CallFunc_Array_Get_Item_5, bool CallFunc_IsRobiValid_ReturnValue_5, bool CallFunc_IsRobiValid_ReturnValue_6, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, AActor* CallFunc_Array_Get_Item_6, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_IsRobiValid_ReturnValue_7, bool CallFunc_Less_IntInt_ReturnValue_3);
}

#endif
