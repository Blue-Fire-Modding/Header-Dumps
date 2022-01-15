#ifndef UE4SS_SDK_Difficulty_Actor_Deleter_HPP
#define UE4SS_SDK_Difficulty_Actor_Deleter_HPP

class ADifficulty_Actor_Deleter_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBillboardComponent* Billboard;
    TArray<AActor*> Actors;
    bool bOnEasy;
    bool bOnRecommended;
    bool bOnBrutal;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Difficulty_Actor_Deleter(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Array_Index_Variable, UGameInstance* CallFunc_GetGameInstance_ReturnValue, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance, bool K2Node_DynamicCast_bSuccess, AActor* CallFunc_Array_Get_Item, bool CallFunc_IsRobiValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<FName>& K2Node_MakeArray_Array, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Select_Default);
}

#endif
