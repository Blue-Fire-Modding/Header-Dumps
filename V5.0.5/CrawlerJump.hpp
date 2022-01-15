#ifndef UE4SS_SDK_CrawlerJump_HPP
#define UE4SS_SDK_CrawlerJump_HPP

class UCrawlerJump_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    float ZJump;
    float Velocity;
    UAnimMontage* AnimMontage;
    float PreDelay;

    void ReceiveExecute(AActor* OwnerActor);
    void ExecuteUbergraph_CrawlerJump(int32 EntryPoint, APawn* CallFunc_GetPlayerPawn_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, AActor* K2Node_Event_OwnerActor, UAIController* CallFunc_GetAIController_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, APawn* CallFunc_K2_GetPawn_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, UEnemy_Character_Parent_C* K2Node_DynamicCast_AsEnemy_Character_Parent, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, FRotator CallFunc_FindLookAtRotation_ReturnValue, FRotator CallFunc_FindLookAtRotation_ReturnValue_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, FRotator CallFunc_MakeRotator_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue_1, bool CallFunc_K2_SetActorRotation_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue_1, FVector CallFunc_GetDirectionUnitVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_PlayAnimMontage_ReturnValue, FVector CallFunc_MakeVector_ReturnValue);
}

#endif
