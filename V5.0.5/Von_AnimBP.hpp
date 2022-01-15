#ifndef UE4SS_SDK_Von_AnimBP_HPP
#define UE4SS_SDK_Von_AnimBP_HPP

class UVon_AnimBP_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_LookAt AnimGraphNode_LookAt_2;
    FAnimNode_LookAt AnimGraphNode_LookAt_1;
    FAnimNode_LookAt AnimGraphNode_LookAt;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FVector PlayerLoc;
    bool PogbaPose;
    bool waa;
    ANPC_Von_C* Von;
    FVector LookAtLocation;
    bool LookAtPlayer;
    int32 SetCurrentAnim;

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintInitializeAnimation();
    void UpdatePlayerLoc();
    void ExecuteUbergraph_Von_AnimBP(int32 EntryPoint, APawn* CallFunc_TryGetPawnOwner_ReturnValue, UNPC_Von_C* K2Node_DynamicCast_AsNPC_Von, bool K2Node_DynamicCast_bSuccess, APawn* CallFunc_GetPlayerPawn_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue);
}

#endif
