#ifndef UE4SS_SDK_WaitForPlayerNear_HPP
#define UE4SS_SDK_WaitForPlayerNear_HPP

class UWaitForPlayerNear_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Radius;
    AEnemy_Character_Parent_C* EnemyParent;
    bool OnlyXY;
    bool PlayerCan'tBeHigher;

    void ReceiveExecute(AActor* OwnerActor);
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void ExecuteUbergraph_WaitForPlayerNear(int32 EntryPoint, bool Temp_bool_Variable, AActor* K2Node_Event_OwnerActor_1, UAIController* CallFunc_GetAIController_ReturnValue, AActor* K2Node_Event_OwnerActor, float K2Node_Event_DeltaSeconds, APawn* CallFunc_K2_GetPawn_ReturnValue, UEnemy_Character_Parent_C* K2Node_DynamicCast_AsEnemy_Character_Parent, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, bool CallFunc_Greater_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FVector K2Node_Select_Default, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
}

#endif
