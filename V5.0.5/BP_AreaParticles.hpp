#ifndef UE4SS_SDK_BP_AreaParticles_HPP
#define UE4SS_SDK_BP_AreaParticles_HPP

class ABP_AreaParticles_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBoxComponent* Box;
    UParticleSystemComponent* Particle;
    USceneComponent* DefaultSceneRoot;
    float Amount Min;
    float Amount  Max;
    FColor ColorA;
    FColor ColorB;
    float Lifetime Min;
    float Lifetime Max;
    float Glow Intensity;

    void UserConstructionScript();
    void Build();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_AreaParticles(int32 EntryPoint, float CallFunc_MakeLiteralFloat_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, FVector CallFunc_K2_GetComponentScale_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, FVector CallFunc_MakeVector_ReturnValue_1, FParticleSysParam K2Node_MakeStruct_ParticleSysParam, float CallFunc_Divide_FloatFloat_ReturnValue, FParticleSysParam K2Node_MakeStruct_ParticleSysParam_1, FParticleSysParam K2Node_MakeStruct_ParticleSysParam_2, FParticleSysParam K2Node_MakeStruct_ParticleSysParam_3, float CallFunc_Divide_FloatFloat_ReturnValue_1, FParticleSysParam K2Node_MakeStruct_ParticleSysParam_4, TArray<FParticleSysParam>& K2Node_MakeArray_Array);
}

#endif
