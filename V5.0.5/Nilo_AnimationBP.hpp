#ifndef UE4SS_SDK_Nilo_AnimationBP_HPP
#define UE4SS_SDK_Nilo_AnimationBP_HPP

class UNilo_AnimationBP_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7;
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;
    FAnimNode_LookAt AnimGraphNode_LookAt_3;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6;
    FAnimNode_LookAt AnimGraphNode_LookAt_2;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_LookAt AnimGraphNode_LookAt_1;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_LookAt AnimGraphNode_LookAt;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    int32 CurrentAnim;
    bool PlayerNear;
    ANPC_Nilo_C* Nilo;
    FVector LookAtLocation;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Nilo_AnimationBP_AnimGraphNode_BlendListByBool_7D23B67849F3FC66569ADF9082768EE1();
    void BlueprintInitializeAnimation();
    void UpdatePlayerLoc();
    void AnimNotify_Cloth_Movement();
    void AnimNotify_Nilo_Idle_Surprise();
    void AnimNotify_Nilo_Surprised();
    void ExecuteUbergraph_Nilo_AnimationBP(int32 EntryPoint, bool CallFunc_IsRobiValid_ReturnValue, APawn* CallFunc_TryGetPawnOwner_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, UNPC_Nilo_C* K2Node_DynamicCast_AsNPC_Nilo, bool K2Node_DynamicCast_bSuccess, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1);
}

#endif
