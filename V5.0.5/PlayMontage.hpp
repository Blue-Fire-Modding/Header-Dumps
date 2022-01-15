#ifndef UE4SS_SDK_PlayMontage_HPP
#define UE4SS_SDK_PlayMontage_HPP

class UPlayMontage_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAnimMontage* Anim;
    float Delay;
    AEnemy_Character_Parent_C* Enemy;

    void ReceiveExecute(AActor* OwnerActor);
    void ReceiveAbort(AActor* OwnerActor);
    void ExecuteUbergraph_PlayMontage(int32 EntryPoint, AActor* K2Node_Event_OwnerActor_1, UAIController* CallFunc_GetAIController_ReturnValue, APawn* CallFunc_K2_GetPawn_ReturnValue, UEnemy_Character_Parent_C* K2Node_DynamicCast_AsEnemy_Character_Parent, bool K2Node_DynamicCast_bSuccess, float CallFunc_PlayAnimMontage_ReturnValue, AActor* K2Node_Event_OwnerActor);
}

#endif
