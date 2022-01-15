#ifndef UE4SS_SDK_CheckProbability_HPP
#define UE4SS_SDK_CheckProbability_HPP

class UCheckProbability_C : UBTDecorator_BlueprintBase
{
    float Success Chance;

    bool PerformConditionCheck(AActor* OwnerActorbool CallFunc_RandomBoolWithWeight_ReturnValue);
}

#endif
