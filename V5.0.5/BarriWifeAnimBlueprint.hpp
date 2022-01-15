#ifndef UE4SS_SDK_BarriWifeAnimBlueprint_HPP
#define UE4SS_SDK_BarriWifeAnimBlueprint_HPP

class UBarriWifeAnimBlueprint_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_BarriWifeAnimBlueprint(int32 EntryPoint);
}

#endif
