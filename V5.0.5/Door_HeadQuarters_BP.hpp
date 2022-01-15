#ifndef UE4SS_SDK_Door_HeadQuarters_BP_HPP
#define UE4SS_SDK_Door_HeadQuarters_BP_HPP

class ADoor_HeadQuarters_BP_C : UDoor_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Timeline_1_Position_6E7F08324C13BEED018EA8B7B6433DDF;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_6E7F08324C13BEED018EA8B7B6433DDF;
    UTimelineComponent* Timeline_1;
    int32 DoorLoopKeep;
    bool IsDoorLoopPlaying;
    bool DebugPrint;

    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void OpenTimelineRun();
    void CloseTimelineRun();
    void ReceiveBeginPlay();
    void InstantUnlockExtra();
    void ReceiveEndPlay(uint8 EndPlayReason);
    void ExecuteUbergraph_Door_HeadQuarters_BP(int32 EntryPoint, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_1, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, float CallFunc_Lerp_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult, bool CallFunc_IsRobiValid_ReturnValue, uint8 K2Node_Event_EndPlayReason, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_PostEvent_ReturnValue, int32 CallFunc_PostEvent_ReturnValue_1, bool CallFunc_IsPlaying_ReturnValue);
}

#endif
