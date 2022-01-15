#ifndef UE4SS_SDK_BP_Rain_DUPL_1_HPP
#define UE4SS_SDK_BP_Rain_DUPL_1_HPP

class ABP_Rain_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBoxComponent* Box;
    UParticleSystemComponent* Particle;
    USceneComponent* DefaultSceneRoot;
    float Amount;
    float Size Min;
    float Size Max;
    FColor Color;
    float Lifetime Min;
    float Lifetime Max;
    float Velocity Min;
    float Velocity Max;

    void UserConstructionScript(FVector CallFunc_MakeVector_ReturnValue, FParticleSysParam K2Node_MakeStruct_ParticleSysParam, FVector CallFunc_MakeVector_ReturnValue_1, FParticleSysParam K2Node_MakeStruct_ParticleSysParam_1, FVector CallFunc_MakeVector_ReturnValue_2, FVector CallFunc_MakeVector_ReturnValue_3, FParticleSysParam K2Node_MakeStruct_ParticleSysParam_2, FParticleSysParam K2Node_MakeStruct_ParticleSysParam_3, FParticleSysParam K2Node_MakeStruct_ParticleSysParam_4, FVector CallFunc_K2_GetComponentScale_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_MakeVector_ReturnValue_4, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue_5, FParticleSysParam K2Node_MakeStruct_ParticleSysParam_5, TArray<FParticleSysParam>& K2Node_MakeArray_Array);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Rain(int32 EntryPoint);
}

#endif
