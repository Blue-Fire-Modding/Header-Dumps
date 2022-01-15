#ifndef UE4SS_SDK_VoidStone_AnimBP_HPP
#define UE4SS_SDK_VoidStone_AnimBP_HPP

class UVoidStone_AnimBP_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    bool Opened;
    float Blend Time;
    bool IsChanging;
    int32 StateChange;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_VoidStone_AnimBP(int32 EntryPoint);
}

#endif
