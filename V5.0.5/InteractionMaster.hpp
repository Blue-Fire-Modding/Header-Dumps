#ifndef UE4SS_SDK_InteractionMaster_HPP
#define UE4SS_SDK_InteractionMaster_HPP

class AInteractionMaster_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBoxComponent* Box;
    USceneComponent* Scene;
    FText Text;
    FString ID;
    bool HideAction;
    bool CustomID;
    UPickUp_Action_UI_C* PickUpActionUI;
    bool OverrideBoxOverlap;
    APlayer_Character_BP_C* Player;
    ANPCBound_C* NPCBound;
    bool CanShowHUD;
    bool Overlap Begin;
    bool AutoEnableInput;
    FText ReturnTriggerText;
    FText Text PickUp;

    void CheckID(FString ID, bool& bContains, bool CallFunc_Array_Contains_ReturnValue);
    void UserConstructionScript(bool CallFunc_IsPackagedForDistribution_ReturnValue, FString CallFunc_GetDisplayName_ReturnValue);
    void InpActEvt_PC_Interact_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Gamepad_Interact_Shield_K2Node_InputActionEvent_0(FKey Key);
    void ReceiveBeginPlay();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void PressButton();
    void ReturnTrigger(FText newText);
    void CheckState();
    void AlreadyUsed();
    void Used();
    void RemoveHud();
    void BeginOverlapEv();
    void OverlapEndEV();
    void UpdateActionText(FText Text);
    void ForceReturnTrigger();
    void OverlapEndClean();
    void CreateBound();
    void Empty();
    void CallForceOverlapEnd();
    void RetryBeginPlay();
    void Custom End Overlap();
    void Custom Begin Overlap();
    void OnRemovePickupUI(bool bRemove);
    void CustomRemovePickupUI(bool bRemove);
    void ExecuteUbergraph_InteractionMaster(int32 EntryPoint, bool K2Node_CustomEvent_bRemove, FKey K2Node_InputActionEvent_Key, FKey K2Node_InputActionEvent_Key_1, UPlayerController* CallFunc_GetPlayerController_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP_1, bool K2Node_DynamicCast_bSuccess_1, UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, FText K2Node_CustomEvent_NewText, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, FText K2Node_CustomEvent_Text, FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue, bool CallFunc_IsInViewport_ReturnValue, const FTransform CallFunc_GetTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, ANPCBound_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_1, APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_2, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Array_RemoveItem_ReturnValue, bool Temp_bool_Variable, OnRemovePickupUI__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UPlayerController* CallFunc_GetPlayerController_ReturnValue_3, bool Temp_bool_Has_Been_Initd_Variable, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_3, TArray<UPlayer_Character_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, UPlayer_Character_BP_C* CallFunc_Array_Get_Item, bool CallFunc_IsRobiValid_ReturnValue_4, bool CallFunc_IsRobiValid_ReturnValue_5, bool Temp_bool_IsClosed_Variable, bool CallFunc_EqualEqual_TextText_ReturnValue, FText K2Node_Select_Default, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsInViewport_ReturnValue_1, bool K2Node_CustomEvent_bRemove_1, UPickUp_Action_UI_C* CallFunc_Create_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_6, bool CallFunc_Array_RemoveItem_ReturnValue_1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool CallFunc_IsInViewport_ReturnValue_2);
}

#endif
