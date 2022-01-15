#ifndef UE4SS_SDK_BP_SimplePlatform_DieBound_HPP
#define UE4SS_SDK_BP_SimplePlatform_DieBound_HPP

class ABP_SimplePlatform_DieBound_C : ABP_SimplePlatform_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* Damage_MovingWalls1;
    UStaticMeshComponent* Damage_MovingWalls;

    void ReceiveActorBeginOverlap(AActor* OtherActor);
    void ExecuteUbergraph_BP_SimplePlatform_DieBound(int32 EntryPoint, AActor* K2Node_Event_OtherActor, int32 CallFunc_PostEventAtLocation_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_PostEventAtLocation_ReturnValue_1);
}

#endif
