#ifndef UE4SS_SDK_DoorLever_HPP
#define UE4SS_SDK_DoorLever_HPP

class ADoorLever_C : AMechanics_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAkComponent* AkLeverSnapClose;
    UAkComponent* AkTrigger;
    USceneComponent* ScenePOI;
    UBoxComponent* Collision;
    UAkComponent* AkLeverSnap;
    UStaticMeshComponent* SM_Level;
    AMechanics_Master_C* Target;
    bool Timed;
    float Duration;
    bool TimedOn;
    APlayer_Character_BP_C* Player;
    float TimerStartDelay;
    bool Instant;
    bool StartClosed;
    bool InVoid;
    UAkAudioEvent* Trigger;
    bool LongTimer;
    bool MediumTimer;
    bool ShortTimer;
    UAkAudioEvent* TriggerMedium;
    UAkAudioEvent* TriggerShort;
    AVoid_Gate_C* VoidGate;
    AHolyGodStone_C* HolyGodStone;
    UStaticMesh* PressedMesh;
    UStaticMesh* OriginalMesh;
    int32 PlayingIDSound;
    TArray<FName> VoidTags;
    UMaterialInterface* DisappearNewMat;
    UMaterialInterface* DisappearOldMat0;
    UMaterialInterface* DisappearOldMat1;
    TEnumAsByte<VoidMusicType::Type> Music Type;
    bool AutoResetDamage;
    bool DisableSoundTimers;
    bool bCanStopActors;
    TArray<TScriptInterface<IIStoppable_C>> StoppableActors;

    void UserConstructionScript();
    void Change Material(bool New Material);
    void Set New Material(UMaterialInterface* Material);
    void ReceiveBeginPlay();
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void AlreadyUsed();
    void SetPermanent();
    void Reset();
    void TickMedium();
    void TickFast();
    void ClearTicks();
    void TickSuperFast();
    void PlayerDie();
    void Unbind Events();
    void Reset Die();
    void WarningTimerSoundCall();
    void CallbackBar();
    void WarningEnd(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    void WarningTimerSoundCall4Sec();
    void WarningTimerSoundCall2Sec();
    void CancelTimerSoundInVoid();
    void CloseTimerInVoid();
    void Reset Damage();
    void Change Visual(bool IsPressed, bool Instant);
    void Custom Activation(bool IsActivate);
    void Reset VoidMaker();
    void ExecuteUbergraph_DoorLever(int32 EntryPoint, Die__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_Variable_2, bool K2Node_Event_New_Material, UMaterialInterface* K2Node_Event_Material, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1, TArray<FName>& K2Node_MakeArray_Array, TArray<FName>& K2Node_MakeArray_Array_1, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, TSubclassOf<UDamageType> CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, TArray<FName>& K2Node_MakeArray_Array_2, TArray<FName>& K2Node_MakeArray_Array_3, bool Temp_bool_Variable_3, bool CallFunc_IsRobiValid_ReturnValue, TArray<FName>& K2Node_Select_Default, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_2, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_1, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_2, bool CallFunc_InRange_FloatFloat_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_3, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue_4, int32 CallFunc_PostEventAtLocation_ReturnValue_5, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, int32 CallFunc_PostEventAtLocation_ReturnValue_6, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_4, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue_2, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_6, APawn* CallFunc_GetPlayerPawn_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, bool K2Node_Select_Default_1, int32 CallFunc_PostEventAtLocation_ReturnValue_7, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool CallFunc_IsRobiValid_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue_2, bool Temp_bool_IsClosed_Variable, EAkCallbackType K2Node_CustomEvent_CallbackType, UAkCallbackInfo* K2Node_CustomEvent_CallbackInfo, bool Temp_bool_IsClosed_Variable_1, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP_1, bool K2Node_DynamicCast_bSuccess_1, TArray<AHolyGodStone_C*>& CallFunc_GetAllActorsOfClass_OutActors, AHolyGodStone_C* CallFunc_Array_Get_Item, bool Temp_bool_Has_Been_Initd_Variable_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_3, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1, bool Temp_bool_IsClosed_Variable_2, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, UMaterialInterface* K2Node_Select_Default_2, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_1, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_1, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_2, bool CallFunc_IsRobiValid_ReturnValue_3, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_3, OnAkPostEventCallback__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, StingerTriggerHolyTwo__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, int32 CallFunc_PostAkEvent_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue_4, bool Temp_bool_Variable_6, UMaterialInterface* K2Node_Select_Default_3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TArray<FName>& K2Node_MakeArray_Array_4, bool CallFunc_IsRobiValid_ReturnValue_5, bool CallFunc_IsRobiValid_ReturnValue_6, int32 CallFunc_PostAssociatedAkEvent_ReturnValue, int32 CallFunc_PostAssociatedAkEvent_ReturnValue_1, bool K2Node_CustomEvent_IsPressed, bool K2Node_CustomEvent_Instant, UStaticMesh* K2Node_Select_Default_4, bool CallFunc_SetStaticMesh_ReturnValue, bool K2Node_CustomEvent_IsActivate, bool Temp_bool_IsClosed_Variable_3, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_4, int32 CallFunc_PostAkEvent_ReturnValue_2, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_2, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_5, int32 CallFunc_PostAssociatedAkEvent_ReturnValue_2);
}

#endif
