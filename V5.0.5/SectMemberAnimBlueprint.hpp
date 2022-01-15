#ifndef UE4SS_SDK_SectMemberAnimBlueprint_HPP
#define UE4SS_SDK_SectMemberAnimBlueprint_HPP

class USectMemberAnimBlueprint_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_Slot AnimGraphNode_Slot;
    int32 CurrentAnim;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_SectMemberAnimBlueprint(int32 EntryPoint);
}

#endif
