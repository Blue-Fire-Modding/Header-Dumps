#ifndef UE4SS_SDK_HoverPlatform_HPP
#define UE4SS_SDK_HoverPlatform_HPP

class AHoverPlatform_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* Plane1;
    UStaticMeshComponent* Plane;
    USceneComponent* DefaultSceneRoot;
    float Play_Opacity_BC92B0ED4533968EEE7BB1BAAC6A23A1;
    TEnumAsByte<ETimelineDirection::Type> Play__Direction_BC92B0ED4533968EEE7BB1BAAC6A23A1;
    UTimelineComponent* Play;
    float Z;
    FHoverPlatform_CFinish Finish;
    void Finish();
    UMaterialInstanceDynamic* Mat;

    void Play__FinishedFunc();
    void Play__UpdateFunc();
    void ReceiveBeginPlay();
    void QuickFade();
    void ExecuteUbergraph_HoverPlatform(int32 EntryPoint, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue_1, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1);
    void Finish__DelegateSignature();
}

#endif
