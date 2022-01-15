#ifndef UE4SS_SDK_KinAnimBlueprint_HPP
#define UE4SS_SDK_KinAnimBlueprint_HPP

class UKinAnimBlueprint_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_LookAt AnimGraphNode_LookAt;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    int32 CurrentAnim;
    bool LookAtPlayer;
    FVector LookAtLocation;
    ANPC_Onop_Kin_C* Kin;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_KinAnimBlueprint_AnimGraphNode_BlendListByBool_CE01B108439FE4D272CE06A82154E6BC();
    void BlueprintInitializeAnimation();
    void UpdatePlayerLoc();
    void AnimNotify_Onop_Step();
    void ExecuteUbergraph_KinAnimBlueprint(int32 EntryPoint, APawn* CallFunc_TryGetPawnOwner_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UNPC_Onop_Kin_C* K2Node_DynamicCast_AsNPC_Onop_Kin, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_PostEventAtLocation_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1);
}

#endif
