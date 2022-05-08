#ifndef UE4SS_SDK_CheckProbability_HPP
#define UE4SS_SDK_CheckProbability_HPP

class UCheckProbability_C : public UBTDecorator_BlueprintBase
{
    float Success Chance;

    bool PerformConditionCheck(class AActor* OwnerActor);
};

#endif
