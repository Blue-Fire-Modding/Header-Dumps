#ifndef UE4SS_SDK_BP_ShadowDecal_HPP
#define UE4SS_SDK_BP_ShadowDecal_HPP

class ABP_ShadowDecal_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UDecalComponent* Decal;
    USceneComponent* DefaultSceneRoot;
    float Fade_Fade_1CC0E9154DDFB260869F66B6899AC881;
    TEnumAsByte<ETimelineDirection::Type> Fade__Direction_1CC0E9154DDFB260869F66B6899AC881;
    UTimelineComponent* Fade;
    UMaterialInstanceDynamic* DecalMat;

    void Fade__FinishedFunc();
    void Fade__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_ShadowDecal(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
}

#endif
