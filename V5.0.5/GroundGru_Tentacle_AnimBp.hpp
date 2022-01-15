#ifndef UE4SS_SDK_GroundGru_Tentacle_AnimBp_HPP
#define UE4SS_SDK_GroundGru_Tentacle_AnimBp_HPP

class UGroundGru_Tentacle_AnimBp_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    float StartPos;
    int32 SetCurrentAnim;
    float BlendTimeSleep;

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintInitializeAnimation();
    void ExecuteUbergraph_GroundGru_Tentacle_AnimBp(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue);
}

#endif
