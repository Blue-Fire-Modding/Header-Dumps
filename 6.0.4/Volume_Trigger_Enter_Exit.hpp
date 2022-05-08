#ifndef UE4SS_SDK_Volume_Trigger_Enter_Exit_HPP
#define UE4SS_SDK_Volume_Trigger_Enter_Exit_HPP

class AVolume_Trigger_Enter_Exit_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCapsuleComponent* Capsule;
    class UAkComponent* AkComponent2;
    class UAkComponent* Ak_Component;
    class UBoxComponent* Box;
    class USceneComponent* DefaultSceneRoot;
    class UAkAudioEvent* Ak_Event_Start;
    TSubclassOf<class UAkComponent> Component;
    class UAkAudioEvent* Ak_Event_Stop;
    class UAkAudioEvent* Ak_Event_Start2;
    class UAkAudioEvent* Ak_Event_Stop2;
    bool LowerVolumeAmbiences;
    bool UseCapsuleCollision;
    class APlayer_Character_BP_C* Player;
    bool Debug;

    void UserConstructionScript();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void StreamOut();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void CheckIfAlreadyOutOfVolume();
    void ForceStop();
    void Build();
    void ExecuteUbergraph_Volume_Trigger_Enter_Exit(int32 EntryPoint);
};

#endif
