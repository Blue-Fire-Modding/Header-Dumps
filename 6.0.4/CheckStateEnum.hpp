#ifndef UE4SS_SDK_CheckStateEnum_HPP
#define UE4SS_SDK_CheckStateEnum_HPP

class UCheckStateEnum_C : public UBTDecorator_BlueprintBase
{
    TEnumAsByte<EnemyStates::Type> State;

    bool PerformConditionCheck(class AActor* OwnerActor);
};

#endif
