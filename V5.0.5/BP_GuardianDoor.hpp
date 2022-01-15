#ifndef UE4SS_SDK_BP_GuardianDoor_HPP
#define UE4SS_SDK_BP_GuardianDoor_HPP

class ABP_GuardianDoor_C : UDoor_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UArrowComponent* Arrow;
    float Timeline_2_Glow_CBB634A844CBE3498C79BC9EA3AC5FFA;
    TEnumAsByte<ETimelineDirection::Type> Timeline_2__Direction_CBB634A844CBE3498C79BC9EA3AC5FFA;
    UTimelineComponent* Timeline_2;
    float GuardianSoulsKey_TurnOn_925B21104E2D6B7806B3DFB773AE1FE7;
    TEnumAsByte<ETimelineDirection::Type> GuardianSoulsKey__Direction_925B21104E2D6B7806B3DFB773AE1FE7;
    UTimelineComponent* GuardianSoulsKey;
    float Timeline_1_Position_2A12EF894DA5EAB654EE0A966493E8D1;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_2A12EF894DA5EAB654EE0A966493E8D1;
    UTimelineComponent* Timeline_1;
    bool Debug Cutscene;
    UMaterialInstanceDynamic* MatGlowCutscene;
    int32 BrokenChains;
    TArray<AVoid_Gate_C*> VoidGateArray;
    UMaterialInstanceDynamic* MatGlowDoor;
    UMaterialInstanceDynamic* MatGlowLocks;

    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void GuardianSoulsKey__FinishedFunc();
    void GuardianSoulsKey__UpdateFunc();
    void GuardianSoulsKey__TEST__EventFunc();
    void GuardianSoulsKey__Sound__EventFunc();
    void GuardianSoulsKey__IncreaseGlow__EventFunc();
    void Timeline_2__FinishedFunc();
    void Timeline_2__UpdateFunc();
    void ReceiveBeginPlay();
    void OpenTimelineRun();
    void CloseTimelineRun();
    void KeyUnlock();
    void SetTransformPlayer();
    void BreakChain();
    void Glow Chain(UPrimitiveComponent* Target);
    void InitializeChains();
    void CastToVoids();
    void VoidExitRun(UVoid_Gate_C* Gate);
    void ExecuteUbergraph_BP_GuardianDoor(int32 EntryPoint, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_1, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_1, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_2, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_2, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_3, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_3, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_4, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_4, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_5, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_5, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_6, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_6, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_7, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_7, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_8, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_8, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_9, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_9, int32 Temp_int_Variable, UStaticMeshComponent* Temp_object_Variable, UStaticMeshComponent* Temp_object_Variable_1, UStaticMeshComponent* Temp_object_Variable_2, UStaticMeshComponent* Temp_object_Variable_3, UStaticMeshComponent* Temp_object_Variable_4, UStaticMeshComponent* Temp_object_Variable_5, UStaticMeshComponent* Temp_object_Variable_6, UStaticMeshComponent* Temp_object_Variable_7, int32 Temp_int_Variable_1, UStaticMeshComponent* Temp_object_Variable_8, UStaticMeshComponent* Temp_object_Variable_9, UStaticMeshComponent* Temp_object_Variable_10, UStaticMeshComponent* Temp_object_Variable_11, UStaticMeshComponent* Temp_object_Variable_12, UStaticMeshComponent* Temp_object_Variable_13, UStaticMeshComponent* Temp_object_Variable_14, UStaticMeshComponent* Temp_object_Variable_15, ShouldOpenDoor__DelegateSignature K2Node_CreateDelegate_OutputDelegate, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_10, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_10, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, int32 Temp_int_Array_Index_Variable, FVector CallFunc_MakeVector_ReturnValue, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult, float CallFunc_Cutscene_OutputPin, FVector CallFunc_GetForwardVector_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FRotator CallFunc_Conv_VectorToRotator_ReturnValue, FHitResult CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, float CallFunc_Cutscene_OutputPin_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue_1, int32 CallFunc_PostAkEvent_ReturnValue_2, int32 CallFunc_PostAkEvent_ReturnValue_3, int32 CallFunc_PostAkEvent_ReturnValue_4, int32 CallFunc_PostAkEvent_ReturnValue_5, int32 CallFunc_PostAkEvent_ReturnValue_6, int32 CallFunc_PostAkEvent_ReturnValue_7, int32 CallFunc_PostAkEvent_ReturnValue_8, int32 CallFunc_PostEvent_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_3, UPrimitiveComponent* K2Node_CustomEvent_Target, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, UPlayerController* CallFunc_GetPlayerController_ReturnValue, UStaticMeshComponent* K2Node_Select_Default, FString CallFunc_GetDisplayName_ReturnValue, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, APawn* CallFunc_GetPlayerPawn_ReturnValue, UVoid_Gate_C* K2Node_CustomEvent_Gate, UVoid_Gate_C* CallFunc_Array_Get_Item, FString CallFunc_GetDisplayName_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Variable_2, UStaticMeshComponent* K2Node_Select_Default_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue, FString CallFunc_GetDisplayName_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, FString CallFunc_CheckState_Same_ID_1, bool CallFunc_CheckState_Used_1, int32 CallFunc_MakeLiteralInt_ReturnValue, UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1, int32 CallFunc_MakeLiteralInt_ReturnValue_1, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, UMaterialInterface* CallFunc_GetMaterial_ReturnValue_2, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, float CallFunc_K2_GetScalarParameterValue_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_PostEvent_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_4, FString CallFunc_CheckState_Same_ID_2, bool CallFunc_CheckState_Used_2);
}

#endif
