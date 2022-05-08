#ifndef UE4SS_SDK_ChangeState_HPP
#define UE4SS_SDK_ChangeState_HPP

class UChangeState_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    TEnumAsByte<EnemyStates::Type> State;

    void ReceiveExecute(class AActor* OwnerActor);
    void ExecuteUbergraph_ChangeState(int32 EntryPoint);
};

#endif
