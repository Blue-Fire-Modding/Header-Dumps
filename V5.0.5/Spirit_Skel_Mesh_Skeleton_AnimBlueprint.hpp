#ifndef UE4SS_SDK_Spirit_Skel_Mesh_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_Spirit_Skel_Mesh_Skeleton_AnimBlueprint_HPP

class USpirit_Skel_Mesh_Skeleton_AnimBlueprint_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_Slot AnimGraphNode_Slot;
    bool LookAtPlayer;
    FVector LookAtLocation;

    void AnimGraph(FPoseLink& AnimGraph);
    void UpdatePlayerLoc();
    void StartLookAt();
    void EndLookAt();
    void ExecuteUbergraph_Spirit_Skel_Mesh_Skeleton_AnimBlueprint(int32 EntryPoint, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue);
}

#endif
