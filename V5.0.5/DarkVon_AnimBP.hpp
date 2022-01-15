#ifndef UE4SS_SDK_DarkVon_AnimBP_HPP
#define UE4SS_SDK_DarkVon_AnimBP_HPP

class UDarkVon_AnimBP_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_Slot AnimGraphNode_Slot_1;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    TEnumAsByte<E_DarkVon_AnimStates::Type> AnimState;
    float Blend Time Death;
    FVector2D Locomotion;
    int32 CurrentAnim;
    bool IngoreScarfThing;
    ABP_Boss_DarkVon_C* Character;
    float MaxSpeed;

    void AnimGraph(FPoseLink& AnimGraph);
    void Control Ignore Scarf Thing(bool IngoreScarfThing);
    void AnimNotify_SwordSelection_Both();
    void AnimNotify_SwordSelection_Hide();
    void BlueprintInitializeAnimation();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void AnimNotify_DarkVonExpressionAngry();
    void AnimNotify_BallSmallThrowSound();
    void AnimNotify_GleamVFXSound();
    void AnimNotify_DoubleSwingFirstSound();
    void AnimNotify_DoubleSwingSecondSound();
    void AnimNotify_StartHeal();
    void AnimNotify_SwordSwingVO();
    void AnimNotify_Spawn_Sword_Show_SFX();
    void AnimNotify_SingleSwordSlashSFX();
    void AnimNotify_Fire_hands_SFX();
    void AnimNotify_Fire_Hand_VO();
    void AnimNotify_DarkVonHitSound();
    void AnimNotify_ComingVOSound();
    void AnimNotify_ExpressionVO();
    void ExecuteUbergraph_DarkVon_AnimBP(int32 EntryPoint, APawn* CallFunc_TryGetPawnOwner_ReturnValue, UBP_Boss_DarkVon_C* K2Node_DynamicCast_AsBP_Boss_Dark_Von, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue_4, int32 CallFunc_PostEventAtLocation_ReturnValue_5, int32 CallFunc_PostEventAtLocation_ReturnValue_6, int32 CallFunc_PostEventAtLocation_ReturnValue_7, int32 CallFunc_PostEventAtLocation_ReturnValue_8, int32 CallFunc_PostEventAtLocation_ReturnValue_9, int32 CallFunc_PostEventAtLocation_ReturnValue_10, int32 CallFunc_PostEventAtLocation_ReturnValue_11, int32 CallFunc_PostEventAtLocation_ReturnValue_12, int32 CallFunc_PostEventAtLocation_ReturnValue_13, int32 CallFunc_PostEventAtLocation_ReturnValue_14, float K2Node_Event_DeltaTimeX, bool K2Node_CustomEvent_IngoreScarfThing, bool CallFunc_IsValid_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue, FVector CallFunc_GetVelocity_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_MakeVector_ReturnValue, float CallFunc_CalculateDirection_ReturnValue, FVector CallFunc_LessLess_VectorRotator_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, FVector2D CallFunc_MakeVector2D_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_15, int32 CallFunc_PostEventAtLocation_ReturnValue_16);
}

#endif
