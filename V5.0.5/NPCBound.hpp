#ifndef UE4SS_SDK_NPCBound_HPP
#define UE4SS_SDK_NPCBound_HPP

class ANPCBound_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetComponent* Widget;
    UBillboardComponent* Billboard;
    UBoxComponent* Box;
    ANPC_Parent_C* NPC;
    UMainDialogWB_C* Dialog;
    APlayer_Character_BP_C* Player;
    FString ID;
    bool SaveToEvents;
    FText ActionUI;
    int32 Shop;
    bool Speakable;
    UItemName_C* PopUpWidget;
    FText PopUpText;
    bool PopUp;
    bool PopUpNotify;
    bool NoBox;
    bool NoBackground;
    bool NoSpeakPop;
    bool CutsceneTextStyle;
    bool InteractingWith;
    bool Overlap Begin;
    bool ShowIntroPop;
    UPickUp_Action_UI_C* PickupUI;
    UNPC_Intro_C* NPCIntro;

    void InpActEvt_PC_Interact_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Gamepad_Interact_Shield_K2Node_InputActionEvent_0(FKey Key);
    void PressButton();
    void EndDialogReturnPrompt();
    void RemoveHud();
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExternalOverlapEnd();
    void ExternalOverlapBegin();
    void DialogStartCall();
    void ActionBlock_Camera(float Pitch, float CamDistance, FVector POILocation);
    void Dialog_Start(bool HudOn);
    void Dialog_End(bool RestoreHUD, bool RestorePrompt, bool RestoreInput, bool Cutscene, bool KeepEnemiesFrozen);
    void Dialog_Line(const TArray<FText>& TextLines, FText NPCName, bool Center, UAkAudioEvent* AkEvent, bool UseAkSoundsArray, const TArray<UAkAudioEvent*>& AkEvents, bool FadeStyle);
    void CheckState();
    void AlreadyUsed();
    void Used();
    void ActionEvent_ReturnCamera();
    void Continue();
    void part2();
    void part3t();
    void dfdf();
    void bman();
    void SetNPC(UNPC_Parent_C* NPC);
    void Dialog_Question(const TArray<FText>& TextLines, FText NPCName, const TArray<FText>& Responses, int32 SelectedOptionIndex, bool Center, UAkAudioEvent* AkEvent, bool UseAkSoundsArray, const TArray<UAkAudioEvent*>& AkEvents, const TArray<FText>& CustomOptionArray, bool CustomOptionTexts, bool ShowCurrencyOnQuestion, uint8 ItemToShow, bool ShowItemNNotCurrency);
    void Dialog_Shop(const TArray<FText>& TextLines, FText NPCName, uint8 DialogType, UAkAudioEvent* AkEvent, bool UseAkSoundsArray, const TArray<UAkAudioEvent*>& AkEvents);
    void End();
    void CheckIfShouldBeActive();
    void BeginOverlapCall();
    void EndOverlapCall();
    void ReceiveBeginPlay();
    void NPCintropop(FText NameNPC, FText Subtitle);
    void Exit();
    void ForceReturnTrigger();
    void NPCintropop ForceClose();
    void Custom Construction();
    void Custom Construction Extra();
    void OnRemovePickupUI(bool bRemove);
    void ExecuteUbergraph_NPCBound(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, UPlayerController* CallFunc_GetPlayerController_ReturnValue, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, ExitDialog__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, float K2Node_CustomEvent_Pitch, float K2Node_CustomEvent_CamDistance, FVector K2Node_CustomEvent_POILocation, bool K2Node_CustomEvent_HudOn, float CallFunc_MakeLiteralFloat_ReturnValue, bool K2Node_CustomEvent_RestoreHUD, bool K2Node_CustomEvent_RestorePrompt, bool K2Node_CustomEvent_RestoreInput, bool K2Node_CustomEvent_Cutscene, bool K2Node_CustomEvent_KeepEnemiesFrozen, const TArray<FText>& K2Node_CustomEvent_TextLines_2, FText K2Node_CustomEvent_NPCName_2, bool K2Node_CustomEvent_Center_1, UAkAudioEvent* K2Node_CustomEvent_AkEvent_2, bool K2Node_CustomEvent_UseAkSoundsArray_2, const TArray<UAkAudioEvent*>& K2Node_CustomEvent_AkEvents_2, bool K2Node_CustomEvent_FadeStyle, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, const TArray<FText>& K2Node_MakeArray_Array, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue, FRotator CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FRotator CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, int32 Temp_int_Array_Index_Variable, const TArray<FText>& K2Node_MakeArray_Array_1, const TArray<FText>& K2Node_MakeArray_Array_2, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_SwitchInteger_CmpSuccess, const TArray<FText>& K2Node_MakeArray_Array_3, const TArray<FText>& K2Node_MakeArray_Array_4, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const TArray<FText>& K2Node_MakeArray_Array_5, const TArray<FText>& K2Node_MakeArray_Array_6, bool K2Node_SwitchInteger_CmpSuccess_1, UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, UNPC_Parent_C* K2Node_CustomEvent_NPC, bool CallFunc_IsRobiValid_ReturnValue, bool Temp_bool_IsClosed_Variable, const TArray<FText>& K2Node_MakeArray_Array_7, UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, const TArray<FText>& K2Node_MakeArray_Array_8, const TArray<FText>& K2Node_CustomEvent_TextLines_1, FText K2Node_CustomEvent_NPCName_1, const TArray<FText>& K2Node_CustomEvent_Responses, int32 K2Node_CustomEvent_SelectedOptionIndex, bool K2Node_CustomEvent_Center, UAkAudioEvent* K2Node_CustomEvent_AkEvent_1, bool K2Node_CustomEvent_UseAkSoundsArray_1, const TArray<UAkAudioEvent*>& K2Node_CustomEvent_AkEvents_1, const TArray<FText>& K2Node_CustomEvent_CustomOptionArray, bool K2Node_CustomEvent_CustomOptionTexts, bool K2Node_CustomEvent_ShowCurrencyOnQuestion, uint8 K2Node_CustomEvent_ItemToShow, bool K2Node_CustomEvent_ShowItemNNotCurrency, const TArray<FText>& K2Node_CustomEvent_TextLines, FText K2Node_CustomEvent_NPCName, uint8 K2Node_CustomEvent_DialogType, UAkAudioEvent* K2Node_CustomEvent_AkEvent, bool K2Node_CustomEvent_UseAkSoundsArray, const TArray<UAkAudioEvent*>& K2Node_CustomEvent_AkEvents, const TArray<FText>& K2Node_MakeArray_Array_9, const TArray<FText>& K2Node_MakeArray_Array_10, UPlayerController* CallFunc_GetPlayerController_ReturnValue_3, bool CallFunc_SetActionCharacter_Success, bool CallFunc_AddRemoveAction_Success, bool CallFunc_CheckIfActionOK_Success, ActionActorNext__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_IsRobiValid_ReturnValue_1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, TArray<AActor*>& CallFunc_GetAllActorsWithTag_OutActors, AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_11, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_12, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_13, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_14, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_15, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_16, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_17, APawn* CallFunc_GetPlayerPawn_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_2, bool CallFunc_IsInViewport_ReturnValue, UPlayerController* CallFunc_GetPlayerController_ReturnValue_4, UMainDialogWB_C* CallFunc_Create_ReturnValue, FRotator CallFunc_GetControlRotation_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, FRotator CallFunc_MakeRotator_ReturnValue_1, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_3, const TArray<FText>& K2Node_MakeArray_Array_18, const TArray<FText>& K2Node_MakeArray_Array_19, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_3, UItemName_C* K2Node_DynamicCast_AsItem_Name, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsRobiValid_ReturnValue_4, bool CallFunc_IsRobiValid_ReturnValue_5, FText K2Node_CustomEvent_NameNPC, FText K2Node_CustomEvent_SubTitle, bool CallFunc_IsRobiValid_ReturnValue_6, APawn* CallFunc_GetPlayerPawn_ReturnValue_2, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP_1, bool K2Node_DynamicCast_bSuccess_2, OnRemovePickupUI__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, APawn* CallFunc_GetPlayerPawn_ReturnValue_3, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP_2, bool K2Node_DynamicCast_bSuccess_3, TArray<AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, TArray<AActor*>& CallFunc_GetOverlappingActors_OverlappingActors_1, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_1, const TArray<AActor*>& Temp_object_Variable, TArray<AActor*>& CallFunc_GetOverlappingActors_OverlappingActors_2, bool CallFunc_Array_IsValidIndex_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, FVector CallFunc_Subtract_VectorVector_ReturnValue, UPickUp_Action_UI_C* CallFunc_Create_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue_7, bool CallFunc_IsInViewport_ReturnValue_1, FKey K2Node_InputActionEvent_Key, FKey K2Node_InputActionEvent_Key_1, bool Temp_bool_Has_Been_Initd_Variable_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_5, const TArray<uint8>& K2Node_MakeArray_Array_20, FHitResult CallFunc_CapsuleTraceSingleForObjects_OutHit, bool CallFunc_CapsuleTraceSingleForObjects_ReturnValue, UNPC_Intro_C* CallFunc_Create_ReturnValue_2, UPlayerController* CallFunc_GetPlayerController_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_CustomEvent_bRemove, bool Temp_bool_IsClosed_Variable_1, bool CallFunc_IsRobiValid_ReturnValue_8, bool CallFunc_IsInViewport_ReturnValue_2, bool CallFunc_IsRobiValid_ReturnValue_9, bool CallFunc_IsRobiValid_ReturnValue_10, bool CallFunc_IsRobiValid_ReturnValue_11, bool CallFunc_IsRobiValid_ReturnValue_12, bool CallFunc_IsInViewport_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1);
}

#endif
