#ifndef UE4SS_SDK_Shield_Bp_HPP
#define UE4SS_SDK_Shield_Bp_HPP

class AShield_Bp_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UPointLightComponent* PointLight;
    UParticleSystemComponent* ShielfFX;
    USceneComponent* DefaultSceneRoot;

    void On();
    void Off();
    void ExecuteUbergraph_Shield_Bp(int32 EntryPoint);
}

#endif
