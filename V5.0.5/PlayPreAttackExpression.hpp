#ifndef UE4SS_SDK_PlayPreAttackExpression_HPP
#define UE4SS_SDK_PlayPreAttackExpression_HPP

class UPlayPreAttackExpression_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 Number;
    float Delay;
    float SuccessChance;
    bool FirstTimeSkip;

    void ReceiveExecute(AActor* OwnerActor);
    void ExecuteUbergraph_PlayPreAttackExpression(int32 EntryPoint, AActor* K2Node_Event_OwnerActor, UAIController* CallFunc_GetAIController_ReturnValue, APawn* CallFunc_K2_GetPawn_ReturnValue, UEnemy_Character_Parent_C* K2Node_DynamicCast_AsEnemy_Character_Parent, bool K2Node_DynamicCast_bSuccess, bool CallFunc_RandomBoolWithWeight_ReturnValue);
}

#endif
