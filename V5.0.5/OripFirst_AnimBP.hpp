#ifndef UE4SS_SDK_OripFirst_AnimBP_HPP
#define UE4SS_SDK_OripFirst_AnimBP_HPP

class UOripFirst_AnimBP_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;
    FAnimNode_LookAt AnimGraphNode_LookAt_1;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_LookAt AnimGraphNode_LookAt;
    FVector LookLocation;
    ANPC_Orip_ArcaneNorth_C* Orip;
    int32 SetCurrentAnim;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_OripFirst_AnimBP_AnimGraphNode_BlendListByBool_55315EF744C117DA63BD10B4043961AA();
    void BlueprintInitializeAnimation();
    void UpdatePlayerLoc();
    void Kill();
    void ExecuteUbergraph_OripFirst_AnimBP(int32 EntryPoint, APawn* CallFunc_TryGetPawnOwner_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, UNPC_Orip_ArcaneNorth_C* K2Node_DynamicCast_AsNPC_Orip_Arcane_North, bool K2Node_DynamicCast_bSuccess, APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue);
}

#endif
