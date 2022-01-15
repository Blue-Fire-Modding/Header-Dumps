#ifndef UE4SS_SDK_OnariAnimBlueprint_HPP
#define UE4SS_SDK_OnariAnimBlueprint_HPP

class UOnariAnimBlueprint_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_LookAt AnimGraphNode_LookAt;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;
    int32 CurrentAnim;
    ANPC_Master_Onari_C* Onari;
    FVector LookAtLocation;
    bool LookAtPlayer;

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintInitializeAnimation();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_OnariAnimBlueprint_AnimGraphNode_BlendListByBool_493D0132476A83CE40FACBBFB344FB12();
    void UpdatePlayerLoc();
    void AnimNotify_OnopJumpVO();
    void ExecuteUbergraph_OnariAnimBlueprint(int32 EntryPoint, bool CallFunc_RandomBoolWithWeight_ReturnValue, APawn* CallFunc_TryGetPawnOwner_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, UNPC_Master_Onari_C* K2Node_DynamicCast_AsNPC_Master_Onari, bool K2Node_DynamicCast_bSuccess, APawn* CallFunc_GetPlayerPawn_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue);
}

#endif
