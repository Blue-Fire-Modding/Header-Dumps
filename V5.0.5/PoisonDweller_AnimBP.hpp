#ifndef UE4SS_SDK_PoisonDweller_AnimBP_HPP
#define UE4SS_SDK_PoisonDweller_AnimBP_HPP

class UPoisonDweller_AnimBP_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_Slot AnimGraphNode_Slot_1;
    FAnimNode_Slot AnimGraphNode_Slot;
    float Speed;
    FVector PlayerLocation;
    bool LookAtPlayer;
    float Play Rater;

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void AnimNotify_Poison_Dweller_Footstep();
    void AnimNotify_Poison_Dweller_FootUp();
    void ExecuteUbergraph_PoisonDweller_AnimBP(int32 EntryPoint, float K2Node_Event_DeltaTimeX, APawn* CallFunc_TryGetPawnOwner_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_GetVelocity_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_MakeVector_ReturnValue, float CallFunc_VSize_ReturnValue);
}

#endif
