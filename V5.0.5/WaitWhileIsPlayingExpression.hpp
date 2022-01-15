#ifndef UE4SS_SDK_WaitWhileIsPlayingExpression_HPP
#define UE4SS_SDK_WaitWhileIsPlayingExpression_HPP

class UWaitWhileIsPlayingExpression_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    AEnemy_Character_Parent_C* EnemyParent;

    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void ReceiveExecuteAI(UAIController* OwnerController, APawn* ControlledPawn);
    void ExecuteUbergraph_WaitWhileIsPlayingExpression(int32 EntryPoint, UAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, UEnemy_Character_Parent_C* K2Node_DynamicCast_AsEnemy_Character_Parent, bool K2Node_DynamicCast_bSuccess, AActor* K2Node_Event_OwnerActor, float K2Node_Event_DeltaSeconds);
}

#endif
