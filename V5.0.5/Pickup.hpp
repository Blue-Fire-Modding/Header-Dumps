#ifndef UE4SS_SDK_Pickup_HPP
#define UE4SS_SDK_Pickup_HPP

class APickup_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAkComponent* Play_Ore_Currency_Collect;
    UMaterialBillboardComponent* MaterialBillboard;
    USceneComponent* Scene;
    UBoxComponent* Collider;
    UBoxComponent* Box;
    UParticleSystemComponent* P_ItemDestroy;
    UStaticMeshComponent* SM_Item_Outside;
    UStaticMeshComponent* SM_Item_Inside;
    float Timeline_0_Light_Intensity_798326A24B02A5C1193E8694BD09CF8C;
    float Timeline_0_Opacity_798326A24B02A5C1193E8694BD09CF8C;
    float Timeline_0_Scale_798326A24B02A5C1193E8694BD09CF8C;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_798326A24B02A5C1193E8694BD09CF8C;
    UTimelineComponent* Timeline_0;
    TEnumAsByte<PickUpList::Type> Type;
    TEnumAsByte<Items::Type> Item;
    int32 Souls/LifeAmount;
    FString ID;
    bool Persistent;
    UPickUp_Action_UI_C* ActionWidget;
    APlayer_Character_BP_C* Player;
    FPickup_CNewItemEnd NewItemEnd;
    void NewItemEnd();
    UMaterialInstanceDynamic* MatInside;
    FLinearColor Color;
    UMaterialInstanceDynamic* MatOutside;
    FGodStone_Structure GodStoneInfo;
    FString GodStoneName;
    bool ID by DisplayName;
    bool Bind to Destroy;
    FLinearColor Item Color;
    FLinearColor FireEssence Color;
    UAkAudioEvent* PickupItemSound;
    float Velocity Z;
    float Velocity Direction;
    UProjectileMovementComponent* Projectile;
    bool FirstSoundOre;
    int32 PlayingID;
    bool CurrencyCollected;
    UMessage_PopUp_C* PopupUI;
    UMaterialInstanceDynamic* MaterialDecalGlow;
    FPickup_COnShowItem OnShowItem;
    void OnShowItem();

    void CheckID(FString ID, bool& bContains, bool CallFunc_Array_Contains_ReturnValue);
    void Build(UAkAudioEvent* Temp_object_Variable, UAkAudioEvent* Temp_object_Variable_1, UAkAudioEvent* Temp_object_Variable_2, UAkAudioEvent* Temp_object_Variable_3, UAkAudioEvent* Temp_object_Variable_4, UAkAudioEvent* Temp_object_Variable_5, UAkAudioEvent* Temp_object_Variable_6, UAkAudioEvent* Temp_object_Variable_7, UAkAudioEvent* Temp_object_Variable_8, UAkAudioEvent* Temp_object_Variable_9, UAkAudioEvent* Temp_object_Variable_10, UAkAudioEvent* Temp_object_Variable_11, UAkAudioEvent* Temp_object_Variable_12, UAkAudioEvent* Temp_object_Variable_13, UAkAudioEvent* Temp_object_Variable_14, UAkAudioEvent* Temp_object_Variable_15, UAkAudioEvent* Temp_object_Variable_16, UAkAudioEvent* Temp_object_Variable_17, UAkAudioEvent* Temp_object_Variable_18, UAkAudioEvent* Temp_object_Variable_19, UAkAudioEvent* Temp_object_Variable_20, UAkAudioEvent* Temp_object_Variable_21, UAkAudioEvent* Temp_object_Variable_22, UAkAudioEvent* Temp_object_Variable_23, UAkAudioEvent* Temp_object_Variable_24, UAkAudioEvent* Temp_object_Variable_25, UAkAudioEvent* Temp_object_Variable_26, UAkAudioEvent* Temp_object_Variable_27, UAkAudioEvent* Temp_object_Variable_28, UAkAudioEvent* Temp_object_Variable_29, UAkAudioEvent* Temp_object_Variable_30, UAkAudioEvent* Temp_object_Variable_31, UAkAudioEvent* Temp_object_Variable_32, UAkAudioEvent* Temp_object_Variable_33, UAkAudioEvent* Temp_object_Variable_34, UAkAudioEvent* Temp_object_Variable_35, UAkAudioEvent* Temp_object_Variable_36, UAkAudioEvent* Temp_object_Variable_37, UAkAudioEvent* Temp_object_Variable_38, UAkAudioEvent* Temp_object_Variable_39, UAkAudioEvent* Temp_object_Variable_40, UAkAudioEvent* Temp_object_Variable_41, UAkAudioEvent* Temp_object_Variable_42, UAkAudioEvent* Temp_object_Variable_43, UAkAudioEvent* Temp_object_Variable_44, UAkAudioEvent* Temp_object_Variable_45, UAkAudioEvent* Temp_object_Variable_46, UAkAudioEvent* Temp_object_Variable_47, UAkAudioEvent* Temp_object_Variable_48, UAkAudioEvent* Temp_object_Variable_49, UAkAudioEvent* Temp_object_Variable_50, UAkAudioEvent* Temp_object_Variable_51, UAkAudioEvent* Temp_object_Variable_52, UAkAudioEvent* Temp_object_Variable_53, UAkAudioEvent* Temp_object_Variable_54, UAkAudioEvent* Temp_object_Variable_55, UAkAudioEvent* Temp_object_Variable_56, UAkAudioEvent* Temp_object_Variable_57, UAkAudioEvent* Temp_object_Variable_58, UAkAudioEvent* Temp_object_Variable_59, UAkAudioEvent* Temp_object_Variable_60, UAkAudioEvent* Temp_object_Variable_61, UAkAudioEvent* Temp_object_Variable_62, UAkAudioEvent* Temp_object_Variable_63, UAkAudioEvent* Temp_object_Variable_64, UAkAudioEvent* Temp_object_Variable_65, UAkAudioEvent* Temp_object_Variable_66, UAkAudioEvent* Temp_object_Variable_67, UAkAudioEvent* Temp_object_Variable_68, UAkAudioEvent* Temp_object_Variable_69, UAkAudioEvent* Temp_object_Variable_70, UAkAudioEvent* Temp_object_Variable_71, UAkAudioEvent* Temp_object_Variable_72, UAkAudioEvent* Temp_object_Variable_73, UAkAudioEvent* Temp_object_Variable_74, UAkAudioEvent* Temp_object_Variable_75, UAkAudioEvent* Temp_object_Variable_76, UAkAudioEvent* Temp_object_Variable_77, UAkAudioEvent* Temp_object_Variable_78, uint8 Temp_byte_Variable, FLinearColor Temp_struct_Variable, FLinearColor Temp_struct_Variable_1, FLinearColor Temp_struct_Variable_2, FLinearColor Temp_struct_Variable_3, FLinearColor Temp_struct_Variable_4, FLinearColor Temp_struct_Variable_5, bool Temp_bool_Variable, uint8 Temp_byte_Variable_1, FLinearColor Temp_struct_Variable_6, FLinearColor Temp_struct_Variable_7, FLinearColor Temp_struct_Variable_8, bool CallFunc_NotEqual_ByteByte_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UAkAudioEvent* Temp_object_Variable_79, UAkAudioEvent* Temp_object_Variable_80, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UAkAudioEvent* Temp_object_Variable_81, FMaterialSpriteElement K2Node_MakeStruct_MaterialSpriteElement, const TArray<FMaterialSpriteElement>& K2Node_MakeArray_Array, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FItem CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, uint8 Temp_byte_Variable_2, bool CallFunc_IsRobiValid_ReturnValue, UAkAudioEvent* K2Node_Select_Default, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, FLinearColor K2Node_Select_Default_1, bool CallFunc_SetStaticMesh_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor K2Node_Select_Default_2, FLinearColor K2Node_Select_Default_3, FColor CallFunc_Conv_LinearColorToColor_ReturnValue, FParticleSysParam K2Node_MakeStruct_ParticleSysParam, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, TArray<FParticleSysParam>& K2Node_MakeArray_Array_1, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2);
    void UserConstructionScript(bool Temp_bool_Variable, bool CallFunc_IsPackagedForDistribution_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, FString CallFunc_GetDisplayName_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FString CallFunc_Conv_IntToString_ReturnValue, FString K2Node_Select_Default);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void InpActEvt_PC_Interact_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Gamepad_Interact_Shield_K2Node_InputActionEvent_0(FKey Key);
    void ReceiveBeginPlay();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void Launch();
    void CheckState();
    void AlreadyUsed();
    void Used();
    void InstaDestroy();
    void Pickup();
    void PickUpSouls();
    void PickUpKeyItem();
    void PickUpItem();
    void Remove();
    void SuccessItemAddInventory();
    void CheckIfShouldBeActive();
    void FakePickup();
    void PlayItemSound();
    void CollectGodStone();
    void AddLife();
    void AddStats();
    void ReturnPrompt();
    void CheckCondition();
    void Pickup Shadow Fragment();
    void CheckQuest();
    void ShowItem();
    void OnRemovePickupUI(bool bRemove);
    void ExecuteUbergraph_Pickup(int32 EntryPoint, UAkAudioEvent* Temp_object_Variable, bool CallFunc_IsRobiValid_ReturnValue, bool CallFunc_IsInViewport_ReturnValue, UAkAudioEvent* Temp_object_Variable_1, UAkAudioEvent* Temp_object_Variable_2, UAkAudioEvent* Temp_object_Variable_3, UAkAudioEvent* Temp_object_Variable_4, UAkAudioEvent* Temp_object_Variable_5, UAkAudioEvent* Temp_object_Variable_6, UAkAudioEvent* Temp_object_Variable_7, UAkAudioEvent* Temp_object_Variable_8, UAkAudioEvent* Temp_object_Variable_9, UAkAudioEvent* Temp_object_Variable_10, UAkAudioEvent* Temp_object_Variable_11, UAkAudioEvent* Temp_object_Variable_12, UAkAudioEvent* Temp_object_Variable_13, UAkAudioEvent* Temp_object_Variable_14, UAkAudioEvent* Temp_object_Variable_15, UAkAudioEvent* Temp_object_Variable_16, UAkAudioEvent* Temp_object_Variable_17, UAkAudioEvent* Temp_object_Variable_18, UAkAudioEvent* Temp_object_Variable_19, UAkAudioEvent* Temp_object_Variable_20, UAkAudioEvent* Temp_object_Variable_21, UAkAudioEvent* Temp_object_Variable_22, UAkAudioEvent* Temp_object_Variable_23, UAkAudioEvent* Temp_object_Variable_24, UAkAudioEvent* Temp_object_Variable_25, UAkAudioEvent* Temp_object_Variable_26, UAkAudioEvent* Temp_object_Variable_27, UAkAudioEvent* Temp_object_Variable_28, UAkAudioEvent* Temp_object_Variable_29, UAkAudioEvent* Temp_object_Variable_30, UAkAudioEvent* Temp_object_Variable_31, UAkAudioEvent* Temp_object_Variable_32, UAkAudioEvent* Temp_object_Variable_33, UAkAudioEvent* Temp_object_Variable_34, UAkAudioEvent* Temp_object_Variable_35, UAkAudioEvent* Temp_object_Variable_36, UAkAudioEvent* Temp_object_Variable_37, UAkAudioEvent* Temp_object_Variable_38, UAkAudioEvent* Temp_object_Variable_39, UAkAudioEvent* Temp_object_Variable_40, UAkAudioEvent* Temp_object_Variable_41, UAkAudioEvent* Temp_object_Variable_42, UAkAudioEvent* Temp_object_Variable_43, UAkAudioEvent* Temp_object_Variable_44, UAkAudioEvent* Temp_object_Variable_45, UAkAudioEvent* Temp_object_Variable_46, UAkAudioEvent* Temp_object_Variable_47, UAkAudioEvent* Temp_object_Variable_48, UAkAudioEvent* Temp_object_Variable_49, UAkAudioEvent* Temp_object_Variable_50, UAkAudioEvent* Temp_object_Variable_51, UAkAudioEvent* Temp_object_Variable_52, UAkAudioEvent* Temp_object_Variable_53, UAkAudioEvent* Temp_object_Variable_54, UAkAudioEvent* Temp_object_Variable_55, UAkAudioEvent* Temp_object_Variable_56, UAkAudioEvent* Temp_object_Variable_57, UAkAudioEvent* Temp_object_Variable_58, UAkAudioEvent* Temp_object_Variable_59, UAkAudioEvent* Temp_object_Variable_60, UAkAudioEvent* Temp_object_Variable_61, UAkAudioEvent* Temp_object_Variable_62, UAkAudioEvent* Temp_object_Variable_63, UAkAudioEvent* Temp_object_Variable_64, UAkAudioEvent* Temp_object_Variable_65, UAkAudioEvent* Temp_object_Variable_66, UAkAudioEvent* Temp_object_Variable_67, UAkAudioEvent* Temp_object_Variable_68, UAkAudioEvent* Temp_object_Variable_69, UAkAudioEvent* Temp_object_Variable_70, UAkAudioEvent* Temp_object_Variable_71, UAkAudioEvent* Temp_object_Variable_72, UAkAudioEvent* Temp_object_Variable_73, bool Temp_bool_Variable, FVector CallFunc_Conv_FloatToVector_ReturnValue, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, UMessage_PopUp_C* CallFunc_Create_ReturnValue, FKey K2Node_InputActionEvent_Key_1, FKey K2Node_InputActionEvent_Key, bool Temp_bool_Variable_3, UAkAudioEvent* Temp_object_Variable_74, const FTransform Temp_struct_Variable, UProjectileMovementComponent* CallFunc_AddComponent_ReturnValue, bool Temp_bool_Variable_4, UAkAudioEvent* Temp_object_Variable_75, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_1, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, OnShowItem__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FTimespan CallFunc_FromSeconds_ReturnValue, int32 CallFunc_BreakTimespan_Days, int32 CallFunc_BreakTimespan_Hours, int32 CallFunc_BreakTimespan_Minutes, int32 CallFunc_BreakTimespan_Seconds, int32 CallFunc_BreakTimespan_Milliseconds, bool CallFunc_Greater_IntInt_ReturnValue, OnRemovePickupUI__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FString CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue, FString K2Node_Select_Default, FString CallFunc_Conv_IntToString_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue_1, FString K2Node_Select_Default_1, FString CallFunc_Conv_IntToString_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue_2, FString K2Node_Select_Default_2, UPlayerController* CallFunc_GetPlayerController_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_3, FString CallFunc_Concat_StrStr_ReturnValue_4, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, FString CallFunc_Concat_StrStr_ReturnValue_5, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, FString CallFunc_Concat_StrStr_ReturnValue_6, UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_GetCurrency_Success, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, ActionActorNext__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, APawn* CallFunc_GetPlayerPawn_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, UAkAudioEvent* Temp_object_Variable_76, bool CallFunc_IsRobiValid_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue_2, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue, UAkAudioEvent* Temp_object_Variable_77, FItem CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsInViewport_ReturnValue_1, bool Temp_bool_IsClosed_Variable, Die__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, APawn* CallFunc_GetPlayerPawn_ReturnValue_2, UNewItem_C* CallFunc_GetItemHUD_NewItemHud, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_GetItem_Success, bool CallFunc_GetItem_SpecialPopUp, bool CallFunc_AddRemoveAction_Success, bool CallFunc_AddRemoveAction_Success_1, bool CallFunc_CheckIfActionOK_Success, UAkAudioEvent* Temp_object_Variable_78, bool CallFunc_AddRemoveAction_Success_2, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue_1, FItem CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, bool CallFunc_HasItem_Success, int32 CallFunc_HasItem_ItemAmount, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_3, APawn* CallFunc_GetPlayerPawn_ReturnValue_3, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP_1, bool K2Node_DynamicCast_bSuccess_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_1, UAkAudioEvent* Temp_object_Variable_79, FGodStone_Structure K2Node_MakeStruct_GodStone_Structure, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable_1, UPickUp_Action_UI_C* CallFunc_Create_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, FVector CallFunc_K2_GetActorLocation_ReturnValue_5, int32 CallFunc_PostEventAtLocation_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue_4, const FText Temp_text_Variable, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, UAkAudioEvent* Temp_object_Variable_80, bool CallFunc_IsRobiValid_ReturnValue_4, UAkAudioEvent* Temp_object_Variable_81, UAkAudioEvent* Temp_object_Variable_82, int32 CallFunc_PostEventAtLocation_ReturnValue_5, UAkAudioEvent* Temp_object_Variable_83, bool K2Node_SwitchEnum_CmpSuccess_1, UNewItem_C* CallFunc_GetItemHUD_NewItemHud_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetItem_Success_1, bool CallFunc_GetItem_SpecialPopUp_1, UAkAudioEvent* K2Node_Select_Default_3, int32 CallFunc_PostEventAtLocation_ReturnValue_6, FVector CallFunc_RandomUnitVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, UNewItem_C* CallFunc_GetItemHUD_NewItemHud_2, bool CallFunc_GetItem_Success_2, bool CallFunc_GetItem_SpecialPopUp_2, bool CallFunc_IsValid_ReturnValue_1, UAkAudioEvent* K2Node_Select_Default_4, int32 CallFunc_PostEventAtLocation_ReturnValue_7, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, uint8 Temp_byte_Variable, UAkAudioEvent* K2Node_Select_Default_5, bool CallFunc_IsRobiValid_ReturnValue_5, bool CallFunc_IsRobiValid_ReturnValue_6, int32 CallFunc_PostAssociatedAkEvent_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_8, int32 CallFunc_PostEventAtLocation_ReturnValue_9, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool Temp_bool_Has_Been_Initd_Variable_1, bool CallFunc_IsRobiValid_ReturnValue_7, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_CheckID_bContains, bool CallFunc_CheckID_bContains_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_CheckID_bContains_2, bool CallFunc_CheckID_bContains_3, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_CheckID_bContains_4, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_CheckID_bContains_5, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_CheckID_bContains_6, bool CallFunc_CheckID_bContains_7, bool K2Node_CustomEvent_bRemove);
    void OnShowItem__DelegateSignature();
    void NewItemEnd__DelegateSignature();
}

#endif
