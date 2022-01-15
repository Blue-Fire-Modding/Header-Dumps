#ifndef UE4SS_SDK_PenumbraSkelMesh_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_PenumbraSkelMesh_Skeleton_AnimBlueprint_HPP

class UPenumbraSkelMesh_Skeleton_AnimBlueprint_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Slot AnimGraphNode_Slot_1;
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    ABP_Penumbra_C* Goddess;
    FVector PlayerLocation;
    TEnumAsByte<E_Penumbra_AnimState::Type> Anim State;
    float Blend Time;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_PenumbraSkelMesh_Skeleton_AnimBlueprint_AnimGraphNode_BlendListByInt_84E0A85E4251C92D698497BE41751599();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintInitializeAnimation();
    void AnimNotify_Goddes_Stunned_Window();
    void ExecuteUbergraph_PenumbraSkelMesh_Skeleton_AnimBlueprint(int32 EntryPoint, int32 CallFunc_Conv_ByteToInt_ReturnValue, float K2Node_Event_DeltaTimeX, APawn* CallFunc_TryGetPawnOwner_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, UBP_Penumbra_C* K2Node_DynamicCast_AsBP_Penumbra, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsRobiValid_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue);
}

#endif
