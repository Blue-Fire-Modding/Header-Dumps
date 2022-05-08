#ifndef UE4SS_SDK_Floorpad_BP_HPP
#define UE4SS_SDK_Floorpad_BP_HPP

class AFloorpad_BP_C : public AMechanics_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Box;
    class UStaticMeshComponent* Switch_Platform_SM;
    class UStaticMeshComponent* StaticMesh;
    bool Timed;
    class AMechanics_Master_C* Target;
    FFloorpad_BP_CPress Press;
    void Press();
    float Duration;
    bool Statue;
    FLinearColor Color;
    bool ShouldChangeMatWithStatue;

    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Reset(bool VM);
    void SetPermanent();
    void ReceiveBeginPlay();
    void Pressed();
    void ExecuteUbergraph_Floorpad_BP(int32 EntryPoint);
    void Press__DelegateSignature();
};

#endif
