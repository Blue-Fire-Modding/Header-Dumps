#ifndef UE4SS_SDK_LiveStatueRig_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_LiveStatueRig_Skeleton_AnimBlueprint_HPP

class ULiveStatueRig_Skeleton_AnimBlueprint_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    bool Moving;
    class ALifeStatue_C* Character;

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void AnimNotify_Step();
    void BlueprintInitializeAnimation();
    void ExecuteUbergraph_LiveStatueRig_Skeleton_AnimBlueprint(int32 EntryPoint);
};

#endif
