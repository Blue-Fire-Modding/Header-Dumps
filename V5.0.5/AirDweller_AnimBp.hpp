#ifndef UE4SS_SDK_AirDweller_AnimBp_HPP
#define UE4SS_SDK_AirDweller_AnimBp_HPP

class UAirDweller_AnimBp_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_Slot AnimGraphNode_Slot;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_AirDweller_AnimBp(int32 EntryPoint);
}

#endif
