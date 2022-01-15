#ifndef UE4SS_SDK_FadePlatfom_AnimBP_HPP
#define UE4SS_SDK_FadePlatfom_AnimBP_HPP

class UFadePlatfom_AnimBP_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    bool Opened;
    int32 currentPose;
    float Close Time;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_FadePlatfom_AnimBP_AnimGraphNode_BlendListByInt_D8B513984217730C7BF0CCB54947F99A();
    void ExecuteUbergraph_FadePlatfom_AnimBP(int32 EntryPoint, float CallFunc_SelectFloat_ReturnValue);
}

#endif
