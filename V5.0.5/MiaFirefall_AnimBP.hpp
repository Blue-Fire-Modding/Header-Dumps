#ifndef UE4SS_SDK_MiaFirefall_AnimBP_HPP
#define UE4SS_SDK_MiaFirefall_AnimBP_HPP

class UMiaFirefall_AnimBP_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_LookAt AnimGraphNode_LookAt_1;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_LookAt AnimGraphNode_LookAt;
    int32 CurrentAnim;
    ANPC_Mia_Firefall_C* Mia;
    FVector LookAtLocation;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_MiaFirefall_AnimBP_AnimGraphNode_BlendListByBool_87C2210F4F167492097AF19A47A56F52();
    void AnimNotify_HitWrench();
    void BlueprintInitializeAnimation();
    void UpdatePlayerLoc();
    void AnimNotify_Mia_Gear_Hit();
    void AnimNotify_Mia_Hit();
    void AnimNotify_Mia_Work();
    void AnimNotify_Mira_Chage();
    void Kill();
    void ExecuteUbergraph_MiaFirefall_AnimBP(int32 EntryPoint, APawn* CallFunc_TryGetPawnOwner_ReturnValue, UNPC_Mia_Firefall_C* K2Node_DynamicCast_AsNPC_Mia_Firefall, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_3, APawn* CallFunc_GetPlayerPawn_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue);
}

#endif
