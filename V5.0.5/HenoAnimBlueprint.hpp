#ifndef UE4SS_SDK_HenoAnimBlueprint_HPP
#define UE4SS_SDK_HenoAnimBlueprint_HPP

class UHenoAnimBlueprint_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_LookAt AnimGraphNode_LookAt;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    int32 CurrentAnim;
    FVector LookAtLocation;
    bool LookAtPlayer;
    ANPC_Onop_Heno_C* Heno;

    void AnimGraph(FPoseLink& AnimGraph);
    void UpdatePlayerLoc();
    void BlueprintInitializeAnimation();
    void AnimNotify_Onop_Shield();
    void ExecuteUbergraph_HenoAnimBlueprint(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, APawn* CallFunc_TryGetPawnOwner_ReturnValue, UNPC_Onop_Heno_C* K2Node_DynamicCast_AsNPC_Onop_Heno, bool K2Node_DynamicCast_bSuccess, APawn* CallFunc_GetPlayerPawn_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool Temp_bool_IsClosed_Variable);
}

#endif
