#ifndef UE4SS_SDK_Sign_BP_HPP
#define UE4SS_SDK_Sign_BP_HPP

class ASign_BP_C : ANPCBound_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* ScenePOI;
    UBoxComponent* Collision;
    UStaticMeshComponent* Mesh;
    FVector Hit_Animation_Rotation_2_E2D62C4643E6C09BB5F43AA94AECE27B;
    FVector Hit_Animation_Rotation_1_E2D62C4643E6C09BB5F43AA94AECE27B;
    FVector Hit_Animation_Rotation_0_E2D62C4643E6C09BB5F43AA94AECE27B;
    TEnumAsByte<ETimelineDirection::Type> Hit_Animation__Direction_E2D62C4643E6C09BB5F43AA94AECE27B;
    UTimelineComponent* Hit Animation;
    TArray<FText> Text;
    FText Name;
    FSign_BP_CRead Read;
    void Read();
    ADoor_BP_C* Door;
    float POI Max Camera Distance;
    FRotator Original Rotation;
    int32 Index;

    void Hit Animation__FinishedFunc();
    void Hit Animation__UpdateFunc();
    void DialogStartCall();
    void QuickEnd();
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void ReceiveBeginPlay();
    void Play Animation();
    void SetOriginalRot();
    void ExecuteUbergraph_Sign_BP(int32 EntryPoint, ExitDialog__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, int32 CallFunc_RandomIntegerInRange_ReturnValue, FVector K2Node_Select_Default, FRotator CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, FRotator CallFunc_MakeRotator_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult, int32 CallFunc_PostEventAtLocation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue);
    void Read__DelegateSignature();
}

#endif
