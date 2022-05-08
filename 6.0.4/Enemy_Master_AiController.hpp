#ifndef UE4SS_SDK_Enemy_Master_AiController_HPP
#define UE4SS_SDK_Enemy_Master_AiController_HPP

class AEnemy_Master_AiController_C : public AAIController
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBlackboardData* SelfBlackBoard;

    void StartAI();
    void StopAi();
    void ExecuteUbergraph_Enemy_Master_AiController(int32 EntryPoint);
};

#endif
