#ifndef UE4SS_SDK_TempleBellAnimBP_HPP
#define UE4SS_SDK_TempleBellAnimBP_HPP

class UTempleBellAnimBP_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;
    bool Activated;
    int32 Set Current Anim;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_TempleBellAnimBP(int32 EntryPoint);
}

#endif
