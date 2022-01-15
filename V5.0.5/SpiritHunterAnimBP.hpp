#ifndef UE4SS_SDK_SpiritHunterAnimBP_HPP
#define UE4SS_SDK_SpiritHunterAnimBP_HPP

class USpiritHunterAnimBP_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_LookAt AnimGraphNode_LookAt_1;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;
    FAnimNode_LookAt AnimGraphNode_LookAt;
    int32 CurrentAnim;
    ANPC_SpiritHunter_C* SpiritHunter;
    bool NewVar_0;
    float PlayerNear;
    FVector Location;
    TEnumAsByte<Tunics::Type> Tunics;

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintInitializeAnimation();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_SpiritHunterAnimBP_AnimGraphNode_BlendListByBool_4AE8857341C12771A261C79BB810FF3D();
    void UpdatePlayerLoc();
    void AnimNotify_SpiritHunterHair();
    void AnimNotify_SpiritHunterHeadTurn();
    void Kill();
    void ExecuteUbergraph_SpiritHunterAnimBP(int32 EntryPoint, APawn* CallFunc_TryGetPawnOwner_ReturnValue, UNPC_SpiritHunter_C* K2Node_DynamicCast_AsNPC_Spirit_Hunter, bool K2Node_DynamicCast_bSuccess, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1);
}

#endif
