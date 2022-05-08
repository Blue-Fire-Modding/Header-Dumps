#ifndef UE4SS_SDK_InteractionMaster_HPP
#define UE4SS_SDK_InteractionMaster_HPP

class AInteractionMaster_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Box;
    class USceneComponent* Scene;
    FText Text;
    FString ID;
    bool HideAction;
    bool CustomID;
    class UPickUp_Action_UI_C* PickUpActionUI;
    bool OverrideBoxOverlap;
    class APlayer_Character_BP_C* Player;
    class ANPCBound_C* NPCBound;
    bool CanShowHUD;
    bool Overlap Begin;
    bool AutoEnableInput;
    FText ReturnTriggerText;
    FText Text PickUp;
    bool ForceRemoveAreaIntro;

    void CheckID(FString ID, bool& bContains);
    void UserConstructionScript();
    void InpActEvt_PC_Interact_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Gamepad_Interact_Shield_K2Node_InputActionEvent_0(FKey Key);
    void ReceiveBeginPlay();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
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
    void ExecuteUbergraph_InteractionMaster(int32 EntryPoint);
};

#endif
