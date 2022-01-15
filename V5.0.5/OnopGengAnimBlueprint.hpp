#ifndef UE4SS_SDK_OnopGengAnimBlueprint_HPP
#define UE4SS_SDK_OnopGengAnimBlueprint_HPP

class UOnopGengAnimBlueprint_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_LookAt AnimGraphNode_LookAt;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    int32 Current Anim;
    ANPC_Onop_Geng_C* Geng;
    FVector LookAtLocation;

    void AnimGraph(FPoseLink& AnimGraph);
    void UpdatePlayerLoc();
    void BlueprintInitializeAnimation();
    void AnimNotify_Onop_Sword();
    void AnimNotify_Onop_Attack();
    void Kill();
    void ExecuteUbergraph_OnopGengAnimBlueprint(int32 EntryPoint, APawn* CallFunc_GetPlayerPawn_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, APawn* CallFunc_TryGetPawnOwner_ReturnValue, UNPC_Onop_Geng_C* K2Node_DynamicCast_AsNPC_Onop_Geng, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1);
}

#endif
