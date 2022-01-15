#ifndef UE4SS_SDK_BP_Sky_Sphere_HPP
#define UE4SS_SDK_BP_Sky_Sphere_HPP

class ABP_Sky_Sphere_C : AActor
{
    UStaticMeshComponent* SkySphereMesh;
    USceneComponent* Base;
    UMaterialInstanceDynamic* Sky material;
    bool Refresh material;
    ADirectionalLight* Directional light actor;
    bool Colors determined by sun position;
    float Sun height;
    float Sun brightness;
    float Horizon Falloff;
    FLinearColor Zenith Color;
    FLinearColor Horizon color;
    FLinearColor Cloud color;
    FLinearColor Overall color;
    float Cloud speed;
    float Cloud opacity;
    float Stars brightness;
    UCurveLinearColor* Horizon color curve;
    UCurveLinearColor* Zenith color curve;
    UCurveLinearColor* Cloud color curve;

    void RefreshMaterial(float CallFunc_Abs_ReturnValue, FLinearColor CallFunc_GetClampedLinearColorValue_ReturnValue, float CallFunc_Lerp_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue, float CallFunc_MapRangeUnclamped_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FRotator CallFunc_K2_GetActorRotation_ReturnValue_1, FRotator CallFunc_MakeRotator_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, FVector CallFunc_Conv_RotatorToVector_ReturnValue, float CallFunc_MapRangeUnclamped_ReturnValue_1, FLinearColor CallFunc_Conv_VectorToLinearColor_ReturnValue, FLinearColor CallFunc_GetClampedLinearColorValue_ReturnValue_1, FLinearColor CallFunc_GetClampedLinearColorValue_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, FLinearColor CallFunc_LinearColorLerp_ReturnValue, FLinearColor CallFunc_Conv_ColorToLinearColor_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue_2, FVector CallFunc_Conv_RotatorToVector_ReturnValue_1, FLinearColor CallFunc_Conv_VectorToLinearColor_ReturnValue_1);
    void UpdateSunDirection(bool CallFunc_Less_FloatFloat_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_Abs_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_SelectFloat_ReturnValue, float CallFunc_MapRangeUnclamped_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue_1, FLinearColor CallFunc_Conv_ColorToLinearColor_ReturnValue, FVector CallFunc_Conv_RotatorToVector_ReturnValue, FLinearColor CallFunc_Conv_VectorToLinearColor_ReturnValue, float CallFunc_Abs_ReturnValue_1, FLinearColor CallFunc_GetClampedLinearColorValue_ReturnValue, float CallFunc_Lerp_ReturnValue, FLinearColor CallFunc_GetClampedLinearColorValue_ReturnValue_1, FLinearColor CallFunc_GetClampedLinearColorValue_ReturnValue_2);
    void UserConstructionScript(UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
}

#endif
