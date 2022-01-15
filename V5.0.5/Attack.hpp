#ifndef UE4SS_SDK_Attack_HPP
#define UE4SS_SDK_Attack_HPP

class UAttack_C : UBTTask_BlueprintBase
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
    AAIController* AI;

    void ReceiveExecute(AActor* OwnerActor);
    void Finish(bool Success);
    void Break Loop();
    void ExecuteUbergraph_Attack(int32 EntryPoint, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_RandomFloatInRange_ReturnValue, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_IsRobiValid_ReturnValue, APawn* CallFunc_K2_GetPawn_ReturnValue, UEnemy_Character_Parent_C* K2Node_DynamicCast_AsEnemy_Character_Parent, bool K2Node_DynamicCast_bSuccess, AActor* K2Node_Event_OwnerActor, UAIController* CallFunc_GetAIController_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue, bool K2Node_CustomEvent_Success, Break Attack__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 K2Node_Select_Default, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, float K2Node_Select_Default_1);
}

#endif
