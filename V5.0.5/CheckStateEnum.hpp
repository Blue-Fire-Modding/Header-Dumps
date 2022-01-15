#ifndef UE4SS_SDK_CheckStateEnum_HPP
#define UE4SS_SDK_CheckStateEnum_HPP

class UCheckStateEnum_C : UBTDecorator_BlueprintBase
{
    TEnumAsByte<EnemyStates::Type> State;

    bool PerformConditionCheck(AActor* OwnerActorUAIController* CallFunc_GetAIController_ReturnValue, APawn* CallFunc_K2_GetPawn_ReturnValue, UEnemy_Character_Parent_C* K2Node_DynamicCast_AsEnemy_Character_Parent, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
}

#endif
