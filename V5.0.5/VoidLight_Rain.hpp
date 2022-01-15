#ifndef UE4SS_SDK_VoidLight_Rain_HPP
#define UE4SS_SDK_VoidLight_Rain_HPP

class AVoidLight_Rain_C : AActor
{
    UExponentialHeightFogComponent* ExponentialHeightFog;
    USkyLightComponent* SkyLight;
    UPostProcessComponent* PostProcess;
    USceneComponent* DefaultSceneRoot;
}

#endif
