#ifndef UE4SS_SDK_CameraCapture_HPP
#define UE4SS_SDK_CameraCapture_HPP

class ACameraCapture_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBillboardComponent* Billboard;
    class UArrowComponent* Arrow;
    class UBoxComponent* Box;
    class USceneComponent* DefaultSceneRoot;
    class APlayer_Character_BP_C* PlayerRef;
    class AActor* CameraPivotRef;
    float Distance;
    float SpeedAdjust;
    float MaxYaw;
    float MaxPitch;
    class AActor* Wall;
    bool View;

    void UserConstructionScript();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void ExtraEnable();
    void ExtraDisable();
    void Enable(class UObject* Object);
    void CheckStartTrace();
    void ExecuteUbergraph_CameraCapture(int32 EntryPoint);
};

#endif
