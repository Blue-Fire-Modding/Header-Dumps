#ifndef UE4SS_SDK_SpiritSwapBound_HPP
#define UE4SS_SDK_SpiritSwapBound_HPP

class ASpiritSwapBound_C : AInteractionMaster_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBoxComponent* SpiritZoneActivator;
    UParticleSystemComponent* ParticleSystem;

    void PressButton();
    void ReceiveBeginPlay();
    void BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void Return();
    void BeginOverlapEv();
    void ExecuteUbergraph_SpiritSwapBound(int32 EntryPoint, ExitPause__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP_1, bool K2Node_DynamicCast_bSuccess_1);
}

#endif
