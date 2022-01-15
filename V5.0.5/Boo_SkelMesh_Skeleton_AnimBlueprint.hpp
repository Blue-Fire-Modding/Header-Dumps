#ifndef UE4SS_SDK_Boo_SkelMesh_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_Boo_SkelMesh_Skeleton_AnimBlueprint_HPP

class UBoo_SkelMesh_Skeleton_AnimBlueprint_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;
    FAnimNode_LookAt AnimGraphNode_LookAt_1;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_LookAt AnimGraphNode_LookAt;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    AEnemy_Character_Parent_C* Boo;
    bool Aerial;
    FVector Player;
    bool Angry;
    float Speed;
    float MaxSpeed;
    float Play Rate;
    bool AngryIdle;

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintInitializeAnimation();
    void AnimNotify_Hit();
    void AnimNotify_HitGround();
    void AnimNotify_Walk();
    void ExecuteUbergraph_Boo_SkelMesh_Skeleton_AnimBlueprint(int32 EntryPoint, float K2Node_Event_DeltaTimeX, APawn* CallFunc_TryGetPawnOwner_ReturnValue, UEnemy_Character_Parent_C* K2Node_DynamicCast_AsEnemy_Character_Parent, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_GetVelocity_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_MakeVector_ReturnValue, float CallFunc_VSize_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue, float CallFunc_NormalizeToRange_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2);
}

#endif
