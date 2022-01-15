#ifndef UE4SS_SDK_VoidLight_Red_HPP
#define UE4SS_SDK_VoidLight_Red_HPP

class AVoidLight_Red_C : AActor
{
    UExponentialHeightFogComponent* ExponentialHeightFog;
    USkyLightComponent* SkyLight;
    UPostProcessComponent* PostProcess;
    USceneComponent* DefaultSceneRoot;
}

#endif
