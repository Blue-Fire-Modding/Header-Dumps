#ifndef UE4SS_SDK_BP_Sparks_HPP
#define UE4SS_SDK_BP_Sparks_HPP

class ABP_Sparks_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Box;
    class UParticleSystemComponent* Particle;
    class USceneComponent* DefaultSceneRoot;
    float Amount;
    float Size Min;
    float Size Max;
    FColor Color A;
    FColor Color B;
    float Lifetime Min;
    float Lifetime Max;
    FVector Velocity Min;
    FVector Velocity Max;
    float Sine;
    float Glow Intensity;
    float Glow Value;
    class UMaterialInstanceDynamic* Particle Material;

    void UserConstructionScript();
    void Build();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Sparks(int32 EntryPoint);
};

#endif
