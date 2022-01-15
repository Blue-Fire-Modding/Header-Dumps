#ifndef UE4SS_SDK_CheckPlayerDistance_HPP
#define UE4SS_SDK_CheckPlayerDistance_HPP

class UCheckPlayerDistance_C : UBTDecorator_BlueprintBase
{
    bool Check if is Near;
    float Near Distance;

    bool PerformConditionCheck(AActor* OwnerActorbool Temp_bool_Variable, UAIController* CallFunc_GetAIController_ReturnValue, APawn* CallFunc_K2_GetPawn_ReturnValue, UEnemy_Character_Parent_C* K2Node_DynamicCast_AsEnemy_Character_Parent, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool K2Node_Select_Default);
}

#endif
