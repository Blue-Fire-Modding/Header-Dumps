#ifndef UE4SS_SDK_FlipFlop_Platform_Spike_HPP
#define UE4SS_SDK_FlipFlop_Platform_Spike_HPP

class AFlipFlop_Platform_Spike_C : AFlipFlop_Platform_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    float MoveUp_Lerp_FB7951244490DBC00568B9904A88DAD7;
    TEnumAsByte<ETimelineDirection::Type> MoveUp__Direction_FB7951244490DBC00568B9904A88DAD7;
    UTimelineComponent* MoveUp;
    float DamageAnimation_Lerp_42EA166941B62F8490EEE4B08B7DE0CB;
    TEnumAsByte<ETimelineDirection::Type> DamageAnimation__Direction_42EA166941B62F8490EEE4B08B7DE0CB;
    UTimelineComponent* DamageAnimation;
    FVector Initial Location;
    float Multiplier;
    UMaterialInstanceDynamic* MatGlow;
    UMaterialInstanceDynamic* OffsetMat;

    void DamageAnimation__FinishedFunc();
    void DamageAnimation__UpdateFunc();
    void MoveUp__FinishedFunc();
    void MoveUp__UpdateFunc();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Start Damage Animation();
    void ReceiveBeginPlay();
    void ToggleExtra();
    void ExecuteUbergraph_FlipFlop_Platform_Spike(int32 EntryPoint, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_PostEventAtLocation_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, bool CallFunc_IsRobiValid_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue);
}

#endif
