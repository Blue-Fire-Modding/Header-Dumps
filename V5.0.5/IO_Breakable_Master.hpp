#ifndef UE4SS_SDK_IO_Breakable_Master_HPP
#define UE4SS_SDK_IO_Breakable_Master_HPP

class AIO_Breakable_Master_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* ScenePOI;
    UBillboardComponent* VFX_Spawn;
    UStaticMeshComponent* StaticMesh;
    float SoundSize;
    int32 Hits;
    UStaticMesh* Mesh_00;
    UStaticMesh* Mesh_01;
    UStaticMesh* Mesh_02;
    UStaticMesh* Mesh_03;
    UParticleSystem* VFX;
    UAkAudioEvent* Sound;
    bool Persistent;
    FString ID;
    int32 Mesh;
    float DropChance;
    bool ResetOnHit;
    int32 MaxCurrencyDrops;
    int32 MinCurrencyDrops;
    UAkAudioEvent* Sound2;
    float DropHeightOffset;
    FVector VFX Scale;
    UAkAudioEvent* Sound0;
    float Item Chance;
    int32 BreakableId;
    int32 OriginalAmountOfHits;
    bool DontDestroyPOI;
    APlayer_Character_BP_C* PlayerCharacter;

    void UserConstructionScript();
    void DropLoot();
    void ReceiveBeginPlay();
    void Reset();
    void ResetExecute();
    void Damage();
    void SetMesh();
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void Custom Construction();
    void ExecuteUbergraph_IO_Breakable_Master(int32 EntryPoint, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 Temp_int_Variable, Fall__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, int32 Temp_int_Variable_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, uint8 CallFunc_MakeLiteralByte_ReturnValue_3, uint8 CallFunc_MakeLiteralByte_ReturnValue_4, bool Temp_bool_IsClosed_Variable_1, int32 Temp_int_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_5, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, UStaticMesh* K2Node_Select_Default, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, UStaticMesh* K2Node_Select_Default_1, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, TArray<FName>& K2Node_MakeArray_Array, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, UStaticMesh* K2Node_Select_Default_2, bool CallFunc_SetStaticMesh_ReturnValue_1, bool CallFunc_RandomBoolWithWeight_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_SetStaticMesh_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_6, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue_1, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, FVector CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_1, float CallFunc_GetRTPCValue_Value, ERTPCValueType CallFunc_GetRTPCValue_OutputValueType, FVector CallFunc_MakeVector_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_2, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, UPickUpSpawn_C* CallFunc_FinishSpawningActor_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_2, FColor CallFunc_Conv_LinearColorToColor_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue_1, FParticleSysParam K2Node_MakeStruct_ParticleSysParam, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, TArray<FParticleSysParam>& K2Node_MakeArray_Array_1, UPickUpSpawn_C* CallFunc_FinishSpawningActor_ReturnValue_1, FTransform CallFunc_MakeTransform_ReturnValue_2, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2, FColor CallFunc_Conv_LinearColorToColor_ReturnValue_1, FParticleSysParam K2Node_MakeStruct_ParticleSysParam_1, TArray<FParticleSysParam>& K2Node_MakeArray_Array_2, UPickUpSpawn_C* CallFunc_FinishSpawningActor_ReturnValue_2, FColor CallFunc_Conv_LinearColorToColor_ReturnValue_2, FParticleSysParam K2Node_MakeStruct_ParticleSysParam_2, FTransform CallFunc_MakeTransform_ReturnValue_3, TArray<FParticleSysParam>& K2Node_MakeArray_Array_3, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3, FTransform CallFunc_MakeTransform_ReturnValue_4, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4, UPickUpSpawn_C* CallFunc_FinishSpawningActor_ReturnValue_3, FColor CallFunc_Conv_LinearColorToColor_ReturnValue_3, FParticleSysParam K2Node_MakeStruct_ParticleSysParam_3, UPickUpSpawn_C* CallFunc_FinishSpawningActor_ReturnValue_4, TArray<FParticleSysParam>& K2Node_MakeArray_Array_4, FTransform CallFunc_MakeTransform_ReturnValue_5, FTransform CallFunc_MakeTransform_ReturnValue_6, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_5, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_6, UPickUpSpawn_C* CallFunc_FinishSpawningActor_ReturnValue_5, FColor CallFunc_Conv_LinearColorToColor_ReturnValue_4, FParticleSysParam K2Node_MakeStruct_ParticleSysParam_4, UPickUpSpawn_C* CallFunc_FinishSpawningActor_ReturnValue_6, TArray<FParticleSysParam>& K2Node_MakeArray_Array_5, FColor CallFunc_Conv_LinearColorToColor_ReturnValue_5, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_2, FParticleSysParam K2Node_MakeStruct_ParticleSysParam_5, TArray<FParticleSysParam>& K2Node_MakeArray_Array_6, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_3, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_4, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_5, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_6, bool CallFunc_RandomBoolWithWeight_ReturnValue_1, bool CallFunc_SetStaticMesh_ReturnValue_3, FString CallFunc_GetDisplayName_ReturnValue, TArray<FName>& K2Node_MakeArray_Array_7, int32 Temp_int_Variable_3, bool CallFunc_LessEqual_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, uint8 CallFunc_MakeLiteralByte_ReturnValue_7, TArray<FName>& K2Node_MakeArray_Array_8, float CallFunc_RandomFloatInRange_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue_2, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP_2, bool K2Node_DynamicCast_bSuccess_2);
}

#endif
