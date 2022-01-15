#ifndef UE4SS_SDK_ChangeState_HPP
#define UE4SS_SDK_ChangeState_HPP

class UChangeState_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    TEnumAsByte<EnemyStates::Type> State;

    void ReceiveExecute(AActor* OwnerActor);
    void ExecuteUbergraph_ChangeState(int32 EntryPoint, AActor* K2Node_Event_OwnerActor, UAIController* CallFunc_GetAIController_ReturnValue, APawn* CallFunc_K2_GetPawn_ReturnValue, UEnemy_Character_Parent_C* K2Node_DynamicCast_AsEnemy_Character_Parent, bool K2Node_DynamicCast_bSuccess);
}

#endif
