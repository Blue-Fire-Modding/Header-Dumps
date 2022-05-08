#ifndef UE4SS_SDK_RotateToPlayer_HPP
#define UE4SS_SDK_RotateToPlayer_HPP

class URotateToPlayer_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool RotOn;
    float RotateSpeed;
    bool SingleBurst;
    float RotateSpeedCurve;
    bool Pitch;
    bool RotToMovement;

    void ReceiveExecute(class AActor* OwnerActor);
    void ExecuteUbergraph_RotateToPlayer(int32 EntryPoint);
};

#endif
