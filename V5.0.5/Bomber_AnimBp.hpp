#ifndef UE4SS_SDK_Bomber_AnimBp_HPP
#define UE4SS_SDK_Bomber_AnimBp_HPP

class UBomber_AnimBp_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;
    FAnimNode_Slot AnimGraphNode_Slot;
    float Direction;
    float Speed;
    AEnemy_Character_Parent_C* Enemy;

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintInitializeAnimation();
    void AnimNotify_FootStep();
    void ExecuteUbergraph_Bomber_AnimBp(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, float K2Node_Event_DeltaTimeX, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, APawn* CallFunc_TryGetPawnOwner_ReturnValue, UEnemy_Character_Parent_C* K2Node_DynamicCast_AsEnemy_Character_Parent, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_GetVelocity_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_CalculateDirection_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_FClamp_ReturnValue);
}

#endif
