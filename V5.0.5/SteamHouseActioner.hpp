#ifndef UE4SS_SDK_SteamHouseActioner_HPP
#define UE4SS_SDK_SteamHouseActioner_HPP

class ASteamHouseActioner_C : AInteractionMaster_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAkComponent* Ak;
    UStaticMeshComponent* A06_SteamMachineActivator;
    UParticleSystemComponent* P_Smoke;
    UStaticMeshComponent* Cauldron_Lava;
    UArrowComponent* Arrow_Player;
    float Show_Lava_Lerp_C8924E0B49FEEC2D78E4C89BBD54E40D;
    TEnumAsByte<ETimelineDirection::Type> Show_Lava__Direction_C8924E0B49FEEC2D78E4C89BBD54E40D;
    UTimelineComponent* Show Lava;
    ULevelSequence* Sequence;
    ASteamHouse_Machines_C* SteamHouseController;
    FVector Finish Location;
    ASteamHouseMachines_Anim_C* Machine;

    void UserConstructionScript(FString CallFunc_GetDisplayName_ReturnValue);
    void Show Lava__FinishedFunc();
    void Show Lava__UpdateFunc();
    void OnNotifyEnd_266368294BF9E3E51672B0B96E20B27D(FName NotifyName);
    void OnNotifyBegin_266368294BF9E3E51672B0B96E20B27D(FName NotifyName);
    void OnInterrupted_266368294BF9E3E51672B0B96E20B27D(FName NotifyName);
    void OnBlendOut_266368294BF9E3E51672B0B96E20B27D(FName NotifyName);
    void OnCompleted_266368294BF9E3E51672B0B96E20B27D(FName NotifyName);
    void End();
    void End1();
    void AlreadyUsed();
    void PressButton();
    void ReceiveBeginPlay();
    void Cutscene Show Lava();
    void SetTransformPlayer();
    void ExecuteUbergraph_SteamHouseActioner(int32 EntryPoint, OnMovieSceneSequencePlayerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName_4, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, FName Temp_name_Variable, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, float CallFunc_Cutscene_OutputPin, float CallFunc_Cutscene_OutputPin_1, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const TArray<FText>& K2Node_MakeArray_Array, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_1, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult_2, int32 CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue_4, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, FVector CallFunc_GetForwardVector_ReturnValue, FRotator CallFunc_Conv_VectorToRotator_ReturnValue, FHitResult CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue);
}

#endif
