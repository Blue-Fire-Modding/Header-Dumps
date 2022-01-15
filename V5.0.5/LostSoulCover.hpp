#ifndef UE4SS_SDK_LostSoulCover_HPP
#define UE4SS_SDK_LostSoulCover_HPP

class ALostSoulCover_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* StaticMesh;
    USceneComponent* DefaultSceneRoot;

    void Play();
    void Fade();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_LostSoulCover(int32 EntryPoint);
}

#endif
