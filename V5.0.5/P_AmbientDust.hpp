#ifndef UE4SS_SDK_P_AmbientDust_HPP
#define UE4SS_SDK_P_AmbientDust_HPP

class AP_AmbientDust_C : AActor
{
    UBoxComponent* Box;
    UParticleSystemComponent* P_Ambient_Dust;
    USceneComponent* DefaultSceneRoot;
    float Amount;
    FColor Color;

    void UserConstructionScript(FParticleSysParam K2Node_MakeStruct_ParticleSysParam, FVector CallFunc_K2_GetComponentScale_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_MakeVector_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FParticleSysParam K2Node_MakeStruct_ParticleSysParam_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, FVector CallFunc_MakeVector_ReturnValue_1, FParticleSysParam K2Node_MakeStruct_ParticleSysParam_2, TArray<FParticleSysParam>& K2Node_MakeArray_Array);
}

#endif
