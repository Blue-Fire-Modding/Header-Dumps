#ifndef UE4SS_SDK_BP_LavaBubble_HPP
#define UE4SS_SDK_BP_LavaBubble_HPP

class ABP_LavaBubble_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBoxComponent* Box;
    UParticleSystemComponent* Particle;
    USceneComponent* DefaultSceneRoot;
    float Amount;
    float Size Min;
    float Size Max;
    FColor Color A;
    FColor Color B;
    float Lifetime Min;
    float Lifetime Max;
    float VelocityMin;
    float VelocityMax;
    float NewVar_0;

    void UserConstructionScript();
    void Build();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_LavaBubble(int32 EntryPoint, float CallFunc_MakeLiteralFloat_ReturnValue, FVector CallFunc_K2_GetComponentScale_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_MakeVector_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FParticleSysParam K2Node_MakeStruct_ParticleSysParam, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, FVector CallFunc_MakeVector_ReturnValue_1, FParticleSysParam K2Node_MakeStruct_ParticleSysParam_1, FParticleSysParam K2Node_MakeStruct_ParticleSysParam_2, FParticleSysParam K2Node_MakeStruct_ParticleSysParam_3, FParticleSysParam K2Node_MakeStruct_ParticleSysParam_4, FVector CallFunc_MakeVector_ReturnValue_2, FVector CallFunc_MakeVector_ReturnValue_3, FParticleSysParam K2Node_MakeStruct_ParticleSysParam_5, TArray<FParticleSysParam>& K2Node_MakeArray_Array);
}

#endif
