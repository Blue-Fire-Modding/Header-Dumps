#ifndef UE4SS_SDK_MonAnimBlueprint_HPP
#define UE4SS_SDK_MonAnimBlueprint_HPP

class UMonAnimBlueprint_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_LookAt AnimGraphNode_LookAt;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;
    int32 CurrentAnim;
    bool LookAtPlayer;
    FVector LookAtLocation;
    ANPC_Onop_Mon_C* Mon;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_MonAnimBlueprint_AnimGraphNode_BlendListByBool_85AEA25E45260958AE4ED28735D37C86();
    void BlueprintInitializeAnimation();
    void UpdatePlayerLoc();
    void ExecuteUbergraph_MonAnimBlueprint(int32 EntryPoint, APawn* CallFunc_TryGetPawnOwner_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, UNPC_Onop_Mon_C* K2Node_DynamicCast_AsNPC_Onop_Mon, bool K2Node_DynamicCast_bSuccess, APawn* CallFunc_GetPlayerPawn_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue);
}

#endif
