#ifndef UE4SS_SDK_GroundGru_AnimBP_HPP
#define UE4SS_SDK_GroundGru_AnimBP_HPP

class UGroundGru_AnimBP_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FVector AerialRiseLocation;
    bool AerialRise;
    FVector PlayerLocation;
    ABP_GroundGru_C* GroundGru;
    float Spine2Z;
    FRotator Spine2Rot;
    bool Stun;
    bool Charge;
    int32 SetCurrentAnim;
    float BlendTimeSleep;

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintInitializeAnimation();
    void ExecuteUbergraph_GroundGru_AnimBP(int32 EntryPoint, APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, float K2Node_Event_DeltaTimeX, APawn* CallFunc_TryGetPawnOwner_ReturnValue, UBP_GroundGru_C* K2Node_DynamicCast_AsBP_Ground_Gru, bool K2Node_DynamicCast_bSuccess, FRotator CallFunc_K2_GetComponentRotation_ReturnValue, FVector CallFunc_GetSocketLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_GetDirectionUnitVector_ReturnValue, FRotator CallFunc_Conv_VectorToRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FRotator CallFunc_MakeRotator_ReturnValue, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult);
}

#endif
