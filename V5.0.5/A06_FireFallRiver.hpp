#ifndef UE4SS_SDK_A06_FireFallRiver_HPP
#define UE4SS_SDK_A06_FireFallRiver_HPP

class AA06_FireFallRiver_C : ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    AStaticMeshActor* DoorHouse_ExecuteUbergraph_A06_FireFallRiver_RefProperty;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_A06_FireFallRiver(int32 EntryPoint, bool CallFunc_HasItem_Success, int32 CallFunc_HasItem_ItemAmount);
}

#endif
