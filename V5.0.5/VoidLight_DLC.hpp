#ifndef UE4SS_SDK_VoidLight_DLC_HPP
#define UE4SS_SDK_VoidLight_DLC_HPP

class AVoidLight_DLC_C : AActor
{
    UExponentialHeightFogComponent* ExponentialHeightFog;
    USkyLightComponent* SkyLight;
    UPostProcessComponent* PostProcess;
    USceneComponent* DefaultSceneRoot;
}

#endif
