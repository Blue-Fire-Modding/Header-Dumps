#ifndef UE4SS_SDK_Void_Saw_HPP
#define UE4SS_SDK_Void_Saw_HPP

class AVoid_Saw_C : ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Void_Saw(int32 EntryPoint, int32 CallFunc_PostEventAtLocation_ReturnValue);
}

#endif
