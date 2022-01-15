#ifndef UE4SS_SDK_InfiniteWait_HPP
#define UE4SS_SDK_InfiniteWait_HPP

class UInfiniteWait_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveExecute(AActor* OwnerActor);
    void ExecuteUbergraph_InfiniteWait(int32 EntryPoint, AActor* K2Node_Event_OwnerActor);
}

#endif
