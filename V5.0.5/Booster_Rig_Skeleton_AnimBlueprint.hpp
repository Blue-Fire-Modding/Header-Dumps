#ifndef UE4SS_SDK_Booster_Rig_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_Booster_Rig_Skeleton_AnimBlueprint_HPP

class UBooster_Rig_Skeleton_AnimBlueprint_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_Slot AnimGraphNode_Slot;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_Booster_Rig_Skeleton_AnimBlueprint(int32 EntryPoint);
}

#endif
