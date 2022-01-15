#ifndef UE4SS_SDK_Centry_Forest_AnimBP_HPP
#define UE4SS_SDK_Centry_Forest_AnimBP_HPP

class UCentry_Forest_AnimBP_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_Centry_Forest_AnimBP(int32 EntryPoint);
}

#endif
