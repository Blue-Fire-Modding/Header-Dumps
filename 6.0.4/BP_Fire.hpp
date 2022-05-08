#ifndef UE4SS_SDK_BP_Fire_HPP
#define UE4SS_SDK_BP_Fire_HPP

class ABP_Fire_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* P_Fire_Sparks;
    class UPointLightComponent* PointLight;
    class UAkComponent* Ak;
    class UBoxComponent* Box;
    class UMaterialBillboardComponent* MB_Fire;
    FLinearColor Glow Color;
    float Glow Value;
    float Glow Speed;
    float Speed;
    FLinearColor Inside;
    FLinearColor Center;
    FLinearColor Outside;
    class UMaterialInstanceDynamic* Mat1;
    class UMaterialInstanceDynamic* Mat2;
    FLinearColor Light Color;
    float Light Intensity;
    bool Enable Sparks;
    bool UseSFX;
    float Attenuation Scaling;

    void UserConstructionScript();
    void Build();
    void ReceiveBeginPlay();
    void ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
    void ExecuteUbergraph_BP_Fire(int32 EntryPoint);
};

#endif
