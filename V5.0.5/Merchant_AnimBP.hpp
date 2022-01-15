#ifndef UE4SS_SDK_Merchant_AnimBP_HPP
#define UE4SS_SDK_Merchant_AnimBP_HPP

class UMerchant_AnimBP_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_LookAt AnimGraphNode_LookAt_5;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;
    FAnimNode_LookAt AnimGraphNode_LookAt_4;
    FAnimNode_LookAt AnimGraphNode_LookAt_3;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_LookAt AnimGraphNode_LookAt_2;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_LookAt AnimGraphNode_LookAt_1;
    FAnimNode_LookAt AnimGraphNode_LookAt;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FVector PlayerLocation;
    FVector Player_Location_For_Spline;
    ANPC_Merchant_C* Merchant;
    int32 CurrentAnim;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Merchant_AnimBP_AnimGraphNode_BlendListByBool_823B5E16471B862E7F5D85A9F7F11F58();
    void BlueprintInitializeAnimation();
    void UpdatePlayerLoc();
    void AnimNotify_Mork_Page_Turn();
    void ExecuteUbergraph_Merchant_AnimBP(int32 EntryPoint, APawn* CallFunc_GetPlayerPawn_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, APawn* CallFunc_TryGetPawnOwner_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue, FVector CallFunc_GetSocketLocation_ReturnValue, UNPC_Merchant_C* K2Node_DynamicCast_AsNPC_Merchant, bool K2Node_DynamicCast_bSuccess, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, FVector CallFunc_MakeVector_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue);
}

#endif
