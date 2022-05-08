#ifndef UE4SS_SDK_Moving_Path_Actor_Straight_HPP
#define UE4SS_SDK_Moving_Path_Actor_Straight_HPP

class AMoving_Path_Actor_Straight_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAkComponent* Play_Travel_Platform_Magic_Carpet_Void_Loop;
    class UAkComponent* Ak;
    class UBoxComponent* Box;
    class USceneComponent* DefaultSceneRoot;
    class AMoving_Path_Spline_C* Path;
    float Distance;
    float Speed;
    float MaxDistance;
    class APlayer_Character_BP_C* Player;
    class UAkAudioEvent* PlaySound;

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Reset();
    void ExecuteUbergraph_Moving_Path_Actor_Straight(int32 EntryPoint);
};

#endif
