#ifndef UE4SS_SDK_Fara_AnimationBP_HPP
#define UE4SS_SDK_Fara_AnimationBP_HPP

class UFara_AnimationBP_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    int32 CurrentAnim;
    ANPC_Fara_C* Fara;
    FVector LookAtLocation;
    bool IsFaraTalking;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Fara_AnimationBP_AnimGraphNode_BlendListByBool_F86B6C074FC6D06B5620F9BBA2E9FFEF();
    void BlueprintInitializeAnimation();
    void UpdatePlayerLoc();
    void ExecuteUbergraph_Fara_AnimationBP(int32 EntryPoint, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, APawn* CallFunc_TryGetPawnOwner_ReturnValue, UNPC_Fara_C* K2Node_DynamicCast_AsNPC_Fara, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsRobiValid_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue);
}

#endif
