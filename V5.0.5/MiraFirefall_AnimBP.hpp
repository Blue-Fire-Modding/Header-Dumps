#ifndef UE4SS_SDK_MiraFirefall_AnimBP_HPP
#define UE4SS_SDK_MiraFirefall_AnimBP_HPP

class UMiraFirefall_AnimBP_C : UAnimInstance
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
    FVector LookAtLocation;
    ANPC_Mira_Firefall_C* Mira;
    bool LookAtPlayer;

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintInitializeAnimation();
    void UpdatePlayerLoc();
    void AnimNotify_Mira_Dig();
    void AnimNotify_mira_Hit();
    void AnimNotify_Mira_Work();
    void Kill();
    void ExecuteUbergraph_MiraFirefall_AnimBP(int32 EntryPoint, APawn* CallFunc_TryGetPawnOwner_ReturnValue, UNPC_Mira_Firefall_C* K2Node_DynamicCast_AsNPC_Mira_Firefall, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, APawn* CallFunc_GetPlayerPawn_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue);
}

#endif
