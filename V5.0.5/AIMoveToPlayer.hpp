#ifndef UE4SS_SDK_AIMoveToPlayer_HPP
#define UE4SS_SDK_AIMoveToPlayer_HPP

class UAIMoveToPlayer_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Radius;
    float Offset;
    APlayer_Character_BP_C* Player;
    APawn* Enemy;
    bool Can Abort;
    float Wait Abort;
    bool Make Double Check;

    void OnFail_837800B24B11FF7F7F073DA177734DD3(uint8 MovementResult);
    void OnSuccess_837800B24B11FF7F7F073DA177734DD3(uint8 MovementResult);
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void ReceiveExecute(AActor* OwnerActor);
    void ExecuteUbergraph_AIMoveToPlayer(int32 EntryPoint, uint8 K2Node_CustomEvent_MovementResult_1, OAISimpleDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, uint8 K2Node_CustomEvent_MovementResult, OAISimpleDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, uint8 Temp_byte_Variable, AActor* K2Node_Event_OwnerActor_1, float K2Node_Event_DeltaSeconds, APawn* CallFunc_GetPlayerPawn_ReturnValue, UAIController* CallFunc_GetAIController_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, AActor* K2Node_Event_OwnerActor, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, float CallFunc_VSize_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_MakeVector_ReturnValue, UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
}

#endif
