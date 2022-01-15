#ifndef UE4SS_SDK_Decal_HPP
#define UE4SS_SDK_Decal_HPP

class ADecal_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UDecalComponent* Decal;
    USceneComponent* DefaultSceneRoot;
    float Fade_Fade_ABF831B64AD6FAC0BA1DED894CDCC867;
    TEnumAsByte<ETimelineDirection::Type> Fade__Direction_ABF831B64AD6FAC0BA1DED894CDCC867;
    UTimelineComponent* Fade;
    UMaterialInterface* DecalMat;
    float MaxFade;

    void Fade__FinishedFunc();
    void Fade__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Decal(int32 EntryPoint, float CallFunc_Lerp_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
}

#endif
