#ifndef UE4SS_SDK_Uthas_Temple_End_Controller_HPP
#define UE4SS_SDK_Uthas_Temple_End_Controller_HPP

class AUthas_Temple_End_Controller_C : ACinematic_Controller_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBillboardComponent* Billboard_0;
    float Appear_Opacity_85C49AEE458BF52A2FE905B221F9DAE3;
    TEnumAsByte<ETimelineDirection::Type> Appear__Direction_85C49AEE458BF52A2FE905B221F9DAE3;
    UTimelineComponent* Appear;
    AActor* TargetA;
    AActor* Target Teleport;
    TArray<FName> Levels Visible;
    TArray<FName> Levels Invisible;
    FName Current Level;
    UBlueFire_Game_Instance_C* GameInstance;

    void Appear__FinishedFunc();
    void Appear__UpdateFunc();
    void OnNotifyEnd_636370EE456961F934F2478531E15878(FName NotifyName);
    void OnNotifyBegin_636370EE456961F934F2478531E15878(FName NotifyName);
    void OnInterrupted_636370EE456961F934F2478531E15878(FName NotifyName);
    void OnBlendOut_636370EE456961F934F2478531E15878(FName NotifyName);
    void OnCompleted_636370EE456961F934F2478531E15878(FName NotifyName);
    void AmbLand();
    void AmbKnowledge();
    void AmbWind();
    void AmbFire();
    void AmbEvil();
    void AmbSarana();
    void AmbEvilClose();
    void AmbEmpty();
    void Back();
    void Start();
    void StartCutscene();
    void EndGodRaySound();
    void End();
    void StartGodRaySound();
    void FIN();
    void TX1();
    void TX2();
    void TX1_DR();
    void TX2_DR();
    void TX9();
    void TX3_DR();
    void TX4_DR();
    void TX7();
    void TX8();
    void TX10();
    void TX11();
    void TX12();
    void TX13();
    void Pause();
    void DialogEnd();
    void Con();
    void Umbra1();
    void Disolve_Appear();
    void Disolve_Disappear();
    void LineOn();
    void LineOff();
    void TX1_DR_B();
    void TX1_DR_C();
    void TX1_DR_D();
    void TX1_DR_F();
    void TX1_DR_G();
    void TX0_DR();
    void DissolveInSound();
    void DisolveOutSound();
    void SkipCutscene();
    void AmbWater();
    void ExecuteUbergraph_Uthas_Temple_End_Controller(int32 EntryPoint, FName K2Node_CustomEvent_NotifyName_4, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FName Temp_name_Variable, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue_4, int32 CallFunc_PostEventAtLocation_ReturnValue_5, int32 CallFunc_PostEventAtLocation_ReturnValue_6, int32 CallFunc_PostEventAtLocation_ReturnValue_7, int32 CallFunc_PostEventAtLocation_ReturnValue_8, int32 CallFunc_PostEventAtLocation_ReturnValue_9, int32 CallFunc_PostEventAtLocation_ReturnValue_10, int32 CallFunc_PostEventAtLocation_ReturnValue_11, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_12, int32 CallFunc_PostEventAtLocation_ReturnValue_13, int32 CallFunc_PostEventAtLocation_ReturnValue_14, int32 CallFunc_PostEventAtLocation_ReturnValue_15, int32 CallFunc_PostEventAtLocation_ReturnValue_16, UDemoEnd_C* CallFunc_Create_ReturnValue, OnMovieSceneSequencePlayerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, float CallFunc_Cutscene_OutputPin, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, float CallFunc_Cutscene_OutputPin_1, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, const FTransform CallFunc_GetTransform_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FHitResult CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_1, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_2, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_3, const TArray<FText>& K2Node_MakeArray_Array_4, const TArray<FText>& K2Node_MakeArray_Array_5, const TArray<FText>& K2Node_MakeArray_Array_6, FText CallFunc_MakeLiteralText_ReturnValue, const TArray<FText>& K2Node_MakeArray_Array_7, const TArray<FText>& K2Node_MakeArray_Array_8, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_9, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_10, const TArray<FText>& K2Node_MakeArray_Array_11, bool Temp_bool_Has_Been_Initd_Variable, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_12, const TArray<FText>& K2Node_MakeArray_Array_13, const TArray<FText>& K2Node_MakeArray_Array_14, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_15, const TArray<FText>& K2Node_MakeArray_Array_16, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_17, const TArray<FText>& K2Node_MakeArray_Array_18, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_19, const TArray<FText>& K2Node_MakeArray_Array_20, bool Temp_bool_IsClosed_Variable, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_21, const TArray<FText>& K2Node_MakeArray_Array_22, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_23, const TArray<FText>& K2Node_MakeArray_Array_24, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_25, Removed__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, UNewItem_C* CallFunc_GetItemHUD_NewItemHud, FText CallFunc_MakeLiteralText_ReturnValue_1, FText CallFunc_MakeLiteralText_ReturnValue_2, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_26, const TArray<FText>& K2Node_MakeArray_Array_27, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_28, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_29, bool Temp_bool_Has_Been_Initd_Variable_1, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_30, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_31, const TArray<FText>& K2Node_MakeArray_Array_32, const TArray<FText>& K2Node_MakeArray_Array_33, const TArray<FText>& K2Node_MakeArray_Array_34, const TArray<FText>& K2Node_MakeArray_Array_35, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_2, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_36, const TArray<FText>& K2Node_MakeArray_Array_37, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue_17, int32 CallFunc_PostEventAtLocation_ReturnValue_18, UPlayerController* CallFunc_GetPlayerController_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue, const FTransform CallFunc_GetTransform_ReturnValue_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FVector CallFunc_BreakTransform_Location_1, FRotator CallFunc_BreakTransform_Rotation_1, FVector CallFunc_BreakTransform_Scale_1, FRotator CallFunc_MakeRotator_ReturnValue, FHitResult CallFunc_K2_SetActorLocationAndRotation_SweepHitResult_1, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue_1, const TArray<FName>& K2Node_MakeArray_Array_38, UGameInstance* CallFunc_GetGameInstance_ReturnValue, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_PostEventAtLocation_ReturnValue_19, int32 CallFunc_PostEventAtLocation_ReturnValue_20, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_GetItem_Success, bool CallFunc_GetItem_SpecialPopUp, bool Temp_bool_IsClosed_Variable_1);
}

#endif
