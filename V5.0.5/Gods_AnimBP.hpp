#ifndef UE4SS_SDK_Gods_AnimBP_HPP
#define UE4SS_SDK_Gods_AnimBP_HPP

class UGods_AnimBP_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    int32 SetCurrentAnim;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_Gods_AnimBP(int32 EntryPoint);
}

#endif
