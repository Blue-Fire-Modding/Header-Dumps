#ifndef UE4SS_SDK_CallEvent_HPP
#define UE4SS_SDK_CallEvent_HPP

class UCallEvent_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FString Event Name;
    float SuccessChance;
    float Wait Before Finish;
    bool Random Wait;
    FVector Wait Range;

    void ReceiveExecute(AActor* OwnerActor);
    void ExecuteUbergraph_CallEvent(int32 EntryPoint, bool Temp_bool_Variable, AActor* K2Node_Event_OwnerActor, UAIController* CallFunc_GetAIController_ReturnValue, APawn* CallFunc_K2_GetPawn_ReturnValue, UEnemy_Character_Parent_C* K2Node_DynamicCast_AsEnemy_Character_Parent, bool K2Node_DynamicCast_bSuccess, bool CallFunc_RandomBoolWithWeight_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_RandomFloatInRange_ReturnValue, float K2Node_Select_Default);
}

#endif
