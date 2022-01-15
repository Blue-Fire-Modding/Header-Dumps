#ifndef UE4SS_SDK_MoveInputToRandomPlatform_HPP
#define UE4SS_SDK_MoveInputToRandomPlatform_HPP

class UMoveInputToRandomPlatform_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    AEnemy_Character_Parent_C* Enemy Character;
    float PlatformDistance;
    FVector Enemy Location;
    float Z axis off;
    float Distance;
    FVector Target Location;
    TArray<FVector> Location To Move;
    TArray<int32> Index Control;
    int32 Random Index;
    int32 Random Temp;

    void ReceiveExecute(AActor* OwnerActor);
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void ExecuteUbergraph_MoveInputToRandomPlatform(int32 EntryPoint, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_Array_Get_Item, AActor* K2Node_Event_OwnerActor_1, UAIController* CallFunc_GetAIController_ReturnValue, APawn* CallFunc_K2_GetPawn_ReturnValue, AActor* K2Node_Event_OwnerActor, float K2Node_Event_DeltaSeconds, UEnemy_Character_Parent_C* K2Node_DynamicCast_AsEnemy_Character_Parent, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_Vector_Forward_ReturnValue, FVector CallFunc_Vector_Right_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_Vector_Backward_ReturnValue, FVector CallFunc_Vector_Left_ReturnValue, TArray<FVector>& K2Node_MakeArray_Array, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, int32 CallFunc_Array_Get_Item_1, FVector CallFunc_Array_Get_Item_2, FVector CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FVector CallFunc_GetDirectionUnitVector_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, FVector CallFunc_Subtract_VectorVector_ReturnValue_1, float CallFunc_VSize_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue_1);
}

#endif
