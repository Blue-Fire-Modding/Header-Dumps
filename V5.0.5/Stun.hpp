#ifndef UE4SS_SDK_Stun_HPP
#define UE4SS_SDK_Stun_HPP

class UStun_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool Stun;
    AEnemy_Character_Parent_C* Enemy;

    void ReceiveExecute(AActor* OwnerActor);
    void ExecuteUbergraph_Stun(int32 EntryPoint, AActor* K2Node_Event_OwnerActor, UAIController* CallFunc_GetAIController_ReturnValue, APawn* CallFunc_K2_GetPawn_ReturnValue, UEnemy_Character_Parent_C* K2Node_DynamicCast_AsEnemy_Character_Parent, bool K2Node_DynamicCast_bSuccess);
}

#endif
