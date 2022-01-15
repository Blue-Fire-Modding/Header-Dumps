#ifndef UE4SS_SDK_MoveInputToInit_HPP
#define UE4SS_SDK_MoveInputToInit_HPP

class UMoveInputToInit_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Distance Min;
    bool Initial Rotation;
    bool Rot On;
    float Rotate Speed;
    float Rotate Speed Curve;
    AEnemy_Character_Parent_C* Enemy Character;
    bool Check In Room Center;
    bool Ignore Z;
    bool Trigger Event;
    bool CheckPlayerIsDead;

    void ReceiveExecute(AActor* OwnerActor);
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void ExecuteUbergraph_MoveInputToInit(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, AActor* K2Node_Event_OwnerActor_1, UAIController* CallFunc_GetAIController_ReturnValue, APawn* CallFunc_K2_GetPawn_ReturnValue, UEnemy_Character_Parent_C* K2Node_DynamicCast_AsEnemy_Character_Parent, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue_2, FVector CallFunc_MakeVector_ReturnValue_3, AActor* K2Node_Event_OwnerActor, float K2Node_Event_DeltaSeconds, FVector K2Node_Select_Default, FVector K2Node_Select_Default_1, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_GetDirectionUnitVector_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
}

#endif
