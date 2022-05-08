#ifndef UE4SS_SDK_HoverPlatform_HPP
#define UE4SS_SDK_HoverPlatform_HPP

class AHoverPlatform_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Plane1;
    class UStaticMeshComponent* Plane;
    class USceneComponent* DefaultSceneRoot;
    float Play_Opacity_BC92B0ED4533968EEE7BB1BAAC6A23A1;
    TEnumAsByte<ETimelineDirection::Type> Play__Direction_BC92B0ED4533968EEE7BB1BAAC6A23A1;
    class UTimelineComponent* Play;
    float Z;
    FHoverPlatform_CFinish Finish;
    void Finish();
    class UMaterialInstanceDynamic* Mat;

    void Play__FinishedFunc();
    void Play__UpdateFunc();
    void ReceiveBeginPlay();
    void QuickFade();
    void ExecuteUbergraph_HoverPlatform(int32 EntryPoint);
    void Finish__DelegateSignature();
};

#endif
