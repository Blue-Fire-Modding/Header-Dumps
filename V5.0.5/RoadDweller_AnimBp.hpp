#ifndef UE4SS_SDK_RoadDweller_AnimBp_HPP
#define UE4SS_SDK_RoadDweller_AnimBp_HPP

class URoadDweller_AnimBp_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_Slot AnimGraphNode_Slot_1;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_LookAt AnimGraphNode_LookAt;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;
    float Speed;
    FVector PlayerLocation;
    bool LookAtPlayer;
    int32 BlendSpace WalkCombat;
    int32 BlendSpace Walk;
    float Blend Time;
    float Play Rate;
    TEnumAsByte<E_RoadDwellerType::Type> EnemyType;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_RoadDweller_AnimBp_AnimGraphNode_BlendSpacePlayer_F7C162A14A8AD96BB88CA49AED0A0008();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void AnimNotify_FootStep();
    void AnimNotify_AttackMono();
    void AnimNotify_VocalAttack();
    void AnimNotify_AttackST();
    void AnimNotify_LampMovement();
    void AnimNotify_Idle_Breath();
    void ExecuteUbergraph_RoadDweller_AnimBp(int32 EntryPoint, UBlendSpaceBase* Temp_object_Variable, UBlendSpaceBase* Temp_object_Variable_1, uint8 Temp_byte_Variable, UAkAudioEvent* Temp_object_Variable_2, UAkAudioEvent* Temp_object_Variable_3, UAkAudioEvent* Temp_object_Variable_4, UAkAudioEvent* Temp_object_Variable_5, UAkAudioEvent* Temp_object_Variable_6, int32 Temp_int_Variable, UAkAudioEvent* K2Node_Select_Default, bool CallFunc_IsRobiValid_ReturnValue, float K2Node_Event_DeltaTimeX, UBlendSpaceBase* K2Node_Select_Default_1, APawn* CallFunc_TryGetPawnOwner_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_GetVelocity_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, int32 CallFunc_PostEventAtLocation_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_2, float CallFunc_VSize_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue_4, int32 CallFunc_PostEventAtLocation_ReturnValue_5, APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_1);
}

#endif
