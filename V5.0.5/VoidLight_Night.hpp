#ifndef UE4SS_SDK_VoidLight_Night_HPP
#define UE4SS_SDK_VoidLight_Night_HPP

class AVoidLight_Night_C : AActor
{
    UExponentialHeightFogComponent* ExponentialHeightFog;
    USkyLightComponent* SkyLight;
    UPostProcessComponent* PostProcess;
    USceneComponent* DefaultSceneRoot;
}

#endif
