#ifndef UE4SS_SDK_AreaExit_HPP
#define UE4SS_SDK_AreaExit_HPP

class AAreaExit_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Box;
    class UCameraComponent* Camera;
    class UArrowComponent* Arrow;
    class UStaticMeshComponent* Cube;
    class USceneComponent* DefaultSceneRoot;
    bool OnlyTeleport;
    TArray<FName> VisibleLevels;
    TEnumAsByte<StreamingChunks::Type> NewChunk;
    bool Use Actor Location;
    class AActor* NewLocation;
    FTransform NewLoc;
    float CameraBlendTime;
    float Shader Offset Y;
    float Shader Height;
    float Shader Radius;
    float Shader Density;
    FLinearColor Shader Color;
    class UMaterialInstanceDynamic* Material;
    class UTexture* Shader Texture;
    class UTexture* Shader Image;
    bool ReCookTarget;
    class APlayer_Character_BP_C* Player;
    bool IsDLC;
    class ACinematic_Controller_Master_C* CinematicAreaIntro;
    bool CallAreaIntroInstant;

    void UserConstructionScript();
    void OnNotifyEnd_E142104A429ADC66A085AFBF130B2205(FName NotifyName);
    void OnNotifyBegin_E142104A429ADC66A085AFBF130B2205(FName NotifyName);
    void OnInterrupted_E142104A429ADC66A085AFBF130B2205(FName NotifyName);
    void OnBlendOut_E142104A429ADC66A085AFBF130B2205(FName NotifyName);
    void OnCompleted_E142104A429ADC66A085AFBF130B2205(FName NotifyName);
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveBeginPlay();
    void Show Cutscene();
    void ExecuteUbergraph_AreaExit(int32 EntryPoint);
};

#endif
