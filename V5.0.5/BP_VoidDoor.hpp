#ifndef UE4SS_SDK_BP_VoidDoor_HPP
#define UE4SS_SDK_BP_VoidDoor_HPP

class ABP_VoidDoor_C : UDoor_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* SM_FreezeOrb;
    UArrowComponent* Arrow;
    UStaticMeshComponent* SM_Orb;
    USkeletalMeshComponent* GuardianSoul_Skelmesh;
    float Glow_Door_Lerp_FBA3E0DC4719FA94E38401BE58C7F11A;
    TEnumAsByte<ETimelineDirection::Type> Glow_Door__Direction_FBA3E0DC4719FA94E38401BE58C7F11A;
    UTimelineComponent* Glow Door;
    float OrbGlow_TurnOnGlow_B0F3D25249460803BDAB2EB0D13EA2A9;
    TEnumAsByte<ETimelineDirection::Type> OrbGlow__Direction_B0F3D25249460803BDAB2EB0D13EA2A9;
    UTimelineComponent* OrbGlow;
    float OpenVoidDoor_Position_798E3665467F511824982B973C96E1D2;
    TEnumAsByte<ETimelineDirection::Type> OpenVoidDoor__Direction_798E3665467F511824982B973C96E1D2;
    UTimelineComponent* OpenVoidDoor;
    FVector Orb Init Location;
    UMaterialInstanceDynamic* MatDoorGlow;
    bool IsOpening;
    UParticleSystem* VFX Orb;
    UMaterialInstanceDynamic* MatOrbGlow;
    int32 GlowIndex;
    UMaterialInterface* GlowMat;
    UAkAudioEvent* GlowSound;

    void OpenVoidDoor__FinishedFunc();
    void OpenVoidDoor__UpdateFunc();
    void OrbGlow__FinishedFunc();
    void OrbGlow__UpdateFunc();
    void Glow Door__FinishedFunc();
    void Glow Door__UpdateFunc();
    void OnNotifyEnd_B8696BCD4DFB16D05C5A9DA6961AD0CF(FName NotifyName);
    void OnNotifyBegin_B8696BCD4DFB16D05C5A9DA6961AD0CF(FName NotifyName);
    void OnInterrupted_B8696BCD4DFB16D05C5A9DA6961AD0CF(FName NotifyName);
    void OnBlendOut_B8696BCD4DFB16D05C5A9DA6961AD0CF(FName NotifyName);
    void OnCompleted_B8696BCD4DFB16D05C5A9DA6961AD0CF(FName NotifyName);
    void OnNotifyEnd_63D3D6124827E911DF24A699CE28D1C3(FName NotifyName);
    void OnNotifyBegin_63D3D6124827E911DF24A699CE28D1C3(FName NotifyName);
    void OnInterrupted_63D3D6124827E911DF24A699CE28D1C3(FName NotifyName);
    void OnBlendOut_63D3D6124827E911DF24A699CE28D1C3(FName NotifyName);
    void OnCompleted_63D3D6124827E911DF24A699CE28D1C3(FName NotifyName);
    void ReceiveBeginPlay();
    void OpenTimelineRun();
    void CloseTimelineRun();
    void KeyUnlock();
    void Door Visibility(bool Visible);
    void SetTransformPlayer();
    void InstantUnlockExtra();
    void Make Glow Open Door();
    void ExecuteUbergraph_BP_VoidDoor(int32 EntryPoint, bool Temp_bool_Variable, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, FName K2Node_CustomEvent_NotifyName_9, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FName K2Node_CustomEvent_NotifyName_8, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName_7, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName_6, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName K2Node_CustomEvent_NotifyName_5, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FName Temp_name_Variable, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, FName K2Node_CustomEvent_NotifyName_4, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_8, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_9, FName Temp_name_Variable_1, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, bool K2Node_SwitchName_CmpSuccess, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_1, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_1, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_2, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_2, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_3, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_3, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_4, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_4, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_5, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_5, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_Lerp_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float CallFunc_Lerp_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue_2, FVector CallFunc_MakeVector_ReturnValue, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult, bool K2Node_CustomEvent_Visible, uint8 K2Node_Select_Default, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, float CallFunc_Cutscene_OutputPin, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, FVector CallFunc_GetForwardVector_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FRotator CallFunc_Conv_VectorToRotator_ReturnValue, FHitResult CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, float CallFunc_Cutscene_OutputPin_1, int32 CallFunc_PostAkEvent_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue_1, int32 CallFunc_PostAkEvent_ReturnValue_2, int32 CallFunc_PostAkEvent_ReturnValue_3, int32 CallFunc_PostAkEvent_ReturnValue_4, int32 CallFunc_PostAkEvent_ReturnValue_5, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue_4, FVector CallFunc_K2_GetComponentLocation_ReturnValue_2, UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_5, FRotator CallFunc_K2_GetActorRotation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
}

#endif
