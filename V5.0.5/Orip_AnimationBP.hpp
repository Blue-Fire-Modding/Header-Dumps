#ifndef UE4SS_SDK_Orip_AnimationBP_HPP
#define UE4SS_SDK_Orip_AnimationBP_HPP

class UOrip_AnimationBP_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_LookAt AnimGraphNode_LookAt;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    int32 CurrentAnim;
    FVector LookAtLocation;
    ANPC_Orip_EastArcane_C* Orip;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Orip_AnimationBP_AnimGraphNode_BlendListByBool_93A7072249ADB2C010BA60B07BF0E79C();
    void BlueprintInitializeAnimation();
    void UpdatePlayerLoc();
    void AnimNotify_PickUp();
    void AnimNotify_Idle();
    void AnimNotify_Save();
    void AnimNotify_Orip_Hit();
    void AnimNotify_Orip_Hammering_Arm_Back();
    void AnimNotify_Orip_Hammering_Impact();
    void AnimNotify_Orip_Hammering_Whoosh();
    void Kill();
    void ExecuteUbergraph_Orip_AnimationBP(int32 EntryPoint, APawn* CallFunc_TryGetPawnOwner_ReturnValue, UNPC_Orip_EastArcane_C* K2Node_DynamicCast_AsNPC_Orip_East_Arcane, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue_4, int32 CallFunc_PostEventAtLocation_ReturnValue_5, int32 CallFunc_PostEventAtLocation_ReturnValue_6, int32 CallFunc_PostEventAtLocation_ReturnValue_7, int32 CallFunc_PostEventAtLocation_ReturnValue_8, APawn* CallFunc_GetPlayerPawn_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1);
}

#endif
