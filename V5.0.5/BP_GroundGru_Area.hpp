#ifndef UE4SS_SDK_BP_GroundGru_Area_HPP
#define UE4SS_SDK_BP_GroundGru_Area_HPP

class ABP_GroundGru_Area_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UParticleSystemComponent* P_GroundGru_Teleport;
    UDecalComponent* Decal;
    UStaticMeshComponent* GroundGru_Area_SM;
    USceneComponent* DefaultSceneRoot;

    void Show VFX(bool bIsTop);
    void ExecuteUbergraph_BP_GroundGru_Area(int32 EntryPoint, bool K2Node_CustomEvent_bIsTop);
}

#endif
