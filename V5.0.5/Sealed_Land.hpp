#ifndef UE4SS_SDK_Sealed_Land_HPP
#define UE4SS_SDK_Sealed_Land_HPP

class ASealed_Land_C : ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Sealed_Land(int32 EntryPoint, int32 CallFunc_PostEventAtLocation_ReturnValue);
}

#endif
