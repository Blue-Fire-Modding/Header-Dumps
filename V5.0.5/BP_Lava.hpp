#ifndef UE4SS_SDK_BP_Lava_HPP
#define UE4SS_SDK_BP_Lava_HPP

class ABP_Lava_C : AActor
{
    UBoxComponent* Box;
    UParticleSystemComponent* Particle;
    USceneComponent* DefaultSceneRoot;
    float Amount;

    void UserConstructionScript(FParticleSysParam K2Node_MakeStruct_ParticleSysParam, FVector CallFunc_K2_GetComponentScale_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_MakeVector_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, FVector CallFunc_MakeVector_ReturnValue_1, FParticleSysParam K2Node_MakeStruct_ParticleSysParam_1, TArray<FParticleSysParam>& K2Node_MakeArray_Array);
}

#endif
