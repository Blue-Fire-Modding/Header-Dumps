#ifndef UE4SS_SDK_Lord_2_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_Lord_2_Skeleton_AnimBlueprint_HPP

class ULord_2_Skeleton_AnimBlueprint_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    bool Idle Balls;
    float Rolling Play Rate;
    TEnumAsByte<E_Lord2_AnimState::Type> AnimState;
    bool LookAtPlayer;
    FVector PlayerLocation;
    float Speed;
    float Blend Time;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Lord_2_Skeleton_AnimBlueprint_AnimGraphNode_BlendListByInt_52BD95E14C4EA2946F1F2CA2A11545EF();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void AnimNotify_Fire_Lord_Show_Claws();
    void AnimNotify_Fire_Lord_Smash_Balls();
    void AnimNotify_Fire_Lord_Spinning_Balls_Stage_02_Begins();
    void AnimNotify_Fire_Lord_Spinning_Balls_Stage_03_Begins();
    void AnimNotify_Fire_Lord_Stage_01_Scream();
    void AnimNotify_Fire_Lord_Stage_02_VO_Scream();
    void AnimNotify_Fire_Lord_VO_Scream_Stage_03_Begins();
    void AnimNotify_Fire_Lord_VO_Stun();
    void AnimNotify_Fire_Lord_Rain_Ball_VO_Attack();
    void AnimNotify_Camera_Whoosh();
    void AnimNotify_Fire_Lord_Pre_Stage_01_Begin();
    void ExecuteUbergraph_Lord_2_Skeleton_AnimBlueprint(int32 EntryPoint, int32 CallFunc_Conv_ByteToInt_ReturnValue, float K2Node_Event_DeltaTimeX, APawn* CallFunc_TryGetPawnOwner_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue_4, int32 CallFunc_PostEventAtLocation_ReturnValue_5, int32 CallFunc_PostEventAtLocation_ReturnValue_6, int32 CallFunc_PostEventAtLocation_ReturnValue_7, int32 CallFunc_PostEventAtLocation_ReturnValue_8, int32 CallFunc_PostEventAtLocation_ReturnValue_9, int32 CallFunc_PostEventAtLocation_ReturnValue_10, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_GetVelocity_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_MakeVector_ReturnValue, float CallFunc_VSize_ReturnValue);
}

#endif
