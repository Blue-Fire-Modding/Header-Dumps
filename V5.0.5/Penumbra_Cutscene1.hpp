#ifndef UE4SS_SDK_Penumbra_Cutscene1_HPP
#define UE4SS_SDK_Penumbra_Cutscene1_HPP

class UPenumbra_Cutscene1_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_Slot AnimGraphNode_Slot;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_Penumbra_Cutscene1(int32 EntryPoint);
}

#endif
