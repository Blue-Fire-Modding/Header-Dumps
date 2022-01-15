#ifndef UE4SS_SDK_BP_BossRoom_3_HPP
#define UE4SS_SDK_BP_BossRoom_3_HPP

class ABP_BossRoom_3_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBillboardComponent* CurrencyLocation;
    UParticleSystemComponent* P_Stage1_Smoke;
    UStaticMeshComponent* Room3_Fog;
    UStaticMeshComponent* Room3_Platforms;
    UStaticMeshComponent* Room3_Base;
    USceneComponent* DefaultSceneRoot;
    float Move_Border_Down_Lerp_2_FF4122B54394D14061DE64AA7B7DDD51;
    float Move_Border_Down_Lerp_Value_FF4122B54394D14061DE64AA7B7DDD51;
    TEnumAsByte<ETimelineDirection::Type> Move_Border_Down__Direction_FF4122B54394D14061DE64AA7B7DDD51;
    UTimelineComponent* Move Border Down;
    float Move_Border_Up_Lerp2_8FCFD91C403E67F573E273B398B703FB;
    float Move_Border_Up_Shake_8FCFD91C403E67F573E273B398B703FB;
    float Move_Border_Up_Lerp_Value_8FCFD91C403E67F573E273B398B703FB;
    TEnumAsByte<ETimelineDirection::Type> Move_Border_Up__Direction_8FCFD91C403E67F573E273B398B703FB;
    UTimelineComponent* Move Border Up;
    APlayer_Character_BP_C* Player;
    bool Show Trace;
    bool canDamage;
    FVector Platform Location;
    FVector Fog Location;
    int32 Hand Location;
    TArray<FVector> Spawn Positions;
    ABP_Invocation_Hand_C* Hand 0;
    ABP_Invocation_Hand_C* Hand 1;
    ABP_Invocation_Hand_C* Hand 2;
    ABP_Invocation_Hand_C* Hand 3;
    TArray<ABP_Invocation_Hand_C*> Hands;
    ABP_TeleportToEntrance_C* TeleportEntrance;
    AActor* SafePointDown;
    AActor* SafePointUp;
    AActor* SafePointUp_0;
    AActor* SafePointUp_1;
    AActor* SafePointUp_2;

    void Move Border Down__FinishedFunc();
    void Move Border Down__UpdateFunc();
    void Move Border Up__FinishedFunc();
    void Move Border Up__UpdateFunc();
    void Move Border Up__ShakeCamera__EventFunc();
    void Spawn Hand();
    void Spawn Hands();
    void Elevate Room(bool Show, int32 Battle Fase, bool Instant);
    void VFX Smoke(bool Show);
    void Reset Positions();
    void ReceiveBeginPlay();
    void Update Variables(float Damage, bool Show Trace);
    void Cutscene Left Hand();
    void Cutscene Right Hand();
    void Set Safe Point(bool Show Up);
    void WriteID(FString ID);
    void ExecuteUbergraph_BP_BossRoom_3(int32 EntryPoint, int32 Temp_int_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, int32 Temp_int_Variable_1, float Temp_float_Variable_5, float Temp_float_Variable_6, float Temp_float_Variable_7, float Temp_float_Variable_8, float Temp_float_Variable_9, int32 Temp_int_Variable_2, float Temp_float_Variable_10, float Temp_float_Variable_11, float Temp_float_Variable_12, float Temp_float_Variable_13, float Temp_float_Variable_14, int32 Temp_int_Variable_3, float Temp_float_Variable_15, float Temp_float_Variable_16, float Temp_float_Variable_17, float Temp_float_Variable_18, float Temp_float_Variable_19, bool Temp_bool_Variable, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool K2Node_CustomEvent_Show_1, int32 K2Node_CustomEvent_Battle_Fase, bool K2Node_CustomEvent_Instant, float K2Node_Select_Default, float K2Node_Select_Default_1, float CallFunc_Subtract_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, float K2Node_Select_Default_2, float CallFunc_Lerp_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1, float K2Node_Select_Default_3, uint8 K2Node_Select_Default_4, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Add_FloatFloat_ReturnValue, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, float CallFunc_Lerp_ReturnValue_1, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_1, FVector CallFunc_MakeVector_ReturnValue_2, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_2, bool K2Node_CustomEvent_Show, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, float CallFunc_Subtract_FloatFloat_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue_3, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, float CallFunc_Lerp_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue_4, float CallFunc_Lerp_ReturnValue_3, FVector CallFunc_MakeVector_ReturnValue_5, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, bool Temp_bool_Variable_1, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_3, bool CallFunc_Not_PreBool_ReturnValue, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_4, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_5, int32 CallFunc_Array_Length_ReturnValue, float K2Node_CustomEvent_Damage, bool K2Node_CustomEvent_Show_Trace, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, ABP_Invocation_Hand_C* CallFunc_Array_Get_Item, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, ABP_Invocation_Hand_C* CallFunc_Array_Get_Item_1, ABP_Invocation_Hand_C* CallFunc_Array_Get_Item_2, bool K2Node_CustomEvent_Show_Up, bool CallFunc_Not_PreBool_ReturnValue_1, FString K2Node_CustomEvent_Id, TArray<ABP_Invocation_Hand_C*>& K2Node_MakeArray_Array);
}

#endif
