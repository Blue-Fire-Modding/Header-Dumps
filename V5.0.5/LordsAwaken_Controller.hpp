#ifndef UE4SS_SDK_LordsAwaken_Controller_HPP
#define UE4SS_SDK_LordsAwaken_Controller_HPP

class ALordsAwaken_Controller_C : ACinematic_Controller_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Timeline_0_Glow_E6593E0A401A001A145CC1805159D86A;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_E6593E0A401A001A145CC1805159D86A;
    UTimelineComponent* Timeline_0;
    AActor* TargetA;
    AStaticMeshActor* Logo;
    UMaterialInstanceDynamic* Logo Glow;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OnNotifyEnd_7F5557494DC3BFB9D1F0CA8F8E1B689D(FName NotifyName);
    void OnNotifyBegin_7F5557494DC3BFB9D1F0CA8F8E1B689D(FName NotifyName);
    void OnInterrupted_7F5557494DC3BFB9D1F0CA8F8E1B689D(FName NotifyName);
    void OnBlendOut_7F5557494DC3BFB9D1F0CA8F8E1B689D(FName NotifyName);
    void OnCompleted_7F5557494DC3BFB9D1F0CA8F8E1B689D(FName NotifyName);
    void StartCutscene();
    void EndGodRaySound();
    void End();
    void StartGodRaySound();
    void UmbraAnim();
    void FogBeira();
    void FogNormal();
    void FogSirion();
    void FogSamael();
    void SkipCutscene();
    void ReceiveBeginPlay();
    void CutsceneGlow();
    void Cutscene Begin Play Used();
    void ExecuteUbergraph_LordsAwaken_Controller(int32 EntryPoint, OnMovieSceneSequencePlayerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName_4, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, FName Temp_name_Variable, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, float CallFunc_Cutscene_OutputPin, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, float CallFunc_Cutscene_OutputPin_1, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, const FTransform CallFunc_GetTransform_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FHitResult CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
}

#endif
