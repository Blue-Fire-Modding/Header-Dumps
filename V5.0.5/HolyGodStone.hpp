#ifndef UE4SS_SDK_HolyGodStone_HPP
#define UE4SS_SDK_HolyGodStone_HPP

class AHolyGodStone_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAkComponent* VoidDLCMusicMonolith;
    UAkComponent* VoidDLCMusic;
    UAkComponent* Play_Silver_Shard_Last_Collect_Void;
    UAkComponent* SilverShard;
    UStaticMeshComponent* StaticMesh;
    UAkComponent* Ak;
    UPointLightComponent* PointLight;
    UBoxComponent* Box1;
    USceneComponent* DefaultSceneRoot;
    float Timeline_0_Z_D3CD70F44A180B20CD06DC974877B396;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_D3CD70F44A180B20CD06DC974877B396;
    UTimelineComponent* Timeline_0;
    FString ID;
    bool Used;
    UPickUp_Action_UI_C* ActionWidget;
    bool IsDLC;
    FString Name;
    FGodStone_Structure GodStoneInfo;
    TEnumAsByte<VoidMusicType::Type> VoidMusicType;
    TArray<ASilverShard_C*> Shards;
    UCounter_C* CounterUI;
    int32 Amount;
    float ZOrigin;
    float StartMusicDelay;
    APlayer_Character_BP_C* Player;
    bool GodstoneFinded;
    FHolyGodStone_CStingerTriggerHoly StingerTriggerHoly;
    void StingerTriggerHoly();
    FHolyGodStone_CStingerTriggerHolyTwo StingerTriggerHolyTwo;
    void StingerTriggerHolyTwo();
    bool VoidMusicNew;
    bool CanLevitate;
    FText TextUsed;
    FText Text;
    TMap<int32, FString> GA VoidNameMap;
    float Timer;
    bool TimerOn;
    FGAVoid_Struct GA Struct;
    bool SaveData;
    bool UseGOG;

    void CheckQuestAllVoids(const FString Temp_string_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
    void UserConstructionScript(FString CallFunc_GetDisplayName_ReturnValue);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void InpActEvt_PC_Interact_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Gamepad_Interact_Shield_K2Node_InputActionEvent_0(FKey Key);
    void Begin Play Counter();
    void Show HUD();
    void Update Amount();
    void Remove HUD();
    void ReceiveBeginPlay();
    void BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void RemoveActionW();
    void Levitate();
    void AdjustRtpc();
    void Complete Godstone();
    void UpdateGodStone();
    void CheckPersistence();
    void Callback(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    void FakeCallback();
    void CallbackMonolith(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    void Custom Begin Overlap();
    void Custom End Overlap();
    void Force Exit Void();
    void SkippedCutscene();
    void VoidDeath();
    void VoidExit(bool Won);
    void Add HolyGodStone();
    void OnRemovePickupUI(bool bRemove);
    void ExecuteUbergraph_HolyGodStone(int32 EntryPoint, bool Temp_bool_Variable, OnRemovePickupUI__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FKey K2Node_InputActionEvent_Key_1, bool Temp_bool_Variable_1, APawn* CallFunc_GetPlayerPawn_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Array_Index_Variable_1, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, bool Temp_bool_IsClosed_Variable_2, bool Temp_bool_Has_Been_Initd_Variable_2, UPickUp_Action_UI_C* CallFunc_Create_ReturnValue, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_1, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_IsRobiValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_2, ASilverShard_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, FString CallFunc_GetDisplayName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_IsRobiValid_ReturnValue_1, VoidExit__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsRobiValid_ReturnValue_2, GA VoidExit__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsRobiValid_ReturnValue_3, int32 CallFunc_PostAssociatedAkEvent_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_4, UpdateAmount__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, int32 CallFunc_PostAssociatedAkEvent_ReturnValue_1, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, ASilverShard_C* CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_1, bool CallFunc_Check_State_ID_Used, VoidDeath__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, UPlayerController* CallFunc_GetPlayerController_ReturnValue, UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, UCounter_C* CallFunc_Create_ReturnValue_1, VoidEnter__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsRobiValid_ReturnValue_5, TArray<FName>& K2Node_MakeArray_Array, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, OnAkPostEventCallback__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue_6, int32 CallFunc_PostAssociatedAkEvent_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Add_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_3, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, OnAkPostEventCallback__DelegateSignature K2Node_CreateDelegate_OutputDelegate_8, FVector CallFunc_MakeVector_ReturnValue_1, int32 Temp_int_Variable, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_NormalizeToRange_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc_FClamp_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue_3, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue, UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, bool CallFunc_IsRobiValid_ReturnValue_7, FString CallFunc_CheckState_Same_ID_1, bool CallFunc_CheckState_Used_1, bool CallFunc_IsRobiValid_ReturnValue_8, FSave_PlayerStats K2Node_MakeStruct_Save_PlayerStats, FGodStone_Structure CallFunc_Array_Get_Item_2, int32 CallFunc_Add_IntInt_ReturnValue_4, FGodStone_Structure K2Node_MakeStruct_GodStone_Structure, FSave_PlayerStats K2Node_MakeStruct_Save_PlayerStats_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FGodStone_Structure K2Node_MakeStruct_GodStone_Structure_1, FGodStone_Structure K2Node_MakeStruct_GodStone_Structure_2, bool CallFunc_IsRobiValid_ReturnValue_9, FSave_PlayerStats K2Node_MakeStruct_Save_PlayerStats_2, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_4, EAkCallbackType K2Node_CustomEvent_CallbackType_1, UAkCallbackInfo* K2Node_CustomEvent_CallbackInfo_1, int32 CallFunc_PostAssociatedAkEvent_ReturnValue_3, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_PostAssociatedAkEvent_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, EAkCallbackType K2Node_CustomEvent_CallbackType, UAkCallbackInfo* K2Node_CustomEvent_CallbackInfo, int32 Temp_int_Variable_1, int32 CallFunc_PostEventAtLocation_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_4, int32 CallFunc_PostEventAtLocation_ReturnValue_5, FText K2Node_Select_Default, FString CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool K2Node_CustomEvent_Won, FString CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, FString CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_1, FGAVoid_Struct K2Node_MakeStruct_GAVoid_Struct, FString CallFunc_Conv_FloatToString_ReturnValue, FGodStone_Structure K2Node_MakeStruct_GodStone_Structure_3, FString CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_EqualEqual_BoolBool_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue_4, FKey K2Node_InputActionEvent_Key, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_BoolBool_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_5, FGAVoid_Struct K2Node_MakeStruct_GAVoid_Struct_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, FGodStone_Structure K2Node_MakeStruct_GodStone_Structure_4, FString CallFunc_Conv_FloatToString_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_2, FGAVoid_Struct K2Node_MakeStruct_GAVoid_Struct_2, FGodStone_Structure K2Node_MakeStruct_GodStone_Structure_5, FGodStone_Structure K2Node_MakeStruct_GodStone_Structure_6, bool K2Node_CustomEvent_bRemove, bool CallFunc_IsRobiValid_ReturnValue_10, bool CallFunc_IsInViewport_ReturnValue, FText K2Node_Select_Default_1);
    void StingerTriggerHolyTwo__DelegateSignature();
    void StingerTriggerHoly__DelegateSignature();
}

#endif
