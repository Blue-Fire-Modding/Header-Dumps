#ifndef UE4SS_SDK_BechAnimBlueprint_HPP
#define UE4SS_SDK_BechAnimBlueprint_HPP

class UBechAnimBlueprint_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;
    FAnimNode_LookAt AnimGraphNode_LookAt;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    int32 CurrentAnim;
    ANPC_Onop_IO_Bech_C* Bech;
    FVector LookAtLocation;
    bool LookAtPlayer;
    ANPC_Master_Onop_C* MasterOnop;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_BechAnimBlueprint_AnimGraphNode_BlendListByBool_52E93EAE4255075ED0962599E0B24AA9();
    void BlueprintInitializeAnimation();
    void UpdatePlayerLoc();
    void Kill();
    void ExecuteUbergraph_BechAnimBlueprint(int32 EntryPoint, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, APawn* CallFunc_TryGetPawnOwner_ReturnValue, UNPC_Master_Onop_C* K2Node_DynamicCast_AsNPC_Master_Onop, bool K2Node_DynamicCast_bSuccess);
}

#endif
