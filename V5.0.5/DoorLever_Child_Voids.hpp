#ifndef UE4SS_SDK_DoorLever_Child_Voids_HPP
#define UE4SS_SDK_DoorLever_Child_Voids_HPP

class ADoorLever_Child_Voids_C : UDoorLever_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool OpenFence;
    ADoor_BP_C* Fence;

    void Custom Activation(bool IsActivate);
    void ReceiveBeginPlay();
    void Force Deactivate();
    void ExecuteUbergraph_DoorLever_Child_Voids(int32 EntryPoint, OnDieBound__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsActivate);
}

#endif
