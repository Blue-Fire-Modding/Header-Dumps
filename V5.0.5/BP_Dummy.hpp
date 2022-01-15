#ifndef UE4SS_SDK_BP_Dummy_HPP
#define UE4SS_SDK_BP_Dummy_HPP

class ABP_Dummy_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* ScenePOI;
    UArrowComponent* Arrow_VFX;
    UCapsuleComponent* Collider;
    UStaticMeshComponent* A06_Dummy;
    USceneComponent* DefaultSceneRoot;
    FVector Hit_Animation_Rotation_2_620576834EFA76A7A2EB90AB32ED8B03;
    FVector Hit_Animation_Rotation_1_620576834EFA76A7A2EB90AB32ED8B03;
    FVector Hit_Animation_Rotation_0_620576834EFA76A7A2EB90AB32ED8B03;
    TEnumAsByte<ETimelineDirection::Type> Hit_Animation__Direction_620576834EFA76A7A2EB90AB32ED8B03;
    UTimelineComponent* Hit Animation;
    int32 Index;
    FRotator Original Rotation;
    float POI Max Camera Distance;
    UParticleSystem* VFX;
    UAkAudioEvent* Ak Event;

    void Hit Animation__FinishedFunc();
    void Hit Animation__UpdateFunc();
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void ReceiveBeginPlay();
    void Play Animation();
    void ExecuteUbergraph_BP_Dummy(int32 EntryPoint, int32 Temp_int_Variable, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, FVector CallFunc_K2_GetComponentLocation_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, FVector K2Node_Select_Default, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FRotator CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, FRotator CallFunc_MakeRotator_ReturnValue, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue);
}

#endif
