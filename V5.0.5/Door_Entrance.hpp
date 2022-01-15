#ifndef UE4SS_SDK_Door_Entrance_HPP
#define UE4SS_SDK_Door_Entrance_HPP

class ADoor_Entrance_C : UDoor_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBoxComponent* DoorCollision;
    UStaticMeshComponent* Penumbra_FinalDoor_PenumbraDoor_Bottom;
    UStaticMeshComponent* Penumbra_FinalDoor_PenumbraDoor_Top;
    UStaticMeshComponent* Penumbra_FinalDoor_PenumbraDoor_Right;
    UStaticMeshComponent* Penumbra_FinalDoor_PenumbraDoor_Left;
    float OpenPenumbraDoor_Lerp_49770D9F4E2B70E3A0D42DB578B678ED;
    TEnumAsByte<ETimelineDirection::Type> OpenPenumbraDoor__Direction_49770D9F4E2B70E3A0D42DB578B678ED;
    UTimelineComponent* OpenPenumbraDoor;
    float Value Horizontal;
    float Value Vertical;

    void UserConstructionScript(FString CallFunc_GetDisplayName_ReturnValue);
    void OpenPenumbraDoor__FinishedFunc();
    void OpenPenumbraDoor__UpdateFunc();
    void OpenPenumbraDoor__Shake__EventFunc();
    void OpenTimelineRun();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Door_Entrance(int32 EntryPoint, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Lerp_ReturnValue_2, float CallFunc_Lerp_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_3, FVector CallFunc_MakeVector_ReturnValue_2, FVector CallFunc_MakeVector_ReturnValue_3, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_2, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_3, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used);
}

#endif
