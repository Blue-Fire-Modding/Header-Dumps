#ifndef UE4SS_SDK_NuosWaterLevel_HPP
#define UE4SS_SDK_NuosWaterLevel_HPP

class ANuosWaterLevel_C : ANPCBound_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* A01_Nuos_WaterLevel_Lever;
    UStaticMeshComponent* StaticMesh;
    float Move_Alpha_F2B3B4E4422DE8B3E960E09FC5E00698;
    TEnumAsByte<ETimelineDirection::Type> Move__Direction_F2B3B4E4422DE8B3E960E09FC5E00698;
    UTimelineComponent* Move;
    float StartZ;
    AActor* Camera;
    float TargetZ;
    bool JustUsed;
    AActor* Target;
    AActor* TargetB;
    ANuosWaterLevel_C* Other NuosWaterLevel;
    float Target B Z Start Location;
    bool IsPersistent;

    void UserConstructionScript(FString CallFunc_GetDisplayName_ReturnValue);
    void Move__FinishedFunc();
    void Move__UpdateFunc();
    void MoveBegin();
    void CustomEvent_1();
    void CustomEvent();
    void ReceiveBeginPlay();
    void DialogStartCall();
    void Check Target B Z();
    void Custom Write ID();
    void ExecuteUbergraph_NuosWaterLevel(int32 EntryPoint, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable, FString Temp_string_Variable, FString Temp_string_Variable_1, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array, const TArray<FText>& K2Node_MakeArray_Array_1, const TArray<FText>& K2Node_MakeArray_Array_2, UPlayerController* CallFunc_GetPlayerController_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, APawn* CallFunc_GetPlayerPawn_ReturnValue, const TArray<FText>& K2Node_MakeArray_Array_3, const TArray<FText>& K2Node_MakeArray_Array_4, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, int32 CallFunc_PostEventAtLocation_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, float CallFunc_Cutscene_OutputPin, float CallFunc_Cutscene_OutputPin_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, FVector CallFunc_MakeVector_ReturnValue_1, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult_1, bool CallFunc_K2_SetActorLocation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, FString K2Node_Select_Default, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, FVector CallFunc_MakeVector_ReturnValue_2, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult_1, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult_2, bool CallFunc_K2_SetActorLocation_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_5, float CallFunc_BreakVector_X_4, float CallFunc_BreakVector_Y_4, float CallFunc_BreakVector_Z_4, FVector CallFunc_MakeVector_ReturnValue_3, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult_3, bool CallFunc_K2_SetActorLocation_ReturnValue_3);
}

#endif
