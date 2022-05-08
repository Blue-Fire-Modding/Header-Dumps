#ifndef UE4SS_SDK_RoadDweller_AnimBp_HPP
#define UE4SS_SDK_RoadDweller_AnimBp_HPP

class URoadDweller_AnimBp_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_Slot AnimGraphNode_Slot_1;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_LookAt AnimGraphNode_LookAt;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;
    float Speed;
    FVector PlayerLocation;
    bool LookAtPlayer;
    int32 BlendSpace WalkCombat;
    int32 BlendSpace Walk;
    float Blend Time;
    float Play Rate;
    TEnumAsByte<E_RoadDwellerType::Type> EnemyType;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_RoadDweller_AnimBp_AnimGraphNode_BlendSpacePlayer_F7C162A14A8AD96BB88CA49AED0A0008();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void AnimNotify_FootStep();
    void AnimNotify_AttackMono();
    void AnimNotify_VocalAttack();
    void AnimNotify_AttackST();
    void AnimNotify_LampMovement();
    void AnimNotify_Idle_Breath();
    void ExecuteUbergraph_RoadDweller_AnimBp(int32 EntryPoint);
};

#endif
