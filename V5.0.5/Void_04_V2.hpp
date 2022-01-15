#ifndef UE4SS_SDK_Void_04_V2_HPP
#define UE4SS_SDK_Void_04_V2_HPP

class AVoid_04_V2_C : ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Void_04_V2(int32 EntryPoint, int32 CallFunc_PostEventAtLocation_ReturnValue);
}

#endif
