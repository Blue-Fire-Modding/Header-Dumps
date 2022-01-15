#ifndef UE4SS_SDK_StateChangeOnMaxHits_HPP
#define UE4SS_SDK_StateChangeOnMaxHits_HPP

class UStateChangeOnMaxHits_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    TEnumAsByte<EnemyStates::Type> NewState;
    int32 MaxConsecutiveHits;
    bool Use Wait Time;
    float Wait Time;
    bool RandomConsecutiveHits;
    FIntVector ConsecutiveHitsRange;
    AEnemy_Character_Parent_C* Enemy;
    int32 MaxRandonConsecutiveHits;

    void ReceiveExecute(AActor* OwnerActor);
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void ExecuteUbergraph_StateChangeOnMaxHits(int32 EntryPoint, AActor* K2Node_Event_OwnerActor_1, UAIController* CallFunc_GetAIController_ReturnValue, APawn* CallFunc_K2_GetPawn_ReturnValue, UEnemy_Character_Parent_C* K2Node_DynamicCast_AsEnemy_Character_Parent, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, AActor* K2Node_Event_OwnerActor, float K2Node_Event_DeltaSeconds, int32 K2Node_Select_Default, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue);
}

#endif
