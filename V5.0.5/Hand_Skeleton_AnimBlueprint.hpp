#ifndef UE4SS_SDK_Hand_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_Hand_Skeleton_AnimBlueprint_HPP

class UHand_Skeleton_AnimBlueprint_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_Slot AnimGraphNode_Slot;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_Hand_Skeleton_AnimBlueprint(int32 EntryPoint);
}

#endif
