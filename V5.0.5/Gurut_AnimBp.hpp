#ifndef UE4SS_SDK_Gurut_AnimBp_HPP
#define UE4SS_SDK_Gurut_AnimBp_HPP

class UGurut_AnimBp_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_LookAt AnimGraphNode_LookAt;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;
    FAnimNode_Slot AnimGraphNode_Slot_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_Slot AnimGraphNode_Slot_1;
    FAnimNode_Slot AnimGraphNode_Slot;
    FVector PlayerLocation;
    bool Visible;
    float LookAt;
    bool Stun;
    ABP_Gurut_C* Gurut;

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintInitializeAnimation();
    void ExecuteUbergraph_Gurut_AnimBp(int32 EntryPoint, bool CallFunc_IsRobiValid_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, float K2Node_Event_DeltaTimeX, APawn* CallFunc_GetPlayerPawn_ReturnValue, APawn* CallFunc_TryGetPawnOwner_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_1, UBP_Gurut_C* K2Node_DynamicCast_AsBP_Gurut, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue_1);
}

#endif
