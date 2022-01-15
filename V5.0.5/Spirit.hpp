#ifndef UE4SS_SDK_Spirit_HPP
#define UE4SS_SDK_Spirit_HPP

class ASpirit_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USkeletalMeshComponent* SkeletalMesh;
    UArrowComponent* Arrow;
    UAkComponent* Play_Spirit_Loop_Hide;
    UPointLightComponent* PointLight;
    UParticleSystemComponent* P_Spirits2;
    UBoxComponent* Box;
    UParticleSystemComponent* P_PickUpEffect;
    UMaterialBillboardComponent* MB_Glow;
    USceneComponent* Scene;
    TEnumAsByte<Spirits::Type> Spirit;
    FString ID;
    UPickUp_Action_UI_C* ActionWidget;
    APlayer_Character_BP_C* Player;
    FSpirit_CNewItemEnd NewItemEnd;
    void NewItemEnd();
    bool SpiritActivated;
    bool Quest;
    TEnumAsByte<Quests::Type> QuestType;

    void UserConstructionScript(FString CallFunc_GetDisplayName_ReturnValue);
    void InpActEvt_PC_Interact_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Gamepad_Interact_Shield_K2Node_InputActionEvent_0(FKey Key);
    void ReceiveBeginPlay();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void CheckState();
    void Used();
    void Pickup();
    void Remove();
    void Build();
    void CheckIfShouldBeActive();
    void CustomEvent_22();
    void Visible();
    void Invisible();
    void CheckDistance();
    void RotToPlayer();
    void OnRemovePickupUI(bool bRemove);
    void ExecuteUbergraph_Spirit(int32 EntryPoint, bool CallFunc_IsRobiValid_ReturnValue, OnRemovePickupUI__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsInViewport_ReturnValue, UPlayerController* CallFunc_GetPlayerController_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, bool Temp_bool_IsClosed_Variable, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, Removed__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsRobiValid_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue_2, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, bool Temp_bool_Has_Been_Initd_Variable, APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_AddRemoveAction_Success, bool CallFunc_AddRemoveAction_Success_1, bool CallFunc_CheckIfActionOK_Success, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_1, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_1, bool CallFunc_AddRemoveAction_Success_2, FKey K2Node_InputActionEvent_Key, bool Temp_bool_IsClosed_Variable_1, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue, FSpiritsInfo CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, FKey K2Node_InputActionEvent_Key_1, bool Temp_bool_Has_Been_Initd_Variable_1, bool CallFunc_GetAsset_Success, int32 CallFunc_GetAsset_Index, UNewItem_C* CallFunc_GetItemHUD_NewItemHud, ActionActorNext__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, FRotator CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, float CallFunc_FClamp_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_1, FRotator CallFunc_MakeRotator_ReturnValue, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult, bool CallFunc_IsInViewport_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue_3, bool CallFunc_IsRobiValid_ReturnValue_4, int32 CallFunc_PostAkEvent_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, bool K2Node_CustomEvent_bRemove, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, UPickUp_Action_UI_C* CallFunc_Create_ReturnValue);
    void NewItemEnd__DelegateSignature();
}

#endif
