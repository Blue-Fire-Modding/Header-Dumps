#ifndef UE4SS_SDK_Lord_Smoke_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_Lord_Smoke_Skeleton_AnimBlueprint_HPP

class ULord_Smoke_Skeleton_AnimBlueprint_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    float Speed;
    bool Look at Player;
    FVector Player Location;
    float Blend Time;
    TEnumAsByte<E_Lord3_AnimState::Type> Anim State;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Lord_Smoke_Skeleton_AnimBlueprint_AnimGraphNode_BlendListByInt_278E16F34CF7EF2A9DE8C3B3C24979FC();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_Lord_Smoke_Skeleton_AnimBlueprint(int32 EntryPoint, int32 CallFunc_Conv_ByteToInt_ReturnValue, float K2Node_Event_DeltaTimeX, APawn* CallFunc_TryGetPawnOwner_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, FVector CallFunc_GetVelocity_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_VSize_ReturnValue);
}

#endif
