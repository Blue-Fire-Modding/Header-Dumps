#ifndef UE4SS_SDK_Light_Goddess_Platform_BP_HPP
#define UE4SS_SDK_Light_Goddess_Platform_BP_HPP

class ALight_Goddess_Platform_BP_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UArrowComponent* Arrow;
    UStaticMeshComponent* Cube;
    USceneComponent* DefaultSceneRoot;
    float Timeline_1_Opacity_A77443214E9B4EF8C0B3D0A17ED62F88;
    float Timeline_1_Rtcp_A77443214E9B4EF8C0B3D0A17ED62F88;
    float Timeline_1_Fade_A77443214E9B4EF8C0B3D0A17ED62F88;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_A77443214E9B4EF8C0B3D0A17ED62F88;
    UTimelineComponent* Timeline_1;
    float Timeline_0_Resize_97835FEB4541D6E9FE2EB782870AAF53;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_97835FEB4541D6E9FE2EB782870AAF53;
    UTimelineComponent* Timeline_0;
    bool On;
    UMaterialInstanceDynamic* Mat;

    void UserConstructionScript(UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Shake();
    void Appear(bool Rotates);
    void CheckCollisionUnder();
    void ExecuteUbergraph_Light_Goddess_Platform_BP(int32 EntryPoint, FVector CallFunc_MakeVector_ReturnValue, bool Temp_bool_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue, float Temp_float_Variable, float CallFunc_Sin_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float Temp_float_Variable_1, FVector CallFunc_MakeVector_ReturnValue_1, FHitResult CallFunc_K2_AddLocalOffset_SweepHitResult, float CallFunc_MakeLiteralFloat_ReturnValue, bool K2Node_CustomEvent_Rotates, FVector CallFunc_MakeVector_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, bool CallFunc_RandomBool_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, float K2Node_Select_Default, FRotator CallFunc_MakeRotator_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, bool CallFunc_Less_FloatFloat_ReturnValue);
}

#endif
