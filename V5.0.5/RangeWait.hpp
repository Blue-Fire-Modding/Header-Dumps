#ifndef UE4SS_SDK_RangeWait_HPP
#define UE4SS_SDK_RangeWait_HPP

class URangeWait_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Probability;
    FVector2D Delay;

    void ReceiveExecute(AActor* OwnerActor);
    void ExecuteUbergraph_RangeWait(int32 EntryPoint, bool CallFunc_RandomBoolWithWeight_ReturnValue, AActor* K2Node_Event_OwnerActor, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_RandomFloatInRange_ReturnValue);
}

#endif
