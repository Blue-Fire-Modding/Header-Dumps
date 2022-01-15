#ifndef UE4SS_SDK_Decal_Ice_HPP
#define UE4SS_SDK_Decal_Ice_HPP

class ADecal_Ice_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UDecalComponent* Decal;
    USceneComponent* DefaultSceneRoot;
    float Fade_Opacity_210D51BB469B9EB86EF50DA09F0655C9;
    float Fade_Erode_210D51BB469B9EB86EF50DA09F0655C9;
    TEnumAsByte<ETimelineDirection::Type> Fade__Direction_210D51BB469B9EB86EF50DA09F0655C9;
    UTimelineComponent* Fade;
    UMaterialInstanceDynamic* IceMat;

    void Fade__FinishedFunc();
    void Fade__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Decal_Ice(int32 EntryPoint, float CallFunc_Lerp_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
}

#endif
