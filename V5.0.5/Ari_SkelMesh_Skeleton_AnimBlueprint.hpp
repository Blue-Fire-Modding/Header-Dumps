#ifndef UE4SS_SDK_Ari_SkelMesh_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_Ari_SkelMesh_Skeleton_AnimBlueprint_HPP

class UAri_SkelMesh_Skeleton_AnimBlueprint_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;
    FAnimNode_LookAt AnimGraphNode_LookAt;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FVector LookAtLocation;
    ANPC_TunicMaker_C* Ari;
    float YawHead;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Ari_SkelMesh_Skeleton_AnimBlueprint_AnimGraphNode_BlendListByBool_1CAC4CF045A8FF3B93B435957FD84548();
    void BlueprintInitializeAnimation();
    void UpdatePlayerLoc();
    void AnimNotify_Ari_Lamp();
    void ExecuteUbergraph_Ari_SkelMesh_Skeleton_AnimBlueprint(int32 EntryPoint, APawn* CallFunc_TryGetPawnOwner_ReturnValue, UNPC_TunicMaker_C* K2Node_DynamicCast_AsNPC_Tunic_Maker, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1);
}

#endif
