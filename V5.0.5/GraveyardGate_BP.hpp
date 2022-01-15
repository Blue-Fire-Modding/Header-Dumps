#ifndef UE4SS_SDK_GraveyardGate_BP_HPP
#define UE4SS_SDK_GraveyardGate_BP_HPP

class AGraveyardGate_BP_C : UDoor_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void InstantUnlockExtra();
    void ExecuteUbergraph_GraveyardGate_BP(int32 EntryPoint);
}

#endif
