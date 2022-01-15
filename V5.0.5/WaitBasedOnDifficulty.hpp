#ifndef UE4SS_SDK_WaitBasedOnDifficulty_HPP
#define UE4SS_SDK_WaitBasedOnDifficulty_HPP

class UWaitBasedOnDifficulty_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    float HardDelay;
    float RecommendedDelay;
    float EasyDelay;
    float RandomDeviation;

    void ReceiveExecute(AActor* OwnerActor);
    void ReceiveAbort(AActor* OwnerActor);
    void ExecuteUbergraph_WaitBasedOnDifficulty(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, int32 Temp_int_Variable, AActor* K2Node_Event_OwnerActor_1, AActor* K2Node_Event_OwnerActor, UGameInstance* CallFunc_GetGameInstance_ReturnValue, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance, bool K2Node_DynamicCast_bSuccess, float K2Node_Select_Default, float CallFunc_Add_FloatFloat_ReturnValue);
}

#endif
