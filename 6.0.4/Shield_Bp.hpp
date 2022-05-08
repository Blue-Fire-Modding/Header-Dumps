#ifndef UE4SS_SDK_Shield_Bp_HPP
#define UE4SS_SDK_Shield_Bp_HPP

class AShield_Bp_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight;
    class UParticleSystemComponent* ShielfFX;
    class USceneComponent* DefaultSceneRoot;

    void On();
    void Off();
    void ExecuteUbergraph_Shield_Bp(int32 EntryPoint);
};

#endif
