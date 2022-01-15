#ifndef UE4SS_SDK_TeleportOutIn_HPP
#define UE4SS_SDK_TeleportOutIn_HPP

class UTeleportOutIn_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool In;
    bool ForceComplete;

    void ReceiveExecute(AActor* OwnerActor);
    void Finish();
    void ExecuteUbergraph_TeleportOutIn(int32 EntryPoint, AActor* K2Node_Event_OwnerActor, UAIController* CallFunc_GetAIController_ReturnValue, APawn* CallFunc_K2_GetPawn_ReturnValue, UEnemy_Character_Parent_C* K2Node_DynamicCast_AsEnemy_Character_Parent, bool K2Node_DynamicCast_bSuccess, TeleportOutDone__DelegateSignature K2Node_CreateDelegate_OutputDelegate);
}

#endif
