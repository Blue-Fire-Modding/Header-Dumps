#ifndef UE4SS_SDK_ShadowDecal_HPP
#define UE4SS_SDK_ShadowDecal_HPP

class AShadowDecal_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDecalComponent* Decal;
    class USceneComponent* DefaultSceneRoot;
    class UMaterialInstanceDynamic* ShadowDecal;

    void ReceiveBeginPlay();
    void UpdateSize(float Value);
    void ExecuteUbergraph_ShadowDecal(int32 EntryPoint);
};

#endif
