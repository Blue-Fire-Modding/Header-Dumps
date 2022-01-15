#ifndef UE4SS_SDK_RotateToPlayer_HPP
#define UE4SS_SDK_RotateToPlayer_HPP

class URotateToPlayer_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool RotOn;
    float RotateSpeed;
    bool SingleBurst;
    float RotateSpeedCurve;
    bool Pitch;
    bool RotToMovement;

    void ReceiveExecute(AActor* OwnerActor);
    void ExecuteUbergraph_RotateToPlayer(int32 EntryPoint, AActor* K2Node_Event_OwnerActor, UAIController* CallFunc_GetAIController_ReturnValue, APawn* CallFunc_K2_GetPawn_ReturnValue, UEnemy_Character_Parent_C* K2Node_DynamicCast_AsEnemy_Character_Parent, bool K2Node_DynamicCast_bSuccess);
}

#endif
