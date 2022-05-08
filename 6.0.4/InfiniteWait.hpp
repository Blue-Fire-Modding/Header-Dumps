#ifndef UE4SS_SDK_InfiniteWait_HPP
#define UE4SS_SDK_InfiniteWait_HPP

class UInfiniteWait_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveExecute(class AActor* OwnerActor);
    void ExecuteUbergraph_InfiniteWait(int32 EntryPoint);
};

#endif
