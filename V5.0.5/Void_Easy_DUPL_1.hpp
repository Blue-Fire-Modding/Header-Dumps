#ifndef UE4SS_SDK_Void_Easy_DUPL_1_HPP
#define UE4SS_SDK_Void_Easy_DUPL_1_HPP

class AVoid_Easy_C : ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Void_Easy(int32 EntryPoint, int32 CallFunc_PostEventAtLocation_ReturnValue);
}

#endif
