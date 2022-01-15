#ifndef UE4SS_SDK_TalkOnop_AnimBP_HPP
#define UE4SS_SDK_TalkOnop_AnimBP_HPP

class UTalkOnop_AnimBP_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;
    FAnimNode_LookAt AnimGraphNode_LookAt;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    int32 CurrentAnim;
    ANPC_Master_Onop_C* MasterOnop;
    FVector LookAtLocation;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_TalkOnop_AnimBP_AnimGraphNode_BlendListByBool_EE2F83CB4F2ECF13C0C6D5A38F3634F2();
    void BlueprintInitializeAnimation();
    void UpdatePlayerLoc();
    void ExecuteUbergraph_TalkOnop_AnimBP(int32 EntryPoint, APawn* CallFunc_GetPlayerPawn_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, APawn* CallFunc_TryGetPawnOwner_ReturnValue, UNPC_Master_Onop_C* K2Node_DynamicCast_AsNPC_Master_Onop, bool K2Node_DynamicCast_bSuccess, FTimerHandle CallFunc_K2_SetTimer_ReturnValue);
}

#endif
