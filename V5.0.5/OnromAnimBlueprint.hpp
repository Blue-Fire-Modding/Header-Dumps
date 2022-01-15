#ifndef UE4SS_SDK_OnromAnimBlueprint_HPP
#define UE4SS_SDK_OnromAnimBlueprint_HPP

class UOnromAnimBlueprint_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;
    FAnimNode_LookAt AnimGraphNode_LookAt;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    int32 CurrentAnim;
    ANPC_Onop_Onrom_C* Onrom;
    FVector LookAtLocation;
    bool LookAtPlayer;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_OnromAnimBlueprint_AnimGraphNode_BlendListByBool_265F42DA432990304A9A2E985D056D66();
    void BlueprintInitializeAnimation();
    void UpdatePlayerLoc();
    void ExecuteUbergraph_OnromAnimBlueprint(int32 EntryPoint, APawn* CallFunc_TryGetPawnOwner_ReturnValue, UNPC_Onop_Onrom_C* K2Node_DynamicCast_AsNPC_Onop_Onrom, bool K2Node_DynamicCast_bSuccess, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue);
}

#endif
