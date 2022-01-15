#ifndef UE4SS_SDK_OnopDancing_AnimBP_HPP
#define UE4SS_SDK_OnopDancing_AnimBP_HPP

class UOnopDancing_AnimBP_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_LookAt AnimGraphNode_LookAt;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_Slot AnimGraphNode_Slot;
    ANPC_Master_Onop_C* MasterOnop;
    FVector LookAtLocation;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_OnopDancing_AnimBP_AnimGraphNode_BlendListByBool_174FE37642F04771D322FAA6A5406926();
    void BlueprintInitializeAnimation();
    void UpdatePlayerLoc();
    void ExecuteUbergraph_OnopDancing_AnimBP(int32 EntryPoint, APawn* CallFunc_GetPlayerPawn_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, APawn* CallFunc_TryGetPawnOwner_ReturnValue, UNPC_Master_Onop_C* K2Node_DynamicCast_AsNPC_Master_Onop, bool K2Node_DynamicCast_bSuccess, FTimerHandle CallFunc_K2_SetTimer_ReturnValue);
}

#endif
