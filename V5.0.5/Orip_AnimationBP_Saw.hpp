#ifndef UE4SS_SDK_Orip_AnimationBP_Saw_HPP
#define UE4SS_SDK_Orip_AnimationBP_Saw_HPP

class UOrip_AnimationBP_Saw_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_LookAt AnimGraphNode_LookAt;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    int32 CurrentAnim;
    FVector LookAtLocation;
    ANPC_Orip_EastArcane_C* Orip;
    ANPC_Orip_Stoneheart_C* OripSaw;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Orip_AnimationBP_Saw_AnimGraphNode_BlendListByBool_4D5C51CA435EC91B783E7299FC3DAACE();
    void BlueprintInitializeAnimation();
    void UpdatePlayerLoc();
    void AnimNotify_PickUp();
    void AnimNotify_Idle();
    void AnimNotify_Save();
    void AnimNotify_Orip_Hit();
    void Kill();
    void ExecuteUbergraph_Orip_AnimationBP_Saw(int32 EntryPoint, APawn* CallFunc_TryGetPawnOwner_ReturnValue, UNPC_Orip_Stoneheart_C* K2Node_DynamicCast_AsNPC_Orip_Stoneheart, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, APawn* CallFunc_GetPlayerPawn_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_3);
}

#endif
