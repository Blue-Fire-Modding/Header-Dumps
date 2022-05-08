#ifndef UE4SS_SDK_NPCBound_HPP
#define UE4SS_SDK_NPCBound_HPP

class ANPCBound_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetComponent* Widget;
    class UBillboardComponent* Billboard;
    class UBoxComponent* Box;
    class ANPC_Parent_C* NPC;
    class UMainDialogWB_C* Dialog;
    class APlayer_Character_BP_C* Player;
    FString ID;
    bool SaveToEvents;
    FText ActionUI;
    int32 Shop;
    bool Speakable;
    class UItemName_C* PopUpWidget;
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
    class UPickUp_Action_UI_C* PickupUI;
    class UNPC_Intro_C* NPCIntro;

    void InpActEvt_PC_Interact_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Gamepad_Interact_Shield_K2Node_InputActionEvent_0(FKey Key);
    void PressButton();
    void EndDialogReturnPrompt();
    void RemoveHud();
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExternalOverlapEnd();
    void ExternalOverlapBegin();
    void DialogStartCall();
    void ActionBlock_Camera(float Pitch, float CamDistance, FVector POILocation);
    void Dialog_Start(bool HudOn);
    void Dialog_End(bool RestoreHUD, bool RestorePrompt, bool RestoreInput, bool Cutscene, bool KeepEnemiesFrozen);
    void Dialog_Line(const TArray<FText>& TextLines, FText NPCName, bool Center, class UAkAudioEvent* AkEvent, bool UseAkSoundsArray, const TArray<class UAkAudioEvent*>& AkEvents, bool FadeStyle);
    void CheckState();
    void AlreadyUsed();
    void Used();
    void ActionEvent_ReturnCamera();
    void Continue();
    void part2();
    void part3t();
    void dfdf();
    void bman();
    void SetNPC(class ANPC_Parent_C* NPC);
    void Dialog_Question(const TArray<FText>& TextLines, FText NPCName, const TArray<FText>& Responses, int32 SelectedOptionIndex, bool Center, class UAkAudioEvent* AkEvent, bool UseAkSoundsArray, const TArray<class UAkAudioEvent*>& AkEvents, const TArray<FText>& CustomOptionArray, bool CustomOptionTexts, bool ShowCurrencyOnQuestion, TEnumAsByte<Items::Type> ItemToShow, bool ShowItemNNotCurrency);
    void Dialog_Shop(const TArray<FText>& TextLines, FText NPCName, TEnumAsByte<DialogType::Type> DialogType, class UAkAudioEvent* AkEvent, bool UseAkSoundsArray, const TArray<class UAkAudioEvent*>& AkEvents);
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
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_NPCBound(int32 EntryPoint);
};

#endif
