#ifndef UE4SS_SDK_Mia_AnimBP_HPP
#define UE4SS_SDK_Mia_AnimBP_HPP

class UMia_AnimBP_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_LookAt AnimGraphNode_LookAt;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    int32 CurrentAnim;
    class ANPC_Mia_C* Mia;
    FVector LookAtLocation;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Mia_AnimBP_AnimGraphNode_BlendListByBool_24D9EBDF47020876445DD0A91DD6F54E();
    void AnimNotify_HitWrench();
    void BlueprintInitializeAnimation();
    void UpdatePlayerLoc();
    void AnimNotify_Mia_Gear_Hit();
    void AnimNotify_Mia_Hit();
    void AnimNotify_Mia_Work();
    void AnimNotify_Mira_Chage();
    void Kill();
    void ExecuteUbergraph_Mia_AnimBP(int32 EntryPoint);
};

#endif
