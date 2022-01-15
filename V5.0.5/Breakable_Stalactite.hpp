#ifndef UE4SS_SDK_Breakable_Stalactite_HPP
#define UE4SS_SDK_Breakable_Stalactite_HPP

class ABreakable_Stalactite_C : AIO_Breakable_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Breakable_Stalactite(int32 EntryPoint, FVector CallFunc_GetActorScale3D_ReturnValue);
}

#endif
