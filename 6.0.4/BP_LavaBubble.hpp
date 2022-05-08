#ifndef UE4SS_SDK_BP_LavaBubble_HPP
#define UE4SS_SDK_BP_LavaBubble_HPP

class ABP_LavaBubble_C : public AActor
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
    float VelocityMin;
    float VelocityMax;
    float NewVar_0;

    void UserConstructionScript();
    void Build();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_LavaBubble(int32 EntryPoint);
};

#endif
