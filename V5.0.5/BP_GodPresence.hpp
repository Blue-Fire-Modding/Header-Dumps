#ifndef UE4SS_SDK_BP_GodPresence_HPP
#define UE4SS_SDK_BP_GodPresence_HPP

class ABP_GodPresence_C : AActor
{
    UStaticMeshComponent* Sphere_Low;
    UParticleSystemComponent* P_GodPresence;
    UPointLightComponent* PointLight;
    UMaterialBillboardComponent* MB_Rainbow;
    USceneComponent* Root;
}

#endif
