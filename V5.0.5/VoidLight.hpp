#ifndef UE4SS_SDK_VoidLight_HPP
#define UE4SS_SDK_VoidLight_HPP

class AVoidLight_C : AActor
{
    UExponentialHeightFogComponent* ExponentialHeightFog;
    USkyLightComponent* SkyLight;
    UPostProcessComponent* PostProcess;
    USceneComponent* DefaultSceneRoot;
}

#endif
