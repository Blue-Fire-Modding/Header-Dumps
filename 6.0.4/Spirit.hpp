#ifndef UE4SS_SDK_Spirit_HPP
#define UE4SS_SDK_Spirit_HPP

class ASpirit_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* SkeletalMesh;
    class UArrowComponent* Arrow;
    class UAkComponent* Play_Spirit_Loop_Hide;
    class UPointLightComponent* PointLight;
    class UParticleSystemComponent* P_Spirits2;
    class UBoxComponent* Box;
    class UParticleSystemComponent* P_PickUpEffect;
    class UMaterialBillboardComponent* MB_Glow;
    class USceneComponent* Scene;
    TEnumAsByte<Spirits::Type> Amulet;
    FString ID;
    class UPickUp_Action_UI_C* ActionWidget;
    class APlayer_Character_BP_C* Player;
    FSpirit_CNewItemEnd NewItemEnd;
    void NewItemEnd();
    bool SpiritActivated;
    bool Quest;
    TEnumAsByte<Quests::Type> QuestType;

    void UserConstructionScript();
    void InpActEvt_PC_Interact_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Gamepad_Interact_Shield_K2Node_InputActionEvent_0(FKey Key);
    void ReceiveBeginPlay();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
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
    void ExecuteUbergraph_Spirit(int32 EntryPoint);
    void NewItemEnd__DelegateSignature();
};

#endif
