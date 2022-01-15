#ifndef UE4SS_SDK_BP_Fire_HPP
#define UE4SS_SDK_BP_Fire_HPP

class ABP_Fire_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UParticleSystemComponent* P_Fire_Sparks;
    UPointLightComponent* PointLight;
    UAkComponent* Ak;
    UBoxComponent* Box;
    UMaterialBillboardComponent* MB_Fire;
    FLinearColor Glow Color;
    float Glow Value;
    float Glow Speed;
    float Speed;
    FLinearColor Inside;
    FLinearColor Center;
    FLinearColor Outside;
    UMaterialInstanceDynamic* Mat1;
    UMaterialInstanceDynamic* Mat2;
    FLinearColor Light Color;
    float Light Intensity;
    bool Enable Sparks;
    bool UseSFX;
    float Attenuation Scaling;

    void UserConstructionScript();
    void Build();
    void ReceiveBeginPlay();
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void ExecuteUbergraph_BP_Fire(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, bool CallFunc_IsValid_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, FMaterialSpriteElement K2Node_MakeStruct_MaterialSpriteElement, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, int32 CallFunc_PostAkEvent_ReturnValue, FColor CallFunc_Conv_LinearColorToColor_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, FParticleSysParam K2Node_MakeStruct_ParticleSysParam, TArray<FParticleSysParam>& K2Node_MakeArray_Array, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FVector CallFunc_K2_GetActorLocation_ReturnValue, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, FVector CallFunc_GetActorScale3D_ReturnValue, FString CallFunc_GetPlatformName_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool K2Node_SwitchString_CmpSuccess, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector CallFunc_GetActorScale3D_ReturnValue_1, FMaterialSpriteElement K2Node_MakeStruct_MaterialSpriteElement_1, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const TArray<FMaterialSpriteElement>& K2Node_MakeArray_Array_1);
}

#endif
