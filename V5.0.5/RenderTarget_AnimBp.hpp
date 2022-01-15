#ifndef UE4SS_SDK_RenderTarget_AnimBp_HPP
#define UE4SS_SDK_RenderTarget_AnimBp_HPP

class URenderTarget_AnimBp_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6;
    FAnimNode_LookAt AnimGraphNode_LookAt;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3;
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_4;
    FAnimNode_Slot AnimGraphNode_Slot_4;
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_3;
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_1;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_Slot AnimGraphNode_Slot_3;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;
    FAnimNode_Slot AnimGraphNode_Slot_2;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics;
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_Slot AnimGraphNode_Slot_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2;
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_1;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;
    float Direction;
    bool Focus;
    bool Crouch;
    bool IsFalling;
    float VerticalSpeed;
    float Speed;
    FVector HeadRotation;
    bool WallSlide;
    float WallDirection;
    bool SpellCharge;
    FVector SpellLookAtLoc;
    bool LockedToTarget;
    float DeltaLean;
    float DeltaLeanHead;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_RenderTarget_AnimBp_AnimGraphNode_ModifyBone_655E5E3D47C7CF57CCC41E8063444313();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_RenderTarget_AnimBp_AnimGraphNode_ModifyBone_1A56C3E8440C7F69207961B92FE89D27();
    void ExecuteUbergraph_RenderTarget_AnimBp(int32 EntryPoint, FRotator CallFunc_MakeRotator_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue_1);
}

#endif
