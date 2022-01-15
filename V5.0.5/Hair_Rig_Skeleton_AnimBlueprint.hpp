#ifndef UE4SS_SDK_Hair_Rig_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_Hair_Rig_Skeleton_AnimBlueprint_HPP

class UHair_Rig_Skeleton_AnimBlueprint_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FVector Force;

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_Hair_Rig_Skeleton_AnimBlueprint(int32 EntryPoint, float K2Node_Event_DeltaTimeX);
}

#endif
