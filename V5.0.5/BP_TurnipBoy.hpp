#ifndef UE4SS_SDK_BP_TurnipBoy_HPP
#define UE4SS_SDK_BP_TurnipBoy_HPP

class ABP_TurnipBoy_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* ScenePOI;
    UArrowComponent* Arrow_VFX;
    UCapsuleComponent* Collider;
    UStaticMeshComponent* A06_Dummy;
    USceneComponent* DefaultSceneRoot;
    FVector Hit_Animation_Rotation_2_8794EDAB464568C598FA809D0C2CB9C8;
    FVector Hit_Animation_Rotation_1_8794EDAB464568C598FA809D0C2CB9C8;
    FVector Hit_Animation_Rotation_0_8794EDAB464568C598FA809D0C2CB9C8;
    TEnumAsByte<ETimelineDirection::Type> Hit_Animation__Direction_8794EDAB464568C598FA809D0C2CB9C8;
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
    void ExecuteUbergraph_BP_TurnipBoy(int32 EntryPoint, int32 Temp_int_Variable, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, FVector CallFunc_K2_GetComponentLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, FVector K2Node_Select_Default, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FRotator CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, FRotator CallFunc_MakeRotator_ReturnValue, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue);
}

#endif
