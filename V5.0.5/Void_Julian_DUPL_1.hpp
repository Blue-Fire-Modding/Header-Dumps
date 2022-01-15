#ifndef UE4SS_SDK_Void_Julian_DUPL_1_HPP
#define UE4SS_SDK_Void_Julian_DUPL_1_HPP

class AVoid_Julian_C : ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Void_Julian(int32 EntryPoint, int32 CallFunc_PostEventAtLocation_ReturnValue);
}

#endif
