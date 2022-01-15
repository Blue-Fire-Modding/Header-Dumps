#ifndef UE4SS_SDK_BP_BossRoom_1_HPP
#define UE4SS_SDK_BP_BossRoom_1_HPP

class ABP_BossRoom_1_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBillboardComponent* CurrencyLocation;
    UStaticMeshComponent* HelixAudioVolume;
    UAkComponent* Ak3;
    UAkComponent* Ak2;
    UAkComponent* Ak1;
    UStaticMeshComponent* Room1_Helix;
    USceneComponent* DefaultSceneRoot;
    float Rotation_Helix_Rotation_545219B6405437021970F48D137561B7;
    TEnumAsByte<ETimelineDirection::Type> Rotation_Helix__Direction_545219B6405437021970F48D137561B7;
    UTimelineComponent* Rotation Helix;
    float Move_Border_Down_Lerp_Value_EC4A90E6410D7079727151BABE6D6C7C;
    TEnumAsByte<ETimelineDirection::Type> Move_Border_Down__Direction_EC4A90E6410D7079727151BABE6D6C7C;
    UTimelineComponent* Move Border Down;
    float Move_Border_Up_Lerp_Value_30FA04C64F6E70B0738AE68BC8A4EB1B;
    TEnumAsByte<ETimelineDirection::Type> Move_Border_Up__Direction_30FA04C64F6E70B0738AE68BC8A4EB1B;
    UTimelineComponent* Move Border Up;
    APlayer_Character_BP_C* Player;
    bool Show Trace;
    FVector Platform Location;
    FRotator Helix Rotation;
    float Damage;
    FRotator Start Rotation;
    float Helix Height;
    ABP_TeleportToEntrance_C* TeleportEntrance;

    void Move Border Up__FinishedFunc();
    void Move Border Up__UpdateFunc();
    void Move Border Down__FinishedFunc();
    void Move Border Down__UpdateFunc();
    void Rotation Helix__FinishedFunc();
    void Rotation Helix__UpdateFunc();
    void Elevate Helix(bool Show);
    void ReceiveBeginPlay();
    void Play Rotation(bool Play);
    void Change Helix Speed(int32 Battle Fase);
    void BndEvt__Room1_Helix_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Stop Rotation(bool Reset);
    void BndEvt__HelixAudioVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void WriteID(FString ID);
    void ExecuteUbergraph_BP_BossRoom_1(int32 EntryPoint, bool Temp_bool_Variable, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, int32 Temp_int_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_1, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_1, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_2, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_2, int32 Temp_int_Variable_1, float Temp_float_Variable_5, float Temp_float_Variable_6, float Temp_float_Variable_7, float Temp_float_Variable_8, bool Temp_bool_Has_Been_Initd_Variable, float K2Node_Select_Default, bool K2Node_CustomEvent_Show, uint8 K2Node_Select_Default_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, FRotator CallFunc_K2_GetComponentRotation_ReturnValue, bool K2Node_CustomEvent_Play, APawn* CallFunc_GetPlayerPawn_ReturnValue, bool Temp_bool_IsClosed_Variable, int32 K2Node_CustomEvent_Battle_Fase, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue, float K2Node_Select_Default_2, FRotator CallFunc_MakeRotator_ReturnValue, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult, FVector CallFunc_K2_GetActorLocation_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep_1, const FHitResult K2Node_ComponentBoundEvent_SweepResult_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, float CallFunc_ApplyDamage_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, bool K2Node_CustomEvent_Reset, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue, float CallFunc_Lerp_ReturnValue_1, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, FVector CallFunc_MakeVector_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_1, int32 CallFunc_PostAkEvent_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, int32 CallFunc_PostAkEvent_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, FString K2Node_CustomEvent_Id);
}

#endif
