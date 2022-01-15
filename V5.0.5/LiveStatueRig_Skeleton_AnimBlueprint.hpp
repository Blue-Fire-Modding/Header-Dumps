#ifndef UE4SS_SDK_LiveStatueRig_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_LiveStatueRig_Skeleton_AnimBlueprint_HPP

class ULiveStatueRig_Skeleton_AnimBlueprint_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    bool Moving;
    ALifeStatue_C* Character;

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void AnimNotify_Step();
    void BlueprintInitializeAnimation();
    void ExecuteUbergraph_LiveStatueRig_Skeleton_AnimBlueprint(int32 EntryPoint, float K2Node_Event_DeltaTimeX, bool CallFunc_IsRobiValid_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, FVector CallFunc_GetVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, APawn* CallFunc_TryGetPawnOwner_ReturnValue, ULifeStatue_C* K2Node_DynamicCast_AsLife_Statue, bool K2Node_DynamicCast_bSuccess);
}

#endif
