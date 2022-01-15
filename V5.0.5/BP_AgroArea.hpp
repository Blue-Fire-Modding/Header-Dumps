#ifndef UE4SS_SDK_BP_AgroArea_HPP
#define UE4SS_SDK_BP_AgroArea_HPP

class ABP_AgroArea_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBoxComponent* Box;
    TArray<AEnemy_Character_Parent_C*> Enemies;
    bool JustUsed;
    bool EndOverlap;

    void ReceiveActorBeginOverlap(AActor* OtherActor);
    void ReceiveActorEndOverlap(AActor* OtherActor);
    void DelayEnd();
    void ExecuteUbergraph_BP_AgroArea(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, bool Temp_bool_IsClosed_Variable, int32 Temp_int_Loop_Counter_Variable_2, bool Temp_bool_Has_Been_Initd_Variable, int32 CallFunc_Add_IntInt_ReturnValue_2, AActor* K2Node_Event_OtherActor_1, AActor* K2Node_Event_OtherActor, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, UEnemy_Character_Parent_C* CallFunc_Array_Get_Item, bool CallFunc_IsRobiValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UEnemy_Character_Parent_C* CallFunc_Array_Get_Item_1, bool CallFunc_IsRobiValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, UEnemy_Character_Parent_C* CallFunc_Array_Get_Item_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2);
}

#endif
