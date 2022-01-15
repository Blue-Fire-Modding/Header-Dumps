#ifndef UE4SS_SDK_HineoAnimBlueprint_HPP
#define UE4SS_SDK_HineoAnimBlueprint_HPP

class UHineoAnimBlueprint_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_LookAt AnimGraphNode_LookAt;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;
    int32 CurrentAnim;
    bool LookAtPlayer;
    FVector LookAtLocation;
    ANPC_Master_Hineo_C* Hineo;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_HineoAnimBlueprint_AnimGraphNode_BlendListByBool_5D9FB162419361C59524F18F1C1C29CC();
    void BlueprintInitializeAnimation();
    void UpdatePlayerLoc();
    void ExecuteUbergraph_HineoAnimBlueprint(int32 EntryPoint, APawn* CallFunc_TryGetPawnOwner_ReturnValue, UNPC_Master_Hineo_C* K2Node_DynamicCast_AsNPC_Master_Hineo, bool K2Node_DynamicCast_bSuccess, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue);
}

#endif
