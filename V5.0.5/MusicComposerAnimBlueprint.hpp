#ifndef UE4SS_SDK_MusicComposerAnimBlueprint_HPP
#define UE4SS_SDK_MusicComposerAnimBlueprint_HPP

class UMusicComposerAnimBlueprint_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_LookAt AnimGraphNode_LookAt;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;
    int32 CurrentAnim;
    ANPC_Onop_Compositor_C* Paulale;
    FVector LookAtLocation;
    bool LookAtPlayer;

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintInitializeAnimation();
    void UpdatePlayerLoc();
    void Kill();
    void ExecuteUbergraph_MusicComposerAnimBlueprint(int32 EntryPoint, APawn* CallFunc_TryGetPawnOwner_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, UNPC_Onop_Compositor_C* K2Node_DynamicCast_AsNPC_Onop_Compositor, bool K2Node_DynamicCast_bSuccess, APawn* CallFunc_GetPlayerPawn_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue);
}

#endif
