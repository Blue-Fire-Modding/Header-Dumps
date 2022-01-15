#ifndef UE4SS_SDK_OverrideListenerLocation_HPP
#define UE4SS_SDK_OverrideListenerLocation_HPP

class AOverrideListenerLocation_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAkComponent* AkChoir;
    UBillboardComponent* L5;
    UBillboardComponent* L4;
    UBillboardComponent* L3;
    UBillboardComponent* L2;
    UBillboardComponent* L1;
    USceneComponent* Listener Positions;
    USceneComponent* DefaultSceneRoot;
    float ScaleTimelineChord_ScaleCurve_EC4B765645468E57A62D0F99738C0F7D;
    TEnumAsByte<ETimelineDirection::Type> ScaleTimelineChord__Direction_EC4B765645468E57A62D0F99738C0F7D;
    UTimelineComponent* ScaleTimelineChord;
    float VelocityRTPC_NewTrack_0_D589DAF2483516FEFF18C1A73E5A0F1C;
    TEnumAsByte<ETimelineDirection::Type> VelocityRTPC__Direction_D589DAF2483516FEFF18C1A73E5A0F1C;
    UTimelineComponent* VelocityRTPC;
    APlayer_Character_BP_C* Player;
    TArray<UBillboardComponent*> ListenerArray;
    FVector CurrentListenerLocation;
    int32 IndexListener;
    float Lerp Speed;
    int32 AmountOfCameraChanges;
    int32 SetSoundFinish;
    int32 FirstFinish;
    AVoid_Location_C* VoidLocationRef;
    bool IsFirst;
    float PlayRateTimeline;
    bool UpdateTimeline;
    float MapRangeB;
    float 16th;
    float PlayRate16th;
    float MapRangeA;
    bool UseStingerIntro;

    void VelocityRTPC__FinishedFunc();
    void VelocityRTPC__UpdateFunc();
    void ScaleTimelineChord__FinishedFunc();
    void ScaleTimelineChord__UpdateFunc();
    void ReceiveBeginPlay();
    void ReceiveEndPlay(uint8 EndPlayReason);
    void CustomTick();
    void NextListener();
    void FinishOverrideListener();
    void TriggerChord();
    void BeatSync();
    void ExecuteUbergraph_OverrideListenerLocation(int32 EntryPoint, int32 Temp_int_Variable, UAkAudioEvent* Temp_object_Variable, UAkAudioEvent* Temp_object_Variable_1, UAkAudioEvent* Temp_object_Variable_2, UAkAudioEvent* Temp_object_Variable_3, UAkAudioEvent* Temp_object_Variable_4, UAkAudioEvent* Temp_object_Variable_5, UAkAudioEvent* Temp_object_Variable_6, UAkAudioEvent* Temp_object_Variable_7, UAkAudioEvent* Temp_object_Variable_8, UAkAudioEvent* Temp_object_Variable_9, UAkAudioEvent* Temp_object_Variable_10, UAkAudioEvent* Temp_object_Variable_11, UAkAudioEvent* Temp_object_Variable_12, UAkAudioEvent* Temp_object_Variable_13, UAkAudioEvent* Temp_object_Variable_14, UAkAudioEvent* Temp_object_Variable_15, UAkAudioEvent* Temp_object_Variable_16, int32 Temp_int_Variable_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, bool Temp_bool_Variable_8, bool Temp_bool_Variable_9, bool Temp_bool_Variable_10, bool Temp_bool_Variable_11, bool Temp_bool_Variable_12, bool Temp_bool_Variable_13, bool Temp_bool_Variable_14, bool Temp_bool_Variable_15, bool Temp_bool_Variable_16, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, int32 Temp_int_Variable_2, UAkAudioEvent* K2Node_Select_Default, bool K2Node_Select_Default_1, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, APawn* CallFunc_GetPlayerPawn_ReturnValue, uint8 K2Node_Event_EndPlayReason, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, const TArray<UBillboardComponent*>& K2Node_MakeArray_Array, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, FRotator CallFunc_GetCameraRotation_ReturnValue, UPlayerController* CallFunc_GetPlayerController_ReturnValue, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, UBillboardComponent* CallFunc_Array_Get_Item, FVector CallFunc_K2_GetComponentLocation_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, FString CallFunc_MakeLiteralString_ReturnValue, FRotator CallFunc_RInterpTo_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, FVector CallFunc_VInterpTo_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_3, bool Temp_bool_IsClosed_Variable_1, UVoid_Location_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue, float CallFunc_GetRTPCValue_Value, ERTPCValueType CallFunc_GetRTPCValue_OutputValueType, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Variable_3, bool Temp_bool_Has_Been_Initd_Variable_1, UBillboardComponent* CallFunc_Array_Get_Item_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, FString CallFunc_Conv_IntToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_4, int32 CallFunc_PostEventAtLocation_ReturnValue_4, float CallFunc_MapRangeClamped_ReturnValue_2);
}

#endif
