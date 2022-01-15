#ifndef UE4SS_SDK_PlayExpression_HPP
#define UE4SS_SDK_PlayExpression_HPP

class UPlayExpression_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    TEnumAsByte<E_Expression::Type> Expression;
    float Probability;
    bool OnlyIfMissedPlayer;
    float Delay;
    UAnimMontage* Anim;
    UTexture2D* Texture;
    FVector2D Pivot;
    UAkAudioEvent* Sound;
    AEnemy_Character_Parent_C* Enemy;

    void ReceiveAbort(AActor* OwnerActor);
    void ReceiveExecute(AActor* OwnerActor);
    void ExecuteUbergraph_PlayExpression(int32 EntryPoint, bool CallFunc_RandomBoolWithWeight_ReturnValue, AActor* K2Node_Event_OwnerActor, bool CallFunc_BooleanAND_ReturnValue, UAIController* CallFunc_GetAIController_ReturnValue, APawn* CallFunc_K2_GetPawn_ReturnValue, AActor* K2Node_Event_OwnerActor_1, UEnemy_Character_Parent_C* K2Node_DynamicCast_AsEnemy_Character_Parent, bool K2Node_DynamicCast_bSuccess);
}

#endif
