#ifndef UE4SS_SDK_BP_Rain_HPP
#define UE4SS_SDK_BP_Rain_HPP

class ABP_Rain_C : AActor
{
    UBoxComponent* Box;
    UParticleSystemComponent* Particle;
    USceneComponent* DefaultSceneRoot;
    float Amount;
    float Size;
    FColor Color;
    float LifeTime;
    float Velocity;

    void UserConstructionScript(FParticleSysParam K2Node_MakeStruct_ParticleSysParam, FVector CallFunc_MakeVector_ReturnValue, FParticleSysParam K2Node_MakeStruct_ParticleSysParam_1, FParticleSysParam K2Node_MakeStruct_ParticleSysParam_2, FVector CallFunc_MakeVector_ReturnValue_1, FParticleSysParam K2Node_MakeStruct_ParticleSysParam_3, FParticleSysParam K2Node_MakeStruct_ParticleSysParam_4, FVector CallFunc_K2_GetComponentScale_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_MakeVector_ReturnValue_2, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue_3, FParticleSysParam K2Node_MakeStruct_ParticleSysParam_5, TArray<FParticleSysParam>& K2Node_MakeArray_Array);
}

#endif
