#ifndef UE4SS_SDK_Volume_Trigger_Enter_Exit_HPP
#define UE4SS_SDK_Volume_Trigger_Enter_Exit_HPP

class AVolume_Trigger_Enter_Exit_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UCapsuleComponent* Capsule;
    UAkComponent* AkComponent2;
    UAkComponent* Ak_Component;
    UBoxComponent* Box;
    USceneComponent* DefaultSceneRoot;
    UAkAudioEvent* Ak_Event_Start;
    TSubclassOf<UAkComponent> Component;
    UAkAudioEvent* Ak_Event_Stop;
    UAkAudioEvent* Ak_Event_Start2;
    UAkAudioEvent* Ak_Event_Stop2;
    bool LowerVolumeAmbiences;
    bool UseCapsuleCollision;
    APlayer_Character_BP_C* Player;
    bool Debug;

    void UserConstructionScript();
    void ReceiveActorBeginOverlap(AActor* OtherActor);
    void ReceiveActorEndOverlap(AActor* OtherActor);
    void ReceiveBeginPlay();
    void ReceiveEndPlay(uint8 EndPlayReason);
    void StreamOut();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void CheckIfAlreadyOutOfVolume();
    void ForceStop();
    void Build();
    void ExecuteUbergraph_Volume_Trigger_Enter_Exit(int32 EntryPoint, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, bool Temp_bool_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Has_Been_Initd_Variable, StreamOut__DelegateSignature K2Node_CreateDelegate_OutputDelegate, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_1, APawn* CallFunc_GetPlayerPawn_ReturnValue, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_1, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_2, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, AActor* K2Node_Event_OtherActor_1, bool CallFunc_IsRobiValid_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_1, FString CallFunc_GetDisplayName_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_2, AActor* K2Node_Event_OtherActor, bool CallFunc_IsRobiValid_ReturnValue_3, TArray<AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, int32 CallFunc_Array_Length_ReturnValue, uint8 K2Node_Event_EndPlayReason, bool CallFunc_IsRobiValid_ReturnValue_4, bool CallFunc_IsRobiValid_ReturnValue_5, int32 CallFunc_PostAkEvent_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_6, bool CallFunc_IsRobiValid_ReturnValue_7, int32 CallFunc_PostAkEvent_ReturnValue_1, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_2, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_3, int32 CallFunc_PostAkEvent_ReturnValue_2, bool Temp_bool_IsClosed_Variable_1, int32 Temp_int_Array_Index_Variable, AActor* CallFunc_Array_Get_Item, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_3, AActor* K2Node_ComponentBoundEvent_OtherActor_3, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_3, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_3, bool K2Node_ComponentBoundEvent_bFromSweep_1, const FHitResult K2Node_ComponentBoundEvent_SweepResult_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_2, AActor* K2Node_ComponentBoundEvent_OtherActor_2, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_2, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_2, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, TArray<AActor*>& CallFunc_GetOverlappingActors_OverlappingActors_1, int32 CallFunc_Array_Length_ReturnValue_1, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue_3, bool Temp_bool_Has_Been_Initd_Variable_1, UPrimitiveComponent* K2Node_Select_Default, USceneComponent* K2Node_Select_Default_1, UPrimitiveComponent* K2Node_Select_Default_2, USceneComponent* K2Node_Select_Default_3);
}

#endif
