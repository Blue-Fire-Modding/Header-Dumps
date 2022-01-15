#ifndef UE4SS_SDK_LostSoul_SkelMesh_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_LostSoul_SkelMesh_Skeleton_AnimBlueprint_HPP

class ULostSoul_SkelMesh_Skeleton_AnimBlueprint_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    bool Attack;
    bool Stun;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_LostSoul_SkelMesh_Skeleton_AnimBlueprint(int32 EntryPoint);
}

#endif
