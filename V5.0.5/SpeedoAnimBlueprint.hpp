#ifndef UE4SS_SDK_SpeedoAnimBlueprint_HPP
#define UE4SS_SDK_SpeedoAnimBlueprint_HPP

class USpeedoAnimBlueprint_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_LookAt AnimGraphNode_LookAt;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;
    bool LookAtPlayer;
    int32 CurrentAnim;
    FVector LookAtLocation;
    ANPC_Onop_Speedo_C* Speedo;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_SpeedoAnimBlueprint_AnimGraphNode_BlendListByBool_CA8E72944D089C7A74F3FE985EFCA651();
    void BlueprintInitializeAnimation();
    void UpdatePlayerLoc();
    void AnimNotify_Onop_Step();
    void AnimNotify_Onop Random();
    void ExecuteUbergraph_SpeedoAnimBlueprint(int32 EntryPoint, APawn* CallFunc_TryGetPawnOwner_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UNPC_Onop_Speedo_C* K2Node_DynamicCast_AsNPC_Onop_Speedo, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1);
}

#endif
