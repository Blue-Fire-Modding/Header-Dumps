#ifndef UE4SS_SDK_BP_Lighting_HPP
#define UE4SS_SDK_BP_Lighting_HPP

class ABP_Lighting_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* DefaultSceneRoot;
    float LightFlash_Intensity_161ADB8C4E50946AAA56738C820788AB;
    TEnumAsByte<ETimelineDirection::Type> LightFlash__Direction_161ADB8C4E50946AAA56738C820788AB;
    UTimelineComponent* LightFlash;
    bool AutoEnable;
    AStaticMeshActor* Skysphere;
    UMaterialInstanceDynamic* MatSkysphere;
    FVector2D Delay Range;
    bool IsStopped;

    void LightFlash__FinishedFunc();
    void LightFlash__UpdateFunc();
    void LightFlash__Black Moments__EventFunc();
    void ReceiveBeginPlay();
    void Replay();
    void Set AutoEnable();
    void Make Lightning();
    void Stop();
    void ExecuteUbergraph_BP_Lighting(int32 EntryPoint, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_2, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_1, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_1, bool Temp_bool_Has_Been_Initd_Variable, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, int32 CallFunc_PostEvent_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_RandomFloatInRange_ReturnValue_2, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool Temp_bool_IsClosed_Variable, int32 CallFunc_PostEvent_ReturnValue_1);
}

#endif
