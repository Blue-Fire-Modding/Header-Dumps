#ifndef UE4SS_SDK_Moving_Path_Actor_Loop_HPP
#define UE4SS_SDK_Moving_Path_Actor_Loop_HPP

class AMoving_Path_Actor_Loop_C : AMechanics_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAkComponent* AkGoUp;
    UAkComponent* AkLoop;
    UAkComponent* AkGoDown;
    UStaticMeshComponent* Cube;
    UBillboardComponent* Billboard;
    AMoving_Path_Spline_C* Path;
    float Distance;
    float Speed;
    float DelayTime_Start;
    bool SwitchDirection;
    float DelayTime_End;
    float Pos;
    bool Loop;
    bool AutoStart;
    AActor* Child;
    float ActorPreviousZ;
    float Time;
    bool UseTimeToMove;
    float CurrentTime;
    bool ChangeMesh;
    UStaticMesh* Mesh;
    UMaterialInterface* Material;
    float Float;
    UAkAudioEvent* SoundLoop;
    UAkAudioEvent* StopLoop;
    UAkAudioEvent* SoundStart1;
    UAkAudioEvent* SoundStart2;
    UAkAudioEvent* SoundStop1;
    UAkAudioEvent* SoundStop2;
    bool ShowPrint;
    float DelaySoundUp;
    float DelaySoundDown;
    UMaterialInterface* DisappearNewMat;
    UMaterialInterface* DisappearOldMat;
    bool bCanMove;

    void UserConstructionScript(FVector CallFunc_Conv_FloatToVector_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue, float CallFunc_GetSplineLength_ReturnValue, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue);
    void Change Material(bool New Material);
    void Set New Material(UMaterialInterface* Material);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void PlaySound();
    void StopSound();
    void Activate(bool ExternalControl, bool BeginPlay, bool ChangeCamera, bool Instant, bool Is Cutscene, bool Affect Timer);
    void Set Mobility(bool bCanMove);
    void ExecuteUbergraph_Moving_Path_Actor_Loop(int32 EntryPoint, bool Temp_bool_Variable, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_1, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_1, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_2, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_2, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_3, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_3, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_4, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_4, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_5, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_5, float Temp_float_Variable, bool Temp_bool_Variable_1, bool K2Node_Event_New_Material, UMaterialInterface* K2Node_Event_Material, float K2Node_Event_DeltaSeconds, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue, float CallFunc_GetSplineLength_ReturnValue, float CallFunc_GetSplineLength_ReturnValue_1, bool Temp_bool_Variable_2, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float K2Node_Select_Default, bool K2Node_Event_ExternalControl, bool K2Node_Event_BeginPlay, bool K2Node_Event_ChangeCamera, bool K2Node_Event_Instant, bool K2Node_Event_Is_Cutscene, bool K2Node_Event_Affect_Timer, TArray<AActor*>& CallFunc_GetAttachedActors_OutActors, FVector CallFunc_K2_GetActorLocation_ReturnValue, AActor* CallFunc_Array_Get_Item, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_Array_IsValidIndex_ReturnValue, float Temp_float_Variable_1, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float K2Node_Select_Default_1, bool K2Node_Select_Default_2, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue_2, int32 CallFunc_PostAkEvent_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_3, int32 CallFunc_PostAkEvent_ReturnValue_2, bool CallFunc_IsRobiValid_ReturnValue_4, bool CallFunc_IsRobiValid_ReturnValue_5, int32 CallFunc_PostAkEvent_ReturnValue_3, int32 CallFunc_PostAkEvent_ReturnValue_4, bool CallFunc_IsRobiValid_ReturnValue_6, int32 CallFunc_PostAkEvent_ReturnValue_5, bool Temp_bool_Variable_3, bool K2Node_Event_bCanMove, UMaterialInterface* K2Node_Select_Default_3);
}

#endif
