#ifndef UE4SS_SDK_OpiAnimBlueprint_HPP
#define UE4SS_SDK_OpiAnimBlueprint_HPP

class UOpiAnimBlueprint_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    int32 CurrentAnim;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_OpiAnimBlueprint(int32 EntryPoint);
}

#endif
