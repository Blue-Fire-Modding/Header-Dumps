#ifndef UE4SS_SDK_Bremur_AnimationBP_HPP
#define UE4SS_SDK_Bremur_AnimationBP_HPP

class UBremur_AnimationBP_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_LookAt AnimGraphNode_LookAt;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;
    int32 CurrentAnim;
    FVector LookAtLocation;
    ANPC_Bremur_C* Bremur;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bremur_AnimationBP_AnimGraphNode_BlendListByBool_3EB9A9334E0CF6B7DA7690B41746DFCA();
    void BlueprintInitializeAnimation();
    void UpdatePlayerLoc();
    void AnimNotify_Bremur_Hit();
    void AnimNotify_Bremur_Bell();
    void ExecuteUbergraph_Bremur_AnimationBP(int32 EntryPoint, APawn* CallFunc_TryGetPawnOwner_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, UNPC_Bremur_C* K2Node_DynamicCast_AsNPC_Bremur, bool K2Node_DynamicCast_bSuccess, APawn* CallFunc_GetPlayerPawn_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1);
}

#endif
