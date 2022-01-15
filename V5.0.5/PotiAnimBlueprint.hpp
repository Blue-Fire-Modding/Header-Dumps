#ifndef UE4SS_SDK_PotiAnimBlueprint_HPP
#define UE4SS_SDK_PotiAnimBlueprint_HPP

class UPotiAnimBlueprint_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_LookAt AnimGraphNode_LookAt;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    int32 CurrentAnim;
    bool LookAtPlayer;
    FVector LookAtLocation;
    ANPC_Master_Poti_C* Barri;
    ANPC_Master_Poti_C* Poti;

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintInitializeAnimation();
    void UpdatePlayerLoc();
    void ExecuteUbergraph_PotiAnimBlueprint(int32 EntryPoint, bool CallFunc_IsRobiValid_ReturnValue, APawn* CallFunc_TryGetPawnOwner_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, UNPC_Master_Poti_C* K2Node_DynamicCast_AsNPC_Master_Poti, bool K2Node_DynamicCast_bSuccess, APawn* CallFunc_GetPlayerPawn_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue);
}

#endif
