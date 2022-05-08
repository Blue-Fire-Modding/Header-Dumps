#ifndef UE4SS_SDK_NPCBound_Pawn_HPP
#define UE4SS_SDK_NPCBound_Pawn_HPP

class ANPCBound_Pawn_C : public ANPCBound_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void AlreadyUsed();
    void ExecuteUbergraph_NPCBound_Pawn(int32 EntryPoint);
};

#endif
