#ifndef UE4SS_SDK_Pickup_HPP
#define UE4SS_SDK_Pickup_HPP

class APickup_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAkComponent* Play_Ore_Currency_Collect;
    class UMaterialBillboardComponent* MaterialBillboard;
    class USceneComponent* Scene;
    class UBoxComponent* Collider;
    class UBoxComponent* Box;
    class UParticleSystemComponent* P_ItemDestroy;
    class UStaticMeshComponent* SM_Item_Outside;
    class UStaticMeshComponent* SM_Item_Inside;
    float Timeline_0_Light_Intensity_798326A24B02A5C1193E8694BD09CF8C;
    float Timeline_0_Opacity_798326A24B02A5C1193E8694BD09CF8C;
    float Timeline_0_Scale_798326A24B02A5C1193E8694BD09CF8C;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_798326A24B02A5C1193E8694BD09CF8C;
    class UTimelineComponent* Timeline_0;
    TEnumAsByte<PickUpList::Type> Type;
    TEnumAsByte<Items::Type> Item;
    int32 Souls/LifeAmount;
    FString ID;
    bool Persistent;
    class UPickUp_Action_UI_C* ActionWidget;
    class APlayer_Character_BP_C* Player;
    FPickup_CNewItemEnd NewItemEnd;
    void NewItemEnd();
    class UMaterialInstanceDynamic* MatInside;
    FLinearColor Color;
    class UMaterialInstanceDynamic* MatOutside;
    FGodStone_Structure GodStoneInfo;
    FString GodStoneName;
    bool ID by DisplayName;
    bool Bind to Destroy;
    FLinearColor Item Color;
    FLinearColor FireEssence Color;
    class UAkAudioEvent* PickupItemSound;
    float Velocity Z;
    float Velocity Direction;
    class UProjectileMovementComponent* Projectile;
    bool FirstSoundOre;
    int32 PlayingID;
    bool CurrencyCollected;
    class UMessage_PopUp_C* PopupUI;
    class UMaterialInstanceDynamic* MaterialDecalGlow;
    FPickup_COnShowItem OnShowItem;
    void OnShowItem();

    void CheckID(FString ID, bool& bContains);
    void Build();
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void InpActEvt_PC_Interact_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Gamepad_Interact_Shield_K2Node_InputActionEvent_0(FKey Key);
    void ReceiveBeginPlay();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
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
    void OnStartPlayMode(bool Start);
    void ExecuteUbergraph_Pickup(int32 EntryPoint);
    void OnShowItem__DelegateSignature();
    void NewItemEnd__DelegateSignature();
};

#endif
