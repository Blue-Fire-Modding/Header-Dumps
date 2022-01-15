#ifndef UE4SS_SDK_Void_Maker_HPP
#define UE4SS_SDK_Void_Maker_HPP

class AVoid_Maker_C : ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Void_Maker(int32 EntryPoint, int32 CallFunc_PostEventAtLocation_ReturnValue);
}

#endif
