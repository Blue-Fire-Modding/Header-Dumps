#ifndef UE4SS_SDK_Mia_AnimBP_HPP
#define UE4SS_SDK_Mia_AnimBP_HPP

class UMia_AnimBP_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_LookAt AnimGraphNode_LookAt;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    int32 CurrentAnim;
    ANPC_Mia_C* Mia;
    FVector LookAtLocation;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Mia_AnimBP_AnimGraphNode_BlendListByBool_24D9EBDF47020876445DD0A91DD6F54E();
    void AnimNotify_HitWrench();
    void BlueprintInitializeAnimation();
    void UpdatePlayerLoc();
    void AnimNotify_Mia_Gear_Hit();
    void AnimNotify_Mia_Hit();
    void AnimNotify_Mia_Work();
    void AnimNotify_Mira_Chage();
    void Kill();
    void ExecuteUbergraph_Mia_AnimBP(int32 EntryPoint, APawn* CallFunc_TryGetPawnOwner_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UNPC_Mia_C* K2Node_DynamicCast_AsNPC_Mia, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_3, APawn* CallFunc_GetPlayerPawn_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FTimerHandle CallFunc_K2_SetTimer_ReturnValue);
}

#endif
