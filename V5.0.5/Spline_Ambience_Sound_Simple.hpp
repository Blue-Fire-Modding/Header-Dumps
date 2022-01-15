#ifndef UE4SS_SDK_Spline_Ambience_Sound_Simple_HPP
#define UE4SS_SDK_Spline_Ambience_Sound_Simple_HPP

class ASpline_Ambience_Sound_Simple_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBillboardComponent* Billboard;
    UAkComponent* Ak;
    USplineComponent* Spline;
    USceneComponent* DefaultSceneRoot;
    UAkAudioEvent* AmbientSound;
    UAkAudioEvent* AmbientSound2;
    float TimeTick;
    float OcclusionRefreshInterval;
    float CurrentDistance;
    float Interp;
    TArray<float> PastInterpolatedValues;
    int32 NumFramesToInterpOver;
    float AccumulatedInterpValues;
    int32 PlayingID;
    float DistanceToFalseSpline;
    int32 PlayingID2;

    void InterpLoop(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void InterpValues(int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
    void ReceiveTick(float DeltaSeconds);
    void AudioFollowPlayer();
    void ReceiveBeginPlay();
    void CustomTick();
    void CurrentDistanceSpline();
    void ExecuteUbergraph_Spline_Ambience_Sound_Simple(int32 EntryPoint, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_1, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_DeltaSeconds, UCharacter* CallFunc_GetPlayerCharacter_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_FindLocationClosestToWorldLocation_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_1, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, bool Temp_bool_IsClosed_Variable_1, UCharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_FindLocationClosestToWorldLocation_ReturnValue_1, float CallFunc_FindInputKeyClosestToWorldLocation_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_GetDistanceAlongSplineAtSplinePoint_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetDistanceAlongSplineAtSplinePoint_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_1, int32 CallFunc_PostAkEvent_ReturnValue_1);
}

#endif
