#ifndef UE4SS_SDK_BP_GodPresence_HPP
#define UE4SS_SDK_BP_GodPresence_HPP

class ABP_GodPresence_C : public AActor
{
    class UStaticMeshComponent* Sphere_Low;
    class UParticleSystemComponent* P_GodPresence;
    class UPointLightComponent* PointLight;
    class UMaterialBillboardComponent* MB_Rainbow;
    class USceneComponent* Root;

};

#endif
