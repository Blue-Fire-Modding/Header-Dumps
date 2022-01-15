#ifndef UE4SS_SDK_Sealed_Land_End_HPP
#define UE4SS_SDK_Sealed_Land_End_HPP

class ASealed_Land_End_C : ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Sealed_Land_End(int32 EntryPoint);
}

#endif
