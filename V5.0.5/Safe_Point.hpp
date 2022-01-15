#ifndef UE4SS_SDK_Safe_Point_HPP
#define UE4SS_SDK_Safe_Point_HPP

class ASafe_Point_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UDecalComponent* Decal;
    UBillboardComponent* Billboard;
    UArrowComponent* Arrow;
    UBoxComponent* Box;
    USceneComponent* DefaultSceneRoot;
    APlayer_Character_BP_C* Player;
    bool DEPRECATEDIgnoreHasToBeOnFloor;
    float ZOffeset;
    TArray<FName> Visible Levels;
    TArray<FName> Hide Levels;
    AMusic_Trigger_Enter_Exit_2_C* Music Trigger;
    bool UseConstruction;

    void UserConstructionScript(const TArray<AActor*>& Temp_object_Variable, const TArray<uint8>& K2Node_MakeArray_Array, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, FVector CallFunc_Subtract_VectorVector_ReturnValue, FHitResult CallFunc_LineTraceSingleForObjects_OutHit, bool CallFunc_LineTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_1, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult_1);
    void ReceiveActorBeginOverlap(AActor* OtherActor);
    void ReceiveActorEndOverlap(AActor* OtherActor);
    void StopCheck();
    void Force Overlap();
    void ExecuteUbergraph_Safe_Point(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_Not_PreBool_ReturnValue, AActor* K2Node_Event_OtherActor_1, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, FRotator CallFunc_K2_GetComponentRotation_ReturnValue, FVector CallFunc_Conv_RotatorToVector_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, AActor* K2Node_Event_OtherActor, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FName CallFunc_Array_Get_Item, FName CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, TArray<AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, APawn* CallFunc_GetPlayerPawn_ReturnValue, AActor* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
}

#endif
