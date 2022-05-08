#ifndef UE4SS_SDK_Attack_HPP
#define UE4SS_SDK_Attack_HPP

class UAttack_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    float SuccessChance;
    int32 Attack;
    bool Use Custom Counter;
    bool Use Loop;
    bool Random Loop;
    int32 Loop;
    FIntVector Loop Range;
    bool Call Event;
    FString Event Name;
    float Wait After Event;
    float Wait Before Finish;
    bool Can Abort;
    float Wait Abort;
    int32 LoopRangeValue;
    bool Can Break;
    float Wait Per Attack;
    bool Use Random Wait Per Attack;
    FVector2D Random Wait Per Attack;
    float RandomWaitPerAttackValue;
    class AAIController* AI;

    void ReceiveExecute(class AActor* OwnerActor);
    void Finish(bool Success);
    void Break Loop();
    void ExecuteUbergraph_Attack(int32 EntryPoint);
};

#endif
