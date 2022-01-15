#ifndef UE4SS_SDK_EditorScreen_AnimBp_HPP
#define UE4SS_SDK_EditorScreen_AnimBp_HPP

class UEditorScreen_AnimBP_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;
    float Start;
    FRotator HeadRot;
    FRotator TorsoRot;
    FRotator RArmRot;
    FRotator LArmRot;
    UAnimSequenceBase* Animation;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_EditorScreen_AnimBP(int32 EntryPoint);
}

#endif
