#ifndef UE4SS_SDK_Collect_Souls_HPP
#define UE4SS_SDK_Collect_Souls_HPP

class ACollect_Souls_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* DefaultSceneRoot;

    void SecondWhoos();
    void UpdateLoc();
    void Spawn(FVector Location, float Souls, int32 Currency);
    void ExecuteUbergraph_Collect_Souls(int32 EntryPoint, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, FVector K2Node_CustomEvent_Location, float K2Node_CustomEvent_Souls, int32 K2Node_CustomEvent_Currency, APawn* CallFunc_GetPlayerPawn_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue);
}

#endif
