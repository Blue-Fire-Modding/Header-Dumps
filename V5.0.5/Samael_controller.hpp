#ifndef UE4SS_SDK_Samael_controller_HPP
#define UE4SS_SDK_Samael_controller_HPP

class ASamael_controller_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBillboardComponent* Billboard_0;
    APlayer_Character_BP_C* Player;

    void ReceiveBeginPlay();
    void UmbraIdle();
    void UmbraEnd();
    void ExecuteUbergraph_Samael_controller(int32 EntryPoint, APawn* CallFunc_GetPlayerPawn_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess);
}

#endif