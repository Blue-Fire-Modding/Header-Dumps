#ifndef UE4SS_SDK_Enemy_Master_AiController_HPP
#define UE4SS_SDK_Enemy_Master_AiController_HPP

class AEnemy_Master_AiController_C : UAIController
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBlackboardData* SelfBlackBoard;

    void StartAI();
    void StopAi();
    void ExecuteUbergraph_Enemy_Master_AiController(int32 EntryPoint, bool CallFunc_RunBehaviorTree_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue, UBlackboardComponent* CallFunc_UseBlackboard_BlackboardComponent, bool CallFunc_UseBlackboard_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, APawn* CallFunc_K2_GetPawn_ReturnValue, UEnemy_Character_Parent_C* K2Node_DynamicCast_AsEnemy_Character_Parent, bool K2Node_DynamicCast_bSuccess, bool CallFunc_RunBehaviorTree_ReturnValue_1);
}

#endif
