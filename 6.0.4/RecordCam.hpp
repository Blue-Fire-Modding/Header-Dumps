#ifndef UE4SS_SDK_RecordCam_HPP
#define UE4SS_SDK_RecordCam_HPP

class ARecordCam_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCameraComponent* Camera;
    TArray<class UTexture*> LutArray;
    int32 LutIndex;
    TArray<FPostProcessSettings> Filters;
    FPostProcessSettings CurrentPPSettings;

    void UserConstructionScript();
    void MovementA(FVector WorldDirection);
    void MovementB(float ScaleValue);
    void ReceiveBeginPlay();
    void NextFilter(bool Right);
    void PreviewFilter();
    void Force PP Settings(FPostProcessSettings PostProcessSettings);
    void ExecuteUbergraph_RecordCam(int32 EntryPoint);
};

#endif
