#ifndef UE4SS_SDK_BP_GlowZone_HPP
#define UE4SS_SDK_BP_GlowZone_HPP

class ABP_GlowZone_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UPointLightComponent* PointLight;
    UAkComponent* Ak;
    float Fade_Opacity_6F1AB5724046E9693905E2B4C2E64225;
    TEnumAsByte<ETimelineDirection::Type> Fade__Direction_6F1AB5724046E9693905E2B4C2E64225;
    UTimelineComponent* Fade;
    FLinearColor Glow Color;
    float Glow Value;
    float Glow Speed;
    UMaterialInstanceDynamic* Mat1;
    UMaterialInstanceDynamic* Mat2;
    float Light Intensity;
    bool IsTorch;

    void UserConstructionScript();
    void Fade__FinishedFunc();
    void Fade__UpdateFunc();
    void ReceiveBeginPlay();
    void Build();
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void ExecuteUbergraph_BP_GlowZone(int32 EntryPoint, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, int32 CallFunc_PostAkEvent_ReturnValue);
}

#endif
