#ifndef UE4SS_SDK_BP_SimplePlatform_HPP
#define UE4SS_SDK_BP_SimplePlatform_HPP

class ABP_SimplePlatform_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAkComponent* Play_Whoosh;
    UAkComponent* AkConcrete;
    UAkComponent* AkLoop;
    UAkComponent* AkMetal;
    UStaticMeshComponent* SM_DebugPlatform;
    UArrowComponent* Arrow;
    UAkComponent* AkConcreteOld;
    UStaticMeshComponent* SM_SimplePlatform;
    USceneComponent* DefaultSceneRoot;
    float Movement_Audio_7710EC97436593B6BF24638440911B9B;
    float Movement_Lerp_7710EC97436593B6BF24638440911B9B;
    TEnumAsByte<ETimelineDirection::Type> Movement__Direction_7710EC97436593B6BF24638440911B9B;
    UTimelineComponent* Movement;
    TEnumAsByte<E_SimplePlatformType::Type> TypeCornerAudio;
    float StartPosition;
    UCurveFloat* MovementCurve;
    float Speed;
    float Distance;
    float DelayBeginPlay;
    float DelayToRestart;
    bool PauseInMiddle;
    float PauseTime;
    bool Create Spline;
    bool Debug;
    FVector OriginalLocation;
    bool UseHitSounds;
    bool JustUpSound;
    bool ConcreteSound;
    bool MetalSound;
    bool WhooshSound;
    float WhooshScalingFactor;
    UAkAudioEvent* SoundWhoosh;
    bool AnticipationRumble;
    FVector StartLocat;
    float X;
    float Y;
    float Z;
    float AddX;
    float AddY;
    float AddZ;
    float SubstractX;
    float SubstractY;
    float SubstractZ;
    float StartX;
    float StartZ;
    float StartY;
    bool StartLocation;
    TEnumAsByte<E_SimplePlatformTypeSound::Type> Simple Platform Type Sound;
    bool DebugPrint;
    int32 AudioLimitsCounter;
    bool Corner1;
    bool Corner2;
    bool Corner3;
    bool Corner4;
    float WhooshSizeAverageRtpc;
    float WhooshSizeTimesScaling;
    UMaterialInterface* DisappearNewMat;
    UMaterialInterface* DisappearOldMat;
    bool Print;

    void UserConstructionScript(FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, FVector CallFunc_GetForwardVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_VLerp_ReturnValue, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult);
    void Movement__FinishedFunc();
    void Movement__UpdateFunc();
    void Movement__BasicDoubleWall_Void_Curve__EventFunc();
    void Movement__BasicLerp_Curve__EventFunc();
    void Movement__BasicSimplePlatform_Void_Curve__EventFunc();
    void Movement__Down__EventFunc();
    void Movement__Up__EventFunc();
    void Movement__PauseInMiddle__EventFunc();
    void Restart();
    void Shake();
    void ReceiveBeginPlay();
    void ResetLocationXZ();
    void CornersAudio();
    void SoundCorners(int32 Selection);
    void Change Material(bool New Material);
    void Set New Material(UMaterialInterface* Material);
    void ExecuteUbergraph_BP_SimplePlatform(int32 EntryPoint, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, uint8 Temp_byte_Variable, UAkAudioEvent* Temp_object_Variable, UAkAudioEvent* Temp_object_Variable_1, UAkAudioEvent* Temp_object_Variable_2, UAkAudioEvent* Temp_object_Variable_3, UAkAudioEvent* Temp_object_Variable_4, UAkAudioEvent* Temp_object_Variable_5, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, float CallFunc_MapRangeClamped_ReturnValue, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_1, const FTransform Temp_struct_Variable_1, const FTransform Temp_struct_Variable_2, USplineComponent* CallFunc_AddComponent_ReturnValue, USplineMeshComponent* CallFunc_AddComponent_ReturnValue_1, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_3, float CallFunc_Divide_FloatFloat_ReturnValue, FVector CallFunc_GetForwardVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, float CallFunc_Lerp_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FVector CallFunc_GetLocationAndTangentAtSplinePoint_Location, FVector CallFunc_GetLocationAndTangentAtSplinePoint_Tangent, FVector CallFunc_GetLocationAndTangentAtSplinePoint_Location_1, FVector CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, UAkAudioEvent* Temp_object_Variable_6, bool CallFunc_IsRobiValid_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, FVector CallFunc_GetSocketLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_4, float CallFunc_RandomFloatInRange_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_5, FVector CallFunc_MakeVector_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue_3, UAkAudioEvent* Temp_object_Variable_7, UAkAudioEvent* Temp_object_Variable_8, UAkAudioEvent* Temp_object_Variable_9, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue, UAkAudioEvent* Temp_object_Variable_10, UAkAudioEvent* Temp_object_Variable_11, int32 CallFunc_Add_IntInt_ReturnValue_2, uint8 Temp_byte_Variable_1, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_2, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_4, uint8 Temp_byte_Variable_2, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Variable_1, UAkAudioEvent* Temp_object_Variable_12, UAkAudioEvent* Temp_object_Variable_13, UAkAudioEvent* Temp_object_Variable_14, UAkAudioEvent* Temp_object_Variable_15, UAkAudioEvent* K2Node_Select_Default, UAkAudioEvent* K2Node_Select_Default_1, bool CallFunc_IsRobiValid_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue_2, UAkAudioEvent* Temp_object_Variable_16, UAkAudioEvent* Temp_object_Variable_17, int32 K2Node_CustomEvent_Selection, bool K2Node_SwitchInteger_CmpSuccess, uint8 Temp_byte_Variable_3, UAkAudioEvent* K2Node_Select_Default_2, bool CallFunc_IsRobiValid_ReturnValue_3, int32 Temp_int_Variable_1, bool K2Node_Event_New_Material, UMaterialInterface* K2Node_Event_Material, UMaterialInterface* K2Node_Select_Default_3, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_5, UAkComponent* K2Node_Select_Default_4, int32 CallFunc_PostAkEvent_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue_4, bool CallFunc_IsRobiValid_ReturnValue_5, float CallFunc_MapRangeClamped_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_3, float CallFunc_WeightedMovingAverage_Float_ReturnValue, UAkAudioEvent* Temp_object_Variable_18, FVector CallFunc_GetComponentBounds_Origin, FVector CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, UAkAudioEvent* Temp_object_Variable_19, float CallFunc_Add_FloatFloat_ReturnValue_6, float CallFunc_Add_FloatFloat_ReturnValue_7, UAkAudioEvent* Temp_object_Variable_20, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_MapRangeClamped_ReturnValue_4, float CallFunc_WeightedMovingAverage_Float_ReturnValue_1, UAkAudioEvent* Temp_object_Variable_21, float CallFunc_Multiply_FloatFloat_ReturnValue_1, UAkAudioEvent* Temp_object_Variable_22, UAkAudioEvent* Temp_object_Variable_23, uint8 Temp_byte_Variable_4, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_4, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_6, UAkAudioEvent* K2Node_Select_Default_5, uint8 Temp_byte_Variable_5, bool CallFunc_IsRobiValid_ReturnValue_6, UAkComponent* K2Node_Select_Default_6, int32 CallFunc_PostAkEvent_ReturnValue_2, int32 CallFunc_PostAkEvent_ReturnValue_3, bool CallFunc_IsRobiValid_ReturnValue_7, bool CallFunc_IsRobiValid_ReturnValue_8, int32 CallFunc_PostAkEvent_ReturnValue_4, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FHitResult CallFunc_K2_SetActorRelativeLocation_SweepHitResult, FVector CallFunc_GetForwardVector_ReturnValue_1, bool CallFunc_MakeLiteralBool_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue_1, float K2Node_Select_Default_7, const TArray<FVector>& K2Node_MakeArray_Array, FVector CallFunc_Multiply_VectorFloat_ReturnValue_2, FVector CallFunc_Multiply_VectorFloat_ReturnValue_3, FVector CallFunc_VLerp_ReturnValue, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult_1, bool CallFunc_K2_SetActorLocation_ReturnValue_1);
}

#endif
