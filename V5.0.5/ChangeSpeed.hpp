#ifndef UE4SS_SDK_ChangeSpeed_HPP
#define UE4SS_SDK_ChangeSpeed_HPP

class UChangeSpeed_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    float NewSpeed;
    bool Fly;
    FVector2D RandomVariation;

    void ReceiveExecute(AActor* OwnerActor);
    void ExecuteUbergraph_ChangeSpeed(int32 EntryPoint, float CallFunc_FClamp_ReturnValue, AActor* K2Node_Event_OwnerActor, UAIController* CallFunc_GetAIController_ReturnValue, APawn* CallFunc_K2_GetPawn_ReturnValue, UEnemy_Character_Parent_C* K2Node_DynamicCast_AsEnemy_Character_Parent, bool K2Node_DynamicCast_bSuccess);
}

#endif
