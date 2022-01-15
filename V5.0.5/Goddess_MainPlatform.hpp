#ifndef UE4SS_SDK_Goddess_MainPlatform_HPP
#define UE4SS_SDK_Goddess_MainPlatform_HPP

class AGoddess_MainPlatform_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAkComponent* Play_Ice_Platform_Rumble_Loop;
    UStaticMeshComponent* Cube;
    USceneComponent* DefaultSceneRoot;
    float Float_Float_D08B39E14B39E940178459A00CEF735B;
    TEnumAsByte<ETimelineDirection::Type> Float__Direction_D08B39E14B39E940178459A00CEF735B;
    UTimelineComponent* Float;
    float Timeline_0_Opacity_F9E0A8BF42C9C1874C551FB4914402B5;
    float Timeline_0_Rtcp_F9E0A8BF42C9C1874C551FB4914402B5;
    float Timeline_0_Fade_F9E0A8BF42C9C1874C551FB4914402B5;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_F9E0A8BF42C9C1874C551FB4914402B5;
    UTimelineComponent* Timeline_0;
    bool IsFading;
    float Duration;
    UMaterialInstanceDynamic* Mat;

    void UserConstructionScript(UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Float__FinishedFunc();
    void Float__UpdateFunc();
    void Respawn();
    void Trigger();
    void ReceiveBeginPlay();
    void CheckUnderNeath();
    void ExecuteUbergraph_Goddess_MainPlatform(int32 EntryPoint, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_1, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_1, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_1, int32 CallFunc_PostAkEvent_ReturnValue, int32 CallFunc_PostAssociatedAkEvent_ReturnValue, FHitResult CallFunc_K2_AddLocalOffset_SweepHitResult, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
}

#endif
