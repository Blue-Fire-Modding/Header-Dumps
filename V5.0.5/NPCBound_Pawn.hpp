#ifndef UE4SS_SDK_NPCBound_Pawn_HPP
#define UE4SS_SDK_NPCBound_Pawn_HPP

class ANPCBound_Pawn_C : ANPCBound_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_NPCBound_Pawn(int32 EntryPoint, AActor* CallFunc_GetParentActor_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue, UNPC_Parent_C* K2Node_DynamicCast_AsNPC_Parent, bool K2Node_DynamicCast_bSuccess);
}

#endif
