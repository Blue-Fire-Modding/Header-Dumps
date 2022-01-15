#ifndef UE4SS_SDK_CheckPlayerDistanceAndChangeState_HPP
#define UE4SS_SDK_CheckPlayerDistanceAndChangeState_HPP

class UCheckPlayerDistanceAndChangeState_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Distance;
    TEnumAsByte<EnemyStates::Type> NewState;
    bool CloserThan;
    float Delay;
    AEnemy_Character_Parent_C* Enemy;

    void ReceiveExecute(AActor* OwnerActor);
    void CheckPlayerDistance();
    void ExecuteUbergraph_CheckPlayerDistanceAndChangeState(int32 EntryPoint, bool Temp_bool_Variable, APawn* CallFunc_GetPlayerPawn_ReturnValue, AActor* K2Node_Event_OwnerActor, UAIController* CallFunc_GetAIController_ReturnValue, APawn* CallFunc_K2_GetPawn_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, UEnemy_Character_Parent_C* K2Node_DynamicCast_AsEnemy_Character_Parent, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_Select_Default);
}

#endif
