#ifndef UE4SS_SDK_Von_Cinematics_AnimBP_HPP
#define UE4SS_SDK_Von_Cinematics_AnimBP_HPP

class UVon_Cinematics_AnimBP_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    int32 SetCurrentAnim;
    float Blend Time;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_Von_Cinematics_AnimBP(int32 EntryPoint);
}

#endif
