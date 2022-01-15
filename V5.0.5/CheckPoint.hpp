#ifndef UE4SS_SDK_CheckPoint_HPP
#define UE4SS_SDK_CheckPoint_HPP

class ACheckPoint_C : ANPCBound_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UParticleSystemComponent* P_SaveCheckpoint;
    UStaticMeshComponent* CheckpointBase;
    UStaticMeshComponent* StaticMesh;
    UParticleSystemComponent* ParticleSystem;
    UDecalComponent* Decal;
    UArrowComponent* CameraDirection;
    UArrowComponent* PlayerDirection;
    float Timeline_0_Intensity_BDC6228346BBB15C38E8A3A7675B89F1;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_BDC6228346BBB15C38E8A3A7675B89F1;
    UTimelineComponent* Timeline_0;
    float Radial_Glow_Glow_E75D54CA47A7A0D8F3561191F9FA213D;
    float Radial_Glow_Blur_E75D54CA47A7A0D8F3561191F9FA213D;
    TEnumAsByte<ETimelineDirection::Type> Radial_Glow__Direction_E75D54CA47A7A0D8F3561191F9FA213D;
    UTimelineComponent* Radial Glow;
    float Glow_Eyes_Intensity_5E577C704BF9C844AE221783B4443759;
    TEnumAsByte<ETimelineDirection::Type> Glow_Eyes__Direction_5E577C704BF9C844AE221783B4443759;
    UTimelineComponent* Glow Eyes;
    bool Debug Checkpoint;
    bool Play Checkpoint;
    FCheckpointInformation Information;
    TEnumAsByte<StreamingChunks::Type> Chunk;
    TEnumAsByte<CheckPoints::Type> CheckPoint;
    bool Awakened;
    UMaterialInstanceDynamic* Material Statue;
    UMaterialInstanceDynamic* Material Base;
    int32 Cost;
    UBlueFire_Game_Instance_C* Game Instance;
    bool HasSanctuaryStone;

    void UserConstructionScript(FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, FCheckpointInformation K2Node_MakeStruct_CheckpointInformation, FString CallFunc_GetDisplayName_ReturnValue);
    void Glow Eyes__FinishedFunc();
    void Glow Eyes__UpdateFunc();
    void Radial Glow__FinishedFunc();
    void Radial Glow__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OnNotifyEnd_4DC63C954C5238AAF4E168B5A4E54FA1(FName NotifyName);
    void OnNotifyBegin_4DC63C954C5238AAF4E168B5A4E54FA1(FName NotifyName);
    void OnInterrupted_4DC63C954C5238AAF4E168B5A4E54FA1(FName NotifyName);
    void OnBlendOut_4DC63C954C5238AAF4E168B5A4E54FA1(FName NotifyName);
    void OnCompleted_4DC63C954C5238AAF4E168B5A4E54FA1(FName NotifyName);
    void OnNotifyEnd_C9CB77344B86088688E17D958362AE39(FName NotifyName);
    void OnNotifyBegin_C9CB77344B86088688E17D958362AE39(FName NotifyName);
    void OnInterrupted_C9CB77344B86088688E17D958362AE39(FName NotifyName);
    void OnBlendOut_C9CB77344B86088688E17D958362AE39(FName NotifyName);
    void OnCompleted_C9CB77344B86088688E17D958362AE39(FName NotifyName);
    void SetAwakened(bool Set Glow);
    void DialogStartCall();
    void ReceiveBeginPlay();
    void QuickEnd();
    void CustomEvent_1();
    void SetCurrentCheckpoint();
    void CustomEvent();
    void UpdateFire();
    void WarpDisable();
    void WarpEnable();
    void EndOverlapCall();
    void Set Glow();
    void RadialGlow();
    void Return();
    void Mana();
    void ExitCheckpoint();
    void CustomEvent_2();
    void CustomEvent_4();
    void Get Mana();
    void CustomEvent_0();
    void ReturnQuick();
    void CustomEvent_3();
    void BeginOverlapCall();
    void ExecuteUbergraph_CheckPoint(int32 EntryPoint, FName K2Node_CustomEvent_NotifyName_8, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FName K2Node_CustomEvent_NotifyName_7, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName_6, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName_5, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName Temp_name_Variable, uint8 Temp_byte_Variable, RemoveCall__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, int32 Temp_int_Variable_5, int32 Temp_int_Variable_6, int32 Temp_int_Variable_7, int32 Temp_int_Variable_8, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, int32 Temp_int_Variable_9, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Variable_10, int32 Temp_int_Variable_11, int32 Temp_int_Variable_12, int32 Temp_int_Variable_13, int32 Temp_int_Variable_14, int32 Temp_int_Variable_15, int32 Temp_int_Variable_16, int32 Temp_int_Variable_17, int32 Temp_int_Variable_18, int32 Temp_int_Variable_19, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, Removed__DelegateSignature K2Node_CreateDelegate_OutputDelegate_8, FName K2Node_CustomEvent_NotifyName_4, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_9, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_10, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_11, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_12, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_13, FName Temp_name_Variable_1, int32 Temp_int_Variable_20, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_14, int32 Temp_int_Variable_21, int32 Temp_int_Variable_22, int32 Temp_int_Variable_23, int32 Temp_int_Variable_24, int32 Temp_int_Variable_25, int32 Temp_int_Variable_26, int32 Temp_int_Variable_27, int32 Temp_int_Variable_28, int32 Temp_int_Variable_29, int32 Temp_int_Variable_30, int32 Temp_int_Variable_31, int32 Temp_int_Variable_32, int32 Temp_int_Variable_33, int32 Temp_int_Variable_34, int32 Temp_int_Variable_35, int32 Temp_int_Variable_36, int32 Temp_int_Variable_37, int32 Temp_int_Variable_38, int32 Temp_int_Variable_39, int32 Temp_int_Variable_40, int32 Temp_int_Variable_41, int32 Temp_int_Variable_42, int32 Temp_int_Variable_43, uint8 Temp_byte_Variable_1, int32 Temp_int_Variable_44, int32 Temp_int_Variable_45, int32 Temp_int_Variable_46, int32 Temp_int_Variable_47, int32 Temp_int_Variable_48, int32 Temp_int_Variable_49, int32 Temp_int_Variable_50, int32 Temp_int_Variable_51, int32 Temp_int_Variable_52, uint8 Temp_byte_Variable_2, int32 Temp_int_Variable_53, int32 Temp_int_Variable_54, int32 Temp_int_Variable_55, int32 Temp_int_Variable_56, int32 Temp_int_Variable_57, int32 Temp_int_Variable_58, int32 Temp_int_Variable_59, int32 Temp_int_Variable_60, int32 Temp_int_Variable_61, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool K2Node_CustomEvent_Set_Glow, FName K2Node_CustomEvent_NotifyName_9, UGameInstance* CallFunc_GetGameInstance_ReturnValue, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_PostEventAtLocation_ReturnValue, UPlayerController* CallFunc_GetPlayerController_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_15, const TArray<FText>& K2Node_MakeArray_Array_1, bool K2Node_SwitchInteger_CmpSuccess_1, bool K2Node_SwitchInteger_CmpSuccess_2, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_2, const TArray<FText>& K2Node_MakeArray_Array_3, const TArray<FText>& K2Node_MakeArray_Array_4, FSave_PlayerStats K2Node_MakeStruct_Save_PlayerStats, bool CallFunc_SetItem_Success, bool CallFunc_SetItem_SpecialPopUp, bool CallFunc_SetItem_Success_1, bool CallFunc_SetItem_SpecialPopUp_1, int32 Temp_int_Array_Index_Variable, uint8 CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_HasCurrency_True, int32 K2Node_Select_Default, int32 K2Node_Select_Default_1, int32 K2Node_Select_Default_2, const TArray<FText>& K2Node_MakeArray_Array_5, const TArray<FText>& K2Node_MakeArray_Array_6, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_7, const TArray<FText>& K2Node_MakeArray_Array_8, bool K2Node_SwitchInteger_CmpSuccess_3, const TArray<FText>& K2Node_MakeArray_Array_9, int32 K2Node_Select_Default_3, int32 K2Node_Select_Default_4, int32 CallFunc_Add_IntInt_ReturnValue, int32 K2Node_Select_Default_5, float CallFunc_Add_FloatFloat_ReturnValue, int32 K2Node_Select_Default_6, FSave_PlayerStats K2Node_MakeStruct_Save_PlayerStats_1, bool CallFunc_UseItem_Success, int32 CallFunc_UseItem_CurrentAmount, bool CallFunc_HasItem_Success, int32 CallFunc_HasItem_ItemAmount, FString CallFunc_Conv_IntToString_ReturnValue, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_10, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_11, const TArray<FText>& K2Node_MakeArray_Array_12, int32 CallFunc_PostEventAtLocation_ReturnValue_1, UNewItem_C* CallFunc_GetItemHUD_NewItemHud, ExitDialog__DelegateSignature K2Node_CreateDelegate_OutputDelegate_16, int32 CallFunc_PostEventAtLocation_ReturnValue_2, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess_4, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess_5, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_17, bool CallFunc_HasItem_Success_1, int32 CallFunc_HasItem_ItemAmount_1, int32 K2Node_Select_Default_7, TArray<FText>& K2Node_MakeArray_Array_13, FVector CallFunc_K2_GetActorLocation_ReturnValue, FText CallFunc_Array_Get_Item_1, const TArray<FText>& K2Node_MakeArray_Array_14, FText CallFunc_Array_Get_Item_2, const TArray<FText>& K2Node_MakeArray_Array_15, FText CallFunc_Array_Get_Item_3, const TArray<FText>& K2Node_Select_Default_8, const TArray<FText>& K2Node_MakeArray_Array_16, const TArray<FText>& K2Node_Select_Default_9, FRotator CallFunc_K2_GetComponentRotation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_Conv_RotatorToVector_ReturnValue, int32 Temp_int_Loop_Counter_Variable, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1);
}

#endif
