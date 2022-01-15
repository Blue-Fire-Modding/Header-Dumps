#ifndef UE4SS_SDK_Door_A06_SteamHouse_HPP
#define UE4SS_SDK_Door_A06_SteamHouse_HPP

class ADoor_A06_SteamHouse_C : UDoor_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* SM_SpikeFence;
    UStaticMeshComponent* StaticMesh1_0;
    float Move_Door_Steamhouse_Position_DCD25067449562CADF5339971BB82C6A;
    TEnumAsByte<ETimelineDirection::Type> Move_Door_Steamhouse__Direction_DCD25067449562CADF5339971BB82C6A;
    UTimelineComponent* Move Door Steamhouse;
    FVector OriginalLocation_StaticMesh;
    float Offset Door;

    void UserConstructionScript(bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_1);
    void Move Door Steamhouse__FinishedFunc();
    void Move Door Steamhouse__UpdateFunc();
    void OpenTimelineRun();
    void CloseTimelineRun();
    void InstantOpenExtra();
    void Build Extra 1();
    void ReceiveBeginPlay();
    void Force Close();
    void ExecuteUbergraph_Door_A06_SteamHouse(int32 EntryPoint, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_1, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue_2, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_1, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_2, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, FVector CallFunc_MakeVector_ReturnValue_3, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_3);
}

#endif
