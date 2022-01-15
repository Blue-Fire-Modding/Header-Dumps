#ifndef UE4SS_SDK_Chest_Master_HPP
#define UE4SS_SDK_Chest_Master_HPP

class AChest_Master_C : AInteractionMaster_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBoxComponent* CameraCollision_Open;
    UBoxComponent* CameraCollision_Close;
    UStaticMeshComponent* Plane;
    UParticleSystemComponent* P_Shine_Chest;
    UStaticMeshComponent* Chest_Inside;
    UStaticMeshComponent* Chest_Top_Col;
    UStaticMeshComponent* Chest_Bottom_Col;
    USkeletalMeshComponent* Chest_Skel;
    float Shine_Glow_Opacity_D36E09D84427519E551F0D82811B26DC;
    TEnumAsByte<ETimelineDirection::Type> Shine_Glow__Direction_D36E09D84427519E551F0D82811B26DC;
    UTimelineComponent* Shine Glow;
    TEnumAsByte<InventoryItemType::Type> Type;
    TEnumAsByte<Items::Type> Item;
    TEnumAsByte<Spirits::Type> Amulet;
    TEnumAsByte<Weapons::Type> Weapon;
    TEnumAsByte<Tunics::Type> Tunic;
    int32 Amount;
    bool KeyItem;
    bool Used_Chest;
    bool StartHidden;
    bool Open;
    bool AddSword;
    UMaterialInstanceDynamic* MatChest;
    TEnumAsByte<Abilities::Type> Ability;
    bool Print;
    bool RequiresKey;
    TEnumAsByte<Items::Type> Key;
    TArray<FText> KeyText;
    bool RemoveItemOnUse;
    TArray<FText> NegativeText;
    bool PlaySpecialSoundOnItem;
    UAkAudioEvent* SoundOpen;
    UAkAudioEvent* SoundClose;
    ANPCBound_C* Bound;
    UMaterialInterface* DisappearNewMat;
    UMaterialInterface* DisappearOldMat;

    void Shine Glow__FinishedFunc();
    void Shine Glow__UpdateFunc();
    void Resume();
    void Show(bool Show VFX);
    void Hide();
    void BeginOverlapEv();
    void AlreadyUsed();
    void CustomEvent();
    void CustomEvent_14();
    void CustomEvent_22();
    void PressButton();
    void PlayItemSound();
    void OpenChestVFX();
    void ReceiveBeginPlay();
    void UpdateChestSkelRender(float Duration);
    void CustomEvent_1();
    void CustomEvent_2();
    void Set New Material(UMaterialInterface* Material);
    void NegativeFinish();
    void Change Material(bool New Material);
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void CustomEvent_0();
    void Set Open Chest(bool Open);
    void Set Used Chest(bool Used_Chest);
    void Collect Guardian Key();
    void CheckQuest();
    void ExecuteUbergraph_Chest_Master(int32 EntryPoint, UAkAudioEvent* Temp_object_Variable, UAkAudioEvent* Temp_object_Variable_1, UAkAudioEvent* Temp_object_Variable_2, UAkAudioEvent* Temp_object_Variable_3, UAkAudioEvent* Temp_object_Variable_4, UAkAudioEvent* Temp_object_Variable_5, UAkAudioEvent* Temp_object_Variable_6, UAkAudioEvent* Temp_object_Variable_7, UAkAudioEvent* Temp_object_Variable_8, UAkAudioEvent* Temp_object_Variable_9, UAkAudioEvent* Temp_object_Variable_10, UAkAudioEvent* Temp_object_Variable_11, UAkAudioEvent* Temp_object_Variable_12, UAkAudioEvent* Temp_object_Variable_13, UAkAudioEvent* Temp_object_Variable_14, UAkAudioEvent* Temp_object_Variable_15, UAkAudioEvent* Temp_object_Variable_16, UAkAudioEvent* Temp_object_Variable_17, UAkAudioEvent* Temp_object_Variable_18, UAkAudioEvent* Temp_object_Variable_19, UAkAudioEvent* Temp_object_Variable_20, UAkAudioEvent* Temp_object_Variable_21, UAkAudioEvent* Temp_object_Variable_22, UAkAudioEvent* Temp_object_Variable_23, UAkAudioEvent* Temp_object_Variable_24, UAkAudioEvent* Temp_object_Variable_25, UAkAudioEvent* Temp_object_Variable_26, UAkAudioEvent* Temp_object_Variable_27, UAkAudioEvent* Temp_object_Variable_28, UAkAudioEvent* Temp_object_Variable_29, UAkAudioEvent* Temp_object_Variable_30, UAkAudioEvent* Temp_object_Variable_31, UAkAudioEvent* Temp_object_Variable_32, UAkAudioEvent* Temp_object_Variable_33, UAkAudioEvent* Temp_object_Variable_34, UAkAudioEvent* Temp_object_Variable_35, UAkAudioEvent* Temp_object_Variable_36, UAkAudioEvent* Temp_object_Variable_37, UAkAudioEvent* Temp_object_Variable_38, UAkAudioEvent* Temp_object_Variable_39, UAkAudioEvent* Temp_object_Variable_40, UAkAudioEvent* Temp_object_Variable_41, UAkAudioEvent* Temp_object_Variable_42, UAkAudioEvent* Temp_object_Variable_43, UAkAudioEvent* Temp_object_Variable_44, UAkAudioEvent* Temp_object_Variable_45, UAkAudioEvent* Temp_object_Variable_46, UAkAudioEvent* Temp_object_Variable_47, UAkAudioEvent* Temp_object_Variable_48, UAkAudioEvent* Temp_object_Variable_49, UAkAudioEvent* Temp_object_Variable_50, UAkAudioEvent* Temp_object_Variable_51, UAkAudioEvent* Temp_object_Variable_52, UAkAudioEvent* Temp_object_Variable_53, UAkAudioEvent* Temp_object_Variable_54, UAkAudioEvent* Temp_object_Variable_55, UAkAudioEvent* Temp_object_Variable_56, UAkAudioEvent* Temp_object_Variable_57, UAkAudioEvent* Temp_object_Variable_58, UAkAudioEvent* Temp_object_Variable_59, UAkAudioEvent* Temp_object_Variable_60, UAkAudioEvent* Temp_object_Variable_61, UAkAudioEvent* Temp_object_Variable_62, UAkAudioEvent* Temp_object_Variable_63, UAkAudioEvent* Temp_object_Variable_64, UAkAudioEvent* Temp_object_Variable_65, UAkAudioEvent* Temp_object_Variable_66, UAkAudioEvent* Temp_object_Variable_67, UAkAudioEvent* Temp_object_Variable_68, UAkAudioEvent* Temp_object_Variable_69, UAkAudioEvent* Temp_object_Variable_70, UAkAudioEvent* Temp_object_Variable_71, UAkAudioEvent* Temp_object_Variable_72, UAkAudioEvent* Temp_object_Variable_73, UAkAudioEvent* Temp_object_Variable_74, bool Temp_bool_Variable, UAkAudioEvent* Temp_object_Variable_75, bool Temp_bool_Variable_1, Removed__DelegateSignature K2Node_CreateDelegate_OutputDelegate, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, uint8 Temp_byte_Variable_2, uint8 Temp_byte_Variable_3, uint8 Temp_byte_Variable_4, uint8 Temp_byte_Variable_5, uint8 Temp_byte_Variable_6, uint8 Temp_byte_Variable_7, uint8 Temp_byte_Variable_8, uint8 Temp_byte_Variable_9, uint8 Temp_byte_Variable_10, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, uint8 Temp_byte_Variable_11, uint8 Temp_byte_Variable_12, uint8 Temp_byte_Variable_13, uint8 Temp_byte_Variable_14, uint8 Temp_byte_Variable_15, uint8 Temp_byte_Variable_16, uint8 Temp_byte_Variable_17, uint8 Temp_byte_Variable_18, uint8 Temp_byte_Variable_19, uint8 Temp_byte_Variable_20, uint8 Temp_byte_Variable_21, FTransform CallFunc_MakeTransform_ReturnValue, Removed__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool Temp_bool_Variable_2, UTutorialText_C* CallFunc_FinishSpawningActor_ReturnValue, UAkAudioEvent* Temp_object_Variable_76, bool Temp_bool_Variable_3, uint8 Temp_byte_Variable_22, uint8 Temp_byte_Variable_23, uint8 K2Node_Select_Default, bool CallFunc_IsRobiValid_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_CustomEvent_Show_VFX, Removed__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FVector CallFunc_K2_GetActorLocation_ReturnValue, UAkAudioEvent* Temp_object_Variable_77, UAkAudioEvent* Temp_object_Variable_78, bool K2Node_SwitchEnum_CmpSuccess, TArray<FName>& K2Node_MakeArray_Array, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_GetAsset_Success, int32 CallFunc_GetAsset_Index, UAkAudioEvent* Temp_object_Variable_79, UNewItem_C* CallFunc_GetItemHUD_NewItemHud, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, TArray<FName>& K2Node_MakeArray_Array_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue_1, UAkAudioEvent* Temp_object_Variable_80, bool CallFunc_GetItem_Success, bool CallFunc_GetItem_SpecialPopUp, TArray<FName>& K2Node_MakeArray_Array_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, int32 CallFunc_PostEventAtLocation_ReturnValue_2, bool CallFunc_GetAsset_Success_1, int32 CallFunc_GetAsset_Index_1, UNewItem_C* CallFunc_GetItemHUD_NewItemHud_1, bool CallFunc_GetAsset_Success_2, int32 CallFunc_GetAsset_Index_2, UNewItem_C* CallFunc_GetItemHUD_NewItemHud_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_5, FVector CallFunc_K2_GetActorLocation_ReturnValue_6, int32 CallFunc_PostEventAtLocation_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue_4, FVector CallFunc_K2_GetActorLocation_ReturnValue_7, FVector CallFunc_K2_GetActorLocation_ReturnValue_8, int32 CallFunc_PostEventAtLocation_ReturnValue_5, FVector CallFunc_K2_GetActorLocation_ReturnValue_9, int32 CallFunc_PostEventAtLocation_ReturnValue_6, bool K2Node_SwitchEnum_CmpSuccess_1, APawn* CallFunc_GetPlayerPawn_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, UNewItem_C* CallFunc_GetItemHUD_NewItemHud_3, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FSave_PlayerStats K2Node_MakeStruct_Save_PlayerStats, bool CallFunc_IsRobiValid_ReturnValue_1, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_2, Removed__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, float K2Node_CustomEvent_Duration, TArray<FName>& K2Node_MakeArray_Array_3, FVector CallFunc_K2_GetActorLocation_ReturnValue_10, int32 CallFunc_PostEventAtLocation_ReturnValue_7, FVector CallFunc_K2_GetActorLocation_ReturnValue_11, int32 CallFunc_PostEventAtLocation_ReturnValue_8, UAkAudioEvent* Temp_object_Variable_81, uint8 K2Node_Select_Default_1, bool CallFunc_GetItem_Success_1, bool CallFunc_GetItem_SpecialPopUp_1, UNewItem_C* CallFunc_GetItemHUD_NewItemHud_4, const FTransform CallFunc_GetTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, ANPCBound_C* CallFunc_FinishSpawningActor_ReturnValue_1, UMaterialInterface* K2Node_Event_Material, const TArray<FText>& K2Node_MakeArray_Array_4, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_5, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_6, const TArray<FText>& K2Node_MakeArray_Array_7, UAkAudioEvent* Temp_object_Variable_82, TArray<FName>& K2Node_MakeArray_Array_8, bool K2Node_Event_New_Material, UMaterialInterface* K2Node_Select_Default_2, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, bool CallFunc_UseItem_Success, int32 CallFunc_UseItem_CurrentAmount, uint8 K2Node_Select_Default_3, bool CallFunc_HasItem_Success, int32 CallFunc_HasItem_ItemAmount, FVector CallFunc_K2_GetActorLocation_ReturnValue_12, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_3, bool CallFunc_IsRobiValid_ReturnValue_4, int32 CallFunc_PostEventAtLocation_ReturnValue_9, int32 CallFunc_PostEventAtLocation_ReturnValue_10, int32 CallFunc_PostEventAtLocation_ReturnValue_11, UAkAudioEvent* K2Node_Select_Default_4, UAkAudioEvent* Temp_object_Variable_83, bool CallFunc_IsRobiValid_ReturnValue_5, int32 CallFunc_PostEventAtLocation_ReturnValue_12, uint8 Temp_byte_Variable_24, FString CallFunc_Concat_StrStr_ReturnValue, UAkAudioEvent* K2Node_Select_Default_5, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, bool CallFunc_IsValid_ReturnValue, UAkAudioEvent* K2Node_Select_Default_6, FString CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_13, TArray<FName>& K2Node_MakeArray_Array_9, TArray<FName>& K2Node_MakeArray_Array_10, bool K2Node_CustomEvent_Open, bool K2Node_CustomEvent_Used_Chest, FVector CallFunc_K2_GetActorLocation_ReturnValue_13, TArray<UHolyGodStone_GuardianSoul_C*>& CallFunc_GetAllActorsOfClass_OutActors, UHolyGodStone_GuardianSoul_C* CallFunc_Array_Get_Item, Removed__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_CheckID_bContains, bool CallFunc_BooleanAND_ReturnValue, Removed__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_CheckID_bContains_1, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_14, bool CallFunc_BooleanAND_ReturnValue_1);
}

#endif
