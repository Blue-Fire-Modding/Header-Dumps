#ifndef UE4SS_SDK_Crawler_AnimBP_HPP
#define UE4SS_SDK_Crawler_AnimBP_HPP

class UCrawler_AnimBP_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    float Speed;
    ABP_RoadBug_C* RoadBug;
    bool Grab;

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintInitializeAnimation();
    void ExecuteUbergraph_Crawler_AnimBP(int32 EntryPoint, bool CallFunc_IsRobiValid_ReturnValue, APawn* CallFunc_TryGetPawnOwner_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_1, UBP_RoadBug_C* K2Node_DynamicCast_AsBP_Road_Bug, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_GetVelocity_ReturnValue, float K2Node_Event_DeltaTimeX, float CallFunc_VSize_ReturnValue, float CallFunc_FInterpTo_ReturnValue);
}

#endif
