#ifndef UE4SS_SDK_Biera_controller_HPP
#define UE4SS_SDK_Biera_controller_HPP

class ABiera_controller_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBillboardComponent* Billboard_0;
    APlayer_Character_BP_C* Player;

    void ReceiveBeginPlay();
    void UmbraIdle();
    void UmbraEnd();
    void ExecuteUbergraph_Biera_controller(int32 EntryPoint, APawn* CallFunc_GetPlayerPawn_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess);
}

#endif
